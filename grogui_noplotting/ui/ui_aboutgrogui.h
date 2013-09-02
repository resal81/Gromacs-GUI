/********************************************************************************
** Form generated from reading ui file 'aboutgrogui.ui'
**
** Created: Mon Jan 14 03:09:06 2008
**      by: Qt User Interface Compiler version 4.3.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_ABOUTGROGUI_H
#define UI_ABOUTGROGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

class Ui_AboutGroGuiClass
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QLabel *label;
    QSpacerItem *spacerItem1;
    QSpacerItem *spacerItem2;
    QLabel *label_2;
    QSpacerItem *spacerItem3;
    QSpacerItem *spacerItem4;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *AboutGroGuiClass)
    {
    if (AboutGroGuiClass->objectName().isEmpty())
        AboutGroGuiClass->setObjectName(QString::fromUtf8("AboutGroGuiClass"));
    AboutGroGuiClass->resize(441, 229);
    AboutGroGuiClass->setMaximumSize(QSize(441, 229));
    gridLayout = new QGridLayout(AboutGroGuiClass);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 0, 0, 1, 1);

    label = new QLabel(AboutGroGuiClass);
    label->setObjectName(QString::fromUtf8("label"));
    QPalette palette;
    QBrush brush(QColor(170, 0, 0, 255));
    brush.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
    palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
    QBrush brush1(QColor(119, 119, 119, 255));
    brush1.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
    label->setPalette(palette);
    QFont font;
    font.setFamily(QString::fromUtf8("Sans Serif"));
    font.setPointSize(20);
    font.setBold(true);
    font.setWeight(75);
    label->setFont(font);

    gridLayout->addWidget(label, 0, 1, 1, 1);

    spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem1, 0, 2, 1, 1);

    spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem2, 1, 0, 1, 1);

    label_2 = new QLabel(AboutGroGuiClass);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    gridLayout->addWidget(label_2, 1, 1, 1, 1);

    spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem3, 1, 2, 1, 1);

    spacerItem4 = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem4, 2, 1, 1, 1);

    label_3 = new QLabel(AboutGroGuiClass);
    label_3->setObjectName(QString::fromUtf8("label_3"));

    gridLayout->addWidget(label_3, 3, 0, 1, 3);

    label_4 = new QLabel(AboutGroGuiClass);
    label_4->setObjectName(QString::fromUtf8("label_4"));

    gridLayout->addWidget(label_4, 4, 0, 1, 3);


    retranslateUi(AboutGroGuiClass);

    QMetaObject::connectSlotsByName(AboutGroGuiClass);
    } // setupUi

    void retranslateUi(QWidget *AboutGroGuiClass)
    {
    AboutGroGuiClass->setWindowTitle(QApplication::translate("AboutGroGuiClass", "About Gromacs GUI", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("AboutGroGuiClass", "Gromacs GUI ", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("AboutGroGuiClass", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Tahoma'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Verdana';\"><span style=\" font-weight:600;\">     Version 0.5.2</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Verdana'; font-weight:600;\"> <span style=\" font-weight:400;\"> </span></p></body></html>", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("AboutGroGuiClass", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Reza Salari</span> </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Chemistry Department, </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">University of Pittsburgh</p></body></html>", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("AboutGroGuiClass", "\n"
"(c) 2006-2008 GPL\n"
"For more information see: http://resal.wordpress.com/gromacs-gui", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(AboutGroGuiClass);
    } // retranslateUi

};

namespace Ui {
    class AboutGroGuiClass: public Ui_AboutGroGuiClass {};
} // namespace Ui

#endif // UI_ABOUTGROGUI_H
