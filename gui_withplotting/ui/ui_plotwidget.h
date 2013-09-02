/********************************************************************************
** Form generated from reading ui file 'plotwidget.ui'
**
** Created: Fri Jan 11 10:20:49 2008
**      by: Qt User Interface Compiler version 4.3.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_PLOTWIDGET_H
#define UI_PLOTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QListWidget>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolBox>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>
#include "qwt_plot.h"

class Ui_PlotWidgetClass
{
public:
    QGridLayout *gridLayout;
    QToolBox *tlbxPlot;
    QWidget *pagePlots;
    QGridLayout *gridLayout1;
    QListWidget *liwPlotList;
    QWidget *pageData;
    QGridLayout *gridLayout2;
    QListWidget *liwDataList;
    QWidget *page_tools;
    QGridLayout *gridLayout3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout4;
    QToolButton *tlZoom;
    QToolButton *tlPicker;
    QSpacerItem *spacerItem;
    QToolButton *tlReset;
    QCheckBox *chFitted;
    QGroupBox *groupBox;
    QGridLayout *gridLayout5;
    QCheckBox *chPlotTitle;
    QCheckBox *chXTitle;
    QCheckBox *chYTitle;
    QCheckBox *chLegend;
    QCheckBox *chSymbols;
    QGroupBox *grpboxSecondY;
    QGridLayout *gridLayout6;
    QComboBox *cbSecondYAxis;
    QCheckBox *chY2Title;
    QSpacerItem *spacerItem1;
    QwtPlot *plotMain;
    QToolButton *tlVisibility;
    QToolButton *tlPDF;
    QToolButton *tlPrint;

    void setupUi(QWidget *PlotWidgetClass)
    {
    if (PlotWidgetClass->objectName().isEmpty())
        PlotWidgetClass->setObjectName(QString::fromUtf8("PlotWidgetClass"));
    PlotWidgetClass->resize(888, 545);
    gridLayout = new QGridLayout(PlotWidgetClass);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    tlbxPlot = new QToolBox(PlotWidgetClass);
    tlbxPlot->setObjectName(QString::fromUtf8("tlbxPlot"));
    tlbxPlot->setMaximumSize(QSize(231, 1000));
    tlbxPlot->setFrameShape(QFrame::StyledPanel);
    pagePlots = new QWidget();
    pagePlots->setObjectName(QString::fromUtf8("pagePlots"));
    pagePlots->setGeometry(QRect(0, 0, 112, 112));
    gridLayout1 = new QGridLayout(pagePlots);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    liwPlotList = new QListWidget(pagePlots);
    liwPlotList->setObjectName(QString::fromUtf8("liwPlotList"));
    liwPlotList->setMaximumSize(QSize(141, 16777215));
    liwPlotList->setEditTriggers(QAbstractItemView::NoEditTriggers);

    gridLayout1->addWidget(liwPlotList, 0, 0, 1, 1);

    tlbxPlot->addItem(pagePlots, QApplication::translate("PlotWidgetClass", "Available Plots", 0, QApplication::UnicodeUTF8));
    pageData = new QWidget();
    pageData->setObjectName(QString::fromUtf8("pageData"));
    pageData->setGeometry(QRect(0, 0, 112, 112));
    gridLayout2 = new QGridLayout(pageData);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    liwDataList = new QListWidget(pageData);
    liwDataList->setObjectName(QString::fromUtf8("liwDataList"));
    liwDataList->setMaximumSize(QSize(141, 16777215));
    QPalette palette;
    QBrush brush(QColor(236, 236, 236, 255));
    brush.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
    QBrush brush1(QColor(28, 28, 28, 255));
    brush1.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush1);
    palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
    palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush1);
    QBrush brush2(QColor(205, 205, 205, 255));
    brush2.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush2);
    palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush1);
    liwDataList->setPalette(palette);
    liwDataList->setEditTriggers(QAbstractItemView::NoEditTriggers);
    liwDataList->setSelectionMode(QAbstractItemView::MultiSelection);

    gridLayout2->addWidget(liwDataList, 0, 0, 1, 1);

    tlbxPlot->addItem(pageData, QApplication::translate("PlotWidgetClass", "Available Data", 0, QApplication::UnicodeUTF8));
    page_tools = new QWidget();
    page_tools->setObjectName(QString::fromUtf8("page_tools"));
    page_tools->setGeometry(QRect(0, 0, 227, 332));
    gridLayout3 = new QGridLayout(page_tools);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    groupBox_2 = new QGroupBox(page_tools);
    groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
    groupBox_2->setMaximumSize(QSize(16777215, 70));
    gridLayout4 = new QGridLayout(groupBox_2);
    gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
    tlZoom = new QToolButton(groupBox_2);
    tlZoom->setObjectName(QString::fromUtf8("tlZoom"));
    tlZoom->setIcon(QIcon(QString::fromUtf8(":/new/prefix1/images/viewmag+.png")));
    tlZoom->setCheckable(true);

    gridLayout4->addWidget(tlZoom, 0, 0, 1, 1);

    tlPicker = new QToolButton(groupBox_2);
    tlPicker->setObjectName(QString::fromUtf8("tlPicker"));
    tlPicker->setIcon(QIcon(QString::fromUtf8(":/new/prefix1/images/add.png")));
    tlPicker->setCheckable(true);

    gridLayout4->addWidget(tlPicker, 0, 1, 1, 1);

    spacerItem = new QSpacerItem(71, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout4->addItem(spacerItem, 0, 2, 1, 1);

    tlReset = new QToolButton(groupBox_2);
    tlReset->setObjectName(QString::fromUtf8("tlReset"));
    tlReset->setIcon(QIcon(QString::fromUtf8(":/new/prefix1/images/undo.png")));

    gridLayout4->addWidget(tlReset, 0, 3, 1, 1);

    chFitted = new QCheckBox(groupBox_2);
    chFitted->setObjectName(QString::fromUtf8("chFitted"));
    chFitted->setMinimumSize(QSize(0, 12));
    chFitted->setMaximumSize(QSize(16777215, 20));

    gridLayout4->addWidget(chFitted, 1, 0, 1, 4);


    gridLayout3->addWidget(groupBox_2, 0, 0, 1, 1);

    groupBox = new QGroupBox(page_tools);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setMaximumSize(QSize(16777215, 126));
    gridLayout5 = new QGridLayout(groupBox);
    gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
    chPlotTitle = new QCheckBox(groupBox);
    chPlotTitle->setObjectName(QString::fromUtf8("chPlotTitle"));
    chPlotTitle->setMinimumSize(QSize(0, 12));
    chPlotTitle->setMaximumSize(QSize(16777215, 17));

    gridLayout5->addWidget(chPlotTitle, 0, 0, 1, 1);

    chXTitle = new QCheckBox(groupBox);
    chXTitle->setObjectName(QString::fromUtf8("chXTitle"));
    chXTitle->setMinimumSize(QSize(0, 12));
    chXTitle->setMaximumSize(QSize(16777215, 17));

    gridLayout5->addWidget(chXTitle, 1, 0, 1, 1);

    chYTitle = new QCheckBox(groupBox);
    chYTitle->setObjectName(QString::fromUtf8("chYTitle"));
    chYTitle->setMinimumSize(QSize(0, 12));
    chYTitle->setMaximumSize(QSize(16777215, 17));

    gridLayout5->addWidget(chYTitle, 2, 0, 1, 1);

    chLegend = new QCheckBox(groupBox);
    chLegend->setObjectName(QString::fromUtf8("chLegend"));
    chLegend->setMinimumSize(QSize(0, 12));
    chLegend->setMaximumSize(QSize(16777215, 17));

    gridLayout5->addWidget(chLegend, 3, 0, 1, 1);

    chSymbols = new QCheckBox(groupBox);
    chSymbols->setObjectName(QString::fromUtf8("chSymbols"));
    chSymbols->setMinimumSize(QSize(0, 12));
    chSymbols->setMaximumSize(QSize(16777215, 17));

    gridLayout5->addWidget(chSymbols, 4, 0, 1, 1);


    gridLayout3->addWidget(groupBox, 1, 0, 1, 1);

    grpboxSecondY = new QGroupBox(page_tools);
    grpboxSecondY->setObjectName(QString::fromUtf8("grpboxSecondY"));
    grpboxSecondY->setEnabled(true);
    grpboxSecondY->setMaximumSize(QSize(16777215, 86));
    gridLayout6 = new QGridLayout(grpboxSecondY);
    gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
    cbSecondYAxis = new QComboBox(grpboxSecondY);
    cbSecondYAxis->setObjectName(QString::fromUtf8("cbSecondYAxis"));
    QFont font;
    font.setPointSize(9);
    cbSecondYAxis->setFont(font);

    gridLayout6->addWidget(cbSecondYAxis, 0, 0, 1, 1);

    chY2Title = new QCheckBox(grpboxSecondY);
    chY2Title->setObjectName(QString::fromUtf8("chY2Title"));
    chY2Title->setEnabled(false);
    chY2Title->setMinimumSize(QSize(0, 12));
    chY2Title->setMaximumSize(QSize(16777215, 20));

    gridLayout6->addWidget(chY2Title, 1, 0, 1, 1);


    gridLayout3->addWidget(grpboxSecondY, 2, 0, 1, 1);

    spacerItem1 = new QSpacerItem(145, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout3->addItem(spacerItem1, 3, 0, 1, 1);

    tlbxPlot->addItem(page_tools, QApplication::translate("PlotWidgetClass", "Tools", 0, QApplication::UnicodeUTF8));

    gridLayout->addWidget(tlbxPlot, 0, 0, 1, 1);

    plotMain = new QwtPlot(PlotWidgetClass);
    plotMain->setObjectName(QString::fromUtf8("plotMain"));
    plotMain->setMinimumSize(QSize(611, 100));
    plotMain->setFrameShape(QFrame::StyledPanel);

    gridLayout->addWidget(plotMain, 0, 1, 4, 1);

    tlVisibility = new QToolButton(PlotWidgetClass);
    tlVisibility->setObjectName(QString::fromUtf8("tlVisibility"));
    tlVisibility->setIcon(QIcon(QString::fromUtf8(":/new/prefix1/images/bookmark.png")));
    tlVisibility->setCheckable(true);
    tlVisibility->setChecked(true);

    gridLayout->addWidget(tlVisibility, 1, 0, 1, 1);

    tlPDF = new QToolButton(PlotWidgetClass);
    tlPDF->setObjectName(QString::fromUtf8("tlPDF"));
    tlPDF->setIcon(QIcon(QString::fromUtf8(":/new/prefix1/images/pdf.png")));

    gridLayout->addWidget(tlPDF, 2, 0, 1, 1);

    tlPrint = new QToolButton(PlotWidgetClass);
    tlPrint->setObjectName(QString::fromUtf8("tlPrint"));
    tlPrint->setIcon(QIcon(QString::fromUtf8(":/new/prefix1/images/printer.png")));

    gridLayout->addWidget(tlPrint, 3, 0, 1, 1);


    retranslateUi(PlotWidgetClass);
    QObject::connect(tlVisibility, SIGNAL(toggled(bool)), tlbxPlot, SLOT(setVisible(bool)));

    tlbxPlot->setCurrentIndex(2);


    QMetaObject::connectSlotsByName(PlotWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *PlotWidgetClass)
    {
    PlotWidgetClass->setWindowTitle(QApplication::translate("PlotWidgetClass", "Plot", 0, QApplication::UnicodeUTF8));
    tlbxPlot->setItemText(tlbxPlot->indexOf(pagePlots), QApplication::translate("PlotWidgetClass", "Available Plots", 0, QApplication::UnicodeUTF8));
    tlbxPlot->setItemText(tlbxPlot->indexOf(pageData), QApplication::translate("PlotWidgetClass", "Available Data", 0, QApplication::UnicodeUTF8));
    groupBox_2->setTitle(QString());
    tlZoom->setToolTip(QApplication::translate("PlotWidgetClass", "Zoom Plot", 0, QApplication::UnicodeUTF8));
    tlZoom->setText(QApplication::translate("PlotWidgetClass", "Zoom", 0, QApplication::UnicodeUTF8));
    tlPicker->setToolTip(QApplication::translate("PlotWidgetClass", "Zoom Plot", 0, QApplication::UnicodeUTF8));
    tlPicker->setText(QApplication::translate("PlotWidgetClass", "Zoom", 0, QApplication::UnicodeUTF8));
    tlReset->setToolTip(QApplication::translate("PlotWidgetClass", "Reset", 0, QApplication::UnicodeUTF8));
    tlReset->setText(QApplication::translate("PlotWidgetClass", "Reset", 0, QApplication::UnicodeUTF8));
    chFitted->setText(QApplication::translate("PlotWidgetClass", "Use fitted style for plots", 0, QApplication::UnicodeUTF8));
    groupBox->setTitle(QApplication::translate("PlotWidgetClass", "Show", 0, QApplication::UnicodeUTF8));
    chPlotTitle->setText(QApplication::translate("PlotWidgetClass", "Show plot title", 0, QApplication::UnicodeUTF8));
    chXTitle->setText(QApplication::translate("PlotWidgetClass", "Show x axis title", 0, QApplication::UnicodeUTF8));
    chYTitle->setText(QApplication::translate("PlotWidgetClass", "Show y axis title", 0, QApplication::UnicodeUTF8));
    chLegend->setText(QApplication::translate("PlotWidgetClass", "Show legend", 0, QApplication::UnicodeUTF8));
    chSymbols->setText(QApplication::translate("PlotWidgetClass", "Show data points", 0, QApplication::UnicodeUTF8));
    grpboxSecondY->setTitle(QApplication::translate("PlotWidgetClass", "Second y axis", 0, QApplication::UnicodeUTF8));
    cbSecondYAxis->clear();
    cbSecondYAxis->insertItems(0, QStringList()
     << QApplication::translate("PlotWidgetClass", "None", 0, QApplication::UnicodeUTF8)
    );
    chY2Title->setText(QApplication::translate("PlotWidgetClass", "Show second y variable", 0, QApplication::UnicodeUTF8));
    tlbxPlot->setItemText(tlbxPlot->indexOf(page_tools), QApplication::translate("PlotWidgetClass", "Tools", 0, QApplication::UnicodeUTF8));
    tlVisibility->setToolTip(QApplication::translate("PlotWidgetClass", "Toggle Controls Visibility", 0, QApplication::UnicodeUTF8));
    tlVisibility->setText(QApplication::translate("PlotWidgetClass", "Export to PDF", 0, QApplication::UnicodeUTF8));
    tlPDF->setToolTip(QApplication::translate("PlotWidgetClass", "Export to PDF", 0, QApplication::UnicodeUTF8));
    tlPDF->setText(QApplication::translate("PlotWidgetClass", "Export to PDF", 0, QApplication::UnicodeUTF8));
    tlPrint->setToolTip(QApplication::translate("PlotWidgetClass", "Print", 0, QApplication::UnicodeUTF8));
    tlPrint->setText(QApplication::translate("PlotWidgetClass", "Export to PDF", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(PlotWidgetClass);
    } // retranslateUi

};

namespace Ui {
    class PlotWidgetClass: public Ui_PlotWidgetClass {};
} // namespace Ui

#endif // UI_PLOTWIDGET_H
