/********************************************************************************
** Form generated from reading ui file 'qconsole.ui'
**
** Created: Fri Jan 11 08:53:58 2008
**      by: Qt User Interface Compiler version 4.3.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QCONSOLE_H
#define UI_QCONSOLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

class Ui_QConsole
{
public:
    QGridLayout *gridLayout;
    QTextEdit *teConsole;
    QComboBox *cbCommand;
    QSpacerItem *spacerItem;
    QPushButton *pbSave;
    QPushButton *pbStop;

    void setupUi(QWidget *QConsole)
    {
    if (QConsole->objectName().isEmpty())
        QConsole->setObjectName(QString::fromUtf8("QConsole"));
    QConsole->resize(417, 510);
    gridLayout = new QGridLayout(QConsole);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    teConsole = new QTextEdit(QConsole);
    teConsole->setObjectName(QString::fromUtf8("teConsole"));
    QPalette palette;
    QBrush brush(QColor(255, 255, 240, 255));
    brush.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Base, brush);
    palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
    QBrush brush1(QColor(255, 255, 255, 255));
    brush1.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
    teConsole->setPalette(palette);
    QFont font;
    font.setFamily(QString::fromUtf8("Lucida Console"));
    font.setPointSize(11);
    font.setBold(false);
    font.setWeight(50);
    font.setStyleStrategy(QFont::PreferAntialias);
    teConsole->setFont(font);
    teConsole->setAcceptDrops(false);
    teConsole->setFrameShape(QFrame::StyledPanel);
    teConsole->setFrameShadow(QFrame::Sunken);
    teConsole->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    teConsole->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    teConsole->setUndoRedoEnabled(false);
    teConsole->setLineWrapMode(QTextEdit::WidgetWidth);
    teConsole->setReadOnly(true);
    teConsole->setTabStopWidth(120);
    teConsole->setAcceptRichText(false);

    gridLayout->addWidget(teConsole, 0, 0, 1, 3);

    cbCommand = new QComboBox(QConsole);
    cbCommand->setObjectName(QString::fromUtf8("cbCommand"));
    cbCommand->setEditable(true);

    gridLayout->addWidget(cbCommand, 1, 0, 1, 3);

    spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem, 2, 0, 1, 1);

    pbSave = new QPushButton(QConsole);
    pbSave->setObjectName(QString::fromUtf8("pbSave"));

    gridLayout->addWidget(pbSave, 2, 1, 1, 1);

    pbStop = new QPushButton(QConsole);
    pbStop->setObjectName(QString::fromUtf8("pbStop"));

    gridLayout->addWidget(pbStop, 2, 2, 1, 1);


    retranslateUi(QConsole);

    QMetaObject::connectSlotsByName(QConsole);
    } // setupUi

    void retranslateUi(QWidget *QConsole)
    {
    QConsole->setWindowTitle(QApplication::translate("QConsole", "QConsole", 0, QApplication::UnicodeUTF8));
    pbSave->setText(QApplication::translate("QConsole", "Save", 0, QApplication::UnicodeUTF8));
    pbStop->setText(QApplication::translate("QConsole", "Stop", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(QConsole);
    } // retranslateUi

};

namespace Ui {
    class QConsole: public Ui_QConsole {};
} // namespace Ui

#endif // UI_QCONSOLE_H
