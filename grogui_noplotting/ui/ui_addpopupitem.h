/********************************************************************************
** Form generated from reading ui file 'addpopupitem.ui'
**
** Created: Fri Jan 11 08:53:58 2008
**      by: Qt User Interface Compiler version 4.3.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_ADDPOPUPITEM_H
#define UI_ADDPOPUPITEM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

class Ui_AddPopupItemClass
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *leName;
    QLabel *label_2;
    QLineEdit *leCommand;
    QSpacerItem *spacerItem;
    QPushButton *pbCancel;
    QPushButton *pbAdd;

    void setupUi(QWidget *AddPopupItemClass)
    {
    if (AddPopupItemClass->objectName().isEmpty())
        AddPopupItemClass->setObjectName(QString::fromUtf8("AddPopupItemClass"));
    AddPopupItemClass->resize(342, 107);
    gridLayout = new QGridLayout(AddPopupItemClass);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    label = new QLabel(AddPopupItemClass);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout->addWidget(label, 0, 0, 1, 1);

    leName = new QLineEdit(AddPopupItemClass);
    leName->setObjectName(QString::fromUtf8("leName"));

    gridLayout->addWidget(leName, 0, 1, 1, 2);

    label_2 = new QLabel(AddPopupItemClass);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    gridLayout->addWidget(label_2, 1, 0, 1, 1);

    leCommand = new QLineEdit(AddPopupItemClass);
    leCommand->setObjectName(QString::fromUtf8("leCommand"));

    gridLayout->addWidget(leCommand, 1, 1, 1, 2);

    spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 2, 0, 1, 1);

    pbCancel = new QPushButton(AddPopupItemClass);
    pbCancel->setObjectName(QString::fromUtf8("pbCancel"));

    gridLayout->addWidget(pbCancel, 2, 1, 1, 1);

    pbAdd = new QPushButton(AddPopupItemClass);
    pbAdd->setObjectName(QString::fromUtf8("pbAdd"));

    gridLayout->addWidget(pbAdd, 2, 2, 1, 1);


    retranslateUi(AddPopupItemClass);
    QObject::connect(pbCancel, SIGNAL(clicked()), AddPopupItemClass, SLOT(close()));

    QMetaObject::connectSlotsByName(AddPopupItemClass);
    } // setupUi

    void retranslateUi(QWidget *AddPopupItemClass)
    {
    AddPopupItemClass->setWindowTitle(QApplication::translate("AddPopupItemClass", "Add Popup Menu Item", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("AddPopupItemClass", "Name", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("AddPopupItemClass", "Command", 0, QApplication::UnicodeUTF8));
    pbCancel->setText(QApplication::translate("AddPopupItemClass", "Cancel", 0, QApplication::UnicodeUTF8));
    pbAdd->setText(QApplication::translate("AddPopupItemClass", "Add", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(AddPopupItemClass);
    } // retranslateUi

};

namespace Ui {
    class AddPopupItemClass: public Ui_AddPopupItemClass {};
} // namespace Ui

#endif // UI_ADDPOPUPITEM_H
