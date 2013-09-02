/********************************************************************************
** Form generated from reading ui file 'finddialog.ui'
**
** Created: Fri Jan 11 23:55:09 2008
**      by: Qt User Interface Compiler version 4.3.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_FINDDIALOG_H
#define UI_FINDDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

class Ui_FindDialogClass
{
public:
    QGridLayout *gridLayout;
    QLineEdit *leFind;
    QPushButton *pbFind;
    QPushButton *pbNext;
    QLineEdit *leReplace;
    QPushButton *pbReplace;
    QPushButton *pbReplaceAll;
    QCheckBox *chCase;

    void setupUi(QDialog *FindDialogClass)
    {
    if (FindDialogClass->objectName().isEmpty())
        FindDialogClass->setObjectName(QString::fromUtf8("FindDialogClass"));
    FindDialogClass->resize(351, 115);
    FindDialogClass->setMaximumSize(QSize(351, 115));
    gridLayout = new QGridLayout(FindDialogClass);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    leFind = new QLineEdit(FindDialogClass);
    leFind->setObjectName(QString::fromUtf8("leFind"));

    gridLayout->addWidget(leFind, 0, 0, 1, 1);

    pbFind = new QPushButton(FindDialogClass);
    pbFind->setObjectName(QString::fromUtf8("pbFind"));

    gridLayout->addWidget(pbFind, 0, 1, 1, 1);

    pbNext = new QPushButton(FindDialogClass);
    pbNext->setObjectName(QString::fromUtf8("pbNext"));
    pbNext->setIcon(QIcon(QString::fromUtf8(":/images/next.png")));

    gridLayout->addWidget(pbNext, 0, 2, 1, 1);

    leReplace = new QLineEdit(FindDialogClass);
    leReplace->setObjectName(QString::fromUtf8("leReplace"));

    gridLayout->addWidget(leReplace, 1, 0, 1, 1);

    pbReplace = new QPushButton(FindDialogClass);
    pbReplace->setObjectName(QString::fromUtf8("pbReplace"));

    gridLayout->addWidget(pbReplace, 1, 1, 1, 1);

    pbReplaceAll = new QPushButton(FindDialogClass);
    pbReplaceAll->setObjectName(QString::fromUtf8("pbReplaceAll"));

    gridLayout->addWidget(pbReplaceAll, 1, 2, 1, 1);

    chCase = new QCheckBox(FindDialogClass);
    chCase->setObjectName(QString::fromUtf8("chCase"));
    chCase->setEnabled(true);
    chCase->setCheckable(true);
    chCase->setChecked(false);

    gridLayout->addWidget(chCase, 2, 0, 1, 2);


    retranslateUi(FindDialogClass);

    QMetaObject::connectSlotsByName(FindDialogClass);
    } // setupUi

    void retranslateUi(QDialog *FindDialogClass)
    {
    FindDialogClass->setWindowTitle(QApplication::translate("FindDialogClass", "Find", 0, QApplication::UnicodeUTF8));
    FindDialogClass->setToolTip(QApplication::translate("FindDialogClass", "Begins from current position of the cursor", 0, QApplication::UnicodeUTF8));
    pbFind->setToolTip(QApplication::translate("FindDialogClass", "Begins search from top of the file", 0, QApplication::UnicodeUTF8));
    pbFind->setText(QApplication::translate("FindDialogClass", "Find", 0, QApplication::UnicodeUTF8));
    pbNext->setToolTip(QApplication::translate("FindDialogClass", "Begins search from current cursor position", 0, QApplication::UnicodeUTF8));
    pbNext->setText(QApplication::translate("FindDialogClass", "Next", 0, QApplication::UnicodeUTF8));
    pbReplace->setToolTip(QApplication::translate("FindDialogClass", "Start replacing from current cursor position", 0, QApplication::UnicodeUTF8));
    pbReplace->setText(QApplication::translate("FindDialogClass", "Replace", 0, QApplication::UnicodeUTF8));
    pbReplaceAll->setToolTip(QApplication::translate("FindDialogClass", "Replaces all matches in the file", 0, QApplication::UnicodeUTF8));
    pbReplaceAll->setText(QApplication::translate("FindDialogClass", "Replace All", 0, QApplication::UnicodeUTF8));
    chCase->setText(QApplication::translate("FindDialogClass", "Case Sensitive", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(FindDialogClass);
    } // retranslateUi

};

namespace Ui {
    class FindDialogClass: public Ui_FindDialogClass {};
} // namespace Ui

#endif // UI_FINDDIALOG_H
