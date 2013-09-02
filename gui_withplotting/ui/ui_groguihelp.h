/********************************************************************************
** Form generated from reading ui file 'groguihelp.ui'
**
** Created: Mon Jan 14 03:09:06 2008
**      by: Qt User Interface Compiler version 4.3.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_GROGUIHELP_H
#define UI_GROGUIHELP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

class Ui_GroGuiHelpClass
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *txbMain;

    void setupUi(QWidget *GroGuiHelpClass)
    {
    if (GroGuiHelpClass->objectName().isEmpty())
        GroGuiHelpClass->setObjectName(QString::fromUtf8("GroGuiHelpClass"));
    GroGuiHelpClass->resize(480, 318);
    gridLayout = new QGridLayout(GroGuiHelpClass);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    txbMain = new QTextBrowser(GroGuiHelpClass);
    txbMain->setObjectName(QString::fromUtf8("txbMain"));
    QFont font;
    font.setPointSize(10);
    txbMain->setFont(font);
    txbMain->setReadOnly(true);

    gridLayout->addWidget(txbMain, 0, 0, 1, 1);


    retranslateUi(GroGuiHelpClass);

    QMetaObject::connectSlotsByName(GroGuiHelpClass);
    } // setupUi

    void retranslateUi(QWidget *GroGuiHelpClass)
    {
    GroGuiHelpClass->setWindowTitle(QApplication::translate("GroGuiHelpClass", "Gromacs GUI Help", 0, QApplication::UnicodeUTF8));
    txbMain->setHtml(QApplication::translate("GroGuiHelpClass", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Tahoma'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8pt;\"><span style=\" font-size:16pt; font-weight:600;\">Gromacs GUI 0.5.2 </span><span style=\" font-size:16pt;\"></span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:16pt; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; marg"
        "in-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:16pt; font-weight:600;\"><span style=\" font-size:12pt; font-weight:400;\">Working with the gui is simple:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:12pt;\"><br />- run the gui through a terminal : ./grogui </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:12pt;\"><br />- after the main window appears navigate to your working directory. in file browser you can double click a directory to enter to it, double click a file to open it in file editor, right click on a file to show the popup menu (you can edit popup menu items later) and click on a previously selected item to change its name.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; "
        "-qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:12pt;\"><br />- when you are in your working directory, go to Commands tab, select a command (e.g. editconf) and double click it to bring up the interface. here you can select command options and see live preview of the command to be executed in the run box. now push Run button to run your command in a xterm window (you can later select konsole as your default terminal).</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:12pt;\"><br />- the plot widget adds any xvg file in your current working directory to its plot list. double click on a plot name (e.g. rmsd.xvg) to bring up its contents. when there are several data series in a file, you can click on a data name to hide its plot. you can go to plot tools where some plotting tools are available.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; marg"
        "in-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:12pt;\"><br />- in the Console tab a very simple terminal is provided. </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:12pt;\"><br />- in Manual tab you can review GROMACS online manual. you can set the link of  this online help in Setting dialog.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:12pt;\"><br />- in MDP Writer dialog, you can easily create your mdp files.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:12pt;\"><br />- in Setting dialog you can set some options including popup menu items. the syntax is simple: if you want to add xmgrace to your popup menu a"
        "dd this :<br />	Name:	xmgrace<br />	Command:	xmgrace %s	<br />or for vmd:<br />	Name:	vmd<br />	Command:	vmd %s<br /> (%s is a place holder for file name.)<span style=\" font-size:16pt; font-weight:600;\"><br /></span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\">================================================<br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:14pt; color:#000000;\">There is an introduction slideshow (for version 0.5) available at <span style=\" color:#0000ff;\">http://resal.wordpress.com/gromacs-gui/</span> </p></body></html>", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(GroGuiHelpClass);
    } // retranslateUi

};

namespace Ui {
    class GroGuiHelpClass: public Ui_GroGuiHelpClass {};
} // namespace Ui

#endif // UI_GROGUIHELP_H
