#include "dirbrowser.h"
#include <QSettings>

#include <QDebug>
#include <QInputDialog>
#include <QMessageBox>
#include <QProcess>
#include <QStringListModel>
//#include <QFileDialog>


DirBrowser::DirBrowser(QWidget *parent)
    : QWidget(parent)
{
	setupUi(this);
	//m_file= QFile("");
	
	
	QSettings settings("GromacsGUI", "GromacsGUI");
	settings.beginGroup("Application");
	m_root_dir=new QDir( settings.value("RootDir", QDir::homePath()).toString() );
	m_external_terminal=settings.value("Console", "xterm" ).toString();
    settings.endGroup();
   
    timer = new QTimer(this);
    m_model_1= new QDirModel;
    m_model_2= new QDirModel;
    
    icons= new IconProvider;
	Q_ASSERT(icons);
	m_model_1->setIconProvider(icons);
    m_model_2->setIconProvider(icons);
    
    m_fileinfo = new QFileInfo;
    m_working_directory = new QDir(m_root_dir->path());
    m_fbrowser_name="konqueror";
    
    m_model_1->setLazyChildCount (true);
	//m_model_1->setSupportedDragActions(Qt::CopyAction);
	//m_model_1->setReadOnly(false);
	//trvuMain->setDragEnabled(true);
	
	m_model_2->setSorting(QDir::DirsFirst | QDir::IgnoreCase);
	m_model_2->setReadOnly(false);
	
	
	
    trvuMain->setModel(m_model_1);
	trvuMain->setColumnHidden(3,true);
	trvuMain->setColumnHidden(2,true);
	trvuMain->setColumnHidden(1,true);
	trvuMain->setRootIndex(m_model_1->index(m_root_dir->path()));
	trvuMain->setRootIsDecorated(true);
	trvuMain->setColumnWidth(0,200);
	trvuMain->sortByColumn(0,Qt::AscendingOrder);
	//trvuMain->header()->hide();
		
	livuMain->setModel(m_model_2);
	livuMain->setRootIndex(m_model_2->index(m_root_dir->path()));
	
	connect(trvuMain,SIGNAL(clicked(const QModelIndex&)),this,SLOT(setDirectory(const QModelIndex&)));
	connect(livuMain,SIGNAL(customContextMenuRequested( const QPoint)),this,SLOT(showContextMenu(const QPoint)));
	connect(livuMain, SIGNAL(doubleClicked(const QModelIndex&)), this, SLOT(listItemDoubleClicked(const QModelIndex&)));
	connect(tlReloadDirs,SIGNAL(clicked()),this,SLOT(reloadDirs()));
	connect(tlRootDir,SIGNAL(clicked()),this,SLOT(goToRootDir()));
	connect(tlNewFolder_Here,SIGNAL(clicked()),this,SLOT(createNewFolder()));
	connect(tlFileBrowser_Here,SIGNAL(clicked()),this,SLOT(openFileBrowserHere()));
	connect(tlTerminal_Here,SIGNAL(clicked()),this,SLOT(openTerminalHere()));
	connect(tlUp,SIGNAL(clicked()),this,SLOT(upListView()));
	
	connect(timer, SIGNAL(timeout()), this, SLOT(autoUpdate()));
	//connect(timer, SIGNAL(timeout()), this, SLOT(reloadDirs()));
	leLocation->setText(m_working_directory->path());
	
	m_context_menu = new QMenu("",this);
	m_context_user_menu = new QMenu("User Commands");
	m_action_text="";
		
	createUserMenuActions();
		
	createListOfFiles();
	timer->start(1000);
}
	
DirBrowser::~DirBrowser()
{
	delete m_model_1;
	delete m_model_2;
	delete m_fileinfo;
	delete m_working_directory;
	delete m_root_dir;
}


//==================================================================
void DirBrowser::setDirectory(const QModelIndex& index)
{
	*m_fileinfo=m_model_1->fileInfo(index);
	if (m_model_1->isDir(index))
		*m_working_directory=m_fileinfo->filePath();
	else
		*m_working_directory=m_fileinfo->dir();
	
	//qDebug()<<m_working_directory->path();
	m_model_2->refresh(m_model_2->index(m_working_directory->path()));
	livuMain->setRootIndex(m_model_2->index(m_working_directory->path()));
	leLocation->setText(m_working_directory->path());
}

void DirBrowser::setRootDirectory(QDir *d)
{
	m_root_dir=d;	
}

void DirBrowser::reloadDirs()
{
	m_model_1->refresh(m_model_1->index(m_root_dir->path()));
	trvuMain->repaint();
}

void DirBrowser::goToRootDir()
{
	m_model_1->refresh(m_model_1->index(m_root_dir->path()));
	trvuMain->setRootIndex(m_model_1->index(m_root_dir->path()));
}

void DirBrowser::reload()
{
	m_model_2->refresh(m_model_2->index(m_working_directory->path()));
	livuMain->repaint();
	reloadDirs();	
}

