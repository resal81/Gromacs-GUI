/********************************************************************************
** Form generated from reading ui file 'mdpconfig.ui'
**
** Created: Fri Jan 11 08:53:58 2008
**      by: Qt User Interface Compiler version 4.3.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MDPCONFIG_H
#define UI_MDPCONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

class Ui_MdpConfigClass
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabwMain;
    QWidget *tab;
    QGridLayout *gridLayout1;
    QListWidget *liwMdpOptions;
    QStackedWidget *stackwSetting;
    QWidget *page;
    QGridLayout *gridLayout2;
    QLabel *label_2;
    QSpacerItem *spacerItem;
    QWidget *page_2;
    QGridLayout *gridLayout3;
    QLabel *textLabel3;
    QLineEdit *Le2title;
    QLabel *textLabel1_2;
    QLineEdit *Le2pre;
    QLabel *textLabel2;
    QLineEdit *Le2include;
    QLabel *textLabel4;
    QComboBox *Co2define;
    QSpacerItem *spacerItem1;
    QWidget *page_3;
    QGridLayout *gridLayout4;
    QLabel *textLabel1_3;
    QSpacerItem *spacerItem2;
    QComboBox *Co3integrator;
    QLabel *textLabel2_3;
    QLineEdit *Le3tinit;
    QLabel *textLabel3_2;
    QLineEdit *Le3dt;
    QLabel *textLabel4_2;
    QLineEdit *Le3nsteps;
    QLabel *textLabel5;
    QLineEdit *Le3initstep;
    QLabel *textLabel6;
    QComboBox *Co3commmode;
    QLabel *textLabel7;
    QLineEdit *Le3nstcomm;
    QLabel *textLabel8;
    QLineEdit *Le3commgrps;
    QSpacerItem *spacerItem3;
    QWidget *page_4;
    QGridLayout *gridLayout5;
    QLabel *textLabel1_4;
    QLineEdit *Le4emtol;
    QLabel *textLabel2_4;
    QLineEdit *Le4emstep;
    QLabel *textLabel3_3;
    QSpacerItem *spacerItem4;
    QLineEdit *Le4nstcgsteep;
    QLabel *textLabel4_3;
    QLineEdit *Le4nbfgscorr;
    QSpacerItem *spacerItem5;
    QWidget *page_5;
    QGridLayout *gridLayout6;
    QLabel *textLabel5_2;
    QLineEdit *Le5nstlist;
    QLabel *textLabel6_2;
    QSpacerItem *spacerItem6;
    QComboBox *Co5nstype;
    QLabel *textLabel7_2;
    QSpacerItem *spacerItem7;
    QComboBox *Co5pbc;
    QLabel *textLabel8_2;
    QSpacerItem *spacerItem8;
    QLineEdit *Le5rlist;
    QSpacerItem *spacerItem9;
    QWidget *page_6;
    QGridLayout *gridLayout7;
    QLabel *textLabel9;
    QSpacerItem *spacerItem10;
    QComboBox *Co6constraints;
    QLabel *textLabel10;
    QComboBox *Co6constalg;
    QLabel *textLabel11;
    QComboBox *Co6unconststart;
    QLabel *textLabel12;
    QLineEdit *Le6shaketol;
    QLabel *textLabel13;
    QLineEdit *Le6lincsorder;
    QLabel *textLabel14;
    QLineEdit *Le6lincsiter;
    QLabel *textLabel15;
    QLineEdit *Le6lincswarna;
    QLabel *textLabel16;
    QComboBox *Co6morse;
    QSpacerItem *spacerItem11;
    QWidget *page_7;
    QGridLayout *gridLayout8;
    QTabWidget *TbElectrostatic;
    QWidget *tab_3;
    QGridLayout *gridLayout9;
    QLabel *textLabel17;
    QComboBox *Co7coulotype;
    QLabel *textLabel18;
    QLineEdit *Le7rcouloswitch;
    QLabel *textLabel19;
    QLineEdit *Le7rcoulomb;
    QLabel *textLabel20;
    QLineEdit *Le7epsilonr;
    QLabel *textLabel21;
    QLineEdit *Le7epsilonrf;
    QSpacerItem *spacerItem12;
    QWidget *tab_4;
    QGridLayout *gridLayout10;
    QLabel *textLabel22;
    QLineEdit *Le7fouspacing;
    QLabel *textLabel23;
    QLineEdit *Le7founx;
    QLabel *textLabel24;
    QLineEdit *Le7founy;
    QLabel *textLabel25;
    QLineEdit *Le7founz;
    QLabel *textLabel26;
    QLineEdit *Le7pmeorder;
    QLabel *textLabel27;
    QLineEdit *Le7ewaldrtol;
    QLabel *textLabel28;
    QComboBox *Co7ewaldgeo;
    QLabel *textLabel29;
    QLineEdit *Le7epsisurf;
    QLabel *textLabel30;
    QSpacerItem *spacerItem13;
    QComboBox *Co7optimfft;
    QSpacerItem *spacerItem14;
    QWidget *page_8;
    QGridLayout *gridLayout11;
    QLabel *textLabel1_5;
    QSpacerItem *spacerItem15;
    QComboBox *Co8vdwtype;
    QLabel *textLabel2_5;
    QLineEdit *Le8rdwswitch;
    QLabel *textLabel3_4;
    QLineEdit *Le8rvdw;
    QLabel *textLabel4_4;
    QComboBox *Co8dispcorr;
    QSpacerItem *spacerItem16;
    QWidget *page_9;
    QGridLayout *gridLayout12;
    QLabel *textLabel5_3;
    QLineEdit *Le9nstxout;
    QLabel *textLabel6_3;
    QLineEdit *Le9nstv;
    QLabel *textLabel7_3;
    QLineEdit *Le9nstf;
    QLabel *textLabel8_3;
    QSpacerItem *spacerItem17;
    QLineEdit *Le9nstlog;
    QLabel *textLabel9_2;
    QLineEdit *Le9nstener;
    QLabel *textLabel12_2;
    QLineEdit *Le9nstxtc;
    QLabel *textLabel10_2;
    QLineEdit *Le9xtcpre;
    QHBoxLayout *hboxLayout;
    QLabel *textLabel11_2;
    QLineEdit *Le9xtcgrps;
    QHBoxLayout *hboxLayout1;
    QLabel *textLabel13_2;
    QLineEdit *Le9energygrps;
    QSpacerItem *spacerItem18;
    QWidget *page_10;
    QGridLayout *gridLayout13;
    QTabWidget *tabWidget4;
    QWidget *tab_5;
    QGridLayout *gridLayout14;
    QLabel *textLabel14_2;
    QComboBox *Co10tcouple;
    QLabel *textLabel15_2;
    QLineEdit *Le10tcgrps;
    QLabel *textLabel17_2;
    QLineEdit *Le10reft;
    QLabel *textLabel16_2;
    QLineEdit *Le10taut;
    QSpacerItem *spacerItem19;
    QWidget *tab_6;
    QGridLayout *gridLayout15;
    QLabel *textLabel18_2;
    QComboBox *Co11pcoupl;
    QLabel *textLabel19_2;
    QComboBox *Co11pcoutype;
    QLabel *textLabel20_2;
    QLineEdit *Le11taup;
    QLabel *textLabel21_2;
    QLineEdit *Le11comprss;
    QLabel *textLabel22_2;
    QLineEdit *Le11refp;
    QSpacerItem *spacerItem20;
    QWidget *page_11;
    QGridLayout *gridLayout16;
    QLabel *textLabel23_2;
    QSpacerItem *spacerItem21;
    QComboBox *Co12genvel;
    QLabel *textLabel24_2;
    QLineEdit *Le12gentemp;
    QLabel *textLabel25_2;
    QLineEdit *Le12genseed;
    QSpacerItem *spacerItem22;
    QWidget *page_12;
    QGridLayout *gridLayout17;
    QHBoxLayout *hboxLayout2;
    QLabel *textLabel26_2;
    QSpacerItem *spacerItem23;
    QComboBox *Co13freeener;
    QLabel *textLabel27_2;
    QLineEdit *Le13initlam;
    QLabel *textLabel28_2;
    QLineEdit *Le13deltlam;
    QLabel *textLabel29_2;
    QLineEdit *Le13scalpha;
    QLabel *textLabel30_2;
    QLineEdit *Le13scpower;
    QLabel *textLabel31;
    QLineEdit *Le13scsigma;
    QSpacerItem *spacerItem24;
    QWidget *page_13;
    QGridLayout *gridLayout18;
    QHBoxLayout *hboxLayout3;
    QLabel *textLabel33;
    QLineEdit *Le14enertable;
    QLabel *textLabel32;
    QSpacerItem *spacerItem25;
    QLineEdit *Le14tableext;
    QSpacerItem *spacerItem26;
    QWidget *page_14;
    QGridLayout *gridLayout19;
    QLabel *textLabel34;
    QComboBox *Co15annealing;
    QSpacerItem *spacerItem27;
    QLabel *textLabel35;
    QLineEdit *Le15anpoints;
    QLabel *textLabel36;
    QLineEdit *Le15antime;
    QLabel *textLabel37;
    QLineEdit *Le15antemp;
    QSpacerItem *spacerItem28;
    QWidget *page_15;
    QGridLayout *gridLayout20;
    QLabel *textLabel38;
    QLineEdit *Le16bdfric;
    QLabel *textLabel39;
    QLineEdit *Le16ldseed;
    QSpacerItem *spacerItem29;
    QWidget *page_16;
    QGridLayout *gridLayout21;
    QLabel *textLabel40;
    QLineEdit *Le17accgrps;
    QLabel *textLabel41;
    QLineEdit *Le17accelerate;
    QLabel *textLabel42;
    QLineEdit *Le17freezgrps;
    QLabel *textLabel43;
    QLineEdit *Le17freezedim;
    QLabel *textLabel44;
    QLineEdit *Le17cosacc;
    QLabel *textLabel45;
    QLineEdit *Le17deform;
    QSpacerItem *spacerItem30;
    QWidget *page_17;
    QGridLayout *gridLayout22;
    QLabel *textLabel46_2;
    QComboBox *Co18disre;
    QLabel *textLabel47;
    QComboBox *Co18disweight;
    QLabel *textLabel48_2;
    QSpacerItem *spacerItem31;
    QComboBox *Co18dismixed;
    QLabel *textLabel51_2;
    QLineEdit *Le18nstdisreout;
    QLabel *textLabel49;
    QLineEdit *Le18disrefc;
    QLabel *textLabel50;
    QLineEdit *Le18disretau;
    QLabel *textLabel53;
    QSpacerItem *spacerItem32;
    QComboBox *Co18orie;
    QSpacerItem *spacerItem33;
    QLabel *textLabel52_2;
    QLineEdit *Le18oriefc;
    QLabel *textLabel54;
    QLineEdit *Le18orietau;
    QLabel *textLabel56_2;
    QSpacerItem *spacerItem34;
    QLineEdit *Le18oriefitgrp;
    QLabel *textLabel55_2;
    QLineEdit *Le18nstorireout;
    QSpacerItem *spacerItem35;
    QWidget *page_18;
    QGridLayout *gridLayout23;
    QLabel *textLabel60_2;
    QLineEdit *Le21enerexclud;
    QSpacerItem *spacerItem36;
    QWidget *tab_2;
    QGridLayout *gridLayout24;
    QTextEdit *tePreview;
    QSpacerItem *spacerItem37;
    QPushButton *pbSave;
    QSpacerItem *spacerItem38;
    QPushButton *pbPreview;
    QPushButton *pbClose;

    void setupUi(QWidget *MdpConfigClass)
    {
    if (MdpConfigClass->objectName().isEmpty())
        MdpConfigClass->setObjectName(QString::fromUtf8("MdpConfigClass"));
    MdpConfigClass->resize(685, 420);
    gridLayout = new QGridLayout(MdpConfigClass);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    tabwMain = new QTabWidget(MdpConfigClass);
    tabwMain->setObjectName(QString::fromUtf8("tabwMain"));
    tabwMain->setTabShape(QTabWidget::Rounded);
    tab = new QWidget();
    tab->setObjectName(QString::fromUtf8("tab"));
    gridLayout1 = new QGridLayout(tab);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    liwMdpOptions = new QListWidget(tab);
    liwMdpOptions->setObjectName(QString::fromUtf8("liwMdpOptions"));
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(liwMdpOptions->sizePolicy().hasHeightForWidth());
    liwMdpOptions->setSizePolicy(sizePolicy);
    liwMdpOptions->setMaximumSize(QSize(181, 16777215));

    gridLayout1->addWidget(liwMdpOptions, 0, 0, 1, 1);

    stackwSetting = new QStackedWidget(tab);
    stackwSetting->setObjectName(QString::fromUtf8("stackwSetting"));
    page = new QWidget();
    page->setObjectName(QString::fromUtf8("page"));
    gridLayout2 = new QGridLayout(page);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    label_2 = new QLabel(page);
    label_2->setObjectName(QString::fromUtf8("label_2"));

    gridLayout2->addWidget(label_2, 0, 0, 1, 1);

    spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout2->addItem(spacerItem, 1, 0, 1, 1);

    stackwSetting->addWidget(page);
    page_2 = new QWidget();
    page_2->setObjectName(QString::fromUtf8("page_2"));
    gridLayout3 = new QGridLayout(page_2);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    textLabel3 = new QLabel(page_2);
    textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
    textLabel3->setWordWrap(false);

    gridLayout3->addWidget(textLabel3, 0, 0, 1, 1);

    Le2title = new QLineEdit(page_2);
    Le2title->setObjectName(QString::fromUtf8("Le2title"));

    gridLayout3->addWidget(Le2title, 0, 1, 1, 1);

    textLabel1_2 = new QLabel(page_2);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
    textLabel1_2->setWordWrap(false);

    gridLayout3->addWidget(textLabel1_2, 1, 0, 1, 1);

    Le2pre = new QLineEdit(page_2);
    Le2pre->setObjectName(QString::fromUtf8("Le2pre"));

    gridLayout3->addWidget(Le2pre, 1, 1, 1, 1);

    textLabel2 = new QLabel(page_2);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
    textLabel2->setWordWrap(false);

    gridLayout3->addWidget(textLabel2, 2, 0, 1, 1);

    Le2include = new QLineEdit(page_2);
    Le2include->setObjectName(QString::fromUtf8("Le2include"));

    gridLayout3->addWidget(Le2include, 2, 1, 1, 1);

    textLabel4 = new QLabel(page_2);
    textLabel4->setObjectName(QString::fromUtf8("textLabel4"));
    textLabel4->setWordWrap(false);

    gridLayout3->addWidget(textLabel4, 3, 0, 1, 1);

    Co2define = new QComboBox(page_2);
    Co2define->setObjectName(QString::fromUtf8("Co2define"));
    Co2define->setEditable(true);

    gridLayout3->addWidget(Co2define, 3, 1, 1, 1);

    spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout3->addItem(spacerItem1, 4, 1, 1, 1);

    stackwSetting->addWidget(page_2);
    page_3 = new QWidget();
    page_3->setObjectName(QString::fromUtf8("page_3"));
    gridLayout4 = new QGridLayout(page_3);
    gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
    textLabel1_3 = new QLabel(page_3);
    textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));
    textLabel1_3->setWordWrap(false);

    gridLayout4->addWidget(textLabel1_3, 0, 0, 1, 1);

    spacerItem2 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout4->addItem(spacerItem2, 0, 1, 1, 1);

    Co3integrator = new QComboBox(page_3);
    Co3integrator->setObjectName(QString::fromUtf8("Co3integrator"));
    Co3integrator->setMinimumSize(QSize(64, 0));
    Co3integrator->setMaximumSize(QSize(100, 16777215));

    gridLayout4->addWidget(Co3integrator, 0, 2, 1, 1);

    textLabel2_3 = new QLabel(page_3);
    textLabel2_3->setObjectName(QString::fromUtf8("textLabel2_3"));
    textLabel2_3->setWordWrap(false);

    gridLayout4->addWidget(textLabel2_3, 1, 0, 1, 2);

    Le3tinit = new QLineEdit(page_3);
    Le3tinit->setObjectName(QString::fromUtf8("Le3tinit"));
    Le3tinit->setMaximumSize(QSize(50, 16777215));

    gridLayout4->addWidget(Le3tinit, 1, 2, 1, 1);

    textLabel3_2 = new QLabel(page_3);
    textLabel3_2->setObjectName(QString::fromUtf8("textLabel3_2"));
    textLabel3_2->setWordWrap(false);

    gridLayout4->addWidget(textLabel3_2, 2, 0, 1, 1);

    Le3dt = new QLineEdit(page_3);
    Le3dt->setObjectName(QString::fromUtf8("Le3dt"));
    Le3dt->setMaximumSize(QSize(50, 16777215));

    gridLayout4->addWidget(Le3dt, 2, 2, 1, 1);

    textLabel4_2 = new QLabel(page_3);
    textLabel4_2->setObjectName(QString::fromUtf8("textLabel4_2"));
    textLabel4_2->setWordWrap(false);

    gridLayout4->addWidget(textLabel4_2, 3, 0, 1, 1);

    Le3nsteps = new QLineEdit(page_3);
    Le3nsteps->setObjectName(QString::fromUtf8("Le3nsteps"));
    Le3nsteps->setMaximumSize(QSize(50, 16777215));

    gridLayout4->addWidget(Le3nsteps, 3, 2, 1, 1);

    textLabel5 = new QLabel(page_3);
    textLabel5->setObjectName(QString::fromUtf8("textLabel5"));
    textLabel5->setWordWrap(false);

    gridLayout4->addWidget(textLabel5, 4, 0, 1, 1);

    Le3initstep = new QLineEdit(page_3);
    Le3initstep->setObjectName(QString::fromUtf8("Le3initstep"));
    Le3initstep->setMaximumSize(QSize(50, 16777215));

    gridLayout4->addWidget(Le3initstep, 4, 2, 1, 1);

    textLabel6 = new QLabel(page_3);
    textLabel6->setObjectName(QString::fromUtf8("textLabel6"));
    textLabel6->setWordWrap(false);

    gridLayout4->addWidget(textLabel6, 5, 0, 1, 2);

    Co3commmode = new QComboBox(page_3);
    Co3commmode->setObjectName(QString::fromUtf8("Co3commmode"));
    Co3commmode->setMinimumSize(QSize(64, 0));
    Co3commmode->setMaximumSize(QSize(100, 16777215));

    gridLayout4->addWidget(Co3commmode, 5, 2, 1, 1);

    textLabel7 = new QLabel(page_3);
    textLabel7->setObjectName(QString::fromUtf8("textLabel7"));
    textLabel7->setWordWrap(false);

    gridLayout4->addWidget(textLabel7, 6, 0, 1, 2);

    Le3nstcomm = new QLineEdit(page_3);
    Le3nstcomm->setObjectName(QString::fromUtf8("Le3nstcomm"));
    Le3nstcomm->setMaximumSize(QSize(50, 16777215));

    gridLayout4->addWidget(Le3nstcomm, 6, 2, 1, 1);

    textLabel8 = new QLabel(page_3);
    textLabel8->setObjectName(QString::fromUtf8("textLabel8"));
    textLabel8->setWordWrap(false);

    gridLayout4->addWidget(textLabel8, 7, 0, 1, 2);

    Le3commgrps = new QLineEdit(page_3);
    Le3commgrps->setObjectName(QString::fromUtf8("Le3commgrps"));
    Le3commgrps->setMaximumSize(QSize(50, 16777215));

    gridLayout4->addWidget(Le3commgrps, 7, 2, 1, 1);

    spacerItem3 = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout4->addItem(spacerItem3, 8, 1, 1, 1);

    stackwSetting->addWidget(page_3);
    page_4 = new QWidget();
    page_4->setObjectName(QString::fromUtf8("page_4"));
    gridLayout5 = new QGridLayout(page_4);
    gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
    textLabel1_4 = new QLabel(page_4);
    textLabel1_4->setObjectName(QString::fromUtf8("textLabel1_4"));
    textLabel1_4->setWordWrap(false);

    gridLayout5->addWidget(textLabel1_4, 0, 0, 1, 1);

    Le4emtol = new QLineEdit(page_4);
    Le4emtol->setObjectName(QString::fromUtf8("Le4emtol"));
    Le4emtol->setMaximumSize(QSize(50, 16777215));

    gridLayout5->addWidget(Le4emtol, 0, 2, 1, 1);

    textLabel2_4 = new QLabel(page_4);
    textLabel2_4->setObjectName(QString::fromUtf8("textLabel2_4"));
    textLabel2_4->setWordWrap(false);

    gridLayout5->addWidget(textLabel2_4, 1, 0, 1, 1);

    Le4emstep = new QLineEdit(page_4);
    Le4emstep->setObjectName(QString::fromUtf8("Le4emstep"));
    Le4emstep->setMaximumSize(QSize(50, 16777215));

    gridLayout5->addWidget(Le4emstep, 1, 2, 1, 1);

    textLabel3_3 = new QLabel(page_4);
    textLabel3_3->setObjectName(QString::fromUtf8("textLabel3_3"));
    textLabel3_3->setWordWrap(false);

    gridLayout5->addWidget(textLabel3_3, 2, 0, 1, 1);

    spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout5->addItem(spacerItem4, 2, 1, 1, 1);

    Le4nstcgsteep = new QLineEdit(page_4);
    Le4nstcgsteep->setObjectName(QString::fromUtf8("Le4nstcgsteep"));
    Le4nstcgsteep->setMaximumSize(QSize(50, 16777215));

    gridLayout5->addWidget(Le4nstcgsteep, 2, 2, 1, 1);

    textLabel4_3 = new QLabel(page_4);
    textLabel4_3->setObjectName(QString::fromUtf8("textLabel4_3"));
    textLabel4_3->setWordWrap(false);

    gridLayout5->addWidget(textLabel4_3, 3, 0, 1, 1);

    Le4nbfgscorr = new QLineEdit(page_4);
    Le4nbfgscorr->setObjectName(QString::fromUtf8("Le4nbfgscorr"));
    Le4nbfgscorr->setMaximumSize(QSize(50, 16777215));

    gridLayout5->addWidget(Le4nbfgscorr, 3, 2, 1, 1);

    spacerItem5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout5->addItem(spacerItem5, 4, 0, 1, 1);

    stackwSetting->addWidget(page_4);
    page_5 = new QWidget();
    page_5->setObjectName(QString::fromUtf8("page_5"));
    gridLayout6 = new QGridLayout(page_5);
    gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
    textLabel5_2 = new QLabel(page_5);
    textLabel5_2->setObjectName(QString::fromUtf8("textLabel5_2"));
    textLabel5_2->setWordWrap(false);

    gridLayout6->addWidget(textLabel5_2, 0, 0, 1, 2);

    Le5nstlist = new QLineEdit(page_5);
    Le5nstlist->setObjectName(QString::fromUtf8("Le5nstlist"));
    Le5nstlist->setMaximumSize(QSize(50, 16777215));

    gridLayout6->addWidget(Le5nstlist, 0, 2, 1, 1);

    textLabel6_2 = new QLabel(page_5);
    textLabel6_2->setObjectName(QString::fromUtf8("textLabel6_2"));
    textLabel6_2->setWordWrap(false);

    gridLayout6->addWidget(textLabel6_2, 1, 0, 1, 1);

    spacerItem6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout6->addItem(spacerItem6, 1, 1, 1, 1);

    Co5nstype = new QComboBox(page_5);
    Co5nstype->setObjectName(QString::fromUtf8("Co5nstype"));
    Co5nstype->setMaximumSize(QSize(50, 16777215));

    gridLayout6->addWidget(Co5nstype, 1, 2, 1, 1);

    textLabel7_2 = new QLabel(page_5);
    textLabel7_2->setObjectName(QString::fromUtf8("textLabel7_2"));
    textLabel7_2->setWordWrap(false);

    gridLayout6->addWidget(textLabel7_2, 2, 0, 1, 1);

    spacerItem7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout6->addItem(spacerItem7, 2, 1, 1, 1);

    Co5pbc = new QComboBox(page_5);
    Co5pbc->setObjectName(QString::fromUtf8("Co5pbc"));
    Co5pbc->setMaximumSize(QSize(50, 16777215));

    gridLayout6->addWidget(Co5pbc, 2, 2, 1, 1);

    textLabel8_2 = new QLabel(page_5);
    textLabel8_2->setObjectName(QString::fromUtf8("textLabel8_2"));
    textLabel8_2->setWordWrap(false);

    gridLayout6->addWidget(textLabel8_2, 3, 0, 1, 1);

    spacerItem8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout6->addItem(spacerItem8, 3, 1, 1, 1);

    Le5rlist = new QLineEdit(page_5);
    Le5rlist->setObjectName(QString::fromUtf8("Le5rlist"));
    Le5rlist->setMaximumSize(QSize(50, 16777215));

    gridLayout6->addWidget(Le5rlist, 3, 2, 1, 1);

    spacerItem9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout6->addItem(spacerItem9, 4, 0, 1, 1);

    stackwSetting->addWidget(page_5);
    page_6 = new QWidget();
    page_6->setObjectName(QString::fromUtf8("page_6"));
    gridLayout7 = new QGridLayout(page_6);
    gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
    textLabel9 = new QLabel(page_6);
    textLabel9->setObjectName(QString::fromUtf8("textLabel9"));
    textLabel9->setWordWrap(false);

    gridLayout7->addWidget(textLabel9, 0, 0, 1, 1);

    spacerItem10 = new QSpacerItem(133, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout7->addItem(spacerItem10, 0, 1, 1, 1);

    Co6constraints = new QComboBox(page_6);
    Co6constraints->setObjectName(QString::fromUtf8("Co6constraints"));
    Co6constraints->setMaximumSize(QSize(100, 16777215));

    gridLayout7->addWidget(Co6constraints, 0, 2, 1, 1);

    textLabel10 = new QLabel(page_6);
    textLabel10->setObjectName(QString::fromUtf8("textLabel10"));
    textLabel10->setEnabled(true);
    textLabel10->setWordWrap(false);

    gridLayout7->addWidget(textLabel10, 1, 0, 1, 2);

    Co6constalg = new QComboBox(page_6);
    Co6constalg->setObjectName(QString::fromUtf8("Co6constalg"));
    Co6constalg->setEnabled(true);
    Co6constalg->setMaximumSize(QSize(55, 16777215));

    gridLayout7->addWidget(Co6constalg, 1, 2, 1, 1);

    textLabel11 = new QLabel(page_6);
    textLabel11->setObjectName(QString::fromUtf8("textLabel11"));
    textLabel11->setWordWrap(false);

    gridLayout7->addWidget(textLabel11, 2, 0, 1, 2);

    Co6unconststart = new QComboBox(page_6);
    Co6unconststart->setObjectName(QString::fromUtf8("Co6unconststart"));
    Co6unconststart->setEnabled(true);
    Co6unconststart->setMaximumSize(QSize(55, 16777215));

    gridLayout7->addWidget(Co6unconststart, 2, 2, 1, 1);

    textLabel12 = new QLabel(page_6);
    textLabel12->setObjectName(QString::fromUtf8("textLabel12"));
    textLabel12->setWordWrap(false);

    gridLayout7->addWidget(textLabel12, 3, 0, 1, 2);

    Le6shaketol = new QLineEdit(page_6);
    Le6shaketol->setObjectName(QString::fromUtf8("Le6shaketol"));
    Le6shaketol->setEnabled(true);
    Le6shaketol->setMaximumSize(QSize(55, 16777215));

    gridLayout7->addWidget(Le6shaketol, 3, 2, 1, 1);

    textLabel13 = new QLabel(page_6);
    textLabel13->setObjectName(QString::fromUtf8("textLabel13"));
    textLabel13->setWordWrap(false);

    gridLayout7->addWidget(textLabel13, 4, 0, 1, 2);

    Le6lincsorder = new QLineEdit(page_6);
    Le6lincsorder->setObjectName(QString::fromUtf8("Le6lincsorder"));
    Le6lincsorder->setEnabled(true);
    Le6lincsorder->setMaximumSize(QSize(55, 16777215));

    gridLayout7->addWidget(Le6lincsorder, 4, 2, 1, 1);

    textLabel14 = new QLabel(page_6);
    textLabel14->setObjectName(QString::fromUtf8("textLabel14"));
    textLabel14->setWordWrap(false);

    gridLayout7->addWidget(textLabel14, 5, 0, 1, 2);

    Le6lincsiter = new QLineEdit(page_6);
    Le6lincsiter->setObjectName(QString::fromUtf8("Le6lincsiter"));
    Le6lincsiter->setEnabled(true);
    Le6lincsiter->setMaximumSize(QSize(55, 16777215));

    gridLayout7->addWidget(Le6lincsiter, 5, 2, 1, 1);

    textLabel15 = new QLabel(page_6);
    textLabel15->setObjectName(QString::fromUtf8("textLabel15"));
    textLabel15->setWordWrap(false);

    gridLayout7->addWidget(textLabel15, 6, 0, 1, 2);

    Le6lincswarna = new QLineEdit(page_6);
    Le6lincswarna->setObjectName(QString::fromUtf8("Le6lincswarna"));
    Le6lincswarna->setEnabled(true);
    Le6lincswarna->setMaximumSize(QSize(55, 16777215));

    gridLayout7->addWidget(Le6lincswarna, 6, 2, 1, 1);

    textLabel16 = new QLabel(page_6);
    textLabel16->setObjectName(QString::fromUtf8("textLabel16"));
    textLabel16->setWordWrap(false);

    gridLayout7->addWidget(textLabel16, 7, 0, 1, 2);

    Co6morse = new QComboBox(page_6);
    Co6morse->setObjectName(QString::fromUtf8("Co6morse"));
    Co6morse->setEnabled(true);
    Co6morse->setMaximumSize(QSize(55, 16777215));

    gridLayout7->addWidget(Co6morse, 7, 2, 1, 1);

    spacerItem11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout7->addItem(spacerItem11, 8, 0, 1, 1);

    stackwSetting->addWidget(page_6);
    page_7 = new QWidget();
    page_7->setObjectName(QString::fromUtf8("page_7"));
    gridLayout8 = new QGridLayout(page_7);
    gridLayout8->setObjectName(QString::fromUtf8("gridLayout8"));
    TbElectrostatic = new QTabWidget(page_7);
    TbElectrostatic->setObjectName(QString::fromUtf8("TbElectrostatic"));
    TbElectrostatic->setEnabled(true);
    tab_3 = new QWidget();
    tab_3->setObjectName(QString::fromUtf8("tab_3"));
    gridLayout9 = new QGridLayout(tab_3);
    gridLayout9->setObjectName(QString::fromUtf8("gridLayout9"));
    textLabel17 = new QLabel(tab_3);
    textLabel17->setObjectName(QString::fromUtf8("textLabel17"));
    textLabel17->setWordWrap(false);

    gridLayout9->addWidget(textLabel17, 0, 0, 1, 1);

    Co7coulotype = new QComboBox(tab_3);
    Co7coulotype->setObjectName(QString::fromUtf8("Co7coulotype"));
    QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(Co7coulotype->sizePolicy().hasHeightForWidth());
    Co7coulotype->setSizePolicy(sizePolicy1);
    Co7coulotype->setMaximumSize(QSize(183, 16777215));

    gridLayout9->addWidget(Co7coulotype, 0, 1, 1, 2);

    textLabel18 = new QLabel(tab_3);
    textLabel18->setObjectName(QString::fromUtf8("textLabel18"));
    textLabel18->setWordWrap(false);

    gridLayout9->addWidget(textLabel18, 1, 0, 1, 2);

    Le7rcouloswitch = new QLineEdit(tab_3);
    Le7rcouloswitch->setObjectName(QString::fromUtf8("Le7rcouloswitch"));
    sizePolicy1.setHeightForWidth(Le7rcouloswitch->sizePolicy().hasHeightForWidth());
    Le7rcouloswitch->setSizePolicy(sizePolicy1);
    Le7rcouloswitch->setMaximumSize(QSize(41, 16777215));

    gridLayout9->addWidget(Le7rcouloswitch, 1, 2, 1, 1);

    textLabel19 = new QLabel(tab_3);
    textLabel19->setObjectName(QString::fromUtf8("textLabel19"));
    textLabel19->setWordWrap(false);

    gridLayout9->addWidget(textLabel19, 2, 0, 1, 1);

    Le7rcoulomb = new QLineEdit(tab_3);
    Le7rcoulomb->setObjectName(QString::fromUtf8("Le7rcoulomb"));
    sizePolicy1.setHeightForWidth(Le7rcoulomb->sizePolicy().hasHeightForWidth());
    Le7rcoulomb->setSizePolicy(sizePolicy1);
    Le7rcoulomb->setMaximumSize(QSize(41, 16777215));

    gridLayout9->addWidget(Le7rcoulomb, 2, 2, 1, 1);

    textLabel20 = new QLabel(tab_3);
    textLabel20->setObjectName(QString::fromUtf8("textLabel20"));
    textLabel20->setWordWrap(false);

    gridLayout9->addWidget(textLabel20, 3, 0, 1, 2);

    Le7epsilonr = new QLineEdit(tab_3);
    Le7epsilonr->setObjectName(QString::fromUtf8("Le7epsilonr"));
    sizePolicy1.setHeightForWidth(Le7epsilonr->sizePolicy().hasHeightForWidth());
    Le7epsilonr->setSizePolicy(sizePolicy1);
    Le7epsilonr->setMaximumSize(QSize(41, 16777215));

    gridLayout9->addWidget(Le7epsilonr, 3, 2, 1, 1);

    textLabel21 = new QLabel(tab_3);
    textLabel21->setObjectName(QString::fromUtf8("textLabel21"));
    textLabel21->setWordWrap(false);

    gridLayout9->addWidget(textLabel21, 4, 0, 1, 2);

    Le7epsilonrf = new QLineEdit(tab_3);
    Le7epsilonrf->setObjectName(QString::fromUtf8("Le7epsilonrf"));
    sizePolicy1.setHeightForWidth(Le7epsilonrf->sizePolicy().hasHeightForWidth());
    Le7epsilonrf->setSizePolicy(sizePolicy1);
    Le7epsilonrf->setMaximumSize(QSize(41, 16777215));

    gridLayout9->addWidget(Le7epsilonrf, 4, 2, 1, 1);

    spacerItem12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout9->addItem(spacerItem12, 5, 0, 1, 1);

    TbElectrostatic->addTab(tab_3, QString());
    tab_4 = new QWidget();
    tab_4->setObjectName(QString::fromUtf8("tab_4"));
    gridLayout10 = new QGridLayout(tab_4);
    gridLayout10->setObjectName(QString::fromUtf8("gridLayout10"));
    textLabel22 = new QLabel(tab_4);
    textLabel22->setObjectName(QString::fromUtf8("textLabel22"));
    textLabel22->setWordWrap(false);

    gridLayout10->addWidget(textLabel22, 0, 0, 1, 5);

    Le7fouspacing = new QLineEdit(tab_4);
    Le7fouspacing->setObjectName(QString::fromUtf8("Le7fouspacing"));
    Le7fouspacing->setMaximumSize(QSize(41, 16777215));

    gridLayout10->addWidget(Le7fouspacing, 0, 5, 1, 1);

    textLabel23 = new QLabel(tab_4);
    textLabel23->setObjectName(QString::fromUtf8("textLabel23"));
    textLabel23->setWordWrap(false);

    gridLayout10->addWidget(textLabel23, 1, 0, 1, 1);

    Le7founx = new QLineEdit(tab_4);
    Le7founx->setObjectName(QString::fromUtf8("Le7founx"));
    Le7founx->setMaximumSize(QSize(41, 16777215));

    gridLayout10->addWidget(Le7founx, 1, 1, 1, 1);

    textLabel24 = new QLabel(tab_4);
    textLabel24->setObjectName(QString::fromUtf8("textLabel24"));
    textLabel24->setWordWrap(false);

    gridLayout10->addWidget(textLabel24, 1, 2, 1, 1);

    Le7founy = new QLineEdit(tab_4);
    Le7founy->setObjectName(QString::fromUtf8("Le7founy"));
    Le7founy->setMaximumSize(QSize(41, 16777215));

    gridLayout10->addWidget(Le7founy, 1, 3, 1, 1);

    textLabel25 = new QLabel(tab_4);
    textLabel25->setObjectName(QString::fromUtf8("textLabel25"));
    textLabel25->setWordWrap(false);

    gridLayout10->addWidget(textLabel25, 1, 4, 1, 1);

    Le7founz = new QLineEdit(tab_4);
    Le7founz->setObjectName(QString::fromUtf8("Le7founz"));
    Le7founz->setMaximumSize(QSize(41, 16777215));

    gridLayout10->addWidget(Le7founz, 1, 5, 1, 1);

    textLabel26 = new QLabel(tab_4);
    textLabel26->setObjectName(QString::fromUtf8("textLabel26"));
    textLabel26->setWordWrap(false);

    gridLayout10->addWidget(textLabel26, 2, 0, 1, 4);

    Le7pmeorder = new QLineEdit(tab_4);
    Le7pmeorder->setObjectName(QString::fromUtf8("Le7pmeorder"));
    Le7pmeorder->setMaximumSize(QSize(41, 16777215));

    gridLayout10->addWidget(Le7pmeorder, 2, 5, 1, 1);

    textLabel27 = new QLabel(tab_4);
    textLabel27->setObjectName(QString::fromUtf8("textLabel27"));
    textLabel27->setWordWrap(false);

    gridLayout10->addWidget(textLabel27, 3, 0, 1, 5);

    Le7ewaldrtol = new QLineEdit(tab_4);
    Le7ewaldrtol->setObjectName(QString::fromUtf8("Le7ewaldrtol"));
    Le7ewaldrtol->setMaximumSize(QSize(41, 16777215));

    gridLayout10->addWidget(Le7ewaldrtol, 3, 5, 1, 1);

    textLabel28 = new QLabel(tab_4);
    textLabel28->setObjectName(QString::fromUtf8("textLabel28"));
    textLabel28->setWordWrap(false);

    gridLayout10->addWidget(textLabel28, 4, 0, 1, 5);

    Co7ewaldgeo = new QComboBox(tab_4);
    Co7ewaldgeo->setObjectName(QString::fromUtf8("Co7ewaldgeo"));
    Co7ewaldgeo->setMaximumSize(QSize(41, 16777215));
    Co7ewaldgeo->setEditable(true);

    gridLayout10->addWidget(Co7ewaldgeo, 4, 5, 1, 1);

    textLabel29 = new QLabel(tab_4);
    textLabel29->setObjectName(QString::fromUtf8("textLabel29"));
    textLabel29->setWordWrap(false);

    gridLayout10->addWidget(textLabel29, 5, 0, 1, 4);

    Le7epsisurf = new QLineEdit(tab_4);
    Le7epsisurf->setObjectName(QString::fromUtf8("Le7epsisurf"));
    Le7epsisurf->setMaximumSize(QSize(41, 16777215));

    gridLayout10->addWidget(Le7epsisurf, 5, 5, 1, 1);

    textLabel30 = new QLabel(tab_4);
    textLabel30->setObjectName(QString::fromUtf8("textLabel30"));
    textLabel30->setWordWrap(false);

    gridLayout10->addWidget(textLabel30, 6, 0, 1, 3);

    spacerItem13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout10->addItem(spacerItem13, 6, 3, 1, 2);

    Co7optimfft = new QComboBox(tab_4);
    Co7optimfft->setObjectName(QString::fromUtf8("Co7optimfft"));
    Co7optimfft->setMaximumSize(QSize(41, 16777215));

    gridLayout10->addWidget(Co7optimfft, 6, 5, 1, 1);

    spacerItem14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout10->addItem(spacerItem14, 7, 0, 1, 1);

    TbElectrostatic->addTab(tab_4, QString());

    gridLayout8->addWidget(TbElectrostatic, 0, 0, 1, 1);

    stackwSetting->addWidget(page_7);
    page_8 = new QWidget();
    page_8->setObjectName(QString::fromUtf8("page_8"));
    gridLayout11 = new QGridLayout(page_8);
    gridLayout11->setObjectName(QString::fromUtf8("gridLayout11"));
    textLabel1_5 = new QLabel(page_8);
    textLabel1_5->setObjectName(QString::fromUtf8("textLabel1_5"));
    textLabel1_5->setWordWrap(false);

    gridLayout11->addWidget(textLabel1_5, 0, 0, 1, 1);

    spacerItem15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout11->addItem(spacerItem15, 0, 1, 1, 1);

    Co8vdwtype = new QComboBox(page_8);
    Co8vdwtype->setObjectName(QString::fromUtf8("Co8vdwtype"));
    Co8vdwtype->setMinimumSize(QSize(80, 0));
    Co8vdwtype->setMaximumSize(QSize(120, 16777215));

    gridLayout11->addWidget(Co8vdwtype, 0, 2, 1, 2);

    textLabel2_5 = new QLabel(page_8);
    textLabel2_5->setObjectName(QString::fromUtf8("textLabel2_5"));
    textLabel2_5->setWordWrap(false);

    gridLayout11->addWidget(textLabel2_5, 1, 0, 1, 3);

    Le8rdwswitch = new QLineEdit(page_8);
    Le8rdwswitch->setObjectName(QString::fromUtf8("Le8rdwswitch"));
    Le8rdwswitch->setMaximumSize(QSize(67, 16777215));

    gridLayout11->addWidget(Le8rdwswitch, 1, 3, 1, 1);

    textLabel3_4 = new QLabel(page_8);
    textLabel3_4->setObjectName(QString::fromUtf8("textLabel3_4"));
    textLabel3_4->setWordWrap(false);

    gridLayout11->addWidget(textLabel3_4, 2, 0, 1, 3);

    Le8rvdw = new QLineEdit(page_8);
    Le8rvdw->setObjectName(QString::fromUtf8("Le8rvdw"));
    Le8rvdw->setMaximumSize(QSize(67, 16777215));

    gridLayout11->addWidget(Le8rvdw, 2, 3, 1, 1);

    textLabel4_4 = new QLabel(page_8);
    textLabel4_4->setObjectName(QString::fromUtf8("textLabel4_4"));
    textLabel4_4->setWordWrap(false);

    gridLayout11->addWidget(textLabel4_4, 3, 0, 1, 3);

    Co8dispcorr = new QComboBox(page_8);
    Co8dispcorr->setObjectName(QString::fromUtf8("Co8dispcorr"));
    Co8dispcorr->setMaximumSize(QSize(67, 16777215));

    gridLayout11->addWidget(Co8dispcorr, 3, 3, 1, 1);

    spacerItem16 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout11->addItem(spacerItem16, 4, 3, 1, 1);

    stackwSetting->addWidget(page_8);
    page_9 = new QWidget();
    page_9->setObjectName(QString::fromUtf8("page_9"));
    gridLayout12 = new QGridLayout(page_9);
    gridLayout12->setObjectName(QString::fromUtf8("gridLayout12"));
    textLabel5_3 = new QLabel(page_9);
    textLabel5_3->setObjectName(QString::fromUtf8("textLabel5_3"));
    textLabel5_3->setWordWrap(false);

    gridLayout12->addWidget(textLabel5_3, 0, 0, 1, 2);

    Le9nstxout = new QLineEdit(page_9);
    Le9nstxout->setObjectName(QString::fromUtf8("Le9nstxout"));

    gridLayout12->addWidget(Le9nstxout, 0, 2, 1, 1);

    textLabel6_3 = new QLabel(page_9);
    textLabel6_3->setObjectName(QString::fromUtf8("textLabel6_3"));
    textLabel6_3->setWordWrap(false);

    gridLayout12->addWidget(textLabel6_3, 1, 0, 1, 2);

    Le9nstv = new QLineEdit(page_9);
    Le9nstv->setObjectName(QString::fromUtf8("Le9nstv"));

    gridLayout12->addWidget(Le9nstv, 1, 2, 1, 1);

    textLabel7_3 = new QLabel(page_9);
    textLabel7_3->setObjectName(QString::fromUtf8("textLabel7_3"));
    textLabel7_3->setWordWrap(false);

    gridLayout12->addWidget(textLabel7_3, 2, 0, 1, 2);

    Le9nstf = new QLineEdit(page_9);
    Le9nstf->setObjectName(QString::fromUtf8("Le9nstf"));

    gridLayout12->addWidget(Le9nstf, 2, 2, 1, 1);

    textLabel8_3 = new QLabel(page_9);
    textLabel8_3->setObjectName(QString::fromUtf8("textLabel8_3"));
    textLabel8_3->setWordWrap(false);

    gridLayout12->addWidget(textLabel8_3, 3, 0, 1, 1);

    spacerItem17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout12->addItem(spacerItem17, 3, 1, 1, 1);

    Le9nstlog = new QLineEdit(page_9);
    Le9nstlog->setObjectName(QString::fromUtf8("Le9nstlog"));

    gridLayout12->addWidget(Le9nstlog, 3, 2, 1, 1);

    textLabel9_2 = new QLabel(page_9);
    textLabel9_2->setObjectName(QString::fromUtf8("textLabel9_2"));
    textLabel9_2->setWordWrap(false);

    gridLayout12->addWidget(textLabel9_2, 4, 0, 1, 2);

    Le9nstener = new QLineEdit(page_9);
    Le9nstener->setObjectName(QString::fromUtf8("Le9nstener"));

    gridLayout12->addWidget(Le9nstener, 4, 2, 1, 1);

    textLabel12_2 = new QLabel(page_9);
    textLabel12_2->setObjectName(QString::fromUtf8("textLabel12_2"));
    textLabel12_2->setWordWrap(false);

    gridLayout12->addWidget(textLabel12_2, 5, 0, 1, 2);

    Le9nstxtc = new QLineEdit(page_9);
    Le9nstxtc->setObjectName(QString::fromUtf8("Le9nstxtc"));

    gridLayout12->addWidget(Le9nstxtc, 5, 2, 1, 1);

    textLabel10_2 = new QLabel(page_9);
    textLabel10_2->setObjectName(QString::fromUtf8("textLabel10_2"));
    textLabel10_2->setWordWrap(false);

    gridLayout12->addWidget(textLabel10_2, 6, 0, 1, 2);

    Le9xtcpre = new QLineEdit(page_9);
    Le9xtcpre->setObjectName(QString::fromUtf8("Le9xtcpre"));

    gridLayout12->addWidget(Le9xtcpre, 6, 2, 1, 1);

    hboxLayout = new QHBoxLayout();
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    textLabel11_2 = new QLabel(page_9);
    textLabel11_2->setObjectName(QString::fromUtf8("textLabel11_2"));
    textLabel11_2->setWordWrap(false);

    hboxLayout->addWidget(textLabel11_2);

    Le9xtcgrps = new QLineEdit(page_9);
    Le9xtcgrps->setObjectName(QString::fromUtf8("Le9xtcgrps"));

    hboxLayout->addWidget(Le9xtcgrps);


    gridLayout12->addLayout(hboxLayout, 7, 0, 1, 3);

    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    textLabel13_2 = new QLabel(page_9);
    textLabel13_2->setObjectName(QString::fromUtf8("textLabel13_2"));
    textLabel13_2->setWordWrap(false);

    hboxLayout1->addWidget(textLabel13_2);

    Le9energygrps = new QLineEdit(page_9);
    Le9energygrps->setObjectName(QString::fromUtf8("Le9energygrps"));

    hboxLayout1->addWidget(Le9energygrps);


    gridLayout12->addLayout(hboxLayout1, 8, 0, 1, 3);

    spacerItem18 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout12->addItem(spacerItem18, 9, 0, 1, 1);

    stackwSetting->addWidget(page_9);
    page_10 = new QWidget();
    page_10->setObjectName(QString::fromUtf8("page_10"));
    gridLayout13 = new QGridLayout(page_10);
    gridLayout13->setObjectName(QString::fromUtf8("gridLayout13"));
    tabWidget4 = new QTabWidget(page_10);
    tabWidget4->setObjectName(QString::fromUtf8("tabWidget4"));
    tabWidget4->setEnabled(true);
    tab_5 = new QWidget();
    tab_5->setObjectName(QString::fromUtf8("tab_5"));
    gridLayout14 = new QGridLayout(tab_5);
    gridLayout14->setObjectName(QString::fromUtf8("gridLayout14"));
    textLabel14_2 = new QLabel(tab_5);
    textLabel14_2->setObjectName(QString::fromUtf8("textLabel14_2"));
    textLabel14_2->setWordWrap(false);

    gridLayout14->addWidget(textLabel14_2, 0, 0, 1, 1);

    Co10tcouple = new QComboBox(tab_5);
    Co10tcouple->setObjectName(QString::fromUtf8("Co10tcouple"));
    Co10tcouple->setMaximumSize(QSize(100, 16777215));

    gridLayout14->addWidget(Co10tcouple, 0, 2, 1, 1);

    textLabel15_2 = new QLabel(tab_5);
    textLabel15_2->setObjectName(QString::fromUtf8("textLabel15_2"));
    textLabel15_2->setWordWrap(false);

    gridLayout14->addWidget(textLabel15_2, 1, 0, 1, 3);

    Le10tcgrps = new QLineEdit(tab_5);
    Le10tcgrps->setObjectName(QString::fromUtf8("Le10tcgrps"));
    Le10tcgrps->setEnabled(true);

    gridLayout14->addWidget(Le10tcgrps, 2, 0, 1, 3);

    textLabel17_2 = new QLabel(tab_5);
    textLabel17_2->setObjectName(QString::fromUtf8("textLabel17_2"));
    textLabel17_2->setWordWrap(false);

    gridLayout14->addWidget(textLabel17_2, 3, 0, 1, 3);

    Le10reft = new QLineEdit(tab_5);
    Le10reft->setObjectName(QString::fromUtf8("Le10reft"));
    Le10reft->setEnabled(true);

    gridLayout14->addWidget(Le10reft, 4, 0, 1, 3);

    textLabel16_2 = new QLabel(tab_5);
    textLabel16_2->setObjectName(QString::fromUtf8("textLabel16_2"));
    textLabel16_2->setWordWrap(false);

    gridLayout14->addWidget(textLabel16_2, 5, 0, 1, 1);

    Le10taut = new QLineEdit(tab_5);
    Le10taut->setObjectName(QString::fromUtf8("Le10taut"));
    Le10taut->setEnabled(true);
    Le10taut->setMaximumSize(QSize(10000, 16777215));

    gridLayout14->addWidget(Le10taut, 6, 0, 1, 3);

    spacerItem19 = new QSpacerItem(20, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout14->addItem(spacerItem19, 7, 1, 1, 1);

    tabWidget4->addTab(tab_5, QString());
    tab_6 = new QWidget();
    tab_6->setObjectName(QString::fromUtf8("tab_6"));
    gridLayout15 = new QGridLayout(tab_6);
    gridLayout15->setObjectName(QString::fromUtf8("gridLayout15"));
    textLabel18_2 = new QLabel(tab_6);
    textLabel18_2->setObjectName(QString::fromUtf8("textLabel18_2"));
    textLabel18_2->setWordWrap(false);

    gridLayout15->addWidget(textLabel18_2, 0, 0, 1, 1);

    Co11pcoupl = new QComboBox(tab_6);
    Co11pcoupl->setObjectName(QString::fromUtf8("Co11pcoupl"));
    Co11pcoupl->setMinimumSize(QSize(130, 0));
    Co11pcoupl->setMaximumSize(QSize(130, 16777215));

    gridLayout15->addWidget(Co11pcoupl, 0, 2, 1, 3);

    textLabel19_2 = new QLabel(tab_6);
    textLabel19_2->setObjectName(QString::fromUtf8("textLabel19_2"));
    textLabel19_2->setWordWrap(false);

    gridLayout15->addWidget(textLabel19_2, 1, 0, 1, 3);

    Co11pcoutype = new QComboBox(tab_6);
    Co11pcoutype->setObjectName(QString::fromUtf8("Co11pcoutype"));
    Co11pcoutype->setEnabled(true);
    Co11pcoutype->setMaximumSize(QSize(90, 16777215));

    gridLayout15->addWidget(Co11pcoutype, 1, 3, 1, 2);

    textLabel20_2 = new QLabel(tab_6);
    textLabel20_2->setObjectName(QString::fromUtf8("textLabel20_2"));
    textLabel20_2->setWordWrap(false);

    gridLayout15->addWidget(textLabel20_2, 2, 0, 1, 4);

    Le11taup = new QLineEdit(tab_6);
    Le11taup->setObjectName(QString::fromUtf8("Le11taup"));
    Le11taup->setEnabled(true);
    Le11taup->setMaximumSize(QSize(60, 16777215));

    gridLayout15->addWidget(Le11taup, 2, 4, 1, 1);

    textLabel21_2 = new QLabel(tab_6);
    textLabel21_2->setObjectName(QString::fromUtf8("textLabel21_2"));
    textLabel21_2->setWordWrap(false);

    gridLayout15->addWidget(textLabel21_2, 3, 0, 1, 4);

    Le11comprss = new QLineEdit(tab_6);
    Le11comprss->setObjectName(QString::fromUtf8("Le11comprss"));
    Le11comprss->setEnabled(true);
    Le11comprss->setMaximumSize(QSize(60, 16777215));

    gridLayout15->addWidget(Le11comprss, 3, 4, 1, 1);

    textLabel22_2 = new QLabel(tab_6);
    textLabel22_2->setObjectName(QString::fromUtf8("textLabel22_2"));
    textLabel22_2->setWordWrap(false);

    gridLayout15->addWidget(textLabel22_2, 4, 0, 1, 4);

    Le11refp = new QLineEdit(tab_6);
    Le11refp->setObjectName(QString::fromUtf8("Le11refp"));
    Le11refp->setEnabled(true);
    Le11refp->setMaximumSize(QSize(60, 16777215));

    gridLayout15->addWidget(Le11refp, 4, 4, 1, 1);

    spacerItem20 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout15->addItem(spacerItem20, 5, 4, 1, 1);

    tabWidget4->addTab(tab_6, QString());

    gridLayout13->addWidget(tabWidget4, 0, 0, 1, 1);

    stackwSetting->addWidget(page_10);
    page_11 = new QWidget();
    page_11->setObjectName(QString::fromUtf8("page_11"));
    gridLayout16 = new QGridLayout(page_11);
    gridLayout16->setObjectName(QString::fromUtf8("gridLayout16"));
    textLabel23_2 = new QLabel(page_11);
    textLabel23_2->setObjectName(QString::fromUtf8("textLabel23_2"));
    textLabel23_2->setWordWrap(false);

    gridLayout16->addWidget(textLabel23_2, 0, 0, 1, 1);

    spacerItem21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout16->addItem(spacerItem21, 0, 1, 1, 1);

    Co12genvel = new QComboBox(page_11);
    Co12genvel->setObjectName(QString::fromUtf8("Co12genvel"));
    Co12genvel->setMaximumSize(QSize(60, 16777215));

    gridLayout16->addWidget(Co12genvel, 0, 2, 1, 1);

    textLabel24_2 = new QLabel(page_11);
    textLabel24_2->setObjectName(QString::fromUtf8("textLabel24_2"));
    textLabel24_2->setWordWrap(false);

    gridLayout16->addWidget(textLabel24_2, 1, 0, 1, 2);

    Le12gentemp = new QLineEdit(page_11);
    Le12gentemp->setObjectName(QString::fromUtf8("Le12gentemp"));
    Le12gentemp->setEnabled(true);
    Le12gentemp->setMaximumSize(QSize(60, 16777215));

    gridLayout16->addWidget(Le12gentemp, 1, 2, 1, 1);

    textLabel25_2 = new QLabel(page_11);
    textLabel25_2->setObjectName(QString::fromUtf8("textLabel25_2"));
    textLabel25_2->setWordWrap(false);

    gridLayout16->addWidget(textLabel25_2, 2, 0, 1, 2);

    Le12genseed = new QLineEdit(page_11);
    Le12genseed->setObjectName(QString::fromUtf8("Le12genseed"));
    Le12genseed->setEnabled(true);
    Le12genseed->setMaximumSize(QSize(60, 16777215));

    gridLayout16->addWidget(Le12genseed, 2, 2, 1, 1);

    spacerItem22 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout16->addItem(spacerItem22, 3, 2, 1, 1);

    stackwSetting->addWidget(page_11);
    page_12 = new QWidget();
    page_12->setObjectName(QString::fromUtf8("page_12"));
    gridLayout17 = new QGridLayout(page_12);
    gridLayout17->setObjectName(QString::fromUtf8("gridLayout17"));
    hboxLayout2 = new QHBoxLayout();
    hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
    textLabel26_2 = new QLabel(page_12);
    textLabel26_2->setObjectName(QString::fromUtf8("textLabel26_2"));
    textLabel26_2->setWordWrap(false);

    hboxLayout2->addWidget(textLabel26_2);

    spacerItem23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    hboxLayout2->addItem(spacerItem23);

    Co13freeener = new QComboBox(page_12);
    Co13freeener->setObjectName(QString::fromUtf8("Co13freeener"));
    Co13freeener->setMaximumSize(QSize(50, 16777215));

    hboxLayout2->addWidget(Co13freeener);


    gridLayout17->addLayout(hboxLayout2, 0, 0, 1, 2);

    textLabel27_2 = new QLabel(page_12);
    textLabel27_2->setObjectName(QString::fromUtf8("textLabel27_2"));
    textLabel27_2->setWordWrap(false);

    gridLayout17->addWidget(textLabel27_2, 1, 0, 1, 1);

    Le13initlam = new QLineEdit(page_12);
    Le13initlam->setObjectName(QString::fromUtf8("Le13initlam"));
    Le13initlam->setEnabled(true);
    Le13initlam->setMaximumSize(QSize(50, 16777215));

    gridLayout17->addWidget(Le13initlam, 1, 1, 1, 1);

    textLabel28_2 = new QLabel(page_12);
    textLabel28_2->setObjectName(QString::fromUtf8("textLabel28_2"));
    textLabel28_2->setWordWrap(false);

    gridLayout17->addWidget(textLabel28_2, 2, 0, 1, 1);

    Le13deltlam = new QLineEdit(page_12);
    Le13deltlam->setObjectName(QString::fromUtf8("Le13deltlam"));
    Le13deltlam->setEnabled(true);
    Le13deltlam->setMaximumSize(QSize(50, 16777215));

    gridLayout17->addWidget(Le13deltlam, 2, 1, 1, 1);

    textLabel29_2 = new QLabel(page_12);
    textLabel29_2->setObjectName(QString::fromUtf8("textLabel29_2"));
    textLabel29_2->setWordWrap(false);

    gridLayout17->addWidget(textLabel29_2, 3, 0, 1, 1);

    Le13scalpha = new QLineEdit(page_12);
    Le13scalpha->setObjectName(QString::fromUtf8("Le13scalpha"));
    Le13scalpha->setEnabled(true);
    Le13scalpha->setMaximumSize(QSize(50, 16777215));

    gridLayout17->addWidget(Le13scalpha, 3, 1, 1, 1);

    textLabel30_2 = new QLabel(page_12);
    textLabel30_2->setObjectName(QString::fromUtf8("textLabel30_2"));
    textLabel30_2->setWordWrap(false);

    gridLayout17->addWidget(textLabel30_2, 4, 0, 1, 1);

    Le13scpower = new QLineEdit(page_12);
    Le13scpower->setObjectName(QString::fromUtf8("Le13scpower"));
    Le13scpower->setEnabled(true);
    Le13scpower->setMaximumSize(QSize(50, 16777215));

    gridLayout17->addWidget(Le13scpower, 4, 1, 1, 1);

    textLabel31 = new QLabel(page_12);
    textLabel31->setObjectName(QString::fromUtf8("textLabel31"));
    textLabel31->setWordWrap(false);

    gridLayout17->addWidget(textLabel31, 5, 0, 1, 1);

    Le13scsigma = new QLineEdit(page_12);
    Le13scsigma->setObjectName(QString::fromUtf8("Le13scsigma"));
    Le13scsigma->setEnabled(true);
    Le13scsigma->setMaximumSize(QSize(50, 16777215));

    gridLayout17->addWidget(Le13scsigma, 5, 1, 1, 1);

    spacerItem24 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout17->addItem(spacerItem24, 6, 1, 1, 1);

    stackwSetting->addWidget(page_12);
    page_13 = new QWidget();
    page_13->setObjectName(QString::fromUtf8("page_13"));
    gridLayout18 = new QGridLayout(page_13);
    gridLayout18->setObjectName(QString::fromUtf8("gridLayout18"));
    hboxLayout3 = new QHBoxLayout();
    hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
    textLabel33 = new QLabel(page_13);
    textLabel33->setObjectName(QString::fromUtf8("textLabel33"));
    textLabel33->setWordWrap(false);

    hboxLayout3->addWidget(textLabel33);

    Le14enertable = new QLineEdit(page_13);
    Le14enertable->setObjectName(QString::fromUtf8("Le14enertable"));

    hboxLayout3->addWidget(Le14enertable);


    gridLayout18->addLayout(hboxLayout3, 0, 0, 1, 3);

    textLabel32 = new QLabel(page_13);
    textLabel32->setObjectName(QString::fromUtf8("textLabel32"));
    textLabel32->setWordWrap(false);

    gridLayout18->addWidget(textLabel32, 1, 0, 1, 1);

    spacerItem25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout18->addItem(spacerItem25, 1, 1, 1, 1);

    Le14tableext = new QLineEdit(page_13);
    Le14tableext->setObjectName(QString::fromUtf8("Le14tableext"));
    Le14tableext->setMaximumSize(QSize(50, 16777215));

    gridLayout18->addWidget(Le14tableext, 1, 2, 1, 1);

    spacerItem26 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout18->addItem(spacerItem26, 2, 2, 1, 1);

    stackwSetting->addWidget(page_13);
    page_14 = new QWidget();
    page_14->setObjectName(QString::fromUtf8("page_14"));
    gridLayout19 = new QGridLayout(page_14);
    gridLayout19->setObjectName(QString::fromUtf8("gridLayout19"));
    textLabel34 = new QLabel(page_14);
    textLabel34->setObjectName(QString::fromUtf8("textLabel34"));
    textLabel34->setWordWrap(false);

    gridLayout19->addWidget(textLabel34, 0, 0, 1, 1);

    Co15annealing = new QComboBox(page_14);
    Co15annealing->setObjectName(QString::fromUtf8("Co15annealing"));
    Co15annealing->setMaximumSize(QSize(78, 16777215));

    gridLayout19->addWidget(Co15annealing, 0, 1, 1, 1);

    spacerItem27 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout19->addItem(spacerItem27, 0, 2, 1, 1);

    textLabel35 = new QLabel(page_14);
    textLabel35->setObjectName(QString::fromUtf8("textLabel35"));
    textLabel35->setWordWrap(false);

    gridLayout19->addWidget(textLabel35, 1, 0, 1, 4);

    Le15anpoints = new QLineEdit(page_14);
    Le15anpoints->setObjectName(QString::fromUtf8("Le15anpoints"));
    Le15anpoints->setEnabled(false);

    gridLayout19->addWidget(Le15anpoints, 2, 0, 1, 4);

    textLabel36 = new QLabel(page_14);
    textLabel36->setObjectName(QString::fromUtf8("textLabel36"));
    textLabel36->setWordWrap(false);

    gridLayout19->addWidget(textLabel36, 3, 0, 1, 4);

    Le15antime = new QLineEdit(page_14);
    Le15antime->setObjectName(QString::fromUtf8("Le15antime"));
    Le15antime->setEnabled(false);

    gridLayout19->addWidget(Le15antime, 4, 0, 1, 4);

    textLabel37 = new QLabel(page_14);
    textLabel37->setObjectName(QString::fromUtf8("textLabel37"));
    textLabel37->setWordWrap(false);

    gridLayout19->addWidget(textLabel37, 5, 0, 1, 4);

    Le15antemp = new QLineEdit(page_14);
    Le15antemp->setObjectName(QString::fromUtf8("Le15antemp"));
    Le15antemp->setEnabled(false);

    gridLayout19->addWidget(Le15antemp, 6, 0, 1, 4);

    spacerItem28 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout19->addItem(spacerItem28, 7, 3, 1, 1);

    stackwSetting->addWidget(page_14);
    page_15 = new QWidget();
    page_15->setObjectName(QString::fromUtf8("page_15"));
    gridLayout20 = new QGridLayout(page_15);
    gridLayout20->setObjectName(QString::fromUtf8("gridLayout20"));
    textLabel38 = new QLabel(page_15);
    textLabel38->setObjectName(QString::fromUtf8("textLabel38"));
    textLabel38->setWordWrap(false);

    gridLayout20->addWidget(textLabel38, 0, 0, 1, 1);

    Le16bdfric = new QLineEdit(page_15);
    Le16bdfric->setObjectName(QString::fromUtf8("Le16bdfric"));

    gridLayout20->addWidget(Le16bdfric, 0, 1, 1, 1);

    textLabel39 = new QLabel(page_15);
    textLabel39->setObjectName(QString::fromUtf8("textLabel39"));
    textLabel39->setWordWrap(false);

    gridLayout20->addWidget(textLabel39, 1, 0, 1, 1);

    Le16ldseed = new QLineEdit(page_15);
    Le16ldseed->setObjectName(QString::fromUtf8("Le16ldseed"));
    Le16ldseed->setMaximumSize(QSize(65, 16777215));

    gridLayout20->addWidget(Le16ldseed, 1, 1, 1, 1);

    spacerItem29 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout20->addItem(spacerItem29, 2, 1, 1, 1);

    stackwSetting->addWidget(page_15);
    page_16 = new QWidget();
    page_16->setObjectName(QString::fromUtf8("page_16"));
    gridLayout21 = new QGridLayout(page_16);
    gridLayout21->setObjectName(QString::fromUtf8("gridLayout21"));
    textLabel40 = new QLabel(page_16);
    textLabel40->setObjectName(QString::fromUtf8("textLabel40"));
    textLabel40->setWordWrap(false);

    gridLayout21->addWidget(textLabel40, 0, 0, 1, 2);

    Le17accgrps = new QLineEdit(page_16);
    Le17accgrps->setObjectName(QString::fromUtf8("Le17accgrps"));

    gridLayout21->addWidget(Le17accgrps, 1, 0, 1, 2);

    textLabel41 = new QLabel(page_16);
    textLabel41->setObjectName(QString::fromUtf8("textLabel41"));
    textLabel41->setWordWrap(false);

    gridLayout21->addWidget(textLabel41, 2, 0, 1, 2);

    Le17accelerate = new QLineEdit(page_16);
    Le17accelerate->setObjectName(QString::fromUtf8("Le17accelerate"));

    gridLayout21->addWidget(Le17accelerate, 3, 0, 1, 2);

    textLabel42 = new QLabel(page_16);
    textLabel42->setObjectName(QString::fromUtf8("textLabel42"));
    textLabel42->setWordWrap(false);

    gridLayout21->addWidget(textLabel42, 4, 0, 1, 2);

    Le17freezgrps = new QLineEdit(page_16);
    Le17freezgrps->setObjectName(QString::fromUtf8("Le17freezgrps"));

    gridLayout21->addWidget(Le17freezgrps, 5, 0, 1, 2);

    textLabel43 = new QLabel(page_16);
    textLabel43->setObjectName(QString::fromUtf8("textLabel43"));
    textLabel43->setWordWrap(false);

    gridLayout21->addWidget(textLabel43, 6, 0, 1, 2);

    Le17freezedim = new QLineEdit(page_16);
    Le17freezedim->setObjectName(QString::fromUtf8("Le17freezedim"));

    gridLayout21->addWidget(Le17freezedim, 7, 0, 1, 2);

    textLabel44 = new QLabel(page_16);
    textLabel44->setObjectName(QString::fromUtf8("textLabel44"));
    textLabel44->setWordWrap(false);

    gridLayout21->addWidget(textLabel44, 8, 0, 1, 1);

    Le17cosacc = new QLineEdit(page_16);
    Le17cosacc->setObjectName(QString::fromUtf8("Le17cosacc"));

    gridLayout21->addWidget(Le17cosacc, 8, 1, 1, 1);

    textLabel45 = new QLabel(page_16);
    textLabel45->setObjectName(QString::fromUtf8("textLabel45"));
    textLabel45->setWordWrap(false);

    gridLayout21->addWidget(textLabel45, 9, 0, 1, 2);

    Le17deform = new QLineEdit(page_16);
    Le17deform->setObjectName(QString::fromUtf8("Le17deform"));

    gridLayout21->addWidget(Le17deform, 10, 0, 1, 2);

    spacerItem30 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout21->addItem(spacerItem30, 11, 0, 1, 1);

    stackwSetting->addWidget(page_16);
    page_17 = new QWidget();
    page_17->setObjectName(QString::fromUtf8("page_17"));
    gridLayout22 = new QGridLayout(page_17);
    gridLayout22->setObjectName(QString::fromUtf8("gridLayout22"));
    textLabel46_2 = new QLabel(page_17);
    textLabel46_2->setObjectName(QString::fromUtf8("textLabel46_2"));
    textLabel46_2->setWordWrap(false);

    gridLayout22->addWidget(textLabel46_2, 0, 0, 1, 3);

    Co18disre = new QComboBox(page_17);
    Co18disre->setObjectName(QString::fromUtf8("Co18disre"));
    Co18disre->setMaximumSize(QSize(50, 16777215));

    gridLayout22->addWidget(Co18disre, 0, 3, 1, 1);

    textLabel47 = new QLabel(page_17);
    textLabel47->setObjectName(QString::fromUtf8("textLabel47"));
    textLabel47->setWordWrap(false);

    gridLayout22->addWidget(textLabel47, 1, 0, 1, 2);

    Co18disweight = new QComboBox(page_17);
    Co18disweight->setObjectName(QString::fromUtf8("Co18disweight"));
    Co18disweight->setEnabled(true);
    Co18disweight->setMaximumSize(QSize(100, 16777215));

    gridLayout22->addWidget(Co18disweight, 1, 2, 1, 2);

    textLabel48_2 = new QLabel(page_17);
    textLabel48_2->setObjectName(QString::fromUtf8("textLabel48_2"));
    textLabel48_2->setWordWrap(false);

    gridLayout22->addWidget(textLabel48_2, 2, 0, 1, 2);

    spacerItem31 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout22->addItem(spacerItem31, 2, 2, 1, 1);

    Co18dismixed = new QComboBox(page_17);
    Co18dismixed->setObjectName(QString::fromUtf8("Co18dismixed"));
    Co18dismixed->setEnabled(true);
    Co18dismixed->setMaximumSize(QSize(50, 16777215));

    gridLayout22->addWidget(Co18dismixed, 2, 3, 1, 1);

    textLabel51_2 = new QLabel(page_17);
    textLabel51_2->setObjectName(QString::fromUtf8("textLabel51_2"));
    textLabel51_2->setWordWrap(false);

    gridLayout22->addWidget(textLabel51_2, 2, 4, 1, 2);

    Le18nstdisreout = new QLineEdit(page_17);
    Le18nstdisreout->setObjectName(QString::fromUtf8("Le18nstdisreout"));
    Le18nstdisreout->setEnabled(true);
    Le18nstdisreout->setMaximumSize(QSize(50, 16777215));

    gridLayout22->addWidget(Le18nstdisreout, 2, 6, 1, 1);

    textLabel49 = new QLabel(page_17);
    textLabel49->setObjectName(QString::fromUtf8("textLabel49"));
    textLabel49->setWordWrap(false);

    gridLayout22->addWidget(textLabel49, 3, 0, 1, 3);

    Le18disrefc = new QLineEdit(page_17);
    Le18disrefc->setObjectName(QString::fromUtf8("Le18disrefc"));
    Le18disrefc->setEnabled(true);
    Le18disrefc->setMaximumSize(QSize(50, 16777215));

    gridLayout22->addWidget(Le18disrefc, 3, 3, 1, 1);

    textLabel50 = new QLabel(page_17);
    textLabel50->setObjectName(QString::fromUtf8("textLabel50"));
    textLabel50->setWordWrap(false);

    gridLayout22->addWidget(textLabel50, 3, 5, 1, 1);

    Le18disretau = new QLineEdit(page_17);
    Le18disretau->setObjectName(QString::fromUtf8("Le18disretau"));
    Le18disretau->setEnabled(false);
    Le18disretau->setMaximumSize(QSize(50, 16777215));

    gridLayout22->addWidget(Le18disretau, 3, 6, 1, 1);

    textLabel53 = new QLabel(page_17);
    textLabel53->setObjectName(QString::fromUtf8("textLabel53"));
    textLabel53->setWordWrap(false);

    gridLayout22->addWidget(textLabel53, 4, 0, 1, 1);

    spacerItem32 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout22->addItem(spacerItem32, 4, 2, 1, 1);

    Co18orie = new QComboBox(page_17);
    Co18orie->setObjectName(QString::fromUtf8("Co18orie"));
    Co18orie->setEnabled(true);
    Co18orie->setMaximumSize(QSize(50, 16777215));

    gridLayout22->addWidget(Co18orie, 4, 3, 1, 1);

    spacerItem33 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout22->addItem(spacerItem33, 4, 5, 1, 1);

    textLabel52_2 = new QLabel(page_17);
    textLabel52_2->setObjectName(QString::fromUtf8("textLabel52_2"));
    textLabel52_2->setWordWrap(false);

    gridLayout22->addWidget(textLabel52_2, 5, 0, 1, 2);

    Le18oriefc = new QLineEdit(page_17);
    Le18oriefc->setObjectName(QString::fromUtf8("Le18oriefc"));
    Le18oriefc->setEnabled(true);
    Le18oriefc->setMaximumSize(QSize(50, 16777215));

    gridLayout22->addWidget(Le18oriefc, 5, 3, 1, 1);

    textLabel54 = new QLabel(page_17);
    textLabel54->setObjectName(QString::fromUtf8("textLabel54"));
    textLabel54->setWordWrap(false);

    gridLayout22->addWidget(textLabel54, 5, 5, 1, 1);

    Le18orietau = new QLineEdit(page_17);
    Le18orietau->setObjectName(QString::fromUtf8("Le18orietau"));
    Le18orietau->setEnabled(true);
    Le18orietau->setMaximumSize(QSize(50, 16777215));

    gridLayout22->addWidget(Le18orietau, 5, 6, 1, 1);

    textLabel56_2 = new QLabel(page_17);
    textLabel56_2->setObjectName(QString::fromUtf8("textLabel56_2"));
    textLabel56_2->setWordWrap(false);

    gridLayout22->addWidget(textLabel56_2, 6, 0, 1, 1);

    spacerItem34 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout22->addItem(spacerItem34, 6, 1, 1, 1);

    Le18oriefitgrp = new QLineEdit(page_17);
    Le18oriefitgrp->setObjectName(QString::fromUtf8("Le18oriefitgrp"));
    Le18oriefitgrp->setEnabled(true);
    Le18oriefitgrp->setMaximumSize(QSize(50, 16777215));

    gridLayout22->addWidget(Le18oriefitgrp, 6, 3, 1, 1);

    textLabel55_2 = new QLabel(page_17);
    textLabel55_2->setObjectName(QString::fromUtf8("textLabel55_2"));
    textLabel55_2->setWordWrap(false);

    gridLayout22->addWidget(textLabel55_2, 6, 4, 1, 2);

    Le18nstorireout = new QLineEdit(page_17);
    Le18nstorireout->setObjectName(QString::fromUtf8("Le18nstorireout"));
    Le18nstorireout->setEnabled(true);
    Le18nstorireout->setMaximumSize(QSize(50, 16777215));

    gridLayout22->addWidget(Le18nstorireout, 6, 6, 1, 1);

    spacerItem35 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout22->addItem(spacerItem35, 7, 4, 1, 1);

    stackwSetting->addWidget(page_17);
    page_18 = new QWidget();
    page_18->setObjectName(QString::fromUtf8("page_18"));
    gridLayout23 = new QGridLayout(page_18);
    gridLayout23->setObjectName(QString::fromUtf8("gridLayout23"));
    textLabel60_2 = new QLabel(page_18);
    textLabel60_2->setObjectName(QString::fromUtf8("textLabel60_2"));
    textLabel60_2->setWordWrap(false);

    gridLayout23->addWidget(textLabel60_2, 0, 0, 1, 1);

    Le21enerexclud = new QLineEdit(page_18);
    Le21enerexclud->setObjectName(QString::fromUtf8("Le21enerexclud"));

    gridLayout23->addWidget(Le21enerexclud, 1, 0, 1, 1);

    spacerItem36 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout23->addItem(spacerItem36, 2, 0, 1, 1);

    stackwSetting->addWidget(page_18);

    gridLayout1->addWidget(stackwSetting, 0, 1, 1, 1);

    tabwMain->addTab(tab, QString());
    tab_2 = new QWidget();
    tab_2->setObjectName(QString::fromUtf8("tab_2"));
    gridLayout24 = new QGridLayout(tab_2);
    gridLayout24->setObjectName(QString::fromUtf8("gridLayout24"));
    tePreview = new QTextEdit(tab_2);
    tePreview->setObjectName(QString::fromUtf8("tePreview"));
    tePreview->setTabChangesFocus(true);
    tePreview->setAcceptRichText(false);

    gridLayout24->addWidget(tePreview, 0, 0, 1, 2);

    spacerItem37 = new QSpacerItem(511, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout24->addItem(spacerItem37, 1, 0, 1, 1);

    pbSave = new QPushButton(tab_2);
    pbSave->setObjectName(QString::fromUtf8("pbSave"));

    gridLayout24->addWidget(pbSave, 1, 1, 1, 1);

    tabwMain->addTab(tab_2, QString());

    gridLayout->addWidget(tabwMain, 0, 0, 1, 3);

    spacerItem38 = new QSpacerItem(351, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem38, 1, 0, 1, 1);

    pbPreview = new QPushButton(MdpConfigClass);
    pbPreview->setObjectName(QString::fromUtf8("pbPreview"));

    gridLayout->addWidget(pbPreview, 1, 1, 1, 1);

    pbClose = new QPushButton(MdpConfigClass);
    pbClose->setObjectName(QString::fromUtf8("pbClose"));

    gridLayout->addWidget(pbClose, 1, 2, 1, 1);

    textLabel10->setBuddy(Co6constalg);
    textLabel11->setBuddy(Co6unconststart);

    retranslateUi(MdpConfigClass);
    QObject::connect(liwMdpOptions, SIGNAL(currentRowChanged(int)), stackwSetting, SLOT(setCurrentIndex(int)));
    QObject::connect(pbClose, SIGNAL(clicked()), MdpConfigClass, SLOT(close()));

    tabwMain->setCurrentIndex(0);
    stackwSetting->setCurrentIndex(0);
    TbElectrostatic->setCurrentIndex(0);
    tabWidget4->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(MdpConfigClass);
    } // setupUi

    void retranslateUi(QWidget *MdpConfigClass)
    {
    MdpConfigClass->setWindowTitle(QApplication::translate("MdpConfigClass", "MDP Configuraton", 0, QApplication::UnicodeUTF8));
    liwMdpOptions->clear();

    QListWidgetItem *__item = new QListWidgetItem(liwMdpOptions);
    __item->setText(QApplication::translate("MdpConfigClass", "Start", 0, QApplication::UnicodeUTF8));

    QListWidgetItem *__item1 = new QListWidgetItem(liwMdpOptions);
    __item1->setText(QApplication::translate("MdpConfigClass", "Preprocessor", 0, QApplication::UnicodeUTF8));

    QListWidgetItem *__item2 = new QListWidgetItem(liwMdpOptions);
    __item2->setText(QApplication::translate("MdpConfigClass", "Run Control", 0, QApplication::UnicodeUTF8));

    QListWidgetItem *__item3 = new QListWidgetItem(liwMdpOptions);
    __item3->setText(QApplication::translate("MdpConfigClass", "Energy Minimization", 0, QApplication::UnicodeUTF8));

    QListWidgetItem *__item4 = new QListWidgetItem(liwMdpOptions);
    __item4->setText(QApplication::translate("MdpConfigClass", "Neighbor Searching", 0, QApplication::UnicodeUTF8));

    QListWidgetItem *__item5 = new QListWidgetItem(liwMdpOptions);
    __item5->setText(QApplication::translate("MdpConfigClass", "Bonds", 0, QApplication::UnicodeUTF8));

    QListWidgetItem *__item6 = new QListWidgetItem(liwMdpOptions);
    __item6->setText(QApplication::translate("MdpConfigClass", "Electrostatic", 0, QApplication::UnicodeUTF8));

    QListWidgetItem *__item7 = new QListWidgetItem(liwMdpOptions);
    __item7->setText(QApplication::translate("MdpConfigClass", "van der Waals", 0, QApplication::UnicodeUTF8));

    QListWidgetItem *__item8 = new QListWidgetItem(liwMdpOptions);
    __item8->setText(QApplication::translate("MdpConfigClass", "Output Control", 0, QApplication::UnicodeUTF8));

    QListWidgetItem *__item9 = new QListWidgetItem(liwMdpOptions);
    __item9->setText(QApplication::translate("MdpConfigClass", "Coupling", 0, QApplication::UnicodeUTF8));

    QListWidgetItem *__item10 = new QListWidgetItem(liwMdpOptions);
    __item10->setText(QApplication::translate("MdpConfigClass", "Start-up Velocities", 0, QApplication::UnicodeUTF8));

    QListWidgetItem *__item11 = new QListWidgetItem(liwMdpOptions);
    __item11->setText(QApplication::translate("MdpConfigClass", "Free Energy Control", 0, QApplication::UnicodeUTF8));

    QListWidgetItem *__item12 = new QListWidgetItem(liwMdpOptions);
    __item12->setText(QApplication::translate("MdpConfigClass", "Tables", 0, QApplication::UnicodeUTF8));

    QListWidgetItem *__item13 = new QListWidgetItem(liwMdpOptions);
    __item13->setText(QApplication::translate("MdpConfigClass", "Simulated Annealing", 0, QApplication::UnicodeUTF8));

    QListWidgetItem *__item14 = new QListWidgetItem(liwMdpOptions);
    __item14->setText(QApplication::translate("MdpConfigClass", "Langevin Dynamics", 0, QApplication::UnicodeUTF8));

    QListWidgetItem *__item15 = new QListWidgetItem(liwMdpOptions);
    __item15->setText(QApplication::translate("MdpConfigClass", "Non-equlibrium MD", 0, QApplication::UnicodeUTF8));

    QListWidgetItem *__item16 = new QListWidgetItem(liwMdpOptions);
    __item16->setText(QApplication::translate("MdpConfigClass", "NMR Refinement", 0, QApplication::UnicodeUTF8));

    QListWidgetItem *__item17 = new QListWidgetItem(liwMdpOptions);
    __item17->setText(QApplication::translate("MdpConfigClass", "Energy Groups Exclusion", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("MdpConfigClass", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Verdana'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:10pt;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\"> </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\"> Welcome !</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-b"
        "lock-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:12pt;\">Here you can configure your mdp file. Select fields from left list box and </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:12pt;\">change the parameters. </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:12pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:12pt;\">The mdp file which will be generated contains only changed fields. You can </p>\n"
"<p style=\" margi"
        "n-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:12pt;\">see it before saving using \"Preview MDP File\", then if everything is ok you </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:12pt;\">can save it .</p></body></html>", 0, QApplication::UnicodeUTF8));
    textLabel3->setText(QApplication::translate("MdpConfigClass", "Title (title)", 0, QApplication::UnicodeUTF8));
    Le2title->setText(QString());
    textLabel1_2->setText(QApplication::translate("MdpConfigClass", "Preprocessor (cpp)", 0, QApplication::UnicodeUTF8));
    Le2pre->setText(QApplication::translate("MdpConfigClass", "/usr/bin/cpp", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QApplication::translate("MdpConfigClass", "Include (include)", 0, QApplication::UnicodeUTF8));
    textLabel4->setText(QApplication::translate("MdpConfigClass", "Define (define)", 0, QApplication::UnicodeUTF8));
    Co2define->clear();
    Co2define->insertItems(0, QStringList()
     << QString()
     << QApplication::translate("MdpConfigClass", "-DFLEXIBLE", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "-DPOSRES", 0, QApplication::UnicodeUTF8)
    );
    textLabel1_3->setText(QApplication::translate("MdpConfigClass", "Integrator (integrator)", 0, QApplication::UnicodeUTF8));
    Co3integrator->clear();
    Co3integrator->insertItems(0, QStringList()
     << QApplication::translate("MdpConfigClass", "md", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "steep", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "sd", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "bd", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "cg", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "l-bfgs", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "nm", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "tpi", 0, QApplication::UnicodeUTF8)
    );
    textLabel2_3->setText(QApplication::translate("MdpConfigClass", "Starting Time (tinit) (ps)", 0, QApplication::UnicodeUTF8));
    Le3tinit->setText(QApplication::translate("MdpConfigClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel3_2->setText(QApplication::translate("MdpConfigClass", "Time Step (dt) (ps)", 0, QApplication::UnicodeUTF8));
    Le3dt->setText(QApplication::translate("MdpConfigClass", "0.001", 0, QApplication::UnicodeUTF8));
    textLabel4_2->setText(QApplication::translate("MdpConfigClass", "Number of Steps (nsteps)", 0, QApplication::UnicodeUTF8));
    Le3nsteps->setText(QApplication::translate("MdpConfigClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel5->setText(QApplication::translate("MdpConfigClass", "Starting Step (init_step)", 0, QApplication::UnicodeUTF8));
    Le3initstep->setText(QApplication::translate("MdpConfigClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel6->setText(QApplication::translate("MdpConfigClass", "CoMM Restriction (comm_mode)", 0, QApplication::UnicodeUTF8));
    Co3commmode->clear();
    Co3commmode->insertItems(0, QStringList()
     << QApplication::translate("MdpConfigClass", "Linear", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "Angular", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "No", 0, QApplication::UnicodeUTF8)
    );
    textLabel7->setText(QApplication::translate("MdpConfigClass", "CoMM Removal frequency (nstcomm)", 0, QApplication::UnicodeUTF8));
    Le3nstcomm->setText(QApplication::translate("MdpConfigClass", "1", 0, QApplication::UnicodeUTF8));
    textLabel8->setText(QApplication::translate("MdpConfigClass", "Groups for CoMM Removal (comm_grps)", 0, QApplication::UnicodeUTF8));
    textLabel1_4->setText(QApplication::translate("MdpConfigClass", "Energy convergence value (emtol) (kJ/mol*nm)", 0, QApplication::UnicodeUTF8));
    Le4emtol->setText(QApplication::translate("MdpConfigClass", "10.0", 0, QApplication::UnicodeUTF8));
    textLabel2_4->setText(QApplication::translate("MdpConfigClass", "Initial step size (emstep) (nm)", 0, QApplication::UnicodeUTF8));
    Le4emstep->setText(QApplication::translate("MdpConfigClass", "0.01", 0, QApplication::UnicodeUTF8));
    textLabel3_3->setText(QApplication::translate("MdpConfigClass", "STEEP frequency during CG (nstcgsteep)", 0, QApplication::UnicodeUTF8));
    Le4nstcgsteep->setText(QApplication::translate("MdpConfigClass", "1000", 0, QApplication::UnicodeUTF8));
    textLabel4_3->setText(QApplication::translate("MdpConfigClass", "Number of correction steps for L-BFGS (nbfgscorr)", 0, QApplication::UnicodeUTF8));
    Le4nbfgscorr->setText(QApplication::translate("MdpConfigClass", "10", 0, QApplication::UnicodeUTF8));
    textLabel5_2->setText(QApplication::translate("MdpConfigClass", "Frequency to update neighbour list (nstlist)", 0, QApplication::UnicodeUTF8));
    Le5nstlist->setText(QApplication::translate("MdpConfigClass", "10", 0, QApplication::UnicodeUTF8));
    textLabel6_2->setText(QApplication::translate("MdpConfigClass", "Neighbour searching method (ns_type)", 0, QApplication::UnicodeUTF8));
    Co5nstype->clear();
    Co5nstype->insertItems(0, QStringList()
     << QApplication::translate("MdpConfigClass", "grid", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "simple", 0, QApplication::UnicodeUTF8)
    );
    textLabel7_2->setText(QApplication::translate("MdpConfigClass", "Periodic boundary conditions (pbc)", 0, QApplication::UnicodeUTF8));
    Co5pbc->clear();
    Co5pbc->insertItems(0, QStringList()
     << QApplication::translate("MdpConfigClass", "xyz", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "no", 0, QApplication::UnicodeUTF8)
    );
    textLabel8_2->setText(QApplication::translate("MdpConfigClass", "Neighbor list cut-off (rlist) (nm)", 0, QApplication::UnicodeUTF8));
    Le5rlist->setText(QApplication::translate("MdpConfigClass", "1", 0, QApplication::UnicodeUTF8));
    textLabel9->setText(QApplication::translate("MdpConfigClass", "Constraints (constraints)", 0, QApplication::UnicodeUTF8));
    Co6constraints->clear();
    Co6constraints->insertItems(0, QStringList()
     << QApplication::translate("MdpConfigClass", "none", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "hbonds", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "all-bonds", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "h-angles", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "all-angles", 0, QApplication::UnicodeUTF8)
    );
    textLabel10->setText(QApplication::translate("MdpConfigClass", "Constraint Algorithm (constraint_algorithm)", 0, QApplication::UnicodeUTF8));
    Co6constalg->clear();
    Co6constalg->insertItems(0, QStringList()
     << QApplication::translate("MdpConfigClass", "lincs", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "shake", 0, QApplication::UnicodeUTF8)
    );
    textLabel11->setText(QApplication::translate("MdpConfigClass", "Unconstrain Start (unconstrained_start)", 0, QApplication::UnicodeUTF8));
    Co6unconststart->clear();
    Co6unconststart->insertItems(0, QStringList()
     << QApplication::translate("MdpConfigClass", "no", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "yes", 0, QApplication::UnicodeUTF8)
    );
    textLabel12->setText(QApplication::translate("MdpConfigClass", "Relative tolerance for SHAKE (shake_tol)", 0, QApplication::UnicodeUTF8));
    Le6shaketol->setText(QApplication::translate("MdpConfigClass", "0.0001", 0, QApplication::UnicodeUTF8));
    textLabel13->setText(QApplication::translate("MdpConfigClass", "Highest order for LINCS expansion (lincs_order)", 0, QApplication::UnicodeUTF8));
    Le6lincsorder->setText(QApplication::translate("MdpConfigClass", "4", 0, QApplication::UnicodeUTF8));
    textLabel14->setText(QApplication::translate("MdpConfigClass", "Iterations to correct lenghtening in LINCS (lincs_iter)", 0, QApplication::UnicodeUTF8));
    Le6lincsiter->setText(QApplication::translate("MdpConfigClass", "1", 0, QApplication::UnicodeUTF8));
    textLabel15->setText(QApplication::translate("MdpConfigClass", "Maximum angle allowed in LINCS (lincs_warnangle)", 0, QApplication::UnicodeUTF8));
    Le6lincswarna->setText(QApplication::translate("MdpConfigClass", "30", 0, QApplication::UnicodeUTF8));
    textLabel16->setText(QApplication::translate("MdpConfigClass", "Use Morse potential (morse)", 0, QApplication::UnicodeUTF8));
    Co6morse->clear();
    Co6morse->insertItems(0, QStringList()
     << QApplication::translate("MdpConfigClass", "no", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "yes", 0, QApplication::UnicodeUTF8)
    );
    textLabel17->setText(QApplication::translate("MdpConfigClass", "Coulomb type (coulombtype)", 0, QApplication::UnicodeUTF8));
    Co7coulotype->clear();
    Co7coulotype->insertItems(0, QStringList()
     << QApplication::translate("MdpConfigClass", "Cut-off", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "Ewald", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "PME", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "PPPM", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "Reaction-Field", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "Generalized-Reaction-Field", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "Reaction-Field-nec", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "Shift", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "Encad-Shift", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "Switch", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "User", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "PME-User", 0, QApplication::UnicodeUTF8)
    );
    textLabel18->setText(QApplication::translate("MdpConfigClass", "Switching coulumb potential at (rcoulomb_switch) (nm)", 0, QApplication::UnicodeUTF8));
    Le7rcouloswitch->setText(QApplication::translate("MdpConfigClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel19->setText(QApplication::translate("MdpConfigClass", "Coulomb cut-off (rcoulomb) (nm)", 0, QApplication::UnicodeUTF8));
    Le7rcoulomb->setText(QApplication::translate("MdpConfigClass", "1", 0, QApplication::UnicodeUTF8));
    textLabel20->setText(QApplication::translate("MdpConfigClass", "Relative dielectric constant (epsilon_r)", 0, QApplication::UnicodeUTF8));
    Le7epsilonr->setText(QApplication::translate("MdpConfigClass", "1", 0, QApplication::UnicodeUTF8));
    textLabel21->setText(QApplication::translate("MdpConfigClass", "Relative dielectric constant of reaction field (epsilon_rf)", 0, QApplication::UnicodeUTF8));
    Le7epsilonrf->setText(QApplication::translate("MdpConfigClass", "1", 0, QApplication::UnicodeUTF8));
    TbElectrostatic->setTabText(TbElectrostatic->indexOf(tab_3), QApplication::translate("MdpConfigClass", "Type", 0, QApplication::UnicodeUTF8));
    textLabel22->setText(QApplication::translate("MdpConfigClass", "Max grid spacing for FFT (fourierspacing)(nm)", 0, QApplication::UnicodeUTF8));
    Le7fouspacing->setText(QApplication::translate("MdpConfigClass", "0.12", 0, QApplication::UnicodeUTF8));
    textLabel23->setText(QApplication::translate("MdpConfigClass", "fourier_nx", 0, QApplication::UnicodeUTF8));
    Le7founx->setText(QApplication::translate("MdpConfigClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel24->setText(QApplication::translate("MdpConfigClass", "fourier_ny", 0, QApplication::UnicodeUTF8));
    Le7founy->setText(QApplication::translate("MdpConfigClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel25->setText(QApplication::translate("MdpConfigClass", "fourier_nz", 0, QApplication::UnicodeUTF8));
    Le7founz->setText(QApplication::translate("MdpConfigClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel26->setText(QApplication::translate("MdpConfigClass", "Interpolation order for PME (pme_order)", 0, QApplication::UnicodeUTF8));
    Le7pmeorder->setText(QApplication::translate("MdpConfigClass", "4", 0, QApplication::UnicodeUTF8));
    textLabel27->setText(QApplication::translate("MdpConfigClass", "Strength of Ewald-shifted pot at cutoff (ewald_rtol)", 0, QApplication::UnicodeUTF8));
    Le7ewaldrtol->setText(QApplication::translate("MdpConfigClass", "1e-5", 0, QApplication::UnicodeUTF8));
    textLabel28->setText(QApplication::translate("MdpConfigClass", "Geom for Ewald summations (ewald_geometry)", 0, QApplication::UnicodeUTF8));
    Co7ewaldgeo->clear();
    Co7ewaldgeo->insertItems(0, QStringList()
     << QApplication::translate("MdpConfigClass", "3d", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "3dc", 0, QApplication::UnicodeUTF8)
    );
    textLabel29->setText(QApplication::translate("MdpConfigClass", "Dipole Corr (epsilon_surface)", 0, QApplication::UnicodeUTF8));
    Le7epsisurf->setText(QApplication::translate("MdpConfigClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel30->setText(QApplication::translate("MdpConfigClass", "Optimize FFT (optimize_fft)", 0, QApplication::UnicodeUTF8));
    Co7optimfft->clear();
    Co7optimfft->insertItems(0, QStringList()
     << QApplication::translate("MdpConfigClass", "no", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "yes", 0, QApplication::UnicodeUTF8)
    );
    TbElectrostatic->setTabText(TbElectrostatic->indexOf(tab_4), QApplication::translate("MdpConfigClass", "Ewald", 0, QApplication::UnicodeUTF8));
    textLabel1_5->setText(QApplication::translate("MdpConfigClass", "Vander wals type (vdwtype)", 0, QApplication::UnicodeUTF8));
    Co8vdwtype->clear();
    Co8vdwtype->insertItems(0, QStringList()
     << QApplication::translate("MdpConfigClass", "Cut-off", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "Shift", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "Switch", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "Encad-Shift", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "User", 0, QApplication::UnicodeUTF8)
    );
    textLabel2_5->setText(QApplication::translate("MdpConfigClass", "Switching the LJ potential at (rvdw_switch) (nm)", 0, QApplication::UnicodeUTF8));
    Le8rdwswitch->setText(QApplication::translate("MdpConfigClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel3_4->setText(QApplication::translate("MdpConfigClass", "Distance for the LJ or Buckingham cut-off (rvdw) (nm)", 0, QApplication::UnicodeUTF8));
    Le8rvdw->setText(QApplication::translate("MdpConfigClass", "1", 0, QApplication::UnicodeUTF8));
    textLabel4_4->setText(QApplication::translate("MdpConfigClass", "Dispersion Correction (dispcorr)", 0, QApplication::UnicodeUTF8));
    Co8dispcorr->clear();
    Co8dispcorr->insertItems(0, QStringList()
     << QApplication::translate("MdpConfigClass", "no", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "EnerPres", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "Ener", 0, QApplication::UnicodeUTF8)
    );
    textLabel5_3->setText(QApplication::translate("MdpConfigClass", "Freq to write coords to output traj file (nstxout) (steps)", 0, QApplication::UnicodeUTF8));
    Le9nstxout->setText(QApplication::translate("MdpConfigClass", "100", 0, QApplication::UnicodeUTF8));
    textLabel6_3->setText(QApplication::translate("MdpConfigClass", "Freq to write velocities to output traj file (nstvout) (steps)", 0, QApplication::UnicodeUTF8));
    Le9nstv->setText(QApplication::translate("MdpConfigClass", "100", 0, QApplication::UnicodeUTF8));
    textLabel7_3->setText(QApplication::translate("MdpConfigClass", "Freq to write forces to output traj file (nstfout) (steps)", 0, QApplication::UnicodeUTF8));
    Le9nstf->setText(QApplication::translate("MdpConfigClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel8_3->setText(QApplication::translate("MdpConfigClass", "Freq to write energies to log file (nstlog) (steps)", 0, QApplication::UnicodeUTF8));
    Le9nstlog->setText(QApplication::translate("MdpConfigClass", "100", 0, QApplication::UnicodeUTF8));
    textLabel9_2->setText(QApplication::translate("MdpConfigClass", "Freq to write energies to energy file (nstenergy) (steps)", 0, QApplication::UnicodeUTF8));
    Le9nstener->setText(QApplication::translate("MdpConfigClass", "100", 0, QApplication::UnicodeUTF8));
    textLabel12_2->setText(QApplication::translate("MdpConfigClass", "Freq to write coords to xtc traj file (nstxtcout) (steps)", 0, QApplication::UnicodeUTF8));
    Le9nstxtc->setText(QApplication::translate("MdpConfigClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel10_2->setText(QApplication::translate("MdpConfigClass", "Precision to write to xtc traj (xtc_precision) (real)", 0, QApplication::UnicodeUTF8));
    Le9xtcpre->setText(QApplication::translate("MdpConfigClass", "1000", 0, QApplication::UnicodeUTF8));
    textLabel11_2->setText(QApplication::translate("MdpConfigClass", "Group(s) to write to xtc traj (xtc_grps)        ", 0, QApplication::UnicodeUTF8));
    textLabel13_2->setText(QApplication::translate("MdpConfigClass", "Group(s) to write to energy file (energygrps)", 0, QApplication::UnicodeUTF8));
    textLabel14_2->setText(QApplication::translate("MdpConfigClass", "Temperature coupling (tcoupl)        ", 0, QApplication::UnicodeUTF8));
    Co10tcouple->clear();
    Co10tcouple->insertItems(0, QStringList()
     << QApplication::translate("MdpConfigClass", "no", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "berendsen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "nose-hoover", 0, QApplication::UnicodeUTF8)
    );
    textLabel15_2->setText(QApplication::translate("MdpConfigClass", "Groups to couple separately to temperature bath (tc_grps)", 0, QApplication::UnicodeUTF8));
    textLabel17_2->setText(QApplication::translate("MdpConfigClass", "Reference temperature for coupling (ref_t)  (K)", 0, QApplication::UnicodeUTF8));
    textLabel16_2->setText(QApplication::translate("MdpConfigClass", "Time constant for coupling (tau_t) (ps)      ", 0, QApplication::UnicodeUTF8));
    tabWidget4->setTabText(tabWidget4->indexOf(tab_5), QApplication::translate("MdpConfigClass", "T Coupling", 0, QApplication::UnicodeUTF8));
    textLabel18_2->setText(QApplication::translate("MdpConfigClass", "Pressure coupling (pcoupl)", 0, QApplication::UnicodeUTF8));
    Co11pcoupl->clear();
    Co11pcoupl->insertItems(0, QStringList()
     << QApplication::translate("MdpConfigClass", "no", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "berendsen", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "Parrinello-Rahman", 0, QApplication::UnicodeUTF8)
    );
    textLabel19_2->setText(QApplication::translate("MdpConfigClass", "How pressure coupl be used (pcoupltype)", 0, QApplication::UnicodeUTF8));
    Co11pcoutype->clear();
    Co11pcoutype->insertItems(0, QStringList()
     << QApplication::translate("MdpConfigClass", "isotropic", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "semiisotropic", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "anisotropic", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "surface-tension", 0, QApplication::UnicodeUTF8)
    );
    textLabel20_2->setText(QApplication::translate("MdpConfigClass", "Time constant for coupling (tau_p) (ps)", 0, QApplication::UnicodeUTF8));
    Le11taup->setText(QApplication::translate("MdpConfigClass", "1", 0, QApplication::UnicodeUTF8));
    textLabel21_2->setText(QApplication::translate("MdpConfigClass", "Compressibility (compressibility) (1/bar)", 0, QApplication::UnicodeUTF8));
    textLabel22_2->setText(QApplication::translate("MdpConfigClass", "Reference pressure for coupling (ref_p)(bar)", 0, QApplication::UnicodeUTF8));
    tabWidget4->setTabText(tabWidget4->indexOf(tab_6), QApplication::translate("MdpConfigClass", "P Coupling", 0, QApplication::UnicodeUTF8));
    textLabel23_2->setText(QApplication::translate("MdpConfigClass", "Generate velocities at startup (gen_vel)", 0, QApplication::UnicodeUTF8));
    Co12genvel->clear();
    Co12genvel->insertItems(0, QStringList()
     << QApplication::translate("MdpConfigClass", "no", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "yes", 0, QApplication::UnicodeUTF8)
    );
    textLabel24_2->setText(QApplication::translate("MdpConfigClass", "Temperature for Maxwell distribution (gen_temp) (K)", 0, QApplication::UnicodeUTF8));
    Le12gentemp->setText(QApplication::translate("MdpConfigClass", "300", 0, QApplication::UnicodeUTF8));
    textLabel25_2->setText(QApplication::translate("MdpConfigClass", "Initialize random generator with (gen_seed) (int)", 0, QApplication::UnicodeUTF8));
    Le12genseed->setText(QApplication::translate("MdpConfigClass", "173529", 0, QApplication::UnicodeUTF8));
    textLabel26_2->setText(QApplication::translate("MdpConfigClass", "Free energy perturbation (free_energy)", 0, QApplication::UnicodeUTF8));
    Co13freeener->clear();
    Co13freeener->insertItems(0, QStringList()
     << QApplication::translate("MdpConfigClass", "no", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "yes", 0, QApplication::UnicodeUTF8)
    );
    textLabel27_2->setText(QApplication::translate("MdpConfigClass", "Starting value for lambda (init_lambda)", 0, QApplication::UnicodeUTF8));
    Le13initlam->setText(QApplication::translate("MdpConfigClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel28_2->setText(QApplication::translate("MdpConfigClass", "Increment per time step for lambda (delta_lambda)", 0, QApplication::UnicodeUTF8));
    Le13deltlam->setText(QApplication::translate("MdpConfigClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel29_2->setText(QApplication::translate("MdpConfigClass", "Soft-core parameter (sc_alpha)", 0, QApplication::UnicodeUTF8));
    Le13scalpha->setText(QApplication::translate("MdpConfigClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel30_2->setText(QApplication::translate("MdpConfigClass", "Power for lambda in the soft-core function (sc_power)", 0, QApplication::UnicodeUTF8));
    Le13scpower->setText(QApplication::translate("MdpConfigClass", "1", 0, QApplication::UnicodeUTF8));
    textLabel31->setText(QApplication::translate("MdpConfigClass", "Soft-core sigma for particles (sc_sigma) (nm)", 0, QApplication::UnicodeUTF8));
    Le13scsigma->setText(QApplication::translate("MdpConfigClass", "0.3", 0, QApplication::UnicodeUTF8));
    textLabel33->setText(QApplication::translate("MdpConfigClass", "Energy Table (energygrp_table)", 0, QApplication::UnicodeUTF8));
    textLabel32->setText(QApplication::translate("MdpConfigClass", "Table Extension (table-extension) (nm)", 0, QApplication::UnicodeUTF8));
    Le14tableext->setText(QApplication::translate("MdpConfigClass", "1", 0, QApplication::UnicodeUTF8));
    textLabel34->setText(QApplication::translate("MdpConfigClass", "Annealing (annealing)", 0, QApplication::UnicodeUTF8));
    Co15annealing->clear();
    Co15annealing->insertItems(0, QStringList()
     << QApplication::translate("MdpConfigClass", "no", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "single", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "periodic", 0, QApplication::UnicodeUTF8)
    );
    textLabel35->setText(QApplication::translate("MdpConfigClass", "Number of annealing points (annealing_npoints)", 0, QApplication::UnicodeUTF8));
    textLabel36->setText(QApplication::translate("MdpConfigClass", "Times at the annealing points for each group (annealing_time)", 0, QApplication::UnicodeUTF8));
    textLabel37->setText(QApplication::translate("MdpConfigClass", "Temps at the annealingl points for each group (annealing_temp)", 0, QApplication::UnicodeUTF8));
    textLabel38->setText(QApplication::translate("MdpConfigClass", "Brownian dynamics friction coefficient (bd_fric) (amu/ps)", 0, QApplication::UnicodeUTF8));
    Le16bdfric->setText(QApplication::translate("MdpConfigClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel39->setText(QApplication::translate("MdpConfigClass", "Initialize random generator at (ld_seed) (integer)", 0, QApplication::UnicodeUTF8));
    Le16ldseed->setText(QApplication::translate("MdpConfigClass", "1993", 0, QApplication::UnicodeUTF8));
    textLabel40->setText(QApplication::translate("MdpConfigClass", "Groups for constant acceleration (acc_grps)", 0, QApplication::UnicodeUTF8));
    textLabel41->setText(QApplication::translate("MdpConfigClass", "Acceleration for accelerated groups (accelerate) (nm/ ps**2)", 0, QApplication::UnicodeUTF8));
    textLabel42->setText(QApplication::translate("MdpConfigClass", "Groups that are to be frozen (freezegrps)", 0, QApplication::UnicodeUTF8));
    textLabel43->setText(QApplication::translate("MdpConfigClass", "Dimensions for freezed groups (freezedim)", 0, QApplication::UnicodeUTF8));
    textLabel44->setText(QApplication::translate("MdpConfigClass", "Amplitude of the accel profile (cos_acceleration) (nm/ps**2)", 0, QApplication::UnicodeUTF8));
    textLabel45->setText(QApplication::translate("MdpConfigClass", "Velocities of deformation for the box elements (deform) (nm/ps**1)", 0, QApplication::UnicodeUTF8));
    textLabel46_2->setText(QApplication::translate("MdpConfigClass", "Distance restraints (disre)", 0, QApplication::UnicodeUTF8));
    Co18disre->clear();
    Co18disre->insertItems(0, QStringList()
     << QApplication::translate("MdpConfigClass", "no", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "simple", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "ensemble", 0, QApplication::UnicodeUTF8)
    );
    textLabel47->setText(QApplication::translate("MdpConfigClass", "disre_weighting", 0, QApplication::UnicodeUTF8));
    Co18disweight->clear();
    Co18disweight->insertItems(0, QStringList()
     << QApplication::translate("MdpConfigClass", "conservative", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "equal", 0, QApplication::UnicodeUTF8)
    );
    textLabel48_2->setText(QApplication::translate("MdpConfigClass", "disre_mixed", 0, QApplication::UnicodeUTF8));
    Co18dismixed->clear();
    Co18dismixed->insertItems(0, QStringList()
     << QApplication::translate("MdpConfigClass", "no", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "yes", 0, QApplication::UnicodeUTF8)
    );
    textLabel51_2->setText(QApplication::translate("MdpConfigClass", "nstdisreout (steps)", 0, QApplication::UnicodeUTF8));
    Le18nstdisreout->setText(QApplication::translate("MdpConfigClass", "100", 0, QApplication::UnicodeUTF8));
    textLabel49->setText(QApplication::translate("MdpConfigClass", "disre_fc (kJ/(mol*nm**2))", 0, QApplication::UnicodeUTF8));
    Le18disrefc->setText(QApplication::translate("MdpConfigClass", "1000", 0, QApplication::UnicodeUTF8));
    textLabel50->setText(QApplication::translate("MdpConfigClass", "disre_tau (ps)", 0, QApplication::UnicodeUTF8));
    Le18disretau->setText(QApplication::translate("MdpConfigClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel53->setText(QApplication::translate("MdpConfigClass", "orire", 0, QApplication::UnicodeUTF8));
    Co18orie->clear();
    Co18orie->insertItems(0, QStringList()
     << QApplication::translate("MdpConfigClass", "no", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("MdpConfigClass", "yes", 0, QApplication::UnicodeUTF8)
    );
    textLabel52_2->setText(QApplication::translate("MdpConfigClass", "orire_fc (kJ/mol)", 0, QApplication::UnicodeUTF8));
    textLabel54->setText(QApplication::translate("MdpConfigClass", "orire_tau (ps)", 0, QApplication::UnicodeUTF8));
    textLabel56_2->setText(QApplication::translate("MdpConfigClass", "orire_fitgrp", 0, QApplication::UnicodeUTF8));
    textLabel55_2->setText(QApplication::translate("MdpConfigClass", "nstorireout (steps)", 0, QApplication::UnicodeUTF8));
    textLabel60_2->setText(QApplication::translate("MdpConfigClass", "Pairs for exclusion of all nonbonded interactions (energygrp_excl)", 0, QApplication::UnicodeUTF8));
    tabwMain->setTabText(tabwMain->indexOf(tab), QApplication::translate("MdpConfigClass", "Setting", 0, QApplication::UnicodeUTF8));
    tePreview->setHtml(QApplication::translate("MdpConfigClass", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Tahoma'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:10pt;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
    pbSave->setText(QApplication::translate("MdpConfigClass", "Save", 0, QApplication::UnicodeUTF8));
    tabwMain->setTabText(tabwMain->indexOf(tab_2), QApplication::translate("MdpConfigClass", "Preview", 0, QApplication::UnicodeUTF8));
    pbPreview->setText(QApplication::translate("MdpConfigClass", "Preview", 0, QApplication::UnicodeUTF8));
    pbClose->setText(QApplication::translate("MdpConfigClass", "Close", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(MdpConfigClass);
    } // retranslateUi

};

namespace Ui {
    class MdpConfigClass: public Ui_MdpConfigClass {};
} // namespace Ui

#endif // UI_MDPCONFIG_H
