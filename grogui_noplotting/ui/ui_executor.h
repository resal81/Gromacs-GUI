/********************************************************************************
** Form generated from reading ui file 'executor.ui'
**
** Created: Fri Jan 11 08:53:58 2008
**      by: Qt User Interface Compiler version 4.3.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_EXECUTOR_H
#define UI_EXECUTOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

class Ui_ExecutorClass
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QGridLayout *gridLayout1;
    QLabel *lbLogo2;
    QLabel *lbMsg;
    QLabel *lbLogo3;
    QTextEdit *teSummary;
    QLabel *lbLogo1;
    QSpacerItem *spacerItem;
    QVBoxLayout *vboxLayout;
    QSpacerItem *spacerItem1;
    QPushButton *pbClose;
    QPushButton *pbDetails;
    QSpacerItem *spacerItem2;
    QGroupBox *grpDetails;
    QGridLayout *gridLayout2;
    QTextEdit *teDetails;

    void setupUi(QDialog *ExecutorClass)
    {
    if (ExecutorClass->objectName().isEmpty())
        ExecutorClass->setObjectName(QString::fromUtf8("ExecutorClass"));
    ExecutorClass->resize(578, 539);
    QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(ExecutorClass->sizePolicy().hasHeightForWidth());
    ExecutorClass->setSizePolicy(sizePolicy);
    ExecutorClass->setMaximumSize(QSize(590, 16777215));
    ExecutorClass->setWindowIcon(QIcon());
    gridLayout = new QGridLayout(ExecutorClass);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    frame = new QFrame(ExecutorClass);
    frame->setObjectName(QString::fromUtf8("frame"));
    sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
    frame->setSizePolicy(sizePolicy);
    frame->setMinimumSize(QSize(470, 220));
    frame->setMaximumSize(QSize(470, 220));
    frame->setFrameShape(QFrame::StyledPanel);
    frame->setFrameShadow(QFrame::Raised);
    gridLayout1 = new QGridLayout(frame);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    lbLogo2 = new QLabel(frame);
    lbLogo2->setObjectName(QString::fromUtf8("lbLogo2"));
    lbLogo2->setMinimumSize(QSize(40, 40));
    lbLogo2->setMaximumSize(QSize(66, 40));
    lbLogo2->setFrameShape(QFrame::NoFrame);

    gridLayout1->addWidget(lbLogo2, 0, 0, 1, 1);

    lbMsg = new QLabel(frame);
    lbMsg->setObjectName(QString::fromUtf8("lbMsg"));
    QFont font;
    font.setPointSize(10);
    font.setBold(false);
    font.setWeight(50);
    lbMsg->setFont(font);
    lbMsg->setFrameShape(QFrame::NoFrame);

    gridLayout1->addWidget(lbMsg, 0, 1, 1, 1);

    lbLogo3 = new QLabel(frame);
    lbLogo3->setObjectName(QString::fromUtf8("lbLogo3"));
    lbLogo3->setMinimumSize(QSize(40, 40));
    lbLogo3->setMaximumSize(QSize(66, 40));
    lbLogo3->setFrameShape(QFrame::NoFrame);

    gridLayout1->addWidget(lbLogo3, 1, 0, 1, 1);

    teSummary = new QTextEdit(frame);
    teSummary->setObjectName(QString::fromUtf8("teSummary"));
    teSummary->setMinimumSize(QSize(0, 140));
    teSummary->setMaximumSize(QSize(372, 16777215));
    QPalette palette;
    QBrush brush(QColor(238, 238, 238, 255));
    brush.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Base, brush);
    palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
    QBrush brush1(QColor(255, 255, 255, 255));
    brush1.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
    teSummary->setPalette(palette);
    teSummary->setFrameShape(QFrame::NoFrame);
    teSummary->setReadOnly(true);

    gridLayout1->addWidget(teSummary, 1, 1, 3, 1);

    lbLogo1 = new QLabel(frame);
    lbLogo1->setObjectName(QString::fromUtf8("lbLogo1"));
    lbLogo1->setMinimumSize(QSize(40, 40));
    lbLogo1->setMaximumSize(QSize(66, 40));
    lbLogo1->setFrameShape(QFrame::NoFrame);

    gridLayout1->addWidget(lbLogo1, 2, 0, 1, 1);

    spacerItem = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout1->addItem(spacerItem, 3, 0, 1, 1);


    gridLayout->addWidget(frame, 0, 0, 1, 1);

    vboxLayout = new QVBoxLayout();
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    spacerItem1 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

    vboxLayout->addItem(spacerItem1);

    pbClose = new QPushButton(ExecutorClass);
    pbClose->setObjectName(QString::fromUtf8("pbClose"));

    vboxLayout->addWidget(pbClose);

    pbDetails = new QPushButton(ExecutorClass);
    pbDetails->setObjectName(QString::fromUtf8("pbDetails"));
    pbDetails->setCheckable(true);
    pbDetails->setDefault(true);

    vboxLayout->addWidget(pbDetails);


    gridLayout->addLayout(vboxLayout, 0, 1, 1, 1);

    spacerItem2 = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout->addItem(spacerItem2, 1, 0, 1, 1);

    grpDetails = new QGroupBox(ExecutorClass);
    grpDetails->setObjectName(QString::fromUtf8("grpDetails"));
    QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(grpDetails->sizePolicy().hasHeightForWidth());
    grpDetails->setSizePolicy(sizePolicy1);
    grpDetails->setMinimumSize(QSize(560, 270));
    gridLayout2 = new QGridLayout(grpDetails);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    teDetails = new QTextEdit(grpDetails);
    teDetails->setObjectName(QString::fromUtf8("teDetails"));
    teDetails->setReadOnly(true);

    gridLayout2->addWidget(teDetails, 0, 0, 1, 1);


    gridLayout->addWidget(grpDetails, 2, 0, 1, 2);


    retranslateUi(ExecutorClass);
    QObject::connect(pbClose, SIGNAL(clicked()), ExecutorClass, SLOT(close()));
    QObject::connect(pbDetails, SIGNAL(toggled(bool)), grpDetails, SLOT(setVisible(bool)));

    QMetaObject::connectSlotsByName(ExecutorClass);
    } // setupUi

    void retranslateUi(QDialog *ExecutorClass)
    {
    ExecutorClass->setWindowTitle(QApplication::translate("ExecutorClass", "Command Executor", 0, QApplication::UnicodeUTF8));
    lbLogo2->setText(QString());
    lbMsg->setText(QString());
    lbLogo3->setText(QString());
    lbLogo1->setText(QString());
    pbClose->setText(QApplication::translate("ExecutorClass", "Close", 0, QApplication::UnicodeUTF8));
    pbDetails->setText(QApplication::translate("ExecutorClass", "Details", 0, QApplication::UnicodeUTF8));
    grpDetails->setTitle(QApplication::translate("ExecutorClass", "Details", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(ExecutorClass);
    } // retranslateUi

};

namespace Ui {
    class ExecutorClass: public Ui_ExecutorClass {};
} // namespace Ui

#endif // UI_EXECUTOR_H