//==================================================================	
void DirBrowser::createUserMenuActions()
{
	//qDebug()<<"signal recieved...";
	if(! m_hash_popup_commands.isEmpty())
		m_hash_popup_commands.clear();
	if(! m_commandname_list.isEmpty())
		m_commandname_list.clear();
	
	QSettings settings("GromacsGUI","GromacsGUI");
	settings.beginGroup("PopupMenu");
	if (settings.allKeys().isEmpty())
		return;
	foreach(QString name, settings.allKeys())
	{
		m_hash_popup_commands[name]=settings.value(name).toString();
		m_commandname_list<<name;
		
	}
	settings.endGroup();
	
	//qDebug()<<m_commandname_list;
}

QModelIndex DirBrowser::indexAt( const QPoint & point ) const
{
	
}

void DirBrowser::showContextMenu(const QPoint p)
{
	QModelIndex index=livuMain->indexAt(p);
	if (index.isValid()) 
	{
		if (! m_model_2->isDir(index)) 
			showContextMenu_File();
		else if (m_model_2->isDir(index))
			showContextMenu_Dir();
	}
	else
		showContextMenu_General();
}

void DirBrowser::showContextMenu_General()
{
	m_context_menu->clear();
	m_context_user_menu->clear();
	
	m_context_menu->addAction(QIcon(QPixmap("icons/16x16/paste.png")),"Paste File");
	
	//m_context_menu->setEnabled(!m_file.fileName().isEmpty());
	
	QAction* a=new QAction(this);
	a=qobject_cast<QAction *>(m_context_menu->exec(QCursor::pos()));
	if (a )
	{
		m_action_text = a->text();
		evaluateContextMenuCommand();
	}
	
	delete a;
}

void DirBrowser::showContextMenu_File()
{
	//qDebug()<<"trying to show context menu for files";
	m_context_menu->clear();
	m_context_user_menu->clear();
	
	
	for(int i=0; i< m_commandname_list.size(); ++i)
	{
		m_context_user_menu->addAction(QIcon(QPixmap("icons/16x16/menuitem.png")),m_commandname_list[i]);//,this,SLOT(evaluateContextMenuCommand()));
		
	}
	m_context_user_menu->setIcon(QIcon(QPixmap("icons/16x16/newmenu.png")));
	m_context_menu->addMenu(m_context_user_menu);
	m_context_menu->addSeparator();
	
	m_context_menu->addAction(QIcon(QPixmap("icons/16x16/editor.png")),"Editor...");
	m_context_menu->addAction(QIcon(QPixmap("icons/16x16/copy.png")),"Copy");
	m_context_menu->addAction(QIcon(QPixmap("icons/16x16/delete.png")),"Delete File");
	
	
	QAction* a=new QAction(this);
	a=qobject_cast<QAction *>(m_context_menu->exec(QCursor::pos()));
	if (a )
	{
		m_action_text = a->text();
		evaluateContextMenuCommand();
	}
	
	delete a;
}

void DirBrowser::showContextMenu_Dir()
{
	m_context_menu->clear();
	m_context_user_menu->clear();
	m_context_menu->addAction(QIcon(QPixmap("icons/16x16/delete.png")),"Delete Directory");
	
	QAction* a=new QAction(this);
	a=qobject_cast<QAction *>(m_context_menu->exec(QCursor::pos()));
	if (a )
	{
		m_action_text = a->text();
		evaluateContextMenuCommand();
	}
		
	delete a;
	//qDebug()<<"trying to show context menu for dirs";
}

void DirBrowser::evaluateContextMenuCommand()
{
	if (m_action_text == "Delete File")
	{
		int ret=QMessageBox::warning(this, tr("Remove File"),tr("Delete this file?\nWARNING: This file will be deleted permanently."),
				QMessageBox::Ok | QMessageBox::Cancel, QMessageBox::Cancel);
		if(ret==QMessageBox::Ok)
		{
			QDir d(m_model_2->fileInfo(livuMain->currentIndex()).dir());
			if(! d.remove(m_model_2->fileName(livuMain->currentIndex())) )
				QMessageBox::critical(this, tr("Remove file"),tr("Unable to delete this file.\nCheck permissions."),QMessageBox::Ok );
		}
	}
	
	if (m_action_text == "Editor...")
	{
		emit openFilePopup(m_model_2->fileInfo(livuMain->currentIndex()).filePath());
	}
	
	if (m_action_text == "Copy")
	{
		m_file.setFileName(m_model_2->fileInfo(livuMain->currentIndex()).filePath());
		m_fileName= m_model_2->fileInfo(livuMain->currentIndex()).fileName();
	}
	
	if (m_action_text == "Paste File")
	{
		QString s;
		s=m_working_directory->path()+"/"+m_fileName;
		
		if(m_file.fileName().isEmpty())
		{
			QMessageBox::information(this,"Paste File","Copy a file first!");
			return;
		}
		if ( QFileInfo(s).exists())
		{
			QMessageBox::critical(this,"Error","Can not paste the file.\nSame file name exists in this directory.");
			return;
		}
		m_file.copy(s);
	}
	
		
	else if (m_action_text== "Delete Directory")
	{
		int ret=QMessageBox::warning(this, tr("Remove Directory"),tr("Delete this directory?\nWARNING: This directory will be deleted permanently."),
				QMessageBox::Ok | QMessageBox::Cancel, QMessageBox::Cancel);
		if(ret==QMessageBox::Ok)
		{
			QDir d(m_model_2->fileInfo(livuMain->currentIndex()).filePath());
			QProcess p;
			if(! p.startDetached( QString("rm -r \"%1\"").arg(d.path()) ) )
				QMessageBox::critical(this, tr("Remove Directory"),tr("Unable to delete this directory.\nCheck permissions."),QMessageBox::Ok );
		}
	}
	
	else if(m_commandname_list.contains(m_action_text))
	{
		runCustomCommand(m_hash_popup_commands.value(m_action_text));
	}
	
}

