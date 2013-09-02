#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QtGui/QGridLayout>

#include "ui_mainwindow.h"

#include "qconsole.h"
#include "dirbrowser.h"
#include "editor.h"
#include "groguihelp.h"

#include "commands.h"
#include "setting.h"
//#include "plotwidget.h"
#include "logger.h"

class MainWindow : public QMainWindow, public Ui::MainWindowClass
{
	Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
	
	DirBrowser *dirbrowser_1;
	QConsole *console_main;
	Logger *m_log;
	//PlotWidget *plot_1;
	
	
    
public slots:
	void updateView();
	void editorShow();
	void groGUIHelpShow();
	void settingShow();
	void groGUIAboutShow();
	void mdpConfigShow();
	
	bool sendCommand();
	
	void showPlotValues(double&,double&,double&);
	
	//void readSettings();
	void slotfor_requestWorkDirName();
	void slotfor_openFilePopup(QString s);

private slots:
	
signals:
	void workDirName(QString);

private:
	QDir *workdir;
	
	GroGuiHelp *guihelp;
	Editor *feditor;
	Commands *com_1;
	Setting *setting_dlg;
	
	QLabel *m_statusbar_label;
	QString m_external_terminal;
	
	QGridLayout *layout_0, *layout_1, *layout_2, *layout_3,*layout_4, *layout_5, *layout_6 ;
	
};

#endif 
