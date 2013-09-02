#include <QtGui>
#include <QtCore>
#include <Q3Signal>
#include "mainwindow.h"
#include "aboutgrogui.h"
#include "mdpconfig.h"
#include "executor.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
	setupUi(this);
	
	QString s;
	s=QDir::homePath() + "/.config/GromacsGUI/log.txt";
	m_log=new Logger(s);
	m_log->setWriteLog(true);
	m_log->logIt("\n mainwindow.cpp | MainWindow() | constructing main window");
	
	dirbrowser_1 = new DirBrowser(tabwMain->widget(0));
	feditor      = new Editor(tabwMain->widget(1));
	com_1        = new Commands(tabwMain->widget(2), m_log);
	console_main = new QConsole(tabwMain->widget(4));
	plot_1       = new PlotWidget(tabwMain->widget(3));
		
	layout_0=new QGridLayout(tabwMain->widget(0));
	layout_1=new QGridLayout(tabwMain->widget(1));
	layout_2=new QGridLayout(tabwMain->widget(2));
	layout_4=new QGridLayout(tabwMain->widget(4));
	layout_3=new QGridLayout(tabwMain->widget(3));
	
	layout_0->addWidget(dirbrowser_1, 0, 0);
	layout_1->addWidget(feditor, 0, 0);
	layout_2->addWidget(com_1, 0, 0);
	layout_4->addWidget(console_main, 0, 0);
	layout_3->addWidget(plot_1, 0, 0);
	
	tabwMain->widget(0)->setLayout(layout_0);
	tabwMain->widget(1)->setLayout(layout_1);
	tabwMain->widget(2)->setLayout(layout_2);
	tabwMain->widget(4)->setLayout(layout_4);
	tabwMain->widget(3)->setLayout(layout_3);
	
	
	setting_dlg  = new Setting(this);
	guihelp = new GroGuiHelp();
	
	workdir = new QDir();
	workdir = dirbrowser_1->m_working_directory ;
	
	connect(dirbrowser_1, SIGNAL(contentsChanged()), this , SLOT(updateView()));
	//connect(actionFile_Editor,SIGNAL(triggered()),this,SLOT(editorShow()));
	connect(actionContents,SIGNAL(triggered()),this,SLOT(groGUIHelpShow())); 
	connect(actionSetting,SIGNAL(triggered()),this,SLOT(settingShow())); 
	connect(actionAbout,SIGNAL(triggered()),this,SLOT(groGUIAboutShow())); 
	connect(actionMDP_Writer,SIGNAL(triggered()),this,SLOT(mdpConfigShow()));
	connect(actionExit,SIGNAL(triggered()),this,SLOT(close()));
	connect(setting_dlg,SIGNAL(settingsChanged()) , dirbrowser_1, SLOT(createUserMenuActions()));
	connect(com_1->pbRun,SIGNAL(clicked()),this,SLOT(sendCommand()) );
	connect(plot_1,SIGNAL(plotPickerValues(double&,double& ,double&)),this,SLOT(showPlotValues(double&,double&,double&)));
	connect(feditor,SIGNAL(requestWorkDirName()), this, SLOT(slotfor_requestWorkDirName()));
	connect(this,   SIGNAL(workDirName(QString)),feditor,SLOT(slotfor_workDirName(QString)));
	connect(dirbrowser_1,SIGNAL(openFilePopup(QString)),this,SLOT(slotfor_openFilePopup(QString)));
	
	
	
	
	//if (!  Q3Signal::disconnect(txtManual, SIGNAL( anchorClicked ( const QString & , const QString & ))) )
	//	qDebug()<<"signal could not be disconnected!";*/
	
	QSettings settings("GromacsGUI", "GromacsGUI");
	settings.beginGroup("Application");
	txtManual->setSource( settings.value("ManualPath","").toString()  ) ;
	m_external_terminal=settings.value("Console", "xterm" ).toString();
	settings.endGroup();
	
	m_statusbar_label = new QLabel();
	m_statusbar_label->setText("Ready");
	statusBar()->addPermanentWidget(m_statusbar_label,0) ;
	statusBar()->showMessage("Welcome to GromacsGUI");
	updateView();
}

MainWindow::~MainWindow()
{
	delete setting_dlg;
	delete feditor;
	delete guihelp;
	
}

//==================================================================
void MainWindow::updateView()
{
	QString s("");
	s +="cd ";
	s += dirbrowser_1->m_working_directory->path().replace(QString(" "), QString("\\ "));

	console_main->sendCommand(s);
	workdir=dirbrowser_1->m_working_directory ;
	com_1-> updateCombos(*(dirbrowser_1->m_working_directory));
	plot_1->updatePlotList(*(dirbrowser_1->m_working_directory));
	dirbrowser_1->reload();

	}

bool MainWindow::sendCommand()
{
	QString command=com_1->getCommand();
	if ( command.isEmpty() )
		return false;
	
	if(com_1->chTerminal->isChecked())
	{
		QProcess p;
		if (m_external_terminal=="xterm")
		{
			command="xterm -e sh -c \"cd '" + dirbrowser_1->m_working_directory->path() + "';" + command + ";sh \" &";
			p.startDetached(command);
		}
		else if (m_external_terminal=="konsole")
		{
			command="konsole -e sh -c \"cd '" + dirbrowser_1->m_working_directory->path() + "';" + command + ";sh \" &";
			p.startDetached(command);
		}
		else
			QMessageBox::critical(this,"Command Execution","Unable to run command.");
	}

	else if(!com_1->chTerminal->isChecked())
	{
		Executor* executor_dlg = new Executor(0, command , dirbrowser_1->m_working_directory->path(), m_log);
		executor_dlg->exec();
		delete executor_dlg;
	}
	
	return true;
}
	

//==================================================================
void MainWindow::editorShow()
{	
	tabwMain->setCurrentIndex(1);
}

void MainWindow::groGUIHelpShow()
{	
	
	if (guihelp->isHidden()){
		guihelp->show(); }
	else
		guihelp->activateWindow();
}

void MainWindow::settingShow()
{	
	setting_dlg->exec();
}	

void MainWindow::groGUIAboutShow()
{	AboutGroGui* aboutgrogui = new AboutGroGui(this);
	aboutgrogui->exec();
	delete aboutgrogui;
	}	

void MainWindow::mdpConfigShow()
{	MdpConfig* mdp_dlg = new MdpConfig(this, *(dirbrowser_1-> m_working_directory));
	mdp_dlg->exec();
	delete mdp_dlg;
	}


//==================================================================

void MainWindow::showPlotValues(double& a,double& b,double& c)
{
	if (c==0)
		m_statusbar_label->setText(QString(" x=%1  y=%2 ").arg(a).arg(b));
	else if (c!=0)
		m_statusbar_label->setText(QString(" x=%1  y1=%2  y2=%3").arg(a).arg(b).arg(c));
}


//==================================================================
void MainWindow::slotfor_requestWorkDirName()
{
	emit workDirName(dirbrowser_1->m_working_directory->path());
}

void MainWindow::slotfor_openFilePopup(QString s)
{
	feditor->openFile(s);
	editorShow();
}


//==================================================================







