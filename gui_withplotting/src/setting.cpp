#include "setting.h"
#include <QSettings>
#include <QDir>
#include <QCloseEvent>
#include <QStringList>
#include <QDebug>
#include <QFileDialog>

Setting::Setting(QWidget *parent)
	:QDialog(parent)
{
	setupUi(this);
	additem_dlg = new AddPopupItem(this);
	
	connect(pbAdd,SIGNAL(clicked()),this,SLOT(showAddItemDlg()));
	connect(pbRemove,SIGNAL(clicked()),this,SLOT(removeItem()));
	connect(pbSave,SIGNAL(clicked()),this,SLOT(saveSettings()));
	connect(additem_dlg,SIGNAL(itemsToBeInserted(QString, QString)),this,SLOT(addItem(QString, QString)));
	connect(tlGroHelp,SIGNAL(clicked()), this, SLOT(getGroHelpLink()));
	connect(tlRootDir,SIGNAL(clicked()), this, SLOT(getRootDir()));
	readSettings();
	
	}

Setting::~Setting()
{
	delete additem_dlg;
}
	
void Setting::showAddItemDlg()
{
	
	additem_dlg->leName->clear();
	additem_dlg->leCommand->clear();
	additem_dlg->exec();
	
}

void Setting::addItem(QString n, QString c)
{
	QStringList l;
	l<< n << c;
	new QTreeWidgetItem (trwPopup, l , 0);
}

void Setting::removeItem()
{
	delete trwPopup->currentItem();
}

void Setting::getGroHelpLink()
{
	QString s("");
	s= QFileDialog::getOpenFileName(this, tr("Gromacs Online Help"),
            QDir::homePath(),
            tr("html files (*.htm *.html)"));
	if(!s.isEmpty())
		leGroManual->setText(s);
}

void Setting::getRootDir()
{
	QString s("");
	s= QFileDialog::getExistingDirectory(this, tr("Open Directory"),
			QDir::homePath(),
            QFileDialog::ShowDirsOnly
            | QFileDialog::DontResolveSymlinks); ;
	if(!s.isEmpty())
		leRootDir->setText(s);
}

void Setting::readSettings()
{
	QString console("");
	
	QSettings settings("GromacsGUI", "GromacsGUI");

	settings.beginGroup("Application");
	leGroManual->setText(settings.value("ManualPath", "/usr/share/gromacs/html/online.html").toString() );
	leRootDir->setText((settings.value("RootDir", QDir::homePath()).toString() ) );
	console=settings.value("Console", "xterm" ).toString();
	settings.endGroup();

	if(console=="xterm")
		cbConsole->setCurrentIndex(0);
	else if(console=="konsole")
		cbConsole->setCurrentIndex(1);
	/*else if(console=="gnome-terminal")
		cbConsole->setCurrentIndex(2);*/
	
	

	settings.beginGroup("PopupMenu");
	if (settings.allKeys().isEmpty())
		return;
	foreach(QString name, settings.allKeys())
	{
		QStringList l;
		l<< name << settings.value(name).toString() ;
		new QTreeWidgetItem (trwPopup, l , 0);
	}	
	settings.endGroup();
}

void Setting::saveSettings()
{
    QSettings settings("GromacsGUI", "GromacsGUI");
    
    settings.beginGroup("Application");
    settings.setValue("ManualPath", leGroManual->text());
    settings.setValue("RootDir", leRootDir->text());
    settings.setValue("Console", cbConsole->currentText());		 
    settings.endGroup();
     
   
    settings.beginGroup("PopupMenu");
    settings.remove("");
    for(int i=0; i< (trwPopup->topLevelItemCount()) ;++i )
    {
    	settings.setValue(trwPopup->topLevelItem(i)->text(0), trwPopup->topLevelItem(i)->text(1));
    	
    }
    settings.endGroup();
    emit settingsChanged();
    this->close();
}

