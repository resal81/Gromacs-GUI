/********************************************************************************
** Form generated from reading ui file 'dirbrowser.ui'
**
** Created: Fri Jan 11 08:53:58 2008
**      by: Qt User Interface Compiler version 4.3.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_DIRBROWSER_H
#define UI_DIRBROWSER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QToolButton>
#include <QtGui/QTreeView>
#include <QtGui/QWidget>

class Ui_DirBrowserClass
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QToolButton *tlRootDir;
    QToolButton *tlReloadDirs;
    QLineEdit *leLocation;
    QToolButton *tlUp;
    QToolButton *tlNewFolder_Here;
    QToolButton *tlFileBrowser_Here;
    QToolButton *tlTerminal_Here;
    QTreeView *trvuMain;
    QListView *livuMain;

    void setupUi(QWidget *DirBrowserClass)
    {
    if (DirBrowserClass->objectName().isEmpty())
        DirBrowserClass->setObjectName(QString::fromUtf8("DirBrowserClass"));
    DirBrowserClass->resize(709, 479);
    gridLayout = new QGridLayout(DirBrowserClass);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    label_2 = new QLabel(DirBrowserClass);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    gridLayout->addWidget(label_2, 0, 0, 1, 1);

    tlRootDir = new QToolButton(DirBrowserClass);
    tlRootDir->setObjectName(QString::fromUtf8("tlRootDir"));
    tlRootDir->setIcon(QIcon(QString::fromUtf8(":/new/prefix1/images/folder.png")));

    gridLayout->addWidget(tlRootDir, 0, 1, 1, 1);

    tlReloadDirs = new QToolButton(DirBrowserClass);
    tlReloadDirs->setObjectName(QString::fromUtf8("tlReloadDirs"));
    tlReloadDirs->setIcon(QIcon(QString::fromUtf8(":/new/prefix1/images/reload.png")));

    gridLayout->addWidget(tlReloadDirs, 0, 2, 1, 1);

    leLocation = new QLineEdit(DirBrowserClass);
    leLocation->setObjectName(QString::fromUtf8("leLocation"));
    leLocation->setReadOnly(true);

    gridLayout->addWidget(leLocation, 0, 3, 1, 1);

    tlUp = new QToolButton(DirBrowserClass);
    tlUp->setObjectName(QString::fromUtf8("tlUp"));
    tlUp->setIcon(QIcon(QString::fromUtf8(":/new/prefix1/images/up.png")));

    gridLayout->addWidget(tlUp, 0, 4, 1, 1);

    tlNewFolder_Here = new QToolButton(DirBrowserClass);
    tlNewFolder_Here->setObjectName(QString::fromUtf8("tlNewFolder_Here"));
    tlNewFolder_Here->setIcon(QIcon(QString::fromUtf8(":/new/prefix1/images/newfolder.png")));

    gridLayout->addWidget(tlNewFolder_Here, 0, 5, 1, 1);

    tlFileBrowser_Here = new QToolButton(DirBrowserClass);
    tlFileBrowser_Here->setObjectName(QString::fromUtf8("tlFileBrowser_Here"));
    tlFileBrowser_Here->setIcon(QIcon(QString::fromUtf8(":/new/prefix1/images/konqueror.png")));

    gridLayout->addWidget(tlFileBrowser_Here, 0, 6, 1, 1);

    tlTerminal_Here = new QToolButton(DirBrowserClass);
    tlTerminal_Here->setObjectName(QString::fromUtf8("tlTerminal_Here"));
    tlTerminal_Here->setIcon(QIcon(QString::fromUtf8(":/new/prefix1/images/terminal.png")));

    gridLayout->addWidget(tlTerminal_Here, 0, 7, 1, 1);

    trvuMain = new QTreeView(DirBrowserClass);
    trvuMain->setObjectName(QString::fromUtf8("trvuMain"));
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(trvuMain->sizePolicy().hasHeightForWidth());
    trvuMain->setSizePolicy(sizePolicy);
    trvuMain->setMaximumSize(QSize(300, 16777215));
    trvuMain->setContextMenuPolicy(Qt::NoContextMenu);
    trvuMain->setAcceptDrops(true);
    trvuMain->setEditTriggers(QAbstractItemView::NoEditTriggers);
    trvuMain->setDragEnabled(true);
    trvuMain->setDragDropMode(QAbstractItemView::DragDrop);
    trvuMain->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
    trvuMain->setAutoExpandDelay(300);
    trvuMain->setRootIsDecorated(false);
    trvuMain->setSortingEnabled(false);

    gridLayout->addWidget(trvuMain, 1, 0, 1, 3);

    livuMain = new QListView(DirBrowserClass);
    livuMain->setObjectName(QString::fromUtf8("livuMain"));
    QPalette palette;
    QBrush brush(QColor(255, 255, 240, 255));
    brush.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Base, brush);
    palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
    QBrush brush1(QColor(255, 255, 255, 255));
    brush1.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
    livuMain->setPalette(palette);
    livuMain->setContextMenuPolicy(Qt::CustomContextMenu);
    livuMain->setEditTriggers(QAbstractItemView::SelectedClicked);
    livuMain->setTabKeyNavigation(true);
    livuMain->setIconSize(QSize(16, 16));
    livuMain->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
    livuMain->setFlow(QListView::TopToBottom);
    livuMain->setProperty("isWrapping", QVariant(true));
    livuMain->setResizeMode(QListView::Adjust);
    livuMain->setLayoutMode(QListView::SinglePass);
    livuMain->setSpacing(2);
    livuMain->setViewMode(QListView::ListMode);
    livuMain->setModelColumn(0);
    livuMain->setUniformItemSizes(false);
    livuMain->setBatchSize(10);
    livuMain->setWordWrap(false);

    gridLayout->addWidget(livuMain, 1, 3, 1, 5);


    retranslateUi(DirBrowserClass);

    QMetaObject::connectSlotsByName(DirBrowserClass);
    } // setupUi

    void retranslateUi(QWidget *DirBrowserClass)
    {
    DirBrowserClass->setWindowTitle(QApplication::translate("DirBrowserClass", "Directory Browser", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("DirBrowserClass", "Select Working Directory :", 0, QApplication::UnicodeUTF8));
    tlRootDir->setToolTip(QApplication::translate("DirBrowserClass", "Go To Your Root Directory ", 0, QApplication::UnicodeUTF8));
    tlRootDir->setText(QApplication::translate("DirBrowserClass", "Reload", 0, QApplication::UnicodeUTF8));
    tlReloadDirs->setToolTip(QApplication::translate("DirBrowserClass", "Reload Directories", 0, QApplication::UnicodeUTF8));
    tlReloadDirs->setText(QApplication::translate("DirBrowserClass", "Reload", 0, QApplication::UnicodeUTF8));
    tlUp->setToolTip(QApplication::translate("DirBrowserClass", "Up", 0, QApplication::UnicodeUTF8));
    tlUp->setText(QApplication::translate("DirBrowserClass", "New Folder", 0, QApplication::UnicodeUTF8));
    tlNewFolder_Here->setToolTip(QApplication::translate("DirBrowserClass", "New Directory", 0, QApplication::UnicodeUTF8));
    tlNewFolder_Here->setText(QApplication::translate("DirBrowserClass", "New Folder", 0, QApplication::UnicodeUTF8));
    tlFileBrowser_Here->setToolTip(QApplication::translate("DirBrowserClass", "Open File Browser", 0, QApplication::UnicodeUTF8));
    tlFileBrowser_Here->setText(QApplication::translate("DirBrowserClass", "FIle Browser", 0, QApplication::UnicodeUTF8));
    tlTerminal_Here->setToolTip(QApplication::translate("DirBrowserClass", "Open Terminal", 0, QApplication::UnicodeUTF8));
    tlTerminal_Here->setText(QApplication::translate("DirBrowserClass", "Console", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(DirBrowserClass);
    } // retranslateUi

};

namespace Ui {
    class DirBrowserClass: public Ui_DirBrowserClass {};
} // namespace Ui

#endif // UI_DIRBROWSER_H