void DirBrowser::runCustomCommand(QString str)
{
	str.replace(QString("%s") , m_model_2->fileName(livuMain->currentIndex()));
	QStringList list=str.split(" ");
	QString comm= list.takeFirst();
	QProcess p;
	if(! p.startDetached(comm,list,m_working_directory->path()))//, QStringList()<<"", m_working_directory->path()) ;//)
			QMessageBox::critical(this,"Popup Menu",
					QString("Can not execute  <b>'%1'</b>.\nCheck your command.").arg(str),
					QMessageBox::Ok );
}

//==================================================================
void DirBrowser::createListOfFiles()
{
	foreach(QFileInfo f_info, m_working_directory->entryInfoList((QDir::AllEntries | QDir::NoSymLinks) , QDir::Name) )
	{
		m_list_of_files_old<<f_info.fileName() ;
	}
}

void DirBrowser::autoUpdate()
{
	QStringList list_of_files_new;
	
	m_working_directory->refresh();
	foreach(QFileInfo f_info, m_working_directory->entryInfoList((QDir::AllEntries | QDir::NoSymLinks) , QDir::Name) )
			{
				list_of_files_new<<f_info.fileName() ;
				//qDebug()<<f_info.fileName() ;
			}
	
	if (! (list_of_files_new == m_list_of_files_old) )
		{
			//qDebug()<<"contents has changed";
			livuMain->repaint();
			m_list_of_files_old.clear();
			m_list_of_files_old = list_of_files_new;
			
			emit contentsChanged();
		}
	list_of_files_new.clear();
}

void DirBrowser::listItemDoubleClicked(const QModelIndex& index)
{
	if (! m_model_2->isDir(index))
	{
		emit openFilePopup(m_model_2->fileInfo(livuMain->currentIndex()).filePath());
		return;
	}
	livuMain->setRootIndex(index);
	*m_working_directory=m_model_2->filePath(index);
	leLocation->setText(m_working_directory->path());
	//trvuMain->collapseAll();
	//trvuMain->expand(m_model_1->index(m_working_directory->path()));
}

void DirBrowser::upListView()
{
	if(m_working_directory->cdUp())
	{
		livuMain->setRootIndex(m_model_2->index(m_working_directory->path()));
		leLocation->setText(m_working_directory->path());
		//qDebug()<<m_working_directory->path();
	}
}

//==================================================================
void DirBrowser::createNewFolder()
{
	bool ok;
	QString foldername = QInputDialog::getText(this,tr("New Folder"),
            tr("Enter new directory name:"), QLineEdit::Normal,tr("new directory"), &ok);
	
	if (ok && !foldername.isEmpty())
	{
	         if (! m_working_directory->mkdir(foldername))
	        	 QMessageBox::critical(this, tr("Gromacs GUI"),
	        	                    tr("<b>Can not create new directory here.</b>\n"
	        	                       "\nMaybe you have limited permission on current directory or directory name is duplicated."),
	        	                    QMessageBox::Ok);
	}
}

void DirBrowser::openFileBrowserHere()
{
	QProcess *p;
	QString command("");
	QString workdir=m_working_directory->path();

	if (m_fbrowser_name=="konqueror")
	{
		command="konqueror \"" + workdir+"\"" ;
		p->startDetached(command);
	}

	else if(m_fbrowser_name=="nautilus")
	{
		command="nautilus \""  + workdir+"\"";
		p->startDetached(command);
	}
}

void DirBrowser::openTerminalHere()
{
	QProcess *p;
	QString command("");
	QString workdir=m_working_directory->path();
	
	if (m_external_terminal=="konsole")
	{
	   command="konsole --noclose --workdir \"" + workdir + "\"";
	   p->startDetached(command);
	}
	
	else if(m_external_terminal=="xterm")
	{
	   command="xterm -e sh -c \"cd '"   + workdir+  "';sh \" &";
	   p->startDetached(command);
	}
	        
}

//==================================================================
