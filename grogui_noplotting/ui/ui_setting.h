/********************************************************************************
** Form generated from reading ui file 'setting.ui'
**
** Created: Fri Jan 11 08:53:58 2008
**      by: Qt User Interface Compiler version 4.3.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

class Ui_SettingClass
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout1;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout2;
    QLabel *label_2;
    QLineEdit *leGroManual;
    QToolButton *tlGroHelp;
    QGroupBox *groupBox;
    QGridLayout *gridLayout3;
    QLabel *label;
    QLineEdit *leRootDir;
    QToolButton *tlRootDir;
    QLabel *label_4;
    QComboBox *cbConsole;
    QWidget *tab_2;
    QGridLayout *gridLayout4;
    QLabel *label_5;
    QTreeWidget *trwPopup;
    QPushButton *pbAdd;
    QPushButton *pbRemove;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QPushButton *pbCancel;
    QPushButton *pbSave;

    void setupUi(QWidget *SettingClass)
    {
    if (SettingClass->objectName().isEmpty())
        SettingClass->setObjectName(QString::fromUtf8("SettingClass"));
    SettingClass->resize(507, 347);
    gridLayout = new QGridLayout(SettingClass);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    tabWidget = new QTabWidget(SettingClass);
    tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
    tab = new QWidget();
    tab->setObjectName(QString::fromUtf8("tab"));
    gridLayout1 = new QGridLayout(tab);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    groupBox_2 = new QGroupBox(tab);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    gridLayout2 = new QGridLayout(groupBox_2);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    label_2 = new QLabel(groupBox_2);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    gridLayout2->addWidget(label_2, 0, 0, 1, 1);

    leGroManual = new QLineEdit(groupBox_2);
    leGroManual->setObjectName(QString::fromUtf8("leGroManual"));
    leGroManual->setReadOnly(true);

    gridLayout2->addWidget(leGroManual, 0, 1, 1, 1);

    tlGroHelp = new QToolButton(groupBox_2);
    tlGroHelp->setObjectName(QString::fromUtf8("tlGroHelp"));

    gridLayout2->addWidget(tlGroHelp, 0, 2, 1, 1);


    gridLayout1->addWidget(groupBox_2, 0, 0, 1, 1);

    groupBox = new QGroupBox(tab);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    gridLayout3 = new QGridLayout(groupBox);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    label = new QLabel(groupBox);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout3->addWidget(label, 0, 0, 1, 1);

    leRootDir = new QLineEdit(groupBox);
    leRootDir->setObjectName(QString::fromUtf8("leRootDir"));
    leRootDir->setReadOnly(true);

    gridLayout3->addWidget(leRootDir, 0, 1, 1, 1);

    tlRootDir = new QToolButton(groupBox);
    tlRootDir->setObjectName(QString::fromUtf8("tlRootDir"));

    gridLayout3->addWidget(tlRootDir, 0, 2, 1, 1);

    label_4 = new QLabel(groupBox);
    label_4->setObjectName(QString::fromUtf8("label_4"));

    gridLayout3->addWidget(label_4, 1, 0, 1, 1);

    cbConsole = new QComboBox(groupBox);
    cbConsole->setObjectName(QString::fromUtf8("cbConsole"));
    cbConsole->setMaximumSize(QSize(161, 16777215));

    gridLayout3->addWidget(cbConsole, 1, 1, 1, 1);


    gridLayout1->addWidget(groupBox, 1, 0, 1, 1);

    tabWidget->addTab(tab, QString());
    tab_2 = new QWidget();
    tab_2->setObjectName(QString::fromUtf8("tab_2"));
    gridLayout4 = new QGridLayout(tab_2);
    gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
    label_5 = new QLabel(tab_2);
    label_5->setObjectName(QString::fromUtf8("label_5"));

    gridLayout4->addWidget(label_5, 0, 0, 1, 1);

    trwPopup = new QTreeWidget(tab_2);
    trwPopup->setObjectName(QString::fromUtf8("trwPopup"));
    trwPopup->setEditTriggers(QAbstractItemView::SelectedClicked);

    gridLayout4->addWidget(trwPopup, 1, 0, 3, 1);

    pbAdd = new QPushButton(tab_2);
    pbAdd->setObjectName(QString::fromUtf8("pbAdd"));

    gridLayout4->addWidget(pbAdd, 1, 1, 1, 1);

    pbRemove = new QPushButton(tab_2);
    pbRemove->setObjectName(QString::fromUtf8("pbRemove"));

    gridLayout4->addWidget(pbRemove, 2, 1, 1, 1);

    spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout4->addItem(spacerItem, 3, 1, 1, 1);

    tabWidget->addTab(tab_2, QString());

    gridLayout->addWidget(tabWidget, 0, 0, 1, 3);

    spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem1, 1, 0, 1, 1);

    pbCancel = new QPushButton(SettingClass);
    pbCancel->setObjectName(QString::fromUtf8("pbCancel"));

    gridLayout->addWidget(pbCancel, 1, 1, 1, 1);

    pbSave = new QPushButton(SettingClass);
    pbSave->setObjectName(QString::fromUtf8("pbSave"));

    gridLayout->addWidget(pbSave, 1, 2, 1, 1);


    retranslateUi(SettingClass);
    QObject::connect(pbCancel, SIGNAL(clicked()), SettingClass, SLOT(close()));

    tabWidget->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(SettingClass);
    } // setupUi

    void retranslateUi(QWidget *SettingClass)
    {
    SettingClass->setWindowTitle(QApplication::translate("SettingClass", "Setting", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QApplication::translate("SettingClass", "GROMACS", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("SettingClass", "Manual", 0, QApplication::UnicodeUTF8));
    leGroManual->setText(QString());
    tlGroHelp->setText(QApplication::translate("SettingClass", "...", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("SettingClass", "GUI", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("SettingClass", "Root for directory browser", 0, QApplication::UnicodeUTF8));
    tlRootDir->setText(QApplication::translate("SettingClass", "...", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("SettingClass", "System console", 0, QApplication::UnicodeUTF8));
    cbConsole->clear();
    cbConsole->insertItems(0, QStringList()
     << QApplication::translate("SettingClass", "xterm", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("SettingClass", "konsole", 0, QApplication::UnicodeUTF8)
    );
    tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SettingClass", "Application", 0, QApplication::UnicodeUTF8));
    label_5->setText(QApplication::translate("SettingClass", "Define right-click menu options for workspace.", 0, QApplication::UnicodeUTF8));
    trwPopup->headerItem()->setText(0, QApplication::translate("SettingClass", "Name", 0, QApplication::UnicodeUTF8));
    trwPopup->headerItem()->setText(1, QApplication::translate("SettingClass", "Command", 0, QApplication::UnicodeUTF8));
    pbAdd->setText(QApplication::translate("SettingClass", "Add", 0, QApplication::UnicodeUTF8));
    pbRemove->setText(QApplication::translate("SettingClass", "Remove", 0, QApplication::UnicodeUTF8));
    tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("SettingClass", "Popup Menu", 0, QApplication::UnicodeUTF8));
    pbCancel->setText(QApplication::translate("SettingClass", "Cancel", 0, QApplication::UnicodeUTF8));
    pbSave->setText(QApplication::translate("SettingClass", "Save", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(SettingClass);
    } // retranslateUi

};

namespace Ui {
    class SettingClass: public Ui_SettingClass {};
} // namespace Ui

#endif // UI_SETTING_H
