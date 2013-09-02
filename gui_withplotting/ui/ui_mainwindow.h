/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Fri Jan 11 09:07:24 2008
**      by: Qt User Interface Compiler version 4.3.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <Qt3Support/Q3TextBrowser>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

class Ui_MainWindowClass
{
public:
    QAction *actionExit;
    QAction *actionSetting;
    QAction *actionContents;
    QAction *actionAbout;
    QAction *actionFile_Editor;
    QAction *actionMDP_Writer;
    QAction *actionAbout_Qt;
    QAction *actionViewer;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabwMain;
    QWidget *tabWorkspace;
    QWidget *tabEditor;
    QWidget *tabCommands;
    QWidget *tabViewer;
    QWidget *tabConsole;
    QWidget *tabManual;
    QGridLayout *gridLayout1;
    QToolButton *tlMan_Home;
    QToolButton *tlMan_Back;
    QSpacerItem *spacerItem;
    QToolButton *tlMan_ZoomIn;
    QToolButton *tlMan_ZoomOut;
    Q3TextBrowser *txtManual;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuSetting;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowClass)
    {
    if (MainWindowClass->objectName().isEmpty())
        MainWindowClass->setObjectName(QString::fromUtf8("MainWindowClass"));
    MainWindowClass->resize(990, 688);
    MainWindowClass->setMaximumSize(QSize(10000000, 16777215));
    actionExit = new QAction(MainWindowClass);
    actionExit->setObjectName(QString::fromUtf8("actionExit"));
    actionExit->setIcon(QIcon(QString::fromUtf8(":/new/prefix1/images/exit.png")));
    actionSetting = new QAction(MainWindowClass);
    actionSetting->setObjectName(QString::fromUtf8("actionSetting"));
    actionSetting->setIcon(QIcon(QString::fromUtf8(":/new/prefix1/images/settings.png")));
    actionContents = new QAction(MainWindowClass);
    actionContents->setObjectName(QString::fromUtf8("actionContents"));
    actionContents->setIcon(QIcon(QString::fromUtf8(":/new/prefix1/images/help.png")));
    actionAbout = new QAction(MainWindowClass);
    actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
    actionAbout->setIcon(QIcon(QString::fromUtf8(":/new/prefix1/images/about.png")));
    actionFile_Editor = new QAction(MainWindowClass);
    actionFile_Editor->setObjectName(QString::fromUtf8("actionFile_Editor"));
    actionFile_Editor->setIcon(QIcon(QString::fromUtf8(":/new/prefix1/images/book2.png")));
    actionMDP_Writer = new QAction(MainWindowClass);
    actionMDP_Writer->setObjectName(QString::fromUtf8("actionMDP_Writer"));
    actionMDP_Writer->setIcon(QIcon(QString::fromUtf8(":/new/prefix1/images/mdp.png")));
    actionAbout_Qt = new QAction(MainWindowClass);
    actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
    actionViewer = new QAction(MainWindowClass);
    actionViewer->setObjectName(QString::fromUtf8("actionViewer"));
    centralwidget = new QWidget(MainWindowClass);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    gridLayout = new QGridLayout(centralwidget);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    tabwMain = new QTabWidget(centralwidget);
    tabwMain->setObjectName(QString::fromUtf8("tabwMain"));
    tabwMain->setLayoutDirection(Qt::LeftToRight);
    tabwMain->setTabPosition(QTabWidget::North);
    tabwMain->setTabShape(QTabWidget::Rounded);
    tabWorkspace = new QWidget();
    tabWorkspace->setObjectName(QString::fromUtf8("tabWorkspace"));
    tabwMain->addTab(tabWorkspace, QIcon(QString::fromUtf8(":/new/prefix1/images/folder.png")), QString());
    tabEditor = new QWidget();
    tabEditor->setObjectName(QString::fromUtf8("tabEditor"));
    tabwMain->addTab(tabEditor, QIcon(QString::fromUtf8(":/new/prefix1/images/book2.png")), QString());
    tabCommands = new QWidget();
    tabCommands->setObjectName(QString::fromUtf8("tabCommands"));
    tabwMain->addTab(tabCommands, QIcon(QString::fromUtf8(":/new/prefix1/images/tpr.png")), QString());
    tabViewer = new QWidget();
    tabViewer->setObjectName(QString::fromUtf8("tabViewer"));
    tabwMain->addTab(tabViewer, QIcon(QString::fromUtf8(":/new/prefix1/images/plot.png")), QString());
    tabConsole = new QWidget();
    tabConsole->setObjectName(QString::fromUtf8("tabConsole"));
    tabwMain->addTab(tabConsole, QIcon(QString::fromUtf8(":/new/prefix1/images/terminal.png")), QString());
    tabManual = new QWidget();
    tabManual->setObjectName(QString::fromUtf8("tabManual"));
    gridLayout1 = new QGridLayout(tabManual);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    tlMan_Home = new QToolButton(tabManual);
    tlMan_Home->setObjectName(QString::fromUtf8("tlMan_Home"));
    tlMan_Home->setIcon(QIcon(QString::fromUtf8(":/new/prefix1/images/home.png")));

    gridLayout1->addWidget(tlMan_Home, 0, 0, 1, 1);

    tlMan_Back = new QToolButton(tabManual);
    tlMan_Back->setObjectName(QString::fromUtf8("tlMan_Back"));
    tlMan_Back->setIcon(QIcon(QString::fromUtf8(":/new/prefix1/images/back.png")));

    gridLayout1->addWidget(tlMan_Back, 0, 1, 1, 1);

    spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout1->addItem(spacerItem, 0, 2, 1, 1);

    tlMan_ZoomIn = new QToolButton(tabManual);
    tlMan_ZoomIn->setObjectName(QString::fromUtf8("tlMan_ZoomIn"));
    tlMan_ZoomIn->setIcon(QIcon(QString::fromUtf8(":/new/prefix1/images/viewmag+.png")));

    gridLayout1->addWidget(tlMan_ZoomIn, 0, 3, 1, 1);

    tlMan_ZoomOut = new QToolButton(tabManual);
    tlMan_ZoomOut->setObjectName(QString::fromUtf8("tlMan_ZoomOut"));
    tlMan_ZoomOut->setIcon(QIcon(QString::fromUtf8(":/new/prefix1/images/viewmag-.png")));

    gridLayout1->addWidget(tlMan_ZoomOut, 0, 4, 1, 1);

    txtManual = new Q3TextBrowser(tabManual);
    txtManual->setObjectName(QString::fromUtf8("txtManual"));

    gridLayout1->addWidget(txtManual, 1, 0, 1, 5);

    tabwMain->addTab(tabManual, QIcon(QString::fromUtf8(":/new/prefix1/images/help.png")), QString());

    gridLayout->addWidget(tabwMain, 0, 0, 1, 1);

    MainWindowClass->setCentralWidget(centralwidget);
    menubar = new QMenuBar(MainWindowClass);
    menubar->setObjectName(QString::fromUtf8("menubar"));
    menubar->setGeometry(QRect(0, 0, 990, 29));
    menuFile = new QMenu(menubar);
    menuFile->setObjectName(QString::fromUtf8("menuFile"));
    menuSetting = new QMenu(menubar);
    menuSetting->setObjectName(QString::fromUtf8("menuSetting"));
    menuHelp = new QMenu(menubar);
    menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
    MainWindowClass->setMenuBar(menubar);
    statusbar = new QStatusBar(MainWindowClass);
    statusbar->setObjectName(QString::fromUtf8("statusbar"));
    MainWindowClass->setStatusBar(statusbar);

    menubar->addAction(menuFile->menuAction());
    menubar->addAction(menuSetting->menuAction());
    menubar->addAction(menuHelp->menuAction());
    menuFile->addAction(actionExit);
    menuSetting->addAction(actionMDP_Writer);
    menuSetting->addSeparator();
    menuSetting->addAction(actionSetting);
    menuHelp->addAction(actionContents);
    menuHelp->addSeparator();
    menuHelp->addAction(actionAbout);

    retranslateUi(MainWindowClass);
    QObject::connect(tlMan_Home, SIGNAL(clicked()), txtManual, SLOT(home()));
    QObject::connect(tlMan_Back, SIGNAL(clicked()), txtManual, SLOT(backward()));
    QObject::connect(tlMan_ZoomIn, SIGNAL(clicked()), txtManual, SLOT(zoomIn()));
    QObject::connect(tlMan_ZoomOut, SIGNAL(clicked()), txtManual, SLOT(zoomOut()));

    tabwMain->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
    MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "Gromacs GUI 0.5.2", 0, QApplication::UnicodeUTF8));
    actionExit->setText(QApplication::translate("MainWindowClass", "Exit", 0, QApplication::UnicodeUTF8));
    actionSetting->setText(QApplication::translate("MainWindowClass", "Setting", 0, QApplication::UnicodeUTF8));
    actionContents->setText(QApplication::translate("MainWindowClass", "Contents", 0, QApplication::UnicodeUTF8));
    actionAbout->setText(QApplication::translate("MainWindowClass", "About", 0, QApplication::UnicodeUTF8));
    actionFile_Editor->setText(QApplication::translate("MainWindowClass", "File Editor", 0, QApplication::UnicodeUTF8));
    actionMDP_Writer->setText(QApplication::translate("MainWindowClass", "MDP Writer", 0, QApplication::UnicodeUTF8));
    actionAbout_Qt->setText(QApplication::translate("MainWindowClass", "About Qt", 0, QApplication::UnicodeUTF8));
    actionViewer->setText(QApplication::translate("MainWindowClass", "Viewer", 0, QApplication::UnicodeUTF8));
    tabwMain->setTabText(tabwMain->indexOf(tabWorkspace), QApplication::translate("MainWindowClass", "Workspace", 0, QApplication::UnicodeUTF8));
    tabwMain->setTabText(tabwMain->indexOf(tabEditor), QApplication::translate("MainWindowClass", "File Editor", 0, QApplication::UnicodeUTF8));
    tabwMain->setTabText(tabwMain->indexOf(tabCommands), QApplication::translate("MainWindowClass", "Commands", 0, QApplication::UnicodeUTF8));
    tabwMain->setTabText(tabwMain->indexOf(tabViewer), QApplication::translate("MainWindowClass", "Plot Data", 0, QApplication::UnicodeUTF8));
    tabwMain->setTabText(tabwMain->indexOf(tabConsole), QApplication::translate("MainWindowClass", "Console", 0, QApplication::UnicodeUTF8));
    tlMan_Home->setText(QString());
    tlMan_Back->setText(QString());
    tlMan_ZoomIn->setText(QString());
    tlMan_ZoomOut->setText(QString());
    txtManual->setSource(QApplication::translate("MainWindowClass", "/usr/share/gromacs/html/online.html", 0, QApplication::UnicodeUTF8));
    tabwMain->setTabText(tabwMain->indexOf(tabManual), QApplication::translate("MainWindowClass", "Manual", 0, QApplication::UnicodeUTF8));
    menuFile->setTitle(QApplication::translate("MainWindowClass", "File", 0, QApplication::UnicodeUTF8));
    menuSetting->setTitle(QApplication::translate("MainWindowClass", "Tools", 0, QApplication::UnicodeUTF8));
    menuHelp->setTitle(QApplication::translate("MainWindowClass", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

#endif // UI_MAINWINDOW_H
