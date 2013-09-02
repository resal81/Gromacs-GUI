/********************************************************************************
** Form generated from reading ui file 'commands.ui'
**
** Created: Mon Jan 14 01:54:37 2008
**      by: Qt User Interface Compiler version 4.3.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_COMMANDS_H
#define UI_COMMANDS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBox>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

class Ui_CommandsClass
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *trwCommands;
    QStackedWidget *stackwMain;
    QWidget *stack_intro;
    QGridLayout *gridLayout1;
    QTextEdit *textEdit;
    QSpacerItem *spacerItem;
    QWidget *stack_pdb2gmx;
    QGridLayout *gridLayout2;
    QToolBox *toolBox;
    QWidget *page_pdb2gmx_files;
    QGridLayout *gridLayout3;
    QLabel *textLabel2;
    QComboBox *cb1inputfile;
    QLabel *textLabel1;
    QLineEdit *le1outputfile;
    QLabel *textLabel1_5;
    QLineEdit *le1topologyfile;
    QLabel *textLabel1_4;
    QLineEdit *le1includefile;
    QLabel *textLabel1_9;
    QLineEdit *le1_n;
    QLabel *textLabel1_10;
    QLineEdit *le1_q;
    QSpacerItem *spacerItem1;
    QWidget *page_pdb2gmx_options;
    QGridLayout *gridLayout4;
    QLabel *textLabel1_2_2;
    QComboBox *cb1forcefield;
    QSpacerItem *spacerItem2;
    QLabel *textLabel1_2_8;
    QComboBox *cb1watermodel;
    QLabel *textLabel2_2;
    QLineEdit *le1force_const;
    QLabel *textLabel1_2_3;
    QLineEdit *le1minangle_h;
    QLabel *label_2;
    QLineEdit *le1maxdist_h;
    QCheckBox *ch1heavy_h;
    QCheckBox *ch1doublemass_h;
    QCheckBox *ch1ignore_h;
    QSpacerItem *spacerItem3;
    QWidget *stack_editconf;
    QGridLayout *gridLayout5;
    QToolBox *toolBox_2;
    QWidget *page_editconf_files;
    QGridLayout *gridLayout6;
    QLabel *textLabel2_3;
    QComboBox *cb2inputfile;
    QLabel *textLabel2_23;
    QComboBox *cb2_n;
    QLabel *textLabel2_24;
    QComboBox *cb2_bf;
    QLabel *textLabel1_2;
    QLineEdit *le2outputfile;
    QLabel *textLabel1_11;
    QLineEdit *le2_mead;
    QSpacerItem *spacerItem4;
    QWidget *page_editconf_options;
    QGridLayout *gridLayout7;
    QLabel *textLabel2_4;
    QComboBox *cb2boxtype;
    QSpacerItem *spacerItem5;
    QLabel *textLabel2_2_4;
    QLineEdit *le2vector_length;
    QLabel *textLabel3;
    QLineEdit *le2vector_angle;
    QLabel *textLabel2_2_3;
    QLineEdit *le2geom_center;
    QLabel *textLabel4;
    QLineEdit *le2translation;
    QLabel *textLabel4_2;
    QLineEdit *le2rotation;
    QLabel *textLabel2_2_2;
    QLineEdit *le2solute_box_dist;
    QCheckBox *ch2center_mol;
    QCheckBox *ch2orient_mol;
    QSpacerItem *spacerItem6;
    QWidget *stack_genbox;
    QGridLayout *gridLayout8;
    QToolBox *toolBox_4;
    QWidget *page_genbox_files;
    QGridLayout *gridLayout9;
    QLabel *textLabel2_7;
    QComboBox *cb3inputfile_pro;
    QLabel *textLabel2_6;
    QComboBox *cb3inputfile_water;
    QLabel *textLabel2_5;
    QComboBox *cb3inputfile_extra;
    QLabel *textLabel2_2_5;
    QComboBox *cb3topologyfile;
    QLabel *textLabel1_3;
    QLineEdit *lec3outputfile;
    QSpacerItem *spacerItem7;
    QWidget *page_genbox_options;
    QGridLayout *gridLayout10;
    QLabel *textLabel2_8;
    QLineEdit *le3boxsize;
    QSpacerItem *spacerItem8;
    QLabel *textLabel2_4_2;
    QLineEdit *le3extramol_number;
    QSpacerItem *spacerItem9;
    QWidget *stack_genion;
    QGridLayout *gridLayout11;
    QToolBox *toolBox_3;
    QWidget *page_genion_files;
    QGridLayout *gridLayout12;
    QLabel *textLabel2_9;
    QComboBox *cb4inputfile;
    QLabel *textLabel2_11;
    QComboBox *cb4indexfile;
    QLabel *textLabel2_151;
    QComboBox *cb4_table;
    QLabel *textLabel2_10;
    QLineEdit *le4outputfile;
    QLabel *textLabel2_2_6;
    QLineEdit *le4logfile;
    QLabel *textLabel1_6;
    QLineEdit *le4pdboutput;
    QSpacerItem *spacerItem10;
    QWidget *page_genion_options;
    QGridLayout *gridLayout13;
    QGroupBox *groupBox_11;
    QGridLayout *gridLayout14;
    QLabel *textLabel2_4_3;
    QLineEdit *le4posion_name;
    QLabel *textLabel2_4_2_2;
    QLineEdit *le4posion_number;
    QLabel *textLabel2_4_2_3;
    QLineEdit *le4posion_charge;
    QGroupBox *groupBox_12;
    QGridLayout *gridLayout15;
    QLabel *textLabel2_4_2_4;
    QLineEdit *le4negion_name;
    QLabel *textLabel2_4_2_2_2;
    QLineEdit *le4negion_number;
    QLabel *textLabel2_4_2_3_2;
    QLineEdit *le4negion_charge;
    QLabel *textLabel4_3;
    QLineEdit *le4min_dist;
    QLabel *textLabel5;
    QLineEdit *le4scalingfactor;
    QCheckBox *ch4random_place;
    QSpacerItem *spacerItem11;
    QWidget *stack_grompp;
    QGridLayout *gridLayout16;
    QToolBox *tbxGrompp;
    QWidget *page_grompp_files;
    QGridLayout *gridLayout17;
    QLabel *textLabel2_12;
    QComboBox *cb5inputfile;
    QLabel *textLabel2_13;
    QComboBox *cb5mdpfile;
    QLabel *textLabel2_2_7;
    QComboBox *cb5topologyfile;
    QLabel *textLabel2_2_10;
    QComboBox *cb5_r;
    QLabel *textLabel2_2_11;
    QComboBox *cb5_rb;
    QLabel *textLabel2_2_12;
    QComboBox *cb5_n;
    QLabel *textLabel2_2_36;
    QComboBox *cb5_t;
    QLabel *textLabel2_2_37;
    QComboBox *cb5_e;
    QLabel *textLabel1_7;
    QLineEdit *le5outputfile;
    QLabel *textLabel2_14;
    QLineEdit *le5_po;
    QLabel *textLabel2_3_3;
    QLineEdit *le5_deshuf;
    QLabel *textLabel2_2_2_3;
    QLineEdit *le5_pp;
    QSpacerItem *spacerItem12;
    QWidget *page_grompp_options;
    QGridLayout *gridLayout18;
    QCheckBox *ch5loud;
    QSpacerItem *spacerItem13;
    QCheckBox *ch5shuffle;
    QCheckBox *ch5sort;
    QSpacerItem *spacerItem14;
    QCheckBox *ch5rem_virtual;
    QCheckBox *ch5remove_waals;
    QCheckBox *ch5renumber;
    QLabel *txt;
    QSpinBox *sp5first_frame;
    QLabel *textLabel2_15;
    QSpinBox *sp5nodes;
    QLabel *textLabel3_2;
    QSpinBox *sp5warnings;
    QSpacerItem *spacerItem15;
    QWidget *stack_mdrun;
    QGridLayout *gridLayout19;
    QToolBox *tbxMdrun;
    QWidget *page_mdrun_files;
    QGridLayout *gridLayout20;
    QLabel *textLabel2_16;
    QComboBox *cb6_s;
    QLabel *textLabel2_17;
    QLineEdit *le6_o;
    QLabel *textLabel2_2_2_4;
    QLineEdit *le6_x;
    QLabel *textLabel2_2_8;
    QLineEdit *le6_c;
    QLabel *textLabel2_18;
    QLineEdit *le6_e;
    QLabel *textLabel1_8;
    QLineEdit *le6_g;
    QLabel *textLabel2_3_4;
    QLineEdit *le6_dgdl;
    QLabel *textLabel2_3_5;
    QLineEdit *le6_field;
    QLabel *textLabel2_152;
    QComboBox *cb6_table;
    QLabel *textLabel2_153;
    QComboBox *cb6_tablep;
    QLabel *textLabel2_154;
    QComboBox *cb6_rerun;
    QLabel *textLabel2_2_2_5;
    QLineEdit *le6_tpi;
    QSpacerItem *spacerItem16;
    QWidget *page_50;
    QGridLayout *gridLayout21;
    QLabel *textLabel2_155;
    QComboBox *cb6_ei;
    QLabel *textLabel2_2_2_6;
    QLineEdit *le6_eo;
    QLabel *textLabel2_156;
    QComboBox *cb6_j;
    QLabel *textLabel2_2_2_7;
    QLineEdit *le6_jo;
    QLabel *textLabel2_2_2_8;
    QLineEdit *le6_ffout;
    QLabel *textLabel2_2_2_9;
    QLineEdit *le6_devout;
    QLabel *textLabel2_2_2_10;
    QLineEdit *le6_runav;
    QLabel *textLabel2_157;
    QComboBox *cb6_pi;
    QLabel *textLabel2_2_2_11;
    QLineEdit *le6_po;
    QLabel *textLabel2_2_2_12;
    QLineEdit *le6_pd;
    QLabel *textLabel2_2_2_15;
    QComboBox *cb6_pn;
    QLabel *textLabel2_2_2_13;
    QLineEdit *le6_mtx;
    QLabel *textLabel2_2_2_14;
    QLineEdit *le6_dn;
    QWidget *page_mdrun_options;
    QGridLayout *gridLayout22;
    QCheckBox *ch6loud;
    QCheckBox *ch6xray;
    QCheckBox *ch6glass;
    QCheckBox *ch6dvdl;
    QCheckBox *ch6compactlog;
    QCheckBox *ch6legend;
    QLabel *textLabel2_19;
    QSpinBox *sp6status;
    QLabel *sp2threadslabel;
    QSpinBox *sp6threads;
    QLabel *textLabel3_3;
    QSpinBox *sp6replica_seed;
    QLabel *textLabel2_2_9;
    QSpinBox *sp6replica_steps;
    QSpacerItem *spacerItem17;
    QWidget *stack_tpbconv;
    QGridLayout *gridLayout23;
    QToolBox *toolBox_5;
    QWidget *page;
    QGridLayout *gridLayout24;
    QLabel *textLabel2_20;
    QComboBox *cb7inputfile;
    QLabel *textLabel2_22;
    QComboBox *cb7full;
    QLabel *textLabel2_96;
    QComboBox *cb7energy;
    QLabel *textLabel2_97;
    QComboBox *cb7index;
    QLabel *textLabel2_21;
    QLineEdit *le7output;
    QSpacerItem *spacerItem18;
    QWidget *page_2;
    QGridLayout *gridLayout25;
    QCheckBox *ch7charges;
    QCheckBox *ch7continuous;
    QGridLayout *gridLayout26;
    QLabel *textLabel2_59;
    QVBoxLayout *vboxLayout;
    QLineEdit *le7extend_this;
    QLineEdit *le7extend_until;
    QLineEdit *le7continue;
    QLabel *sp2threadslabel_2;
    QLabel *sp2threadslabel_12;
    QSpacerItem *spacerItem19;
    QWidget *stack_ngmx;
    QGridLayout *gridLayout27;
    QToolBox *toolBox_6;
    QWidget *page_3;
    QGridLayout *gridLayout28;
    QLabel *textLabel2_25;
    QComboBox *cb8traj;
    QLabel *textLabel2_98;
    QComboBox *cb8runinput;
    QLabel *textLabel2_99;
    QComboBox *cb8index;
    QSpacerItem *spacerItem20;
    QWidget *page_4;
    QGridLayout *gridLayout29;
    QLabel *textLabel2_101;
    QLineEdit *le8first;
    QLabel *textLabel2_100;
    QLineEdit *le8last;
    QLabel *textLabel2_102;
    QLineEdit *le8dt;
    QSpacerItem *spacerItem21;
    QWidget *stack_trjconv;
    QGridLayout *gridLayout30;
    QToolBox *toolBox_7;
    QWidget *page_5;
    QGridLayout *gridLayout31;
    QLabel *textLabel2_27;
    QComboBox *cb9inputfile;
    QLabel *textLabel2_28;
    QComboBox *cb9_s;
    QLabel *textLabel2_103;
    QComboBox *cb9_n;
    QLabel *textLabel2_118;
    QComboBox *cb9_fr;
    QLabel *textLabel2_119;
    QComboBox *cb9_sub;
    QLabel *textLabel2_104;
    QComboBox *cb9_drop;
    QLabel *textLabel2_26;
    QLineEdit *le9_output;
    QSpacerItem *spacerItem22;
    QWidget *page_6;
    QGridLayout *gridLayout32;
    QLabel *label;
    QLineEdit *le9first;
    QLabel *label_3;
    QLineEdit *le9last;
    QLabel *textLabel2_168;
    QLineEdit *le9only;
    QGridLayout *gridLayout33;
    QLabel *label_9;
    QSpinBox *sp9only;
    QLabel *label_11;
    QLineEdit *le9dump;
    QLabel *label_12;
    QLineEdit *le9starting;
    QLabel *label_13;
    QLineEdit *le9change;
    QGridLayout *gridLayout34;
    QLabel *label_4;
    QComboBox *cb9time;
    QLabel *label_7;
    QComboBox *cb9pbc;
    QLabel *label_5;
    QComboBox *cb9cell;
    QLabel *label_6;
    QComboBox *cb9center;
    QSpacerItem *spacerItem23;
    QWidget *page_45;
    QGridLayout *gridLayout35;
    QGridLayout *gridLayout36;
    QLabel *label_8;
    QComboBox *cb9fit;
    QGridLayout *gridLayout37;
    QCheckBox *ch9velocity;
    QCheckBox *ch9force;
    QLabel *label_14;
    QLineEdit *le9truncate;
    QCheckBox *ch9append;
    QCheckBox *ch9write;
    QCheckBox *ch9TER;
    QLabel *label_16;
    QLineEdit *le9below;
    QLabel *label_17;
    QLineEdit *le9above;
    QSpacerItem *spacerItem24;
    QWidget *stack_g_energy;
    QGridLayout *gridLayout38;
    QToolBox *toolBox_8;
    QWidget *page_7;
    QGridLayout *gridLayout39;
    QLabel *textLabel2_30;
    QComboBox *cb10input;
    QLabel *textLabel2_31;
    QComboBox *cb10_f2;
    QLabel *textLabel2_2_13;
    QComboBox *cb10_s;
    QLabel *textLabel2_29;
    QLineEdit *le10output;
    QLabel *textLabel2_112;
    QLineEdit *le10_viol;
    QLabel *textLabel2_113;
    QLineEdit *le10_pairs;
    QLabel *textLabel2_114;
    QLineEdit *le10_oten;
    QLabel *textLabel2_115;
    QLineEdit *le10_corr;
    QLabel *textLabel2_116;
    QLineEdit *le10_vis;
    QLabel *textLabel2_117;
    QLineEdit *le10_ravg;
    QSpacerItem *spacerItem25;
    QWidget *page_8;
    QGridLayout *gridLayout40;
    QGridLayout *gridLayout41;
    QGridLayout *gridLayout42;
    QCheckBox *ch10free;
    QCheckBox *ch10sum;
    QCheckBox *ch10dipole;
    QGridLayout *gridLayout43;
    QLabel *label_22;
    QLineEdit *le10first;
    QLabel *label_23;
    QLineEdit *le10last;
    QGridLayout *gridLayout44;
    QLabel *label_24;
    QLineEdit *le10ref;
    QLabel *label_25;
    QLineEdit *le10subtract;
    QGridLayout *gridLayout45;
    QLabel *label_26;
    QSpinBox *sp10skip;
    QLabel *label_27;
    QSpinBox *sp10mols;
    QLabel *label_28;
    QSpinBox *sp10degrees;
    QSpacerItem *spacerItem26;
    QWidget *page_46;
    QGridLayout *gridLayout46;
    QGridLayout *gridLayout47;
    QGridLayout *gridLayout48;
    QCheckBox *ch10autocorr;
    QCheckBox *ch10inst;
    QCheckBox *ch10eigen;
    QCheckBox *ch10normal;
    QLabel *label_10;
    QSpinBox *sp10length;
    QGridLayout *gridLayout49;
    QLabel *label_15;
    QComboBox *cb10order;
    QLabel *label_18;
    QComboBox *cb10fit;
    QGridLayout *gridLayout50;
    QLabel *label_19;
    QSpinBox *sp10skipn;
    QGridLayout *gridLayout51;
    QLabel *label_20;
    QLineEdit *le10begin;
    QLabel *label_21;
    QLineEdit *le10end;
    QSpacerItem *spacerItem27;
    QWidget *stack_g_traj;
    QGridLayout *gridLayout52;
    QToolBox *toolBox_9;
    QWidget *page_9;
    QGridLayout *gridLayout53;
    QLabel *textLabel2_34;
    QComboBox *cb11input;
    QLabel *textLabel2_121;
    QComboBox *cb11_s;
    QLabel *textLabel2_122;
    QComboBox *cb11_n;
    QLabel *textLabel2_120;
    QLineEdit *le11_ox;
    QLabel *textLabel2_2_33;
    QLineEdit *le11_ov;
    QLabel *textLabel1_15;
    QLineEdit *le11_of;
    QLabel *textLabel1_33;
    QLineEdit *le11_ob;
    QLabel *textLabel2_33;
    QLineEdit *le11_ot;
    QLabel *textLabel2_2_14;
    QLineEdit *le11_ekt;
    QLabel *textLabel1_13;
    QLineEdit *le11_ekr;
    QLabel *textLabel2_32;
    QLineEdit *le11_cv;
    QLabel *textLabel2_123;
    QLineEdit *le11_cf;
    QSpacerItem *spacerItem28;
    QWidget *page_10;
    QGridLayout *gridLayout54;
    QGridLayout *gridLayout55;
    QCheckBox *ch11plot;
    QCheckBox *ch11index;
    QCheckBox *ch11remove;
    QLabel *label_55;
    QCheckBox *ch11x;
    QCheckBox *ch11y;
    QCheckBox *ch11z;
    QCheckBox *ch11vector;
    QLabel *label_56;
    QSpinBox *sp11groups;
    QSplitter *splitter_3;
    QLabel *label_57;
    QLineEdit *le11first;
    QLabel *label_58;
    QLineEdit *le11last;
    QLabel *textLabel2_150;
    QLineEdit *le11only;
    QLabel *label_59;
    QLineEdit *le11binwidth;
    QLabel *label_60;
    QLineEdit *le11scale;
    QSpacerItem *spacerItem29;
    QWidget *stack_g_analyze;
    QGridLayout *gridLayout56;
    QToolBox *toolBox_10;
    QWidget *page_11;
    QGridLayout *gridLayout57;
    QLabel *textLabel2_36;
    QComboBox *cb12input;
    QLabel *textLabel2_37;
    QLineEdit *le12_ac;
    QLabel *textLabel2_2_15;
    QLineEdit *le12_msd;
    QLabel *textLabel1_14;
    QLineEdit *le12_cc;
    QLabel *textLabel2_35;
    QLineEdit *le12_dist;
    QLabel *textLabel2_105;
    QLineEdit *le12_av;
    QLabel *textLabel2_106;
    QLineEdit *le12_ee;
    QLabel *textLabel1_31;
    QLineEdit *le12log;
    QSpacerItem *spacerItem30;
    QWidget *page_12;
    QGridLayout *gridLayout58;
    QCheckBox *ch12_expect;
    QCheckBox *ch12derive;
    QCheckBox *ch12integrate;
    QCheckBox *ch12interpret;
    QGridLayout *gridLayout59;
    QHBoxLayout *hboxLayout;
    QLabel *label_29;
    QLineEdit *le12first;
    QLabel *label_30;
    QVBoxLayout *vboxLayout1;
    QLineEdit *le12last;
    QLineEdit *le12binwidth;
    QComboBox *cb12error;
    QLineEdit *le12average;
    QLineEdit *le12print;
    QSpinBox *sp12read;
    QLabel *label_32;
    QLabel *label_35;
    QLabel *label_33;
    QLabel *label_31;
    QLabel *label_34;
    QWidget *page_47;
    QGridLayout *gridLayout60;
    QCheckBox *ch12fit;
    QCheckBox *ch12subtract;
    QCheckBox *ch12acf_calc;
    QCheckBox *ch12acf_norml;
    QGridLayout *gridLayout61;
    QLabel *label_37;
    QVBoxLayout *vboxLayout2;
    QComboBox *cb12order;
    QSpinBox *sp12length;
    QComboBox *cb12fitfunc;
    QSpinBox *sp12skipcorr;
    QLineEdit *le12begin;
    QLineEdit *le12end;
    QLabel *label_38;
    QLabel *label_39;
    QLabel *label_40;
    QLabel *label_41;
    QLabel *label_36;
    QSpacerItem *spacerItem31;
    QWidget *stack_g_rms;
    QGridLayout *gridLayout62;
    QToolBox *toolBox_11;
    QWidget *page_13;
    QGridLayout *gridLayout63;
    QLabel *textLabel2_39;
    QComboBox *cb13input;
    QLabel *textLabel2_109;
    QComboBox *cb13_f;
    QLabel *textLabel2_110;
    QComboBox *cb13_f2;
    QLabel *textLabel2_111;
    QComboBox *cb13index;
    QLabel *textLabel2_2_16;
    QLineEdit *le13_o;
    QLabel *textLabel2_40;
    QLineEdit *le13_mir;
    QLabel *textLabel2_2_32;
    QLineEdit *le13_a;
    QLabel *textLabel2_108;
    QLineEdit *le13_dist;
    QLabel *textLabel2_38;
    QLineEdit *le13_m;
    QLabel *textLabel1_32;
    QLineEdit *le13_bin;
    QLabel *textLabel2_107;
    QLineEdit *le13_bm;
    QSpacerItem *spacerItem32;
    QWidget *page_14;
    QCheckBox *ch13pbc;
    QCheckBox *ch13graph;
    QLabel *label_54;
    QSplitter *splitter_2;
    QLabel *label_48;
    QLineEdit *le13first;
    QLabel *label_49;
    QLineEdit *le13last;
    QWidget *layoutWidget;
    QGridLayout *gridLayout64;
    QLabel *label_50;
    QComboBox *cb13time;
    QLabel *label_51;
    QComboBox *cb13measure;
    QLabel *label_52;
    QComboBox *cb13fit;
    QSplitter *splitter;
    QWidget *layoutWidget1;
    QVBoxLayout *vboxLayout3;
    QLabel *label_42;
    QLineEdit *le13_max;
    QWidget *layoutWidget2;
    QVBoxLayout *vboxLayout4;
    QLabel *label_43;
    QLineEdit *le13_min;
    QWidget *layoutWidget3;
    QVBoxLayout *vboxLayout5;
    QLabel *label_44;
    QLineEdit *le13_bmax;
    QWidget *layoutWidget4;
    QVBoxLayout *vboxLayout6;
    QLabel *label_45;
    QLineEdit *le13_bmin;
    QWidget *layoutWidget5;
    QGridLayout *gridLayout65;
    QLabel *label_53;
    QSpinBox *sp13compare;
    QLabel *label_47;
    QSpinBox *sp13level;
    QLabel *label_46;
    QSpinBox *sp13group;
    QWidget *stack_g_confrms;
    QGridLayout *gridLayout66;
    QToolBox *toolBox_12;
    QWidget *page_15;
    QGridLayout *gridLayout67;
    QLabel *textLabel2_42;
    QComboBox *cb14_f1;
    QLabel *textLabel2_41;
    QComboBox *cb14_f2;
    QLabel *textLabel2_2_17;
    QLineEdit *le14_o;
    QLabel *textLabel1_16;
    QComboBox *cb14_n1;
    QLabel *textLabel1_17;
    QComboBox *cb14_n2;
    QLabel *textLabel2_43;
    QLineEdit *le14_no;
    QSpacerItem *spacerItem33;
    QWidget *page_16;
    QGridLayout *gridLayout68;
    QCheckBox *ch14fit;
    QCheckBox *ch14mass;
    QCheckBox *ch14try;
    QCheckBox *ch14least;
    QCheckBox *ch14compare;
    QCheckBox *ch14bfactor;
    QSpacerItem *spacerItem34;
    QWidget *stack_g_cluster;
    QGridLayout *gridLayout69;
    QToolBox *toolBox_13;
    QWidget *page_17;
    QGridLayout *gridLayout70;
    QLabel *textLabel2_44;
    QComboBox *cb15input;
    QLabel *textLabel2_136;
    QComboBox *cb15_s;
    QLabel *textLabel2_134;
    QComboBox *cb15_n;
    QLabel *textLabel2_2_60;
    QLineEdit *le15_o;
    QLabel *textLabel2_2_18;
    QLineEdit *le15log;
    QLabel *textLabel2_45;
    QLineEdit *le15_dist;
    QLabel *textLabel2_2_34;
    QLineEdit *le15_ev;
    QLabel *textLabel2_260;
    QLineEdit *le15_sz;
    QLabel *textLabel2_261;
    QLineEdit *le15_tr;
    QLabel *textLabel2_46;
    QLineEdit *le15_ntr;
    QLabel *textLabel1_34;
    QLineEdit *le15_clid;
    QLabel *textLabel2_133;
    QLineEdit *le15_cl;
    QSpacerItem *spacerItem35;
    QWidget *page_18;
    QGridLayout *gridLayout71;
    QCheckBox *ch15dist;
    QCheckBox *ch15least;
    QCheckBox *ch15aver;
    QCheckBox *ch15treat;
    QLabel *textLabel2_135;
    QLineEdit *le15first;
    QLabel *sp2threadslabel_18;
    QLineEdit *le15last;
    QLabel *textLabel2_137;
    QLineEdit *le15only;
    QLabel *label_61;
    QVBoxLayout *vboxLayout7;
    QComboBox *cb15time;
    QComboBox *cb15method;
    QLabel *label_62;
    QLabel *label_63;
    QSpinBox *sp15discre;
    QLabel *label_64;
    QLineEdit *le15cutoff;
    QLabel *label_65;
    QLineEdit *le15max;
    QSpacerItem *spacerItem36;
    QWidget *page_48;
    QGridLayout *gridLayout72;
    QLabel *label_66;
    QSpinBox *sp15nrth;
    QLabel *label_67;
    QSpinBox *sp15numb;
    QLabel *label_68;
    QSpinBox *sp15per;
    QLabel *label_70;
    QLineEdit *le15minrms;
    QLabel *label_69;
    QSpinBox *sp15near;
    QLabel *label_74;
    QSpinBox *sp15identical;
    QLabel *label_76;
    QSpinBox *sp15xpm;
    QLabel *label_75;
    QSpinBox *sp15iter;
    QLabel *label_71;
    QLineEdit *le15boltz;
    QWidget *stack_g_rmsf;
    QGridLayout *gridLayout73;
    QToolBox *toolBox_14;
    QWidget *page_19;
    QGridLayout *gridLayout74;
    QLabel *textLabel2_49;
    QComboBox *cb16_f;
    QLabel *textLabel2_165;
    QComboBox *cb16_s;
    QLabel *textLabel2_166;
    QComboBox *cb16_n;
    QLabel *textLabel2_167;
    QComboBox *cb16_q;
    QLabel *textLabel2_47;
    QLineEdit *le16_oq;
    QLabel *textLabel2_160;
    QLineEdit *le16_ox;
    QLabel *textLabel2_161;
    QLineEdit *le16_o;
    QLabel *textLabel2_162;
    QLineEdit *le16_od;
    QLabel *textLabel2_163;
    QLabel *textLabel2_164;
    QLineEdit *le16_dir;
    QSpacerItem *spacerItem37;
    QLineEdit *le16_oc;
    QWidget *page_20;
    QGridLayout *gridLayout75;
    QLabel *textLabel2_159;
    QLineEdit *le16first;
    QLabel *sp2threadslabel_25;
    QLineEdit *le16last;
    QLabel *textLabel2_158;
    QLineEdit *le16only;
    QCheckBox *ch16av;
    QCheckBox *ch16aniso;
    QSpacerItem *spacerItem38;
    QWidget *stack_g_mindist;
    QGridLayout *gridLayout76;
    QToolBox *toolBox_15;
    QWidget *page_21;
    QGridLayout *gridLayout77;
    QLabel *textLabel2_52;
    QComboBox *co6inputfile_12;
    QLabel *textLabel2_50;
    QLineEdit *le6outputtrajfile_12;
    QLabel *textLabel2_2_20;
    QLineEdit *le6outputconffile_12;
    QLabel *textLabel1_19;
    QLineEdit *le6logfile_12;
    QLabel *textLabel2_51;
    QLineEdit *le6energyfile_12;
    QSpacerItem *spacerItem39;
    QWidget *page_22;
    QGridLayout *gridLayout78;
    QCheckBox *ch6loud_12;
    QSpacerItem *spacerItem40;
    QCheckBox *ch6xray_12;
    QSpinBox *sp6status_12;
    QSpinBox *sp6threads_12;
    QSpacerItem *spacerItem41;
    QWidget *stack_g_dist;
    QGridLayout *gridLayout79;
    QToolBox *toolBox_16;
    QWidget *page_23;
    QGridLayout *gridLayout80;
    QLabel *textLabel2_53;
    QComboBox *co6inputfile_13;
    QLabel *textLabel2_55;
    QLineEdit *le6outputtrajfile_13;
    QLabel *textLabel2_2_21;
    QLineEdit *le6outputconffile_13;
    QLabel *textLabel1_20;
    QLineEdit *le6logfile_13;
    QLabel *textLabel2_54;
    QLineEdit *le6energyfile_13;
    QSpacerItem *spacerItem42;
    QWidget *page_24;
    QGridLayout *gridLayout81;
    QCheckBox *ch6loud_13;
    QSpacerItem *spacerItem43;
    QCheckBox *ch6xray_13;
    QSpinBox *sp6status_13;
    QSpinBox *sp6threads_13;
    QSpacerItem *spacerItem44;
    QWidget *stack_g_bond;
    QGridLayout *gridLayout82;
    QToolBox *toolBox_17;
    QWidget *page_25;
    QGridLayout *gridLayout83;
    QLabel *textLabel2_56;
    QComboBox *cb19input;
    QLabel *textLabel2_58;
    QComboBox *cb19_n;
    QLabel *textLabel2_62;
    QComboBox *cb19_s;
    QLabel *textLabel1_21;
    QLineEdit *le19output;
    QLabel *textLabel2_2_22;
    QLineEdit *le19_d;
    QLabel *textLabel2_57;
    QLineEdit *le19log;
    QSpacerItem *spacerItem45;
    QWidget *page_26;
    QGridLayout *gridLayout84;
    QCheckBox *ch19bond;
    QCheckBox *ch19dist;
    QLabel *textLabel2_138;
    QLineEdit *le19first;
    QLabel *sp2threadslabel_19;
    QLineEdit *le19last;
    QLabel *textLabel2_139;
    QLineEdit *le19only;
    QLabel *textLabel2_140;
    QLineEdit *le19length;
    QLabel *textLabel2_141;
    QLineEdit *le19width;
    QSpacerItem *spacerItem46;
    QWidget *stack_g_angle;
    QGridLayout *gridLayout85;
    QToolBox *toolBox_26;
    QWidget *page_43;
    QGridLayout *gridLayout86;
    QLabel *textLabel2_92;
    QComboBox *co6inputfile_23;
    QLabel *textLabel2_93;
    QLineEdit *le6outputtrajfile_23;
    QLabel *textLabel2_2_31;
    QLineEdit *le6outputconffile_23;
    QLabel *textLabel1_30;
    QLineEdit *le6logfile_23;
    QLabel *textLabel2_94;
    QLineEdit *le6energyfile_23;
    QSpacerItem *spacerItem47;
    QWidget *page_44;
    QGridLayout *gridLayout87;
    QCheckBox *ch6loud_23;
    QSpacerItem *spacerItem48;
    QCheckBox *ch6xray_23;
    QLabel *textLabel2_95;
    QSpinBox *sp6status_23;
    QSpinBox *sp6threads_23;
    QLabel *sp2threadslabel_11;
    QSpacerItem *spacerItem49;
    QWidget *stack_g_dih;
    QGridLayout *gridLayout88;
    QToolBox *toolBox_25;
    QWidget *page_41;
    QGridLayout *gridLayout89;
    QLabel *textLabel2_88;
    QComboBox *co6inputfile_22;
    QLabel *textLabel2_89;
    QLineEdit *le6outputtrajfile_22;
    QLabel *textLabel2_2_30;
    QLineEdit *le6outputconffile_22;
    QLabel *textLabel1_29;
    QLineEdit *le6logfile_22;
    QLabel *textLabel2_90;
    QLineEdit *le6energyfile_22;
    QSpacerItem *spacerItem50;
    QWidget *page_42;
    QGridLayout *gridLayout90;
    QCheckBox *ch6loud_22;
    QSpacerItem *spacerItem51;
    QCheckBox *ch6xray_22;
    QLabel *textLabel2_91;
    QSpinBox *sp6status_22;
    QSpinBox *sp6threads_22;
    QLabel *sp2threadslabel_10;
    QSpacerItem *spacerItem52;
    QWidget *stack_g_hbond;
    QGridLayout *gridLayout91;
    QToolBox *toolBox_24;
    QWidget *page_39;
    QGridLayout *gridLayout92;
    QLabel *textLabel2_84;
    QComboBox *cb22input;
    QLabel *textLabel2_145;
    QComboBox *cb22_s;
    QLabel *textLabel2_143;
    QComboBox *cb22_n;
    QLabel *textLabel2_2_62;
    QComboBox *cb22_sel;
    QLabel *textLabel2_2_61;
    QLineEdit *le22_num;
    QLabel *textLabel2_2_29;
    QLineEdit *le22log;
    QLabel *textLabel2_2_35;
    QLineEdit *le22_ac;
    QLabel *textLabel2_263;
    QLineEdit *le22_dis;
    QLabel *textLabel2_262;
    QLineEdit *le22_ang;
    QLabel *textLabel2_85;
    QLineEdit *le22_hx;
    QLabel *textLabel1_35;
    QLineEdit *le22_hbn;
    QLabel *textLabel2_144;
    QLineEdit *le22_hbm;
    QLabel *textLabel2_86;
    QLineEdit *le22_don;
    QLabel *textLabel2_146;
    QLineEdit *le22_dan;
    QLabel *textLabel2_147;
    QLineEdit *le22_life;
    QWidget *page_40;
    QGridLayout *gridLayout93;
    QCheckBox *ch22solvent;
    QCheckBox *ch22distance;
    QCheckBox *ch22regard;
    QCheckBox *ch22look;
    QLabel *textLabel2_148;
    QLineEdit *le22first;
    QLabel *sp2threadslabel_20;
    QLineEdit *le22last;
    QLabel *textLabel2_149;
    QLineEdit *le22only;
    QLabel *textLabel2_87;
    QLineEdit *le22cutang;
    QLabel *sp2threadslabel_21;
    QLineEdit *le22cutrad;
    QLabel *sp2threadslabel_22;
    QLineEdit *le22binang;
    QLabel *sp2threadslabel_23;
    QLineEdit *le22bindist;
    QLabel *sp2threadslabel_9;
    QLineEdit *le22shell;
    QLabel *sp2threadslabel_24;
    QLineEdit *le22temp;
    QSpacerItem *spacerItem53;
    QWidget *page_49;
    QGridLayout *gridLayout94;
    QCheckBox *ch22single;
    QCheckBox *ch22norm;
    QLabel *label_73;
    QLineEdit *le22corr;
    QLabel *label_77;
    QLineEdit *le22theore;
    QLabel *label_78;
    QSpinBox *sp22length;
    QHBoxLayout *hboxLayout1;
    QLabel *label_80;
    QComboBox *cb22fit;
    QHBoxLayout *hboxLayout2;
    QLabel *label_83;
    QComboBox *cb22order;
    QLabel *label_81;
    QSpinBox *sp22skipcorr;
    QLabel *label_79;
    QLineEdit *le22begin;
    QLabel *label_82;
    QLineEdit *le22end;
    QSpacerItem *spacerItem54;
    QWidget *stack_g_saltbr;
    QGridLayout *gridLayout95;
    QToolBox *toolBox_23;
    QWidget *page_37;
    QGridLayout *gridLayout96;
    QLabel *textLabel2_80;
    QComboBox *co6inputfile_20;
    QLabel *textLabel2_81;
    QLineEdit *le6outputtrajfile_20;
    QLabel *textLabel2_2_28;
    QLineEdit *le6outputconffile_20;
    QLabel *textLabel1_27;
    QLineEdit *le6logfile_20;
    QLabel *textLabel2_82;
    QLineEdit *le6energyfile_20;
    QSpacerItem *spacerItem55;
    QWidget *page_38;
    QGridLayout *gridLayout97;
    QCheckBox *ch6loud_20;
    QSpacerItem *spacerItem56;
    QCheckBox *ch6xray_20;
    QLabel *textLabel2_83;
    QSpinBox *sp6status_20;
    QSpinBox *sp6threads_20;
    QLabel *sp2threadslabel_8;
    QSpacerItem *spacerItem57;
    QWidget *stack_g_sgangle;
    QGridLayout *gridLayout98;
    QToolBox *toolBox_22;
    QWidget *page_35;
    QGridLayout *gridLayout99;
    QLabel *textLabel2_76;
    QComboBox *co6inputfile_19;
    QLabel *textLabel2_77;
    QLineEdit *le6outputtrajfile_19;
    QLabel *textLabel2_2_27;
    QLineEdit *le6outputconffile_19;
    QLabel *textLabel1_26;
    QLineEdit *le6logfile_19;
    QLabel *textLabel2_78;
    QLineEdit *le6energyfile_19;
    QSpacerItem *spacerItem58;
    QWidget *page_36;
    QGridLayout *gridLayout100;
    QCheckBox *ch6loud_19;
    QSpacerItem *spacerItem59;
    QCheckBox *ch6xray_19;
    QLabel *textLabel2_79;
    QSpinBox *sp6status_19;
    QSpinBox *sp6threads_19;
    QLabel *sp2threadslabel_7;
    QSpacerItem *spacerItem60;
    QWidget *stack_g_potential;
    QGridLayout *gridLayout101;
    QToolBox *toolBox_21;
    QWidget *page_33;
    QGridLayout *gridLayout102;
    QLabel *textLabel2_72;
    QLabel *textLabel2_73;
    QComboBox *cb25input;
    QComboBox *cb25_n;
    QLabel *textLabel2_128;
    QComboBox *cb25_s;
    QLabel *textLabel2_2_26;
    QLineEdit *le25output;
    QLabel *textLabel1_25;
    QLineEdit *le25_oc;
    QLabel *textLabel2_74;
    QLineEdit *le25_of;
    QSpacerItem *spacerItem61;
    QWidget *page_34;
    QGridLayout *gridLayout103;
    QCheckBox *ch25sphere;
    QLabel *textLabel2_130;
    QLineEdit *le25first;
    QLabel *sp2threadslabel_15;
    QLineEdit *le25last;
    QLabel *textLabel2_129;
    QLineEdit *le25only;
    QLabel *textLabel2_131;
    QLineEdit *le25take;
    QLabel *textLabel2_132;
    QSpinBox *sp25calc;
    QLabel *textLabel2_75;
    QSpinBox *sp25disc_first;
    QLabel *sp2threadslabel_16;
    QSpinBox *sp25disc_last;
    QLabel *sp2threadslabel_17;
    QSpinBox *sp25groups;
    QLabel *sp2threadslabel_6;
    QLineEdit *le25transl;
    QSpacerItem *spacerItem62;
    QWidget *stack_g_chi;
    QGridLayout *gridLayout104;
    QToolBox *toolBox_20;
    QWidget *page_31;
    QGridLayout *gridLayout105;
    QLabel *textLabel2_68;
    QComboBox *co6inputfile_17;
    QLabel *textLabel2_69;
    QLineEdit *le6outputtrajfile_17;
    QLabel *textLabel2_2_25;
    QLineEdit *le6outputconffile_17;
    QLabel *textLabel1_24;
    QLineEdit *le6logfile_17;
    QLabel *textLabel2_70;
    QLineEdit *le6energyfile_17;
    QSpacerItem *spacerItem63;
    QWidget *page_32;
    QGridLayout *gridLayout106;
    QCheckBox *ch6loud_17;
    QSpacerItem *spacerItem64;
    QCheckBox *ch6xray_17;
    QLabel *textLabel2_71;
    QSpinBox *sp6status_17;
    QSpinBox *sp6threads_17;
    QLabel *sp2threadslabel_5;
    QSpacerItem *spacerItem65;
    QWidget *stack_g_helix;
    QGridLayout *gridLayout107;
    QToolBox *toolBox_19;
    QWidget *page_29;
    QGridLayout *gridLayout108;
    QLabel *textLabel2_64;
    QComboBox *cb27input;
    QLabel *textLabel2_65;
    QComboBox *cb27_n;
    QLabel *textLabel2_127;
    QComboBox *cb27_f;
    QLabel *textLabel2_2_24;
    QLineEdit *le27_to;
    QLabel *textLabel1_23;
    QLineEdit *le27_cz;
    QLabel *textLabel2_66;
    QLineEdit *le27_co;
    QSpacerItem *spacerItem66;
    QWidget *page_30;
    QGridLayout *gridLayout109;
    QCheckBox *ch27check;
    QCheckBox *ch27toggle;
    QCheckBox *ch27write;
    QLabel *textLabel2_125;
    QLineEdit *le27first;
    QLabel *sp2threadslabel_13;
    QLineEdit *le27last;
    QLabel *textLabel2_126;
    QLineEdit *le27only;
    QLabel *textLabel2_142;
    QSpinBox *sp27seq;
    QLabel *textLabel2_67;
    QSpinBox *sp27firstres;
    QLabel *sp2threadslabel_4;
    QSpinBox *sp27lastres;
    QLabel *sp2threadslabel_14;
    QComboBox *cb27property;
    QSpacerItem *spacerItem67;
    QWidget *stack_g_rama;
    QGridLayout *gridLayout110;
    QToolBox *toolBox_18;
    QWidget *page_27;
    QGridLayout *gridLayout111;
    QLabel *textLabel2_60;
    QComboBox *cb28input;
    QLabel *textLabel2_61;
    QComboBox *cb28_s;
    QLabel *textLabel2_2_23;
    QLineEdit *le28output;
    QSpacerItem *spacerItem68;
    QWidget *page_28;
    QGridLayout *gridLayout112;
    QLabel *textLabel2_63;
    QLineEdit *le28first;
    QLabel *sp2threadslabel_3;
    QLineEdit *le28last;
    QLabel *textLabel2_124;
    QLineEdit *le28only;
    QSpacerItem *spacerItem69;
    QLineEdit *leCommandLine;
    QPushButton *pbRun;
    QCheckBox *chTerminal;
    QSpacerItem *spacerItem70;

    void setupUi(QWidget *CommandsClass)
    {
    if (CommandsClass->objectName().isEmpty())
        CommandsClass->setObjectName(QString::fromUtf8("CommandsClass"));
    CommandsClass->resize(949, 612);
    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(CommandsClass->sizePolicy().hasHeightForWidth());
    CommandsClass->setSizePolicy(sizePolicy);
    gridLayout = new QGridLayout(CommandsClass);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    trwCommands = new QTreeWidget(CommandsClass);
    trwCommands->setObjectName(QString::fromUtf8("trwCommands"));
    QPalette palette;
    QBrush brush(QColor(246, 246, 246, 255));
    brush.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
    palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
    palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
    trwCommands->setPalette(palette);
    trwCommands->setMouseTracking(true);
    trwCommands->setFrameShape(QFrame::StyledPanel);
    trwCommands->setAlternatingRowColors(true);

    gridLayout->addWidget(trwCommands, 0, 0, 1, 2);

    stackwMain = new QStackedWidget(CommandsClass);
    stackwMain->setObjectName(QString::fromUtf8("stackwMain"));
    stackwMain->setMinimumSize(QSize(372, 441));
    stackwMain->setMaximumSize(QSize(377, 16777215));
    stackwMain->setFrameShape(QFrame::NoFrame);
    stackwMain->setMidLineWidth(0);
    stack_intro = new QWidget();
    stack_intro->setObjectName(QString::fromUtf8("stack_intro"));
    gridLayout1 = new QGridLayout(stack_intro);
    gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
    textEdit = new QTextEdit(stack_intro);
    textEdit->setObjectName(QString::fromUtf8("textEdit"));
    textEdit->setMaximumSize(QSize(16777215, 175));
    QPalette palette1;
    QBrush brush1(QColor(255, 255, 240, 255));
    brush1.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
    palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
    QBrush brush2(QColor(255, 255, 255, 255));
    brush2.setStyle(Qt::SolidPattern);
    palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
    textEdit->setPalette(palette1);
    QFont font;
    font.setFamily(QString::fromUtf8("Sans Serif"));
    font.setPointSize(13);
    textEdit->setFont(font);
    textEdit->setReadOnly(true);

    gridLayout1->addWidget(textEdit, 0, 0, 1, 1);

    spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout1->addItem(spacerItem, 1, 0, 1, 1);

    stackwMain->addWidget(stack_intro);
    stack_pdb2gmx = new QWidget();
    stack_pdb2gmx->setObjectName(QString::fromUtf8("stack_pdb2gmx"));
    gridLayout2 = new QGridLayout(stack_pdb2gmx);
    gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
    toolBox = new QToolBox(stack_pdb2gmx);
    toolBox->setObjectName(QString::fromUtf8("toolBox"));
    toolBox->setFrameShape(QFrame::StyledPanel);
    page_pdb2gmx_files = new QWidget();
    page_pdb2gmx_files->setObjectName(QString::fromUtf8("page_pdb2gmx_files"));
    page_pdb2gmx_files->setGeometry(QRect(0, 0, 350, 441));
    gridLayout3 = new QGridLayout(page_pdb2gmx_files);
    gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
    textLabel2 = new QLabel(page_pdb2gmx_files);
    textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
    QFont font1;
    font1.setBold(false);
    font1.setItalic(false);
    font1.setUnderline(true);
    font1.setWeight(50);
    textLabel2->setFont(font1);
    textLabel2->setWordWrap(false);

    gridLayout3->addWidget(textLabel2, 0, 0, 1, 1);

    cb1inputfile = new QComboBox(page_pdb2gmx_files);
    cb1inputfile->setObjectName(QString::fromUtf8("cb1inputfile"));

    gridLayout3->addWidget(cb1inputfile, 0, 2, 1, 1);

    textLabel1 = new QLabel(page_pdb2gmx_files);
    textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
    textLabel1->setFont(font1);
    textLabel1->setWordWrap(false);

    gridLayout3->addWidget(textLabel1, 1, 0, 1, 1);

    le1outputfile = new QLineEdit(page_pdb2gmx_files);
    le1outputfile->setObjectName(QString::fromUtf8("le1outputfile"));

    gridLayout3->addWidget(le1outputfile, 1, 2, 1, 1);

    textLabel1_5 = new QLabel(page_pdb2gmx_files);
    textLabel1_5->setObjectName(QString::fromUtf8("textLabel1_5"));
    textLabel1_5->setFont(font1);
    textLabel1_5->setWordWrap(false);

    gridLayout3->addWidget(textLabel1_5, 2, 0, 1, 1);

    le1topologyfile = new QLineEdit(page_pdb2gmx_files);
    le1topologyfile->setObjectName(QString::fromUtf8("le1topologyfile"));

    gridLayout3->addWidget(le1topologyfile, 2, 2, 1, 1);

    textLabel1_4 = new QLabel(page_pdb2gmx_files);
    textLabel1_4->setObjectName(QString::fromUtf8("textLabel1_4"));
    textLabel1_4->setFont(font1);
    textLabel1_4->setWordWrap(false);

    gridLayout3->addWidget(textLabel1_4, 3, 0, 1, 2);

    le1includefile = new QLineEdit(page_pdb2gmx_files);
    le1includefile->setObjectName(QString::fromUtf8("le1includefile"));

    gridLayout3->addWidget(le1includefile, 3, 2, 1, 1);

    textLabel1_9 = new QLabel(page_pdb2gmx_files);
    textLabel1_9->setObjectName(QString::fromUtf8("textLabel1_9"));
    textLabel1_9->setWordWrap(false);

    gridLayout3->addWidget(textLabel1_9, 4, 0, 1, 2);

    le1_n = new QLineEdit(page_pdb2gmx_files);
    le1_n->setObjectName(QString::fromUtf8("le1_n"));

    gridLayout3->addWidget(le1_n, 4, 2, 1, 1);

    textLabel1_10 = new QLabel(page_pdb2gmx_files);
    textLabel1_10->setObjectName(QString::fromUtf8("textLabel1_10"));
    textLabel1_10->setWordWrap(false);

    gridLayout3->addWidget(textLabel1_10, 5, 0, 1, 2);

    le1_q = new QLineEdit(page_pdb2gmx_files);
    le1_q->setObjectName(QString::fromUtf8("le1_q"));

    gridLayout3->addWidget(le1_q, 5, 2, 1, 1);

    spacerItem1 = new QSpacerItem(20, 161, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout3->addItem(spacerItem1, 6, 1, 1, 1);

    toolBox->addItem(page_pdb2gmx_files, QApplication::translate("CommandsClass", "pdb2gmx files", 0, QApplication::UnicodeUTF8));
    page_pdb2gmx_options = new QWidget();
    page_pdb2gmx_options->setObjectName(QString::fromUtf8("page_pdb2gmx_options"));
    page_pdb2gmx_options->setGeometry(QRect(0, 0, 252, 270));
    gridLayout4 = new QGridLayout(page_pdb2gmx_options);
    gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
    textLabel1_2_2 = new QLabel(page_pdb2gmx_options);
    textLabel1_2_2->setObjectName(QString::fromUtf8("textLabel1_2_2"));
    textLabel1_2_2->setWordWrap(false);

    gridLayout4->addWidget(textLabel1_2_2, 0, 0, 1, 1);

    cb1forcefield = new QComboBox(page_pdb2gmx_options);
    cb1forcefield->setObjectName(QString::fromUtf8("cb1forcefield"));

    gridLayout4->addWidget(cb1forcefield, 0, 2, 1, 2);

    spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout4->addItem(spacerItem2, 0, 4, 2, 1);

    textLabel1_2_8 = new QLabel(page_pdb2gmx_options);
    textLabel1_2_8->setObjectName(QString::fromUtf8("textLabel1_2_8"));
    textLabel1_2_8->setWordWrap(false);

    gridLayout4->addWidget(textLabel1_2_8, 1, 0, 1, 1);

    cb1watermodel = new QComboBox(page_pdb2gmx_options);
    cb1watermodel->setObjectName(QString::fromUtf8("cb1watermodel"));

    gridLayout4->addWidget(cb1watermodel, 1, 2, 1, 2);

    textLabel2_2 = new QLabel(page_pdb2gmx_options);
    textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));
    textLabel2_2->setWordWrap(false);

    gridLayout4->addWidget(textLabel2_2, 2, 0, 1, 1);

    le1force_const = new QLineEdit(page_pdb2gmx_options);
    le1force_const->setObjectName(QString::fromUtf8("le1force_const"));

    gridLayout4->addWidget(le1force_const, 2, 2, 1, 2);

    textLabel1_2_3 = new QLabel(page_pdb2gmx_options);
    textLabel1_2_3->setObjectName(QString::fromUtf8("textLabel1_2_3"));
    textLabel1_2_3->setEnabled(true);
    textLabel1_2_3->setWordWrap(false);

    gridLayout4->addWidget(textLabel1_2_3, 3, 0, 1, 3);

    le1minangle_h = new QLineEdit(page_pdb2gmx_options);
    le1minangle_h->setObjectName(QString::fromUtf8("le1minangle_h"));
    le1minangle_h->setEnabled(true);

    gridLayout4->addWidget(le1minangle_h, 3, 3, 1, 1);

    label_2 = new QLabel(page_pdb2gmx_options);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setEnabled(true);
    label_2->setWordWrap(false);

    gridLayout4->addWidget(label_2, 4, 0, 1, 3);

    le1maxdist_h = new QLineEdit(page_pdb2gmx_options);
    le1maxdist_h->setObjectName(QString::fromUtf8("le1maxdist_h"));
    le1maxdist_h->setEnabled(true);

    gridLayout4->addWidget(le1maxdist_h, 4, 3, 1, 1);

    ch1heavy_h = new QCheckBox(page_pdb2gmx_options);
    ch1heavy_h->setObjectName(QString::fromUtf8("ch1heavy_h"));
    ch1heavy_h->setEnabled(false);

    gridLayout4->addWidget(ch1heavy_h, 5, 0, 1, 3);

    ch1doublemass_h = new QCheckBox(page_pdb2gmx_options);
    ch1doublemass_h->setObjectName(QString::fromUtf8("ch1doublemass_h"));
    ch1doublemass_h->setEnabled(false);

    gridLayout4->addWidget(ch1doublemass_h, 6, 0, 1, 4);

    ch1ignore_h = new QCheckBox(page_pdb2gmx_options);
    ch1ignore_h->setObjectName(QString::fromUtf8("ch1ignore_h"));
    ch1ignore_h->setTristate(false);

    gridLayout4->addWidget(ch1ignore_h, 7, 0, 1, 4);

    spacerItem3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout4->addItem(spacerItem3, 8, 1, 1, 1);

    toolBox->addItem(page_pdb2gmx_options, QApplication::translate("CommandsClass", "pdb2gmx options", 0, QApplication::UnicodeUTF8));

    gridLayout2->addWidget(toolBox, 0, 0, 1, 1);

    stackwMain->addWidget(stack_pdb2gmx);
    stack_editconf = new QWidget();
    stack_editconf->setObjectName(QString::fromUtf8("stack_editconf"));
    gridLayout5 = new QGridLayout(stack_editconf);
    gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
    toolBox_2 = new QToolBox(stack_editconf);
    toolBox_2->setObjectName(QString::fromUtf8("toolBox_2"));
    toolBox_2->setFrameShape(QFrame::StyledPanel);
    page_editconf_files = new QWidget();
    page_editconf_files->setObjectName(QString::fromUtf8("page_editconf_files"));
    page_editconf_files->setGeometry(QRect(0, 0, 350, 441));
    gridLayout6 = new QGridLayout(page_editconf_files);
    gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
    textLabel2_3 = new QLabel(page_editconf_files);
    textLabel2_3->setObjectName(QString::fromUtf8("textLabel2_3"));
    QFont font2;
    font2.setBold(false);
    font2.setUnderline(true);
    font2.setWeight(50);
    textLabel2_3->setFont(font2);
    textLabel2_3->setWordWrap(false);

    gridLayout6->addWidget(textLabel2_3, 0, 0, 1, 1);

    cb2inputfile = new QComboBox(page_editconf_files);
    cb2inputfile->setObjectName(QString::fromUtf8("cb2inputfile"));

    gridLayout6->addWidget(cb2inputfile, 0, 1, 1, 1);

    textLabel2_23 = new QLabel(page_editconf_files);
    textLabel2_23->setObjectName(QString::fromUtf8("textLabel2_23"));
    textLabel2_23->setWordWrap(false);

    gridLayout6->addWidget(textLabel2_23, 1, 0, 1, 1);

    cb2_n = new QComboBox(page_editconf_files);
    cb2_n->setObjectName(QString::fromUtf8("cb2_n"));

    gridLayout6->addWidget(cb2_n, 1, 1, 1, 1);

    textLabel2_24 = new QLabel(page_editconf_files);
    textLabel2_24->setObjectName(QString::fromUtf8("textLabel2_24"));
    textLabel2_24->setWordWrap(false);

    gridLayout6->addWidget(textLabel2_24, 2, 0, 1, 1);

    cb2_bf = new QComboBox(page_editconf_files);
    cb2_bf->setObjectName(QString::fromUtf8("cb2_bf"));

    gridLayout6->addWidget(cb2_bf, 2, 1, 1, 1);

    textLabel1_2 = new QLabel(page_editconf_files);
    textLabel1_2->setObjectName(QString::fromUtf8("textLabel1_2"));
    textLabel1_2->setWordWrap(false);

    gridLayout6->addWidget(textLabel1_2, 3, 0, 1, 1);

    le2outputfile = new QLineEdit(page_editconf_files);
    le2outputfile->setObjectName(QString::fromUtf8("le2outputfile"));

    gridLayout6->addWidget(le2outputfile, 3, 1, 1, 1);

    textLabel1_11 = new QLabel(page_editconf_files);
    textLabel1_11->setObjectName(QString::fromUtf8("textLabel1_11"));
    textLabel1_11->setWordWrap(false);

    gridLayout6->addWidget(textLabel1_11, 4, 0, 1, 1);

    le2_mead = new QLineEdit(page_editconf_files);
    le2_mead->setObjectName(QString::fromUtf8("le2_mead"));

    gridLayout6->addWidget(le2_mead, 4, 1, 1, 1);

    spacerItem4 = new QSpacerItem(230, 171, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout6->addItem(spacerItem4, 5, 1, 1, 1);

    toolBox_2->addItem(page_editconf_files, QApplication::translate("CommandsClass", "editconf files", 0, QApplication::UnicodeUTF8));
    page_editconf_options = new QWidget();
    page_editconf_options->setObjectName(QString::fromUtf8("page_editconf_options"));
    page_editconf_options->setGeometry(QRect(0, 0, 279, 303));
    gridLayout7 = new QGridLayout(page_editconf_options);
    gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
    textLabel2_4 = new QLabel(page_editconf_options);
    textLabel2_4->setObjectName(QString::fromUtf8("textLabel2_4"));
    textLabel2_4->setWordWrap(false);

    gridLayout7->addWidget(textLabel2_4, 0, 0, 1, 1);

    cb2boxtype = new QComboBox(page_editconf_options);
    cb2boxtype->setObjectName(QString::fromUtf8("cb2boxtype"));

    gridLayout7->addWidget(cb2boxtype, 0, 1, 1, 1);

    spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout7->addItem(spacerItem5, 0, 2, 1, 1);

    textLabel2_2_4 = new QLabel(page_editconf_options);
    textLabel2_2_4->setObjectName(QString::fromUtf8("textLabel2_2_4"));
    textLabel2_2_4->setWordWrap(false);

    gridLayout7->addWidget(textLabel2_2_4, 1, 0, 1, 1);

    le2vector_length = new QLineEdit(page_editconf_options);
    le2vector_length->setObjectName(QString::fromUtf8("le2vector_length"));
    le2vector_length->setAlignment(Qt::AlignRight);

    gridLayout7->addWidget(le2vector_length, 1, 1, 1, 1);

    textLabel3 = new QLabel(page_editconf_options);
    textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
    textLabel3->setWordWrap(false);

    gridLayout7->addWidget(textLabel3, 2, 0, 1, 1);

    le2vector_angle = new QLineEdit(page_editconf_options);
    le2vector_angle->setObjectName(QString::fromUtf8("le2vector_angle"));
    le2vector_angle->setAlignment(Qt::AlignRight);

    gridLayout7->addWidget(le2vector_angle, 2, 1, 1, 1);

    textLabel2_2_3 = new QLabel(page_editconf_options);
    textLabel2_2_3->setObjectName(QString::fromUtf8("textLabel2_2_3"));
    textLabel2_2_3->setWordWrap(false);

    gridLayout7->addWidget(textLabel2_2_3, 3, 0, 1, 1);

    le2geom_center = new QLineEdit(page_editconf_options);
    le2geom_center->setObjectName(QString::fromUtf8("le2geom_center"));
    le2geom_center->setAlignment(Qt::AlignRight);

    gridLayout7->addWidget(le2geom_center, 3, 1, 1, 1);

    textLabel4 = new QLabel(page_editconf_options);
    textLabel4->setObjectName(QString::fromUtf8("textLabel4"));
    textLabel4->setWordWrap(false);

    gridLayout7->addWidget(textLabel4, 4, 0, 1, 1);

    le2translation = new QLineEdit(page_editconf_options);
    le2translation->setObjectName(QString::fromUtf8("le2translation"));
    le2translation->setAlignment(Qt::AlignRight);

    gridLayout7->addWidget(le2translation, 4, 1, 1, 1);

    textLabel4_2 = new QLabel(page_editconf_options);
    textLabel4_2->setObjectName(QString::fromUtf8("textLabel4_2"));
    textLabel4_2->setWordWrap(false);

    gridLayout7->addWidget(textLabel4_2, 5, 0, 1, 1);

    le2rotation = new QLineEdit(page_editconf_options);
    le2rotation->setObjectName(QString::fromUtf8("le2rotation"));
    le2rotation->setAlignment(Qt::AlignRight);

    gridLayout7->addWidget(le2rotation, 5, 1, 1, 1);

    textLabel2_2_2 = new QLabel(page_editconf_options);
    textLabel2_2_2->setObjectName(QString::fromUtf8("textLabel2_2_2"));
    textLabel2_2_2->setWordWrap(false);

    gridLayout7->addWidget(textLabel2_2_2, 6, 0, 1, 1);

    le2solute_box_dist = new QLineEdit(page_editconf_options);
    le2solute_box_dist->setObjectName(QString::fromUtf8("le2solute_box_dist"));
    le2solute_box_dist->setAlignment(Qt::AlignRight);

    gridLayout7->addWidget(le2solute_box_dist, 6, 1, 1, 1);

    ch2center_mol = new QCheckBox(page_editconf_options);
    ch2center_mol->setObjectName(QString::fromUtf8("ch2center_mol"));

    gridLayout7->addWidget(ch2center_mol, 7, 0, 1, 2);

    ch2orient_mol = new QCheckBox(page_editconf_options);
    ch2orient_mol->setObjectName(QString::fromUtf8("ch2orient_mol"));

    gridLayout7->addWidget(ch2orient_mol, 8, 0, 1, 2);

    spacerItem6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout7->addItem(spacerItem6, 9, 0, 1, 1);

    toolBox_2->addItem(page_editconf_options, QApplication::translate("CommandsClass", "editconf options", 0, QApplication::UnicodeUTF8));

    gridLayout5->addWidget(toolBox_2, 0, 0, 1, 1);

    stackwMain->addWidget(stack_editconf);
    stack_genbox = new QWidget();
    stack_genbox->setObjectName(QString::fromUtf8("stack_genbox"));
    gridLayout8 = new QGridLayout(stack_genbox);
    gridLayout8->setObjectName(QString::fromUtf8("gridLayout8"));
    toolBox_4 = new QToolBox(stack_genbox);
    toolBox_4->setObjectName(QString::fromUtf8("toolBox_4"));
    toolBox_4->setFrameShape(QFrame::StyledPanel);
    page_genbox_files = new QWidget();
    page_genbox_files->setObjectName(QString::fromUtf8("page_genbox_files"));
    page_genbox_files->setGeometry(QRect(0, 0, 350, 441));
    gridLayout9 = new QGridLayout(page_genbox_files);
    gridLayout9->setObjectName(QString::fromUtf8("gridLayout9"));
    textLabel2_7 = new QLabel(page_genbox_files);
    textLabel2_7->setObjectName(QString::fromUtf8("textLabel2_7"));
    textLabel2_7->setWordWrap(false);

    gridLayout9->addWidget(textLabel2_7, 0, 0, 1, 1);

    cb3inputfile_pro = new QComboBox(page_genbox_files);
    cb3inputfile_pro->setObjectName(QString::fromUtf8("cb3inputfile_pro"));

    gridLayout9->addWidget(cb3inputfile_pro, 0, 1, 1, 1);

    textLabel2_6 = new QLabel(page_genbox_files);
    textLabel2_6->setObjectName(QString::fromUtf8("textLabel2_6"));
    textLabel2_6->setWordWrap(false);

    gridLayout9->addWidget(textLabel2_6, 1, 0, 1, 1);

    cb3inputfile_water = new QComboBox(page_genbox_files);
    cb3inputfile_water->setObjectName(QString::fromUtf8("cb3inputfile_water"));
    cb3inputfile_water->setEditable(true);

    gridLayout9->addWidget(cb3inputfile_water, 1, 1, 1, 1);

    textLabel2_5 = new QLabel(page_genbox_files);
    textLabel2_5->setObjectName(QString::fromUtf8("textLabel2_5"));
    textLabel2_5->setWordWrap(false);

    gridLayout9->addWidget(textLabel2_5, 2, 0, 1, 1);

    cb3inputfile_extra = new QComboBox(page_genbox_files);
    cb3inputfile_extra->setObjectName(QString::fromUtf8("cb3inputfile_extra"));

    gridLayout9->addWidget(cb3inputfile_extra, 2, 1, 1, 1);

    textLabel2_2_5 = new QLabel(page_genbox_files);
    textLabel2_2_5->setObjectName(QString::fromUtf8("textLabel2_2_5"));
    textLabel2_2_5->setWordWrap(false);

    gridLayout9->addWidget(textLabel2_2_5, 3, 0, 1, 1);

    cb3topologyfile = new QComboBox(page_genbox_files);
    cb3topologyfile->setObjectName(QString::fromUtf8("cb3topologyfile"));
    cb3topologyfile->setEditable(false);

    gridLayout9->addWidget(cb3topologyfile, 3, 1, 1, 1);

    textLabel1_3 = new QLabel(page_genbox_files);
    textLabel1_3->setObjectName(QString::fromUtf8("textLabel1_3"));
    textLabel1_3->setFont(font2);
    textLabel1_3->setWordWrap(false);

    gridLayout9->addWidget(textLabel1_3, 4, 0, 1, 1);

    lec3outputfile = new QLineEdit(page_genbox_files);
    lec3outputfile->setObjectName(QString::fromUtf8("lec3outputfile"));

    gridLayout9->addWidget(lec3outputfile, 4, 1, 1, 1);

    spacerItem7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout9->addItem(spacerItem7, 5, 0, 1, 1);

    toolBox_4->addItem(page_genbox_files, QApplication::translate("CommandsClass", "genbox files", 0, QApplication::UnicodeUTF8));
    page_genbox_options = new QWidget();
    page_genbox_options->setObjectName(QString::fromUtf8("page_genbox_options"));
    page_genbox_options->setGeometry(QRect(0, 0, 236, 98));
    gridLayout10 = new QGridLayout(page_genbox_options);
    gridLayout10->setObjectName(QString::fromUtf8("gridLayout10"));
    textLabel2_8 = new QLabel(page_genbox_options);
    textLabel2_8->setObjectName(QString::fromUtf8("textLabel2_8"));
    textLabel2_8->setWordWrap(false);

    gridLayout10->addWidget(textLabel2_8, 0, 0, 1, 1);

    le3boxsize = new QLineEdit(page_genbox_options);
    le3boxsize->setObjectName(QString::fromUtf8("le3boxsize"));
    le3boxsize->setAlignment(Qt::AlignRight);

    gridLayout10->addWidget(le3boxsize, 0, 1, 1, 2);

    spacerItem8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout10->addItem(spacerItem8, 0, 3, 1, 1);

    textLabel2_4_2 = new QLabel(page_genbox_options);
    textLabel2_4_2->setObjectName(QString::fromUtf8("textLabel2_4_2"));
    textLabel2_4_2->setWordWrap(false);

    gridLayout10->addWidget(textLabel2_4_2, 1, 0, 1, 2);

    le3extramol_number = new QLineEdit(page_genbox_options);
    le3extramol_number->setObjectName(QString::fromUtf8("le3extramol_number"));
    le3extramol_number->setAlignment(Qt::AlignRight);

    gridLayout10->addWidget(le3extramol_number, 1, 2, 1, 1);

    spacerItem9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout10->addItem(spacerItem9, 2, 1, 1, 1);

    toolBox_4->addItem(page_genbox_options, QApplication::translate("CommandsClass", "genbox options", 0, QApplication::UnicodeUTF8));

    gridLayout8->addWidget(toolBox_4, 0, 0, 1, 1);

    stackwMain->addWidget(stack_genbox);
    stack_genion = new QWidget();
    stack_genion->setObjectName(QString::fromUtf8("stack_genion"));
    gridLayout11 = new QGridLayout(stack_genion);
    gridLayout11->setObjectName(QString::fromUtf8("gridLayout11"));
    toolBox_3 = new QToolBox(stack_genion);
    toolBox_3->setObjectName(QString::fromUtf8("toolBox_3"));
    toolBox_3->setFrameShape(QFrame::StyledPanel);
    page_genion_files = new QWidget();
    page_genion_files->setObjectName(QString::fromUtf8("page_genion_files"));
    page_genion_files->setGeometry(QRect(0, 0, 350, 441));
    gridLayout12 = new QGridLayout(page_genion_files);
    gridLayout12->setObjectName(QString::fromUtf8("gridLayout12"));
    textLabel2_9 = new QLabel(page_genion_files);
    textLabel2_9->setObjectName(QString::fromUtf8("textLabel2_9"));
    textLabel2_9->setFont(font2);
    textLabel2_9->setWordWrap(false);

    gridLayout12->addWidget(textLabel2_9, 0, 0, 1, 1);

    cb4inputfile = new QComboBox(page_genion_files);
    cb4inputfile->setObjectName(QString::fromUtf8("cb4inputfile"));
    cb4inputfile->setMaximumSize(QSize(209, 16777215));

    gridLayout12->addWidget(cb4inputfile, 0, 1, 1, 1);

    textLabel2_11 = new QLabel(page_genion_files);
    textLabel2_11->setObjectName(QString::fromUtf8("textLabel2_11"));
    textLabel2_11->setWordWrap(false);

    gridLayout12->addWidget(textLabel2_11, 1, 0, 1, 1);

    cb4indexfile = new QComboBox(page_genion_files);
    cb4indexfile->setObjectName(QString::fromUtf8("cb4indexfile"));
    cb4indexfile->setMaximumSize(QSize(209, 16777215));
    cb4indexfile->setEditable(false);

    gridLayout12->addWidget(cb4indexfile, 1, 1, 1, 1);

    textLabel2_151 = new QLabel(page_genion_files);
    textLabel2_151->setObjectName(QString::fromUtf8("textLabel2_151"));
    textLabel2_151->setWordWrap(false);

    gridLayout12->addWidget(textLabel2_151, 2, 0, 1, 1);

    cb4_table = new QComboBox(page_genion_files);
    cb4_table->setObjectName(QString::fromUtf8("cb4_table"));
    cb4_table->setMaximumSize(QSize(209, 16777215));
    cb4_table->setEditable(false);

    gridLayout12->addWidget(cb4_table, 2, 1, 1, 1);

    textLabel2_10 = new QLabel(page_genion_files);
    textLabel2_10->setObjectName(QString::fromUtf8("textLabel2_10"));
    textLabel2_10->setFont(font2);
    textLabel2_10->setWordWrap(false);

    gridLayout12->addWidget(textLabel2_10, 3, 0, 1, 1);

    le4outputfile = new QLineEdit(page_genion_files);
    le4outputfile->setObjectName(QString::fromUtf8("le4outputfile"));
    le4outputfile->setMaximumSize(QSize(209, 16777215));

    gridLayout12->addWidget(le4outputfile, 3, 1, 1, 1);

    textLabel2_2_6 = new QLabel(page_genion_files);
    textLabel2_2_6->setObjectName(QString::fromUtf8("textLabel2_2_6"));
    textLabel2_2_6->setFont(font2);
    textLabel2_2_6->setWordWrap(false);

    gridLayout12->addWidget(textLabel2_2_6, 4, 0, 1, 1);

    le4logfile = new QLineEdit(page_genion_files);
    le4logfile->setObjectName(QString::fromUtf8("le4logfile"));
    le4logfile->setMaximumSize(QSize(209, 16777215));

    gridLayout12->addWidget(le4logfile, 4, 1, 1, 1);

    textLabel1_6 = new QLabel(page_genion_files);
    textLabel1_6->setObjectName(QString::fromUtf8("textLabel1_6"));
    textLabel1_6->setWordWrap(false);

    gridLayout12->addWidget(textLabel1_6, 5, 0, 1, 1);

    le4pdboutput = new QLineEdit(page_genion_files);
    le4pdboutput->setObjectName(QString::fromUtf8("le4pdboutput"));
    le4pdboutput->setMaximumSize(QSize(209, 16777215));

    gridLayout12->addWidget(le4pdboutput, 5, 1, 1, 1);

    spacerItem10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout12->addItem(spacerItem10, 6, 1, 1, 1);

    toolBox_3->addItem(page_genion_files, QApplication::translate("CommandsClass", "genion files", 0, QApplication::UnicodeUTF8));
    page_genion_options = new QWidget();
    page_genion_options->setObjectName(QString::fromUtf8("page_genion_options"));
    page_genion_options->setGeometry(QRect(0, 0, 263, 257));
    gridLayout13 = new QGridLayout(page_genion_options);
    gridLayout13->setObjectName(QString::fromUtf8("gridLayout13"));
    groupBox_11 = new QGroupBox(page_genion_options);
    groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
    gridLayout14 = new QGridLayout(groupBox_11);
    gridLayout14->setObjectName(QString::fromUtf8("gridLayout14"));
    textLabel2_4_3 = new QLabel(groupBox_11);
    textLabel2_4_3->setObjectName(QString::fromUtf8("textLabel2_4_3"));
    textLabel2_4_3->setWordWrap(false);

    gridLayout14->addWidget(textLabel2_4_3, 0, 0, 1, 1);

    le4posion_name = new QLineEdit(groupBox_11);
    le4posion_name->setObjectName(QString::fromUtf8("le4posion_name"));
    le4posion_name->setAlignment(Qt::AlignLeading);

    gridLayout14->addWidget(le4posion_name, 0, 1, 1, 1);

    textLabel2_4_2_2 = new QLabel(groupBox_11);
    textLabel2_4_2_2->setObjectName(QString::fromUtf8("textLabel2_4_2_2"));
    textLabel2_4_2_2->setWordWrap(false);

    gridLayout14->addWidget(textLabel2_4_2_2, 1, 0, 1, 1);

    le4posion_number = new QLineEdit(groupBox_11);
    le4posion_number->setObjectName(QString::fromUtf8("le4posion_number"));
    le4posion_number->setMouseTracking(false);
    le4posion_number->setAlignment(Qt::AlignRight);

    gridLayout14->addWidget(le4posion_number, 1, 1, 1, 1);

    textLabel2_4_2_3 = new QLabel(groupBox_11);
    textLabel2_4_2_3->setObjectName(QString::fromUtf8("textLabel2_4_2_3"));
    textLabel2_4_2_3->setWordWrap(false);

    gridLayout14->addWidget(textLabel2_4_2_3, 2, 0, 1, 1);

    le4posion_charge = new QLineEdit(groupBox_11);
    le4posion_charge->setObjectName(QString::fromUtf8("le4posion_charge"));
    le4posion_charge->setMouseTracking(false);
    le4posion_charge->setAlignment(Qt::AlignRight);

    gridLayout14->addWidget(le4posion_charge, 2, 1, 1, 1);


    gridLayout13->addWidget(groupBox_11, 0, 0, 1, 1);

    groupBox_12 = new QGroupBox(page_genion_options);
    groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
    gridLayout15 = new QGridLayout(groupBox_12);
    gridLayout15->setObjectName(QString::fromUtf8("gridLayout15"));
    textLabel2_4_2_4 = new QLabel(groupBox_12);
    textLabel2_4_2_4->setObjectName(QString::fromUtf8("textLabel2_4_2_4"));
    textLabel2_4_2_4->setWordWrap(false);

    gridLayout15->addWidget(textLabel2_4_2_4, 0, 0, 1, 1);

    le4negion_name = new QLineEdit(groupBox_12);
    le4negion_name->setObjectName(QString::fromUtf8("le4negion_name"));
    le4negion_name->setMouseTracking(false);
    le4negion_name->setAlignment(Qt::AlignLeading);

    gridLayout15->addWidget(le4negion_name, 0, 1, 1, 1);

    textLabel2_4_2_2_2 = new QLabel(groupBox_12);
    textLabel2_4_2_2_2->setObjectName(QString::fromUtf8("textLabel2_4_2_2_2"));
    textLabel2_4_2_2_2->setWordWrap(false);

    gridLayout15->addWidget(textLabel2_4_2_2_2, 1, 0, 1, 1);

    le4negion_number = new QLineEdit(groupBox_12);
    le4negion_number->setObjectName(QString::fromUtf8("le4negion_number"));
    le4negion_number->setMouseTracking(false);
    le4negion_number->setAlignment(Qt::AlignRight);

    gridLayout15->addWidget(le4negion_number, 1, 1, 1, 1);

    textLabel2_4_2_3_2 = new QLabel(groupBox_12);
    textLabel2_4_2_3_2->setObjectName(QString::fromUtf8("textLabel2_4_2_3_2"));
    textLabel2_4_2_3_2->setWordWrap(false);

    gridLayout15->addWidget(textLabel2_4_2_3_2, 2, 0, 1, 1);

    le4negion_charge = new QLineEdit(groupBox_12);
    le4negion_charge->setObjectName(QString::fromUtf8("le4negion_charge"));
    le4negion_charge->setMouseTracking(false);
    le4negion_charge->setAlignment(Qt::AlignRight);

    gridLayout15->addWidget(le4negion_charge, 2, 1, 1, 1);


    gridLayout13->addWidget(groupBox_12, 0, 1, 1, 2);

    textLabel4_3 = new QLabel(page_genion_options);
    textLabel4_3->setObjectName(QString::fromUtf8("textLabel4_3"));
    textLabel4_3->setWordWrap(false);

    gridLayout13->addWidget(textLabel4_3, 1, 0, 1, 2);

    le4min_dist = new QLineEdit(page_genion_options);
    le4min_dist->setObjectName(QString::fromUtf8("le4min_dist"));
    le4min_dist->setMouseTracking(false);
    le4min_dist->setAlignment(Qt::AlignRight);

    gridLayout13->addWidget(le4min_dist, 1, 2, 1, 1);

    textLabel5 = new QLabel(page_genion_options);
    textLabel5->setObjectName(QString::fromUtf8("textLabel5"));
    textLabel5->setWordWrap(false);

    gridLayout13->addWidget(textLabel5, 2, 0, 1, 2);

    le4scalingfactor = new QLineEdit(page_genion_options);
    le4scalingfactor->setObjectName(QString::fromUtf8("le4scalingfactor"));
    le4scalingfactor->setMouseTracking(false);
    le4scalingfactor->setAlignment(Qt::AlignRight);

    gridLayout13->addWidget(le4scalingfactor, 2, 2, 1, 1);

    ch4random_place = new QCheckBox(page_genion_options);
    ch4random_place->setObjectName(QString::fromUtf8("ch4random_place"));

    gridLayout13->addWidget(ch4random_place, 3, 0, 1, 2);

    spacerItem11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout13->addItem(spacerItem11, 4, 0, 1, 1);

    toolBox_3->addItem(page_genion_options, QApplication::translate("CommandsClass", "genion options", 0, QApplication::UnicodeUTF8));

    gridLayout11->addWidget(toolBox_3, 0, 0, 1, 1);

    stackwMain->addWidget(stack_genion);
    stack_grompp = new QWidget();
    stack_grompp->setObjectName(QString::fromUtf8("stack_grompp"));
    gridLayout16 = new QGridLayout(stack_grompp);
    gridLayout16->setObjectName(QString::fromUtf8("gridLayout16"));
    tbxGrompp = new QToolBox(stack_grompp);
    tbxGrompp->setObjectName(QString::fromUtf8("tbxGrompp"));
    tbxGrompp->setFrameShape(QFrame::StyledPanel);
    page_grompp_files = new QWidget();
    page_grompp_files->setObjectName(QString::fromUtf8("page_grompp_files"));
    page_grompp_files->setGeometry(QRect(0, 0, 320, 390));
    gridLayout17 = new QGridLayout(page_grompp_files);
    gridLayout17->setObjectName(QString::fromUtf8("gridLayout17"));
    textLabel2_12 = new QLabel(page_grompp_files);
    textLabel2_12->setObjectName(QString::fromUtf8("textLabel2_12"));
    textLabel2_12->setFont(font2);
    textLabel2_12->setWordWrap(false);

    gridLayout17->addWidget(textLabel2_12, 0, 0, 1, 1);

    cb5inputfile = new QComboBox(page_grompp_files);
    cb5inputfile->setObjectName(QString::fromUtf8("cb5inputfile"));
    cb5inputfile->setMinimumSize(QSize(186, 0));
    cb5inputfile->setMaximumSize(QSize(200, 16777215));

    gridLayout17->addWidget(cb5inputfile, 0, 1, 1, 1);

    textLabel2_13 = new QLabel(page_grompp_files);
    textLabel2_13->setObjectName(QString::fromUtf8("textLabel2_13"));
    textLabel2_13->setWordWrap(false);

    gridLayout17->addWidget(textLabel2_13, 1, 0, 1, 1);

    cb5mdpfile = new QComboBox(page_grompp_files);
    cb5mdpfile->setObjectName(QString::fromUtf8("cb5mdpfile"));
    cb5mdpfile->setMinimumSize(QSize(186, 0));
    cb5mdpfile->setMaximumSize(QSize(200, 16777215));
    cb5mdpfile->setEditable(false);

    gridLayout17->addWidget(cb5mdpfile, 1, 1, 1, 1);

    textLabel2_2_7 = new QLabel(page_grompp_files);
    textLabel2_2_7->setObjectName(QString::fromUtf8("textLabel2_2_7"));
    textLabel2_2_7->setFont(font2);
    textLabel2_2_7->setWordWrap(false);

    gridLayout17->addWidget(textLabel2_2_7, 2, 0, 1, 1);

    cb5topologyfile = new QComboBox(page_grompp_files);
    cb5topologyfile->setObjectName(QString::fromUtf8("cb5topologyfile"));
    cb5topologyfile->setMinimumSize(QSize(186, 0));
    cb5topologyfile->setMaximumSize(QSize(200, 16777215));

    gridLayout17->addWidget(cb5topologyfile, 2, 1, 1, 1);

    textLabel2_2_10 = new QLabel(page_grompp_files);
    textLabel2_2_10->setObjectName(QString::fromUtf8("textLabel2_2_10"));
    textLabel2_2_10->setWordWrap(false);

    gridLayout17->addWidget(textLabel2_2_10, 3, 0, 1, 1);

    cb5_r = new QComboBox(page_grompp_files);
    cb5_r->setObjectName(QString::fromUtf8("cb5_r"));
    cb5_r->setMinimumSize(QSize(186, 0));
    cb5_r->setMaximumSize(QSize(200, 16777215));

    gridLayout17->addWidget(cb5_r, 3, 1, 1, 1);

    textLabel2_2_11 = new QLabel(page_grompp_files);
    textLabel2_2_11->setObjectName(QString::fromUtf8("textLabel2_2_11"));
    textLabel2_2_11->setWordWrap(false);

    gridLayout17->addWidget(textLabel2_2_11, 4, 0, 1, 1);

    cb5_rb = new QComboBox(page_grompp_files);
    cb5_rb->setObjectName(QString::fromUtf8("cb5_rb"));
    cb5_rb->setMinimumSize(QSize(186, 0));
    cb5_rb->setMaximumSize(QSize(200, 16777215));

    gridLayout17->addWidget(cb5_rb, 4, 1, 1, 1);

    textLabel2_2_12 = new QLabel(page_grompp_files);
    textLabel2_2_12->setObjectName(QString::fromUtf8("textLabel2_2_12"));
    textLabel2_2_12->setWordWrap(false);

    gridLayout17->addWidget(textLabel2_2_12, 5, 0, 1, 1);

    cb5_n = new QComboBox(page_grompp_files);
    cb5_n->setObjectName(QString::fromUtf8("cb5_n"));
    cb5_n->setMinimumSize(QSize(186, 0));
    cb5_n->setMaximumSize(QSize(200, 16777215));

    gridLayout17->addWidget(cb5_n, 5, 1, 1, 1);

    textLabel2_2_36 = new QLabel(page_grompp_files);
    textLabel2_2_36->setObjectName(QString::fromUtf8("textLabel2_2_36"));
    textLabel2_2_36->setWordWrap(false);

    gridLayout17->addWidget(textLabel2_2_36, 6, 0, 1, 1);

    cb5_t = new QComboBox(page_grompp_files);
    cb5_t->setObjectName(QString::fromUtf8("cb5_t"));
    cb5_t->setMinimumSize(QSize(186, 0));
    cb5_t->setMaximumSize(QSize(200, 16777215));

    gridLayout17->addWidget(cb5_t, 6, 1, 1, 1);

    textLabel2_2_37 = new QLabel(page_grompp_files);
    textLabel2_2_37->setObjectName(QString::fromUtf8("textLabel2_2_37"));
    textLabel2_2_37->setWordWrap(false);

    gridLayout17->addWidget(textLabel2_2_37, 7, 0, 1, 1);

    cb5_e = new QComboBox(page_grompp_files);
    cb5_e->setObjectName(QString::fromUtf8("cb5_e"));
    cb5_e->setMinimumSize(QSize(186, 0));
    cb5_e->setMaximumSize(QSize(200, 16777215));

    gridLayout17->addWidget(cb5_e, 7, 1, 1, 1);

    textLabel1_7 = new QLabel(page_grompp_files);
    textLabel1_7->setObjectName(QString::fromUtf8("textLabel1_7"));
    textLabel1_7->setFont(font2);
    textLabel1_7->setWordWrap(false);

    gridLayout17->addWidget(textLabel1_7, 8, 0, 1, 1);

    le5outputfile = new QLineEdit(page_grompp_files);
    le5outputfile->setObjectName(QString::fromUtf8("le5outputfile"));
    le5outputfile->setMinimumSize(QSize(186, 0));
    le5outputfile->setMaximumSize(QSize(200, 16777215));

    gridLayout17->addWidget(le5outputfile, 8, 1, 1, 1);

    textLabel2_14 = new QLabel(page_grompp_files);
    textLabel2_14->setObjectName(QString::fromUtf8("textLabel2_14"));
    textLabel2_14->setWordWrap(false);

    gridLayout17->addWidget(textLabel2_14, 9, 0, 1, 1);

    le5_po = new QLineEdit(page_grompp_files);
    le5_po->setObjectName(QString::fromUtf8("le5_po"));
    le5_po->setMinimumSize(QSize(186, 0));
    le5_po->setMaximumSize(QSize(200, 16777215));

    gridLayout17->addWidget(le5_po, 9, 1, 1, 1);

    textLabel2_3_3 = new QLabel(page_grompp_files);
    textLabel2_3_3->setObjectName(QString::fromUtf8("textLabel2_3_3"));
    textLabel2_3_3->setWordWrap(false);

    gridLayout17->addWidget(textLabel2_3_3, 10, 0, 1, 1);

    le5_deshuf = new QLineEdit(page_grompp_files);
    le5_deshuf->setObjectName(QString::fromUtf8("le5_deshuf"));
    le5_deshuf->setMinimumSize(QSize(186, 0));
    le5_deshuf->setMaximumSize(QSize(200, 16777215));

    gridLayout17->addWidget(le5_deshuf, 10, 1, 1, 1);

    textLabel2_2_2_3 = new QLabel(page_grompp_files);
    textLabel2_2_2_3->setObjectName(QString::fromUtf8("textLabel2_2_2_3"));
    textLabel2_2_2_3->setWordWrap(false);

    gridLayout17->addWidget(textLabel2_2_2_3, 11, 0, 1, 1);

    le5_pp = new QLineEdit(page_grompp_files);
    le5_pp->setObjectName(QString::fromUtf8("le5_pp"));
    le5_pp->setMinimumSize(QSize(186, 0));
    le5_pp->setMaximumSize(QSize(200, 16777215));

    gridLayout17->addWidget(le5_pp, 11, 1, 1, 1);

    spacerItem12 = new QSpacerItem(200, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout17->addItem(spacerItem12, 12, 1, 1, 1);

    tbxGrompp->addItem(page_grompp_files, QApplication::translate("CommandsClass", "grompp files", 0, QApplication::UnicodeUTF8));
    page_grompp_options = new QWidget();
    page_grompp_options->setObjectName(QString::fromUtf8("page_grompp_options"));
    page_grompp_options->setGeometry(QRect(0, 0, 317, 321));
    gridLayout18 = new QGridLayout(page_grompp_options);
    gridLayout18->setObjectName(QString::fromUtf8("gridLayout18"));
    ch5loud = new QCheckBox(page_grompp_options);
    ch5loud->setObjectName(QString::fromUtf8("ch5loud"));
    ch5loud->setChecked(true);

    gridLayout18->addWidget(ch5loud, 0, 0, 1, 1);

    spacerItem13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout18->addItem(spacerItem13, 0, 1, 2, 1);

    ch5shuffle = new QCheckBox(page_grompp_options);
    ch5shuffle->setObjectName(QString::fromUtf8("ch5shuffle"));

    gridLayout18->addWidget(ch5shuffle, 1, 0, 1, 1);

    ch5sort = new QCheckBox(page_grompp_options);
    ch5sort->setObjectName(QString::fromUtf8("ch5sort"));

    gridLayout18->addWidget(ch5sort, 2, 0, 1, 2);

    spacerItem14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout18->addItem(spacerItem14, 2, 2, 1, 1);

    ch5rem_virtual = new QCheckBox(page_grompp_options);
    ch5rem_virtual->setObjectName(QString::fromUtf8("ch5rem_virtual"));
    ch5rem_virtual->setChecked(true);

    gridLayout18->addWidget(ch5rem_virtual, 3, 0, 1, 3);

    ch5remove_waals = new QCheckBox(page_grompp_options);
    ch5remove_waals->setObjectName(QString::fromUtf8("ch5remove_waals"));

    gridLayout18->addWidget(ch5remove_waals, 4, 0, 1, 3);

    ch5renumber = new QCheckBox(page_grompp_options);
    ch5renumber->setObjectName(QString::fromUtf8("ch5renumber"));
    ch5renumber->setChecked(true);

    gridLayout18->addWidget(ch5renumber, 5, 0, 1, 3);

    txt = new QLabel(page_grompp_options);
    txt->setObjectName(QString::fromUtf8("txt"));
    txt->setWordWrap(false);

    gridLayout18->addWidget(txt, 6, 0, 1, 2);

    sp5first_frame = new QSpinBox(page_grompp_options);
    sp5first_frame->setObjectName(QString::fromUtf8("sp5first_frame"));
    sp5first_frame->setMaximumSize(QSize(46, 16777215));
    sp5first_frame->setMinimum(-1);
    sp5first_frame->setValue(-1);

    gridLayout18->addWidget(sp5first_frame, 6, 2, 1, 1);

    textLabel2_15 = new QLabel(page_grompp_options);
    textLabel2_15->setObjectName(QString::fromUtf8("textLabel2_15"));
    textLabel2_15->setWordWrap(false);

    gridLayout18->addWidget(textLabel2_15, 7, 0, 1, 2);

    sp5nodes = new QSpinBox(page_grompp_options);
    sp5nodes->setObjectName(QString::fromUtf8("sp5nodes"));
    sp5nodes->setMaximumSize(QSize(46, 16777215));
    sp5nodes->setValue(1);

    gridLayout18->addWidget(sp5nodes, 7, 2, 1, 1);

    textLabel3_2 = new QLabel(page_grompp_options);
    textLabel3_2->setObjectName(QString::fromUtf8("textLabel3_2"));
    textLabel3_2->setWordWrap(false);

    gridLayout18->addWidget(textLabel3_2, 8, 0, 1, 2);

    sp5warnings = new QSpinBox(page_grompp_options);
    sp5warnings->setObjectName(QString::fromUtf8("sp5warnings"));
    sp5warnings->setMaximumSize(QSize(46, 16777215));
    sp5warnings->setMinimum(0);
    sp5warnings->setValue(10);

    gridLayout18->addWidget(sp5warnings, 8, 2, 1, 1);

    spacerItem15 = new QSpacerItem(20, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout18->addItem(spacerItem15, 9, 0, 1, 1);

    tbxGrompp->addItem(page_grompp_options, QApplication::translate("CommandsClass", "grompp options", 0, QApplication::UnicodeUTF8));

    gridLayout16->addWidget(tbxGrompp, 0, 0, 1, 1);

    stackwMain->addWidget(stack_grompp);
    stack_mdrun = new QWidget();
    stack_mdrun->setObjectName(QString::fromUtf8("stack_mdrun"));
    gridLayout19 = new QGridLayout(stack_mdrun);
    gridLayout19->setObjectName(QString::fromUtf8("gridLayout19"));
    tbxMdrun = new QToolBox(stack_mdrun);
    tbxMdrun->setObjectName(QString::fromUtf8("tbxMdrun"));
    tbxMdrun->setFrameShape(QFrame::StyledPanel);
    page_mdrun_files = new QWidget();
    page_mdrun_files->setObjectName(QString::fromUtf8("page_mdrun_files"));
    page_mdrun_files->setGeometry(QRect(0, 0, 138, 374));
    gridLayout20 = new QGridLayout(page_mdrun_files);
    gridLayout20->setObjectName(QString::fromUtf8("gridLayout20"));
    textLabel2_16 = new QLabel(page_mdrun_files);
    textLabel2_16->setObjectName(QString::fromUtf8("textLabel2_16"));
    textLabel2_16->setMaximumSize(QSize(16777215, 21));
    QFont font3;
    font3.setUnderline(true);
    textLabel2_16->setFont(font3);
    textLabel2_16->setWordWrap(false);

    gridLayout20->addWidget(textLabel2_16, 0, 0, 1, 1);

    cb6_s = new QComboBox(page_mdrun_files);
    cb6_s->setObjectName(QString::fromUtf8("cb6_s"));
    cb6_s->setMaximumSize(QSize(16777215, 21));

    gridLayout20->addWidget(cb6_s, 0, 1, 1, 1);

    textLabel2_17 = new QLabel(page_mdrun_files);
    textLabel2_17->setObjectName(QString::fromUtf8("textLabel2_17"));
    textLabel2_17->setMaximumSize(QSize(16777215, 21));
    textLabel2_17->setFont(font3);
    textLabel2_17->setWordWrap(false);

    gridLayout20->addWidget(textLabel2_17, 1, 0, 1, 1);

    le6_o = new QLineEdit(page_mdrun_files);
    le6_o->setObjectName(QString::fromUtf8("le6_o"));
    le6_o->setMaximumSize(QSize(16777215, 21));

    gridLayout20->addWidget(le6_o, 1, 1, 1, 1);

    textLabel2_2_2_4 = new QLabel(page_mdrun_files);
    textLabel2_2_2_4->setObjectName(QString::fromUtf8("textLabel2_2_2_4"));
    textLabel2_2_2_4->setMaximumSize(QSize(16777215, 21));
    textLabel2_2_2_4->setWordWrap(false);

    gridLayout20->addWidget(textLabel2_2_2_4, 2, 0, 1, 1);

    le6_x = new QLineEdit(page_mdrun_files);
    le6_x->setObjectName(QString::fromUtf8("le6_x"));
    le6_x->setMaximumSize(QSize(16777215, 21));

    gridLayout20->addWidget(le6_x, 2, 1, 1, 1);

    textLabel2_2_8 = new QLabel(page_mdrun_files);
    textLabel2_2_8->setObjectName(QString::fromUtf8("textLabel2_2_8"));
    textLabel2_2_8->setMaximumSize(QSize(16777215, 21));
    textLabel2_2_8->setFont(font3);
    textLabel2_2_8->setWordWrap(false);

    gridLayout20->addWidget(textLabel2_2_8, 3, 0, 1, 1);

    le6_c = new QLineEdit(page_mdrun_files);
    le6_c->setObjectName(QString::fromUtf8("le6_c"));
    le6_c->setMaximumSize(QSize(16777215, 21));

    gridLayout20->addWidget(le6_c, 3, 1, 1, 1);

    textLabel2_18 = new QLabel(page_mdrun_files);
    textLabel2_18->setObjectName(QString::fromUtf8("textLabel2_18"));
    textLabel2_18->setMaximumSize(QSize(16777215, 21));
    textLabel2_18->setFont(font3);
    textLabel2_18->setWordWrap(false);

    gridLayout20->addWidget(textLabel2_18, 4, 0, 1, 1);

    le6_e = new QLineEdit(page_mdrun_files);
    le6_e->setObjectName(QString::fromUtf8("le6_e"));
    le6_e->setMaximumSize(QSize(16777215, 21));

    gridLayout20->addWidget(le6_e, 4, 1, 1, 1);

    textLabel1_8 = new QLabel(page_mdrun_files);
    textLabel1_8->setObjectName(QString::fromUtf8("textLabel1_8"));
    textLabel1_8->setMaximumSize(QSize(16777215, 21));
    textLabel1_8->setFont(font3);
    textLabel1_8->setWordWrap(false);

    gridLayout20->addWidget(textLabel1_8, 5, 0, 1, 1);

    le6_g = new QLineEdit(page_mdrun_files);
    le6_g->setObjectName(QString::fromUtf8("le6_g"));
    le6_g->setMaximumSize(QSize(16777215, 21));

    gridLayout20->addWidget(le6_g, 5, 1, 1, 1);

    textLabel2_3_4 = new QLabel(page_mdrun_files);
    textLabel2_3_4->setObjectName(QString::fromUtf8("textLabel2_3_4"));
    textLabel2_3_4->setMaximumSize(QSize(16777215, 21));
    textLabel2_3_4->setWordWrap(false);

    gridLayout20->addWidget(textLabel2_3_4, 6, 0, 1, 1);

    le6_dgdl = new QLineEdit(page_mdrun_files);
    le6_dgdl->setObjectName(QString::fromUtf8("le6_dgdl"));
    le6_dgdl->setMaximumSize(QSize(16777215, 21));

    gridLayout20->addWidget(le6_dgdl, 6, 1, 1, 1);

    textLabel2_3_5 = new QLabel(page_mdrun_files);
    textLabel2_3_5->setObjectName(QString::fromUtf8("textLabel2_3_5"));
    textLabel2_3_5->setMaximumSize(QSize(16777215, 21));
    textLabel2_3_5->setWordWrap(false);

    gridLayout20->addWidget(textLabel2_3_5, 7, 0, 1, 1);

    le6_field = new QLineEdit(page_mdrun_files);
    le6_field->setObjectName(QString::fromUtf8("le6_field"));
    le6_field->setMaximumSize(QSize(16777215, 21));

    gridLayout20->addWidget(le6_field, 7, 1, 1, 1);

    textLabel2_152 = new QLabel(page_mdrun_files);
    textLabel2_152->setObjectName(QString::fromUtf8("textLabel2_152"));
    textLabel2_152->setMaximumSize(QSize(16777215, 21));
    textLabel2_152->setWordWrap(false);

    gridLayout20->addWidget(textLabel2_152, 8, 0, 1, 1);

    cb6_table = new QComboBox(page_mdrun_files);
    cb6_table->setObjectName(QString::fromUtf8("cb6_table"));
    cb6_table->setMaximumSize(QSize(16777215, 21));

    gridLayout20->addWidget(cb6_table, 8, 1, 1, 1);

    textLabel2_153 = new QLabel(page_mdrun_files);
    textLabel2_153->setObjectName(QString::fromUtf8("textLabel2_153"));
    textLabel2_153->setMaximumSize(QSize(16777215, 21));
    textLabel2_153->setWordWrap(false);

    gridLayout20->addWidget(textLabel2_153, 9, 0, 1, 1);

    cb6_tablep = new QComboBox(page_mdrun_files);
    cb6_tablep->setObjectName(QString::fromUtf8("cb6_tablep"));
    cb6_tablep->setMaximumSize(QSize(16777215, 21));

    gridLayout20->addWidget(cb6_tablep, 9, 1, 1, 1);

    textLabel2_154 = new QLabel(page_mdrun_files);
    textLabel2_154->setObjectName(QString::fromUtf8("textLabel2_154"));
    textLabel2_154->setMaximumSize(QSize(16777215, 21));
    textLabel2_154->setWordWrap(false);

    gridLayout20->addWidget(textLabel2_154, 10, 0, 1, 1);

    cb6_rerun = new QComboBox(page_mdrun_files);
    cb6_rerun->setObjectName(QString::fromUtf8("cb6_rerun"));
    cb6_rerun->setMaximumSize(QSize(16777215, 21));

    gridLayout20->addWidget(cb6_rerun, 10, 1, 1, 1);

    textLabel2_2_2_5 = new QLabel(page_mdrun_files);
    textLabel2_2_2_5->setObjectName(QString::fromUtf8("textLabel2_2_2_5"));
    textLabel2_2_2_5->setMaximumSize(QSize(16777215, 21));
    textLabel2_2_2_5->setWordWrap(false);

    gridLayout20->addWidget(textLabel2_2_2_5, 11, 0, 1, 1);

    le6_tpi = new QLineEdit(page_mdrun_files);
    le6_tpi->setObjectName(QString::fromUtf8("le6_tpi"));
    le6_tpi->setMaximumSize(QSize(16777215, 21));

    gridLayout20->addWidget(le6_tpi, 11, 1, 1, 1);

    spacerItem16 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout20->addItem(spacerItem16, 12, 1, 1, 1);

    tbxMdrun->addItem(page_mdrun_files, QApplication::translate("CommandsClass", "mdrun files (1)", 0, QApplication::UnicodeUTF8));
    page_50 = new QWidget();
    page_50->setObjectName(QString::fromUtf8("page_50"));
    page_50->setGeometry(QRect(0, 0, 150, 375));
    gridLayout21 = new QGridLayout(page_50);
    gridLayout21->setObjectName(QString::fromUtf8("gridLayout21"));
    textLabel2_155 = new QLabel(page_50);
    textLabel2_155->setObjectName(QString::fromUtf8("textLabel2_155"));
    textLabel2_155->setMaximumSize(QSize(16777215, 21));
    textLabel2_155->setWordWrap(false);

    gridLayout21->addWidget(textLabel2_155, 0, 0, 1, 1);

    cb6_ei = new QComboBox(page_50);
    cb6_ei->setObjectName(QString::fromUtf8("cb6_ei"));
    cb6_ei->setMaximumSize(QSize(16777215, 21));

    gridLayout21->addWidget(cb6_ei, 0, 1, 1, 1);

    textLabel2_2_2_6 = new QLabel(page_50);
    textLabel2_2_2_6->setObjectName(QString::fromUtf8("textLabel2_2_2_6"));
    textLabel2_2_2_6->setMaximumSize(QSize(16777215, 21));
    textLabel2_2_2_6->setWordWrap(false);

    gridLayout21->addWidget(textLabel2_2_2_6, 1, 0, 1, 1);

    le6_eo = new QLineEdit(page_50);
    le6_eo->setObjectName(QString::fromUtf8("le6_eo"));
    le6_eo->setMaximumSize(QSize(16777215, 21));

    gridLayout21->addWidget(le6_eo, 1, 1, 1, 1);

    textLabel2_156 = new QLabel(page_50);
    textLabel2_156->setObjectName(QString::fromUtf8("textLabel2_156"));
    textLabel2_156->setMaximumSize(QSize(16777215, 21));
    textLabel2_156->setWordWrap(false);

    gridLayout21->addWidget(textLabel2_156, 2, 0, 1, 1);

    cb6_j = new QComboBox(page_50);
    cb6_j->setObjectName(QString::fromUtf8("cb6_j"));
    cb6_j->setMaximumSize(QSize(16777215, 21));

    gridLayout21->addWidget(cb6_j, 2, 1, 1, 1);

    textLabel2_2_2_7 = new QLabel(page_50);
    textLabel2_2_2_7->setObjectName(QString::fromUtf8("textLabel2_2_2_7"));
    textLabel2_2_2_7->setMaximumSize(QSize(16777215, 21));
    textLabel2_2_2_7->setWordWrap(false);

    gridLayout21->addWidget(textLabel2_2_2_7, 3, 0, 1, 1);

    le6_jo = new QLineEdit(page_50);
    le6_jo->setObjectName(QString::fromUtf8("le6_jo"));
    le6_jo->setMaximumSize(QSize(16777215, 21));

    gridLayout21->addWidget(le6_jo, 3, 1, 1, 1);

    textLabel2_2_2_8 = new QLabel(page_50);
    textLabel2_2_2_8->setObjectName(QString::fromUtf8("textLabel2_2_2_8"));
    textLabel2_2_2_8->setMaximumSize(QSize(16777215, 21));
    textLabel2_2_2_8->setWordWrap(false);

    gridLayout21->addWidget(textLabel2_2_2_8, 4, 0, 1, 1);

    le6_ffout = new QLineEdit(page_50);
    le6_ffout->setObjectName(QString::fromUtf8("le6_ffout"));
    le6_ffout->setMaximumSize(QSize(16777215, 21));

    gridLayout21->addWidget(le6_ffout, 4, 1, 1, 1);

    textLabel2_2_2_9 = new QLabel(page_50);
    textLabel2_2_2_9->setObjectName(QString::fromUtf8("textLabel2_2_2_9"));
    textLabel2_2_2_9->setMaximumSize(QSize(16777215, 21));
    textLabel2_2_2_9->setWordWrap(false);

    gridLayout21->addWidget(textLabel2_2_2_9, 5, 0, 1, 1);

    le6_devout = new QLineEdit(page_50);
    le6_devout->setObjectName(QString::fromUtf8("le6_devout"));
    le6_devout->setMaximumSize(QSize(16777215, 21));

    gridLayout21->addWidget(le6_devout, 5, 1, 1, 1);

    textLabel2_2_2_10 = new QLabel(page_50);
    textLabel2_2_2_10->setObjectName(QString::fromUtf8("textLabel2_2_2_10"));
    textLabel2_2_2_10->setMaximumSize(QSize(16777215, 21));
    textLabel2_2_2_10->setWordWrap(false);

    gridLayout21->addWidget(textLabel2_2_2_10, 6, 0, 1, 1);

    le6_runav = new QLineEdit(page_50);
    le6_runav->setObjectName(QString::fromUtf8("le6_runav"));
    le6_runav->setMaximumSize(QSize(16777215, 21));

    gridLayout21->addWidget(le6_runav, 6, 1, 1, 1);

    textLabel2_157 = new QLabel(page_50);
    textLabel2_157->setObjectName(QString::fromUtf8("textLabel2_157"));
    textLabel2_157->setMaximumSize(QSize(16777215, 21));
    textLabel2_157->setWordWrap(false);

    gridLayout21->addWidget(textLabel2_157, 7, 0, 1, 1);

    cb6_pi = new QComboBox(page_50);
    cb6_pi->setObjectName(QString::fromUtf8("cb6_pi"));
    cb6_pi->setMaximumSize(QSize(16777215, 21));

    gridLayout21->addWidget(cb6_pi, 7, 1, 1, 1);

    textLabel2_2_2_11 = new QLabel(page_50);
    textLabel2_2_2_11->setObjectName(QString::fromUtf8("textLabel2_2_2_11"));
    textLabel2_2_2_11->setMaximumSize(QSize(16777215, 21));
    textLabel2_2_2_11->setWordWrap(false);

    gridLayout21->addWidget(textLabel2_2_2_11, 8, 0, 1, 1);

    le6_po = new QLineEdit(page_50);
    le6_po->setObjectName(QString::fromUtf8("le6_po"));
    le6_po->setMaximumSize(QSize(16777215, 21));

    gridLayout21->addWidget(le6_po, 8, 1, 1, 1);

    textLabel2_2_2_12 = new QLabel(page_50);
    textLabel2_2_2_12->setObjectName(QString::fromUtf8("textLabel2_2_2_12"));
    textLabel2_2_2_12->setMaximumSize(QSize(16777215, 21));
    textLabel2_2_2_12->setWordWrap(false);

    gridLayout21->addWidget(textLabel2_2_2_12, 9, 0, 1, 1);

    le6_pd = new QLineEdit(page_50);
    le6_pd->setObjectName(QString::fromUtf8("le6_pd"));
    le6_pd->setMaximumSize(QSize(16777215, 21));

    gridLayout21->addWidget(le6_pd, 9, 1, 1, 1);

    textLabel2_2_2_15 = new QLabel(page_50);
    textLabel2_2_2_15->setObjectName(QString::fromUtf8("textLabel2_2_2_15"));
    textLabel2_2_2_15->setMaximumSize(QSize(16777215, 21));
    textLabel2_2_2_15->setWordWrap(false);

    gridLayout21->addWidget(textLabel2_2_2_15, 10, 0, 1, 1);

    cb6_pn = new QComboBox(page_50);
    cb6_pn->setObjectName(QString::fromUtf8("cb6_pn"));
    cb6_pn->setMaximumSize(QSize(16777215, 21));

    gridLayout21->addWidget(cb6_pn, 10, 1, 1, 1);

    textLabel2_2_2_13 = new QLabel(page_50);
    textLabel2_2_2_13->setObjectName(QString::fromUtf8("textLabel2_2_2_13"));
    textLabel2_2_2_13->setMaximumSize(QSize(16777215, 21));
    textLabel2_2_2_13->setWordWrap(false);

    gridLayout21->addWidget(textLabel2_2_2_13, 11, 0, 1, 1);

    le6_mtx = new QLineEdit(page_50);
    le6_mtx->setObjectName(QString::fromUtf8("le6_mtx"));
    le6_mtx->setMaximumSize(QSize(16777215, 21));

    gridLayout21->addWidget(le6_mtx, 11, 1, 1, 1);

    textLabel2_2_2_14 = new QLabel(page_50);
    textLabel2_2_2_14->setObjectName(QString::fromUtf8("textLabel2_2_2_14"));
    textLabel2_2_2_14->setMaximumSize(QSize(16777215, 21));
    textLabel2_2_2_14->setWordWrap(false);

    gridLayout21->addWidget(textLabel2_2_2_14, 12, 0, 1, 1);

    le6_dn = new QLineEdit(page_50);
    le6_dn->setObjectName(QString::fromUtf8("le6_dn"));
    le6_dn->setMaximumSize(QSize(16777215, 21));

    gridLayout21->addWidget(le6_dn, 12, 1, 1, 1);

    tbxMdrun->addItem(page_50, QApplication::translate("CommandsClass", "mdrun files (2)", 0, QApplication::UnicodeUTF8));
    page_mdrun_options = new QWidget();
    page_mdrun_options->setObjectName(QString::fromUtf8("page_mdrun_options"));
    page_mdrun_options->setGeometry(QRect(0, 0, 340, 335));
    gridLayout22 = new QGridLayout(page_mdrun_options);
    gridLayout22->setObjectName(QString::fromUtf8("gridLayout22"));
    ch6loud = new QCheckBox(page_mdrun_options);
    ch6loud->setObjectName(QString::fromUtf8("ch6loud"));
    ch6loud->setChecked(true);

    gridLayout22->addWidget(ch6loud, 0, 0, 1, 1);

    ch6xray = new QCheckBox(page_mdrun_options);
    ch6xray->setObjectName(QString::fromUtf8("ch6xray"));

    gridLayout22->addWidget(ch6xray, 1, 0, 1, 2);

    ch6glass = new QCheckBox(page_mdrun_options);
    ch6glass->setObjectName(QString::fromUtf8("ch6glass"));

    gridLayout22->addWidget(ch6glass, 2, 0, 1, 2);

    ch6dvdl = new QCheckBox(page_mdrun_options);
    ch6dvdl->setObjectName(QString::fromUtf8("ch6dvdl"));
    ch6dvdl->setChecked(false);

    gridLayout22->addWidget(ch6dvdl, 3, 0, 1, 2);

    ch6compactlog = new QCheckBox(page_mdrun_options);
    ch6compactlog->setObjectName(QString::fromUtf8("ch6compactlog"));
    ch6compactlog->setChecked(true);

    gridLayout22->addWidget(ch6compactlog, 4, 0, 1, 1);

    ch6legend = new QCheckBox(page_mdrun_options);
    ch6legend->setObjectName(QString::fromUtf8("ch6legend"));
    ch6legend->setChecked(true);

    gridLayout22->addWidget(ch6legend, 5, 0, 1, 1);

    textLabel2_19 = new QLabel(page_mdrun_options);
    textLabel2_19->setObjectName(QString::fromUtf8("textLabel2_19"));
    textLabel2_19->setWordWrap(false);

    gridLayout22->addWidget(textLabel2_19, 6, 0, 1, 1);

    sp6status = new QSpinBox(page_mdrun_options);
    sp6status->setObjectName(QString::fromUtf8("sp6status"));
    sp6status->setMaximumSize(QSize(46, 16777215));
    sp6status->setValue(1);

    gridLayout22->addWidget(sp6status, 6, 1, 1, 1);

    sp2threadslabel = new QLabel(page_mdrun_options);
    sp2threadslabel->setObjectName(QString::fromUtf8("sp2threadslabel"));
    sp2threadslabel->setWordWrap(false);

    gridLayout22->addWidget(sp2threadslabel, 7, 0, 1, 1);

    sp6threads = new QSpinBox(page_mdrun_options);
    sp6threads->setObjectName(QString::fromUtf8("sp6threads"));
    sp6threads->setMaximumSize(QSize(46, 16777215));
    sp6threads->setValue(1);

    gridLayout22->addWidget(sp6threads, 7, 1, 1, 1);

    textLabel3_3 = new QLabel(page_mdrun_options);
    textLabel3_3->setObjectName(QString::fromUtf8("textLabel3_3"));
    textLabel3_3->setWordWrap(false);

    gridLayout22->addWidget(textLabel3_3, 8, 0, 1, 1);

    sp6replica_seed = new QSpinBox(page_mdrun_options);
    sp6replica_seed->setObjectName(QString::fromUtf8("sp6replica_seed"));
    sp6replica_seed->setMaximumSize(QSize(46, 16777215));
    sp6replica_seed->setValue(0);

    gridLayout22->addWidget(sp6replica_seed, 8, 1, 1, 1);

    textLabel2_2_9 = new QLabel(page_mdrun_options);
    textLabel2_2_9->setObjectName(QString::fromUtf8("textLabel2_2_9"));
    textLabel2_2_9->setWordWrap(false);

    gridLayout22->addWidget(textLabel2_2_9, 9, 0, 1, 1);

    sp6replica_steps = new QSpinBox(page_mdrun_options);
    sp6replica_steps->setObjectName(QString::fromUtf8("sp6replica_steps"));
    sp6replica_steps->setMaximumSize(QSize(46, 16777215));
    sp6replica_steps->setMinimum(-1);
    sp6replica_steps->setValue(-1);

    gridLayout22->addWidget(sp6replica_steps, 9, 1, 1, 1);

    spacerItem17 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout22->addItem(spacerItem17, 10, 0, 1, 1);

    tbxMdrun->addItem(page_mdrun_options, QApplication::translate("CommandsClass", "mdrun options", 0, QApplication::UnicodeUTF8));

    gridLayout19->addWidget(tbxMdrun, 0, 0, 1, 1);

    stackwMain->addWidget(stack_mdrun);
    stack_tpbconv = new QWidget();
    stack_tpbconv->setObjectName(QString::fromUtf8("stack_tpbconv"));
    gridLayout23 = new QGridLayout(stack_tpbconv);
    gridLayout23->setObjectName(QString::fromUtf8("gridLayout23"));
    toolBox_5 = new QToolBox(stack_tpbconv);
    toolBox_5->setObjectName(QString::fromUtf8("toolBox_5"));
    toolBox_5->setFrameShape(QFrame::StyledPanel);
    page = new QWidget();
    page->setObjectName(QString::fromUtf8("page"));
    page->setGeometry(QRect(0, 0, 128, 184));
    gridLayout24 = new QGridLayout(page);
    gridLayout24->setObjectName(QString::fromUtf8("gridLayout24"));
    textLabel2_20 = new QLabel(page);
    textLabel2_20->setObjectName(QString::fromUtf8("textLabel2_20"));
    textLabel2_20->setFont(font3);
    textLabel2_20->setWordWrap(false);

    gridLayout24->addWidget(textLabel2_20, 0, 0, 1, 1);

    cb7inputfile = new QComboBox(page);
    cb7inputfile->setObjectName(QString::fromUtf8("cb7inputfile"));

    gridLayout24->addWidget(cb7inputfile, 0, 1, 1, 1);

    textLabel2_22 = new QLabel(page);
    textLabel2_22->setObjectName(QString::fromUtf8("textLabel2_22"));
    textLabel2_22->setWordWrap(false);

    gridLayout24->addWidget(textLabel2_22, 1, 0, 1, 1);

    cb7full = new QComboBox(page);
    cb7full->setObjectName(QString::fromUtf8("cb7full"));

    gridLayout24->addWidget(cb7full, 1, 1, 1, 1);

    textLabel2_96 = new QLabel(page);
    textLabel2_96->setObjectName(QString::fromUtf8("textLabel2_96"));
    textLabel2_96->setWordWrap(false);

    gridLayout24->addWidget(textLabel2_96, 2, 0, 1, 1);

    cb7energy = new QComboBox(page);
    cb7energy->setObjectName(QString::fromUtf8("cb7energy"));

    gridLayout24->addWidget(cb7energy, 2, 1, 1, 1);

    textLabel2_97 = new QLabel(page);
    textLabel2_97->setObjectName(QString::fromUtf8("textLabel2_97"));
    textLabel2_97->setWordWrap(false);

    gridLayout24->addWidget(textLabel2_97, 3, 0, 1, 1);

    cb7index = new QComboBox(page);
    cb7index->setObjectName(QString::fromUtf8("cb7index"));

    gridLayout24->addWidget(cb7index, 3, 1, 1, 1);

    textLabel2_21 = new QLabel(page);
    textLabel2_21->setObjectName(QString::fromUtf8("textLabel2_21"));
    textLabel2_21->setFont(font3);
    textLabel2_21->setWordWrap(false);

    gridLayout24->addWidget(textLabel2_21, 4, 0, 1, 1);

    le7output = new QLineEdit(page);
    le7output->setObjectName(QString::fromUtf8("le7output"));

    gridLayout24->addWidget(le7output, 4, 1, 1, 1);

    spacerItem18 = new QSpacerItem(20, 151, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout24->addItem(spacerItem18, 5, 1, 1, 1);

    toolBox_5->addItem(page, QApplication::translate("CommandsClass", "tpbconv files", 0, QApplication::UnicodeUTF8));
    page_2 = new QWidget();
    page_2->setObjectName(QString::fromUtf8("page_2"));
    page_2->setGeometry(QRect(0, 0, 326, 207));
    gridLayout25 = new QGridLayout(page_2);
    gridLayout25->setObjectName(QString::fromUtf8("gridLayout25"));
    ch7charges = new QCheckBox(page_2);
    ch7charges->setObjectName(QString::fromUtf8("ch7charges"));
    ch7charges->setChecked(false);

    gridLayout25->addWidget(ch7charges, 0, 0, 1, 1);

    ch7continuous = new QCheckBox(page_2);
    ch7continuous->setObjectName(QString::fromUtf8("ch7continuous"));
    ch7continuous->setChecked(true);

    gridLayout25->addWidget(ch7continuous, 1, 0, 1, 1);

    gridLayout26 = new QGridLayout();
    gridLayout26->setObjectName(QString::fromUtf8("gridLayout26"));
    textLabel2_59 = new QLabel(page_2);
    textLabel2_59->setObjectName(QString::fromUtf8("textLabel2_59"));
    textLabel2_59->setWordWrap(false);

    gridLayout26->addWidget(textLabel2_59, 0, 0, 2, 2);

    vboxLayout = new QVBoxLayout();
#ifndef Q_OS_MAC
    vboxLayout->setSpacing(-1);
#endif
    vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
    le7extend_this = new QLineEdit(page_2);
    le7extend_this->setObjectName(QString::fromUtf8("le7extend_this"));

    vboxLayout->addWidget(le7extend_this);

    le7extend_until = new QLineEdit(page_2);
    le7extend_until->setObjectName(QString::fromUtf8("le7extend_until"));

    vboxLayout->addWidget(le7extend_until);

    le7continue = new QLineEdit(page_2);
    le7continue->setObjectName(QString::fromUtf8("le7continue"));

    vboxLayout->addWidget(le7continue);


    gridLayout26->addLayout(vboxLayout, 1, 1, 3, 1);

    sp2threadslabel_2 = new QLabel(page_2);
    sp2threadslabel_2->setObjectName(QString::fromUtf8("sp2threadslabel_2"));
    sp2threadslabel_2->setWordWrap(false);

    gridLayout26->addWidget(sp2threadslabel_2, 2, 0, 1, 1);

    sp2threadslabel_12 = new QLabel(page_2);
    sp2threadslabel_12->setObjectName(QString::fromUtf8("sp2threadslabel_12"));
    sp2threadslabel_12->setWordWrap(false);

    gridLayout26->addWidget(sp2threadslabel_12, 3, 0, 1, 1);


    gridLayout25->addLayout(gridLayout26, 2, 0, 1, 1);

    spacerItem19 = new QSpacerItem(20, 121, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout25->addItem(spacerItem19, 3, 0, 1, 1);

    toolBox_5->addItem(page_2, QApplication::translate("CommandsClass", "tpbconv options", 0, QApplication::UnicodeUTF8));

    gridLayout23->addWidget(toolBox_5, 0, 0, 1, 1);

    stackwMain->addWidget(stack_tpbconv);
    stack_ngmx = new QWidget();
    stack_ngmx->setObjectName(QString::fromUtf8("stack_ngmx"));
    gridLayout27 = new QGridLayout(stack_ngmx);
    gridLayout27->setObjectName(QString::fromUtf8("gridLayout27"));
    toolBox_6 = new QToolBox(stack_ngmx);
    toolBox_6->setObjectName(QString::fromUtf8("toolBox_6"));
    toolBox_6->setFrameShape(QFrame::StyledPanel);
    page_3 = new QWidget();
    page_3->setObjectName(QString::fromUtf8("page_3"));
    page_3->setGeometry(QRect(0, 0, 337, 125));
    gridLayout28 = new QGridLayout(page_3);
    gridLayout28->setObjectName(QString::fromUtf8("gridLayout28"));
    textLabel2_25 = new QLabel(page_3);
    textLabel2_25->setObjectName(QString::fromUtf8("textLabel2_25"));
    textLabel2_25->setFont(font3);
    textLabel2_25->setWordWrap(false);

    gridLayout28->addWidget(textLabel2_25, 0, 0, 1, 1);

    cb8traj = new QComboBox(page_3);
    cb8traj->setObjectName(QString::fromUtf8("cb8traj"));
    cb8traj->setMinimumSize(QSize(201, 0));

    gridLayout28->addWidget(cb8traj, 0, 1, 1, 1);

    textLabel2_98 = new QLabel(page_3);
    textLabel2_98->setObjectName(QString::fromUtf8("textLabel2_98"));
    textLabel2_98->setFont(font3);
    textLabel2_98->setWordWrap(false);

    gridLayout28->addWidget(textLabel2_98, 1, 0, 1, 1);

    cb8runinput = new QComboBox(page_3);
    cb8runinput->setObjectName(QString::fromUtf8("cb8runinput"));
    cb8runinput->setMinimumSize(QSize(201, 0));

    gridLayout28->addWidget(cb8runinput, 1, 1, 1, 1);

    textLabel2_99 = new QLabel(page_3);
    textLabel2_99->setObjectName(QString::fromUtf8("textLabel2_99"));
    textLabel2_99->setWordWrap(false);

    gridLayout28->addWidget(textLabel2_99, 2, 0, 1, 1);

    cb8index = new QComboBox(page_3);
    cb8index->setObjectName(QString::fromUtf8("cb8index"));
    cb8index->setMinimumSize(QSize(201, 0));

    gridLayout28->addWidget(cb8index, 2, 1, 1, 1);

    spacerItem20 = new QSpacerItem(20, 161, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout28->addItem(spacerItem20, 3, 1, 1, 1);

    toolBox_6->addItem(page_3, QApplication::translate("CommandsClass", "ngmx files", 0, QApplication::UnicodeUTF8));
    page_4 = new QWidget();
    page_4->setObjectName(QString::fromUtf8("page_4"));
    page_4->setGeometry(QRect(0, 0, 262, 139));
    gridLayout29 = new QGridLayout(page_4);
    gridLayout29->setObjectName(QString::fromUtf8("gridLayout29"));
    textLabel2_101 = new QLabel(page_4);
    textLabel2_101->setObjectName(QString::fromUtf8("textLabel2_101"));
    textLabel2_101->setWordWrap(false);

    gridLayout29->addWidget(textLabel2_101, 0, 0, 1, 1);

    le8first = new QLineEdit(page_4);
    le8first->setObjectName(QString::fromUtf8("le8first"));

    gridLayout29->addWidget(le8first, 0, 1, 1, 1);

    textLabel2_100 = new QLabel(page_4);
    textLabel2_100->setObjectName(QString::fromUtf8("textLabel2_100"));
    textLabel2_100->setWordWrap(false);

    gridLayout29->addWidget(textLabel2_100, 1, 0, 1, 1);

    le8last = new QLineEdit(page_4);
    le8last->setObjectName(QString::fromUtf8("le8last"));

    gridLayout29->addWidget(le8last, 1, 1, 1, 1);

    textLabel2_102 = new QLabel(page_4);
    textLabel2_102->setObjectName(QString::fromUtf8("textLabel2_102"));
    textLabel2_102->setWordWrap(false);

    gridLayout29->addWidget(textLabel2_102, 2, 0, 1, 1);

    le8dt = new QLineEdit(page_4);
    le8dt->setObjectName(QString::fromUtf8("le8dt"));

    gridLayout29->addWidget(le8dt, 2, 1, 1, 1);

    spacerItem21 = new QSpacerItem(20, 181, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout29->addItem(spacerItem21, 3, 0, 1, 1);

    toolBox_6->addItem(page_4, QApplication::translate("CommandsClass", "ngmx options", 0, QApplication::UnicodeUTF8));

    gridLayout27->addWidget(toolBox_6, 0, 0, 1, 1);

    stackwMain->addWidget(stack_ngmx);
    stack_trjconv = new QWidget();
    stack_trjconv->setObjectName(QString::fromUtf8("stack_trjconv"));
    gridLayout30 = new QGridLayout(stack_trjconv);
    gridLayout30->setObjectName(QString::fromUtf8("gridLayout30"));
    toolBox_7 = new QToolBox(stack_trjconv);
    toolBox_7->setObjectName(QString::fromUtf8("toolBox_7"));
    toolBox_7->setFrameShape(QFrame::StyledPanel);
    page_5 = new QWidget();
    page_5->setObjectName(QString::fromUtf8("page_5"));
    page_5->setGeometry(QRect(0, 0, 140, 242));
    gridLayout31 = new QGridLayout(page_5);
    gridLayout31->setObjectName(QString::fromUtf8("gridLayout31"));
    textLabel2_27 = new QLabel(page_5);
    textLabel2_27->setObjectName(QString::fromUtf8("textLabel2_27"));
    textLabel2_27->setFont(font3);
    textLabel2_27->setWordWrap(false);

    gridLayout31->addWidget(textLabel2_27, 0, 0, 1, 1);

    cb9inputfile = new QComboBox(page_5);
    cb9inputfile->setObjectName(QString::fromUtf8("cb9inputfile"));

    gridLayout31->addWidget(cb9inputfile, 0, 1, 1, 1);

    textLabel2_28 = new QLabel(page_5);
    textLabel2_28->setObjectName(QString::fromUtf8("textLabel2_28"));
    textLabel2_28->setWordWrap(false);

    gridLayout31->addWidget(textLabel2_28, 1, 0, 1, 1);

    cb9_s = new QComboBox(page_5);
    cb9_s->setObjectName(QString::fromUtf8("cb9_s"));

    gridLayout31->addWidget(cb9_s, 1, 1, 1, 1);

    textLabel2_103 = new QLabel(page_5);
    textLabel2_103->setObjectName(QString::fromUtf8("textLabel2_103"));
    textLabel2_103->setWordWrap(false);

    gridLayout31->addWidget(textLabel2_103, 2, 0, 1, 1);

    cb9_n = new QComboBox(page_5);
    cb9_n->setObjectName(QString::fromUtf8("cb9_n"));

    gridLayout31->addWidget(cb9_n, 2, 1, 1, 1);

    textLabel2_118 = new QLabel(page_5);
    textLabel2_118->setObjectName(QString::fromUtf8("textLabel2_118"));
    textLabel2_118->setWordWrap(false);

    gridLayout31->addWidget(textLabel2_118, 3, 0, 1, 1);

    cb9_fr = new QComboBox(page_5);
    cb9_fr->setObjectName(QString::fromUtf8("cb9_fr"));

    gridLayout31->addWidget(cb9_fr, 3, 1, 1, 1);

    textLabel2_119 = new QLabel(page_5);
    textLabel2_119->setObjectName(QString::fromUtf8("textLabel2_119"));
    textLabel2_119->setWordWrap(false);

    gridLayout31->addWidget(textLabel2_119, 4, 0, 1, 1);

    cb9_sub = new QComboBox(page_5);
    cb9_sub->setObjectName(QString::fromUtf8("cb9_sub"));

    gridLayout31->addWidget(cb9_sub, 4, 1, 1, 1);

    textLabel2_104 = new QLabel(page_5);
    textLabel2_104->setObjectName(QString::fromUtf8("textLabel2_104"));
    textLabel2_104->setWordWrap(false);

    gridLayout31->addWidget(textLabel2_104, 5, 0, 1, 1);

    cb9_drop = new QComboBox(page_5);
    cb9_drop->setObjectName(QString::fromUtf8("cb9_drop"));

    gridLayout31->addWidget(cb9_drop, 5, 1, 1, 1);

    textLabel2_26 = new QLabel(page_5);
    textLabel2_26->setObjectName(QString::fromUtf8("textLabel2_26"));
    textLabel2_26->setFont(font3);
    textLabel2_26->setWordWrap(false);

    gridLayout31->addWidget(textLabel2_26, 6, 0, 1, 1);

    le9_output = new QLineEdit(page_5);
    le9_output->setObjectName(QString::fromUtf8("le9_output"));

    gridLayout31->addWidget(le9_output, 6, 1, 1, 1);

    spacerItem22 = new QSpacerItem(20, 71, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout31->addItem(spacerItem22, 7, 1, 1, 1);

    toolBox_7->addItem(page_5, QApplication::translate("CommandsClass", "trjconv files", 0, QApplication::UnicodeUTF8));
    page_6 = new QWidget();
    page_6->setObjectName(QString::fromUtf8("page_6"));
    page_6->setGeometry(QRect(0, 0, 263, 327));
    gridLayout32 = new QGridLayout(page_6);
    gridLayout32->setObjectName(QString::fromUtf8("gridLayout32"));
    label = new QLabel(page_6);
    label->setObjectName(QString::fromUtf8("label"));

    gridLayout32->addWidget(label, 0, 0, 1, 1);

    le9first = new QLineEdit(page_6);
    le9first->setObjectName(QString::fromUtf8("le9first"));
    le9first->setMaximumSize(QSize(57, 16777215));

    gridLayout32->addWidget(le9first, 0, 1, 1, 1);

    label_3 = new QLabel(page_6);
    label_3->setObjectName(QString::fromUtf8("label_3"));

    gridLayout32->addWidget(label_3, 0, 2, 1, 1);

    le9last = new QLineEdit(page_6);
    le9last->setObjectName(QString::fromUtf8("le9last"));
    le9last->setMaximumSize(QSize(57, 16777215));

    gridLayout32->addWidget(le9last, 0, 3, 1, 1);

    textLabel2_168 = new QLabel(page_6);
    textLabel2_168->setObjectName(QString::fromUtf8("textLabel2_168"));
    textLabel2_168->setWordWrap(false);

    gridLayout32->addWidget(textLabel2_168, 1, 0, 1, 3);

    le9only = new QLineEdit(page_6);
    le9only->setObjectName(QString::fromUtf8("le9only"));
    le9only->setMaximumSize(QSize(57, 16777215));

    gridLayout32->addWidget(le9only, 1, 3, 1, 1);

    gridLayout33 = new QGridLayout();
    gridLayout33->setObjectName(QString::fromUtf8("gridLayout33"));
    label_9 = new QLabel(page_6);
    label_9->setObjectName(QString::fromUtf8("label_9"));

    gridLayout33->addWidget(label_9, 0, 0, 1, 1);

    sp9only = new QSpinBox(page_6);
    sp9only->setObjectName(QString::fromUtf8("sp9only"));
    sp9only->setMaximumSize(QSize(46, 16777215));
    sp9only->setValue(1);

    gridLayout33->addWidget(sp9only, 0, 1, 1, 1);

    label_11 = new QLabel(page_6);
    label_11->setObjectName(QString::fromUtf8("label_11"));

    gridLayout33->addWidget(label_11, 1, 0, 1, 1);

    le9dump = new QLineEdit(page_6);
    le9dump->setObjectName(QString::fromUtf8("le9dump"));
    le9dump->setMaximumSize(QSize(57, 16777215));

    gridLayout33->addWidget(le9dump, 1, 1, 1, 1);

    label_12 = new QLabel(page_6);
    label_12->setObjectName(QString::fromUtf8("label_12"));

    gridLayout33->addWidget(label_12, 2, 0, 1, 1);

    le9starting = new QLineEdit(page_6);
    le9starting->setObjectName(QString::fromUtf8("le9starting"));
    le9starting->setMaximumSize(QSize(57, 16777215));

    gridLayout33->addWidget(le9starting, 2, 1, 1, 1);

    label_13 = new QLabel(page_6);
    label_13->setObjectName(QString::fromUtf8("label_13"));

    gridLayout33->addWidget(label_13, 3, 0, 1, 1);

    le9change = new QLineEdit(page_6);
    le9change->setObjectName(QString::fromUtf8("le9change"));
    le9change->setMaximumSize(QSize(57, 16777215));

    gridLayout33->addWidget(le9change, 3, 1, 1, 1);


    gridLayout32->addLayout(gridLayout33, 2, 0, 1, 4);

    gridLayout34 = new QGridLayout();
    gridLayout34->setObjectName(QString::fromUtf8("gridLayout34"));
    label_4 = new QLabel(page_6);
    label_4->setObjectName(QString::fromUtf8("label_4"));

    gridLayout34->addWidget(label_4, 0, 0, 1, 1);

    cb9time = new QComboBox(page_6);
    cb9time->setObjectName(QString::fromUtf8("cb9time"));
    cb9time->setMaximumSize(QSize(100, 16777215));

    gridLayout34->addWidget(cb9time, 0, 1, 1, 1);

    label_7 = new QLabel(page_6);
    label_7->setObjectName(QString::fromUtf8("label_7"));

    gridLayout34->addWidget(label_7, 1, 0, 1, 1);

    cb9pbc = new QComboBox(page_6);
    cb9pbc->setObjectName(QString::fromUtf8("cb9pbc"));
    cb9pbc->setMaximumSize(QSize(100, 16777215));

    gridLayout34->addWidget(cb9pbc, 1, 1, 1, 1);

    label_5 = new QLabel(page_6);
    label_5->setObjectName(QString::fromUtf8("label_5"));

    gridLayout34->addWidget(label_5, 2, 0, 1, 1);

    cb9cell = new QComboBox(page_6);
    cb9cell->setObjectName(QString::fromUtf8("cb9cell"));
    cb9cell->setMaximumSize(QSize(100, 16777215));

    gridLayout34->addWidget(cb9cell, 2, 1, 1, 1);

    label_6 = new QLabel(page_6);
    label_6->setObjectName(QString::fromUtf8("label_6"));

    gridLayout34->addWidget(label_6, 3, 0, 1, 1);

    cb9center = new QComboBox(page_6);
    cb9center->setObjectName(QString::fromUtf8("cb9center"));
    cb9center->setMaximumSize(QSize(100, 16777215));

    gridLayout34->addWidget(cb9center, 3, 1, 1, 1);


    gridLayout32->addLayout(gridLayout34, 3, 0, 1, 4);

    spacerItem23 = new QSpacerItem(339, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout32->addItem(spacerItem23, 4, 0, 1, 4);

    toolBox_7->addItem(page_6, QApplication::translate("CommandsClass", "trjconv options (1)", 0, QApplication::UnicodeUTF8));
    page_45 = new QWidget();
    page_45->setObjectName(QString::fromUtf8("page_45"));
    page_45->setGeometry(QRect(0, 0, 327, 318));
    gridLayout35 = new QGridLayout(page_45);
    gridLayout35->setObjectName(QString::fromUtf8("gridLayout35"));
    gridLayout36 = new QGridLayout();
    gridLayout36->setObjectName(QString::fromUtf8("gridLayout36"));
    label_8 = new QLabel(page_45);
    label_8->setObjectName(QString::fromUtf8("label_8"));

    gridLayout36->addWidget(label_8, 0, 0, 1, 1);

    cb9fit = new QComboBox(page_45);
    cb9fit->setObjectName(QString::fromUtf8("cb9fit"));

    gridLayout36->addWidget(cb9fit, 0, 1, 1, 1);


    gridLayout35->addLayout(gridLayout36, 0, 0, 1, 2);

    gridLayout37 = new QGridLayout();
    gridLayout37->setObjectName(QString::fromUtf8("gridLayout37"));
    ch9velocity = new QCheckBox(page_45);
    ch9velocity->setObjectName(QString::fromUtf8("ch9velocity"));
    ch9velocity->setChecked(true);

    gridLayout37->addWidget(ch9velocity, 0, 0, 1, 1);

    ch9force = new QCheckBox(page_45);
    ch9force->setObjectName(QString::fromUtf8("ch9force"));
    ch9force->setChecked(false);

    gridLayout37->addWidget(ch9force, 1, 0, 1, 1);

    label_14 = new QLabel(page_45);
    label_14->setObjectName(QString::fromUtf8("label_14"));

    gridLayout37->addWidget(label_14, 2, 0, 1, 1);

    le9truncate = new QLineEdit(page_45);
    le9truncate->setObjectName(QString::fromUtf8("le9truncate"));
    le9truncate->setMaximumSize(QSize(150, 16777215));

    gridLayout37->addWidget(le9truncate, 2, 1, 1, 1);

    ch9append = new QCheckBox(page_45);
    ch9append->setObjectName(QString::fromUtf8("ch9append"));
    ch9append->setChecked(false);

    gridLayout37->addWidget(ch9append, 3, 0, 1, 1);

    ch9write = new QCheckBox(page_45);
    ch9write->setObjectName(QString::fromUtf8("ch9write"));
    ch9write->setChecked(false);

    gridLayout37->addWidget(ch9write, 4, 0, 1, 2);


    gridLayout35->addLayout(gridLayout37, 1, 0, 1, 2);

    ch9TER = new QCheckBox(page_45);
    ch9TER->setObjectName(QString::fromUtf8("ch9TER"));
    ch9TER->setChecked(false);

    gridLayout35->addWidget(ch9TER, 2, 0, 1, 2);

    label_16 = new QLabel(page_45);
    label_16->setObjectName(QString::fromUtf8("label_16"));

    gridLayout35->addWidget(label_16, 3, 0, 1, 1);

    le9below = new QLineEdit(page_45);
    le9below->setObjectName(QString::fromUtf8("le9below"));
    le9below->setMaximumSize(QSize(140, 16777215));

    gridLayout35->addWidget(le9below, 3, 1, 1, 1);

    label_17 = new QLabel(page_45);
    label_17->setObjectName(QString::fromUtf8("label_17"));

    gridLayout35->addWidget(label_17, 4, 0, 1, 1);

    le9above = new QLineEdit(page_45);
    le9above->setObjectName(QString::fromUtf8("le9above"));
    le9above->setMaximumSize(QSize(140, 16777215));

    gridLayout35->addWidget(le9above, 4, 1, 1, 1);

    spacerItem24 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout35->addItem(spacerItem24, 5, 0, 1, 1);

    toolBox_7->addItem(page_45, QApplication::translate("CommandsClass", "tjconv options (2)", 0, QApplication::UnicodeUTF8));

    gridLayout30->addWidget(toolBox_7, 0, 0, 1, 1);

    stackwMain->addWidget(stack_trjconv);
    stack_g_energy = new QWidget();
    stack_g_energy->setObjectName(QString::fromUtf8("stack_g_energy"));
    gridLayout38 = new QGridLayout(stack_g_energy);
    gridLayout38->setObjectName(QString::fromUtf8("gridLayout38"));
    toolBox_8 = new QToolBox(stack_g_energy);
    toolBox_8->setObjectName(QString::fromUtf8("toolBox_8"));
    toolBox_8->setFrameShape(QFrame::StyledPanel);
    page_7 = new QWidget();
    page_7->setObjectName(QString::fromUtf8("page_7"));
    page_7->setGeometry(QRect(0, 0, 138, 335));
    gridLayout39 = new QGridLayout(page_7);
    gridLayout39->setObjectName(QString::fromUtf8("gridLayout39"));
    textLabel2_30 = new QLabel(page_7);
    textLabel2_30->setObjectName(QString::fromUtf8("textLabel2_30"));
    textLabel2_30->setFont(font3);
    textLabel2_30->setWordWrap(false);

    gridLayout39->addWidget(textLabel2_30, 0, 0, 1, 1);

    cb10input = new QComboBox(page_7);
    cb10input->setObjectName(QString::fromUtf8("cb10input"));

    gridLayout39->addWidget(cb10input, 0, 1, 1, 1);

    textLabel2_31 = new QLabel(page_7);
    textLabel2_31->setObjectName(QString::fromUtf8("textLabel2_31"));
    textLabel2_31->setWordWrap(false);

    gridLayout39->addWidget(textLabel2_31, 1, 0, 1, 1);

    cb10_f2 = new QComboBox(page_7);
    cb10_f2->setObjectName(QString::fromUtf8("cb10_f2"));

    gridLayout39->addWidget(cb10_f2, 1, 1, 1, 1);

    textLabel2_2_13 = new QLabel(page_7);
    textLabel2_2_13->setObjectName(QString::fromUtf8("textLabel2_2_13"));
    textLabel2_2_13->setWordWrap(false);

    gridLayout39->addWidget(textLabel2_2_13, 2, 0, 1, 1);

    cb10_s = new QComboBox(page_7);
    cb10_s->setObjectName(QString::fromUtf8("cb10_s"));

    gridLayout39->addWidget(cb10_s, 2, 1, 1, 1);

    textLabel2_29 = new QLabel(page_7);
    textLabel2_29->setObjectName(QString::fromUtf8("textLabel2_29"));
    textLabel2_29->setFont(font3);
    textLabel2_29->setWordWrap(false);

    gridLayout39->addWidget(textLabel2_29, 3, 0, 1, 1);

    le10output = new QLineEdit(page_7);
    le10output->setObjectName(QString::fromUtf8("le10output"));

    gridLayout39->addWidget(le10output, 3, 1, 1, 1);

    textLabel2_112 = new QLabel(page_7);
    textLabel2_112->setObjectName(QString::fromUtf8("textLabel2_112"));
    textLabel2_112->setWordWrap(false);

    gridLayout39->addWidget(textLabel2_112, 4, 0, 1, 1);

    le10_viol = new QLineEdit(page_7);
    le10_viol->setObjectName(QString::fromUtf8("le10_viol"));

    gridLayout39->addWidget(le10_viol, 4, 1, 1, 1);

    textLabel2_113 = new QLabel(page_7);
    textLabel2_113->setObjectName(QString::fromUtf8("textLabel2_113"));
    textLabel2_113->setWordWrap(false);

    gridLayout39->addWidget(textLabel2_113, 5, 0, 1, 1);

    le10_pairs = new QLineEdit(page_7);
    le10_pairs->setObjectName(QString::fromUtf8("le10_pairs"));

    gridLayout39->addWidget(le10_pairs, 5, 1, 1, 1);

    textLabel2_114 = new QLabel(page_7);
    textLabel2_114->setObjectName(QString::fromUtf8("textLabel2_114"));
    textLabel2_114->setWordWrap(false);

    gridLayout39->addWidget(textLabel2_114, 6, 0, 1, 1);

    le10_oten = new QLineEdit(page_7);
    le10_oten->setObjectName(QString::fromUtf8("le10_oten"));

    gridLayout39->addWidget(le10_oten, 6, 1, 1, 1);

    textLabel2_115 = new QLabel(page_7);
    textLabel2_115->setObjectName(QString::fromUtf8("textLabel2_115"));
    textLabel2_115->setWordWrap(false);

    gridLayout39->addWidget(textLabel2_115, 7, 0, 1, 1);

    le10_corr = new QLineEdit(page_7);
    le10_corr->setObjectName(QString::fromUtf8("le10_corr"));

    gridLayout39->addWidget(le10_corr, 7, 1, 1, 1);

    textLabel2_116 = new QLabel(page_7);
    textLabel2_116->setObjectName(QString::fromUtf8("textLabel2_116"));
    textLabel2_116->setWordWrap(false);

    gridLayout39->addWidget(textLabel2_116, 8, 0, 1, 1);

    le10_vis = new QLineEdit(page_7);
    le10_vis->setObjectName(QString::fromUtf8("le10_vis"));

    gridLayout39->addWidget(le10_vis, 8, 1, 1, 1);

    textLabel2_117 = new QLabel(page_7);
    textLabel2_117->setObjectName(QString::fromUtf8("textLabel2_117"));
    textLabel2_117->setWordWrap(false);

    gridLayout39->addWidget(textLabel2_117, 9, 0, 1, 1);

    le10_ravg = new QLineEdit(page_7);
    le10_ravg->setObjectName(QString::fromUtf8("le10_ravg"));

    gridLayout39->addWidget(le10_ravg, 9, 1, 1, 1);

    spacerItem25 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout39->addItem(spacerItem25, 10, 1, 1, 1);

    toolBox_8->addItem(page_7, QApplication::translate("CommandsClass", "g_energy files", 0, QApplication::UnicodeUTF8));
    page_8 = new QWidget();
    page_8->setObjectName(QString::fromUtf8("page_8"));
    page_8->setGeometry(QRect(0, 0, 318, 308));
    gridLayout40 = new QGridLayout(page_8);
    gridLayout40->setObjectName(QString::fromUtf8("gridLayout40"));
    gridLayout41 = new QGridLayout();
    gridLayout41->setObjectName(QString::fromUtf8("gridLayout41"));
    gridLayout42 = new QGridLayout();
    gridLayout42->setObjectName(QString::fromUtf8("gridLayout42"));
    ch10free = new QCheckBox(page_8);
    ch10free->setObjectName(QString::fromUtf8("ch10free"));
    ch10free->setChecked(false);

    gridLayout42->addWidget(ch10free, 0, 0, 1, 1);

    ch10sum = new QCheckBox(page_8);
    ch10sum->setObjectName(QString::fromUtf8("ch10sum"));

    gridLayout42->addWidget(ch10sum, 1, 0, 1, 1);

    ch10dipole = new QCheckBox(page_8);
    ch10dipole->setObjectName(QString::fromUtf8("ch10dipole"));
    ch10dipole->setChecked(false);

    gridLayout42->addWidget(ch10dipole, 2, 0, 1, 1);


    gridLayout41->addLayout(gridLayout42, 0, 0, 1, 1);

    gridLayout43 = new QGridLayout();
    gridLayout43->setObjectName(QString::fromUtf8("gridLayout43"));
    label_22 = new QLabel(page_8);
    label_22->setObjectName(QString::fromUtf8("label_22"));

    gridLayout43->addWidget(label_22, 0, 0, 1, 1);

    le10first = new QLineEdit(page_8);
    le10first->setObjectName(QString::fromUtf8("le10first"));
    le10first->setMaximumSize(QSize(150, 16777215));

    gridLayout43->addWidget(le10first, 0, 1, 1, 1);

    label_23 = new QLabel(page_8);
    label_23->setObjectName(QString::fromUtf8("label_23"));

    gridLayout43->addWidget(label_23, 0, 2, 1, 1);

    le10last = new QLineEdit(page_8);
    le10last->setObjectName(QString::fromUtf8("le10last"));
    le10last->setMaximumSize(QSize(150, 16777215));

    gridLayout43->addWidget(le10last, 0, 3, 1, 1);


    gridLayout41->addLayout(gridLayout43, 1, 0, 1, 1);

    gridLayout44 = new QGridLayout();
    gridLayout44->setObjectName(QString::fromUtf8("gridLayout44"));
    label_24 = new QLabel(page_8);
    label_24->setObjectName(QString::fromUtf8("label_24"));

    gridLayout44->addWidget(label_24, 0, 0, 1, 1);

    le10ref = new QLineEdit(page_8);
    le10ref->setObjectName(QString::fromUtf8("le10ref"));
    le10ref->setMaximumSize(QSize(150, 16777215));

    gridLayout44->addWidget(le10ref, 0, 1, 1, 1);

    label_25 = new QLabel(page_8);
    label_25->setObjectName(QString::fromUtf8("label_25"));

    gridLayout44->addWidget(label_25, 1, 0, 1, 1);

    le10subtract = new QLineEdit(page_8);
    le10subtract->setObjectName(QString::fromUtf8("le10subtract"));
    le10subtract->setMaximumSize(QSize(150, 16777215));

    gridLayout44->addWidget(le10subtract, 1, 1, 1, 1);


    gridLayout41->addLayout(gridLayout44, 2, 0, 1, 1);

    gridLayout45 = new QGridLayout();
    gridLayout45->setObjectName(QString::fromUtf8("gridLayout45"));
    label_26 = new QLabel(page_8);
    label_26->setObjectName(QString::fromUtf8("label_26"));

    gridLayout45->addWidget(label_26, 0, 0, 1, 1);

    sp10skip = new QSpinBox(page_8);
    sp10skip->setObjectName(QString::fromUtf8("sp10skip"));
    sp10skip->setMaximumSize(QSize(46, 16777215));
    sp10skip->setValue(0);

    gridLayout45->addWidget(sp10skip, 0, 1, 1, 1);

    label_27 = new QLabel(page_8);
    label_27->setObjectName(QString::fromUtf8("label_27"));

    gridLayout45->addWidget(label_27, 1, 0, 1, 1);

    sp10mols = new QSpinBox(page_8);
    sp10mols->setObjectName(QString::fromUtf8("sp10mols"));
    sp10mols->setMaximumSize(QSize(46, 16777215));
    sp10mols->setValue(1);

    gridLayout45->addWidget(sp10mols, 1, 1, 1, 1);

    label_28 = new QLabel(page_8);
    label_28->setObjectName(QString::fromUtf8("label_28"));

    gridLayout45->addWidget(label_28, 2, 0, 1, 1);

    sp10degrees = new QSpinBox(page_8);
    sp10degrees->setObjectName(QString::fromUtf8("sp10degrees"));
    sp10degrees->setMaximumSize(QSize(46, 16777215));
    sp10degrees->setValue(3);

    gridLayout45->addWidget(sp10degrees, 2, 1, 1, 1);


    gridLayout41->addLayout(gridLayout45, 3, 0, 1, 1);


    gridLayout40->addLayout(gridLayout41, 0, 0, 1, 1);

    spacerItem26 = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout40->addItem(spacerItem26, 1, 0, 1, 1);

    toolBox_8->addItem(page_8, QApplication::translate("CommandsClass", "g_energy options (1)", 0, QApplication::UnicodeUTF8));
    page_46 = new QWidget();
    page_46->setObjectName(QString::fromUtf8("page_46"));
    page_46->setGeometry(QRect(0, 0, 314, 324));
    gridLayout46 = new QGridLayout(page_46);
    gridLayout46->setObjectName(QString::fromUtf8("gridLayout46"));
    gridLayout47 = new QGridLayout();
    gridLayout47->setObjectName(QString::fromUtf8("gridLayout47"));
    gridLayout48 = new QGridLayout();
    gridLayout48->setObjectName(QString::fromUtf8("gridLayout48"));
    ch10autocorr = new QCheckBox(page_46);
    ch10autocorr->setObjectName(QString::fromUtf8("ch10autocorr"));
    ch10autocorr->setChecked(false);

    gridLayout48->addWidget(ch10autocorr, 0, 0, 1, 2);

    ch10inst = new QCheckBox(page_46);
    ch10inst->setObjectName(QString::fromUtf8("ch10inst"));
    ch10inst->setChecked(false);

    gridLayout48->addWidget(ch10inst, 1, 0, 1, 2);

    ch10eigen = new QCheckBox(page_46);
    ch10eigen->setObjectName(QString::fromUtf8("ch10eigen"));
    ch10eigen->setChecked(false);

    gridLayout48->addWidget(ch10eigen, 2, 0, 1, 2);

    ch10normal = new QCheckBox(page_46);
    ch10normal->setObjectName(QString::fromUtf8("ch10normal"));
    ch10normal->setChecked(true);

    gridLayout48->addWidget(ch10normal, 3, 0, 1, 2);

    label_10 = new QLabel(page_46);
    label_10->setObjectName(QString::fromUtf8("label_10"));

    gridLayout48->addWidget(label_10, 4, 0, 1, 1);

    sp10length = new QSpinBox(page_46);
    sp10length->setObjectName(QString::fromUtf8("sp10length"));
    sp10length->setMaximumSize(QSize(46, 16777215));
    sp10length->setMinimum(-1);
    sp10length->setValue(-1);

    gridLayout48->addWidget(sp10length, 4, 1, 1, 1);


    gridLayout47->addLayout(gridLayout48, 0, 0, 1, 1);

    gridLayout49 = new QGridLayout();
    gridLayout49->setObjectName(QString::fromUtf8("gridLayout49"));
    label_15 = new QLabel(page_46);
    label_15->setObjectName(QString::fromUtf8("label_15"));

    gridLayout49->addWidget(label_15, 0, 0, 1, 1);

    cb10order = new QComboBox(page_46);
    cb10order->setObjectName(QString::fromUtf8("cb10order"));

    gridLayout49->addWidget(cb10order, 0, 1, 1, 1);

    label_18 = new QLabel(page_46);
    label_18->setObjectName(QString::fromUtf8("label_18"));

    gridLayout49->addWidget(label_18, 1, 0, 1, 1);

    cb10fit = new QComboBox(page_46);
    cb10fit->setObjectName(QString::fromUtf8("cb10fit"));

    gridLayout49->addWidget(cb10fit, 1, 1, 1, 1);


    gridLayout47->addLayout(gridLayout49, 1, 0, 1, 1);

    gridLayout50 = new QGridLayout();
    gridLayout50->setObjectName(QString::fromUtf8("gridLayout50"));
    label_19 = new QLabel(page_46);
    label_19->setObjectName(QString::fromUtf8("label_19"));

    gridLayout50->addWidget(label_19, 0, 0, 1, 1);

    sp10skipn = new QSpinBox(page_46);
    sp10skipn->setObjectName(QString::fromUtf8("sp10skipn"));
    sp10skipn->setMaximumSize(QSize(46, 16777215));
    sp10skipn->setValue(0);

    gridLayout50->addWidget(sp10skipn, 0, 1, 1, 1);


    gridLayout47->addLayout(gridLayout50, 2, 0, 1, 1);

    gridLayout51 = new QGridLayout();
    gridLayout51->setObjectName(QString::fromUtf8("gridLayout51"));
    label_20 = new QLabel(page_46);
    label_20->setObjectName(QString::fromUtf8("label_20"));

    gridLayout51->addWidget(label_20, 0, 0, 1, 1);

    le10begin = new QLineEdit(page_46);
    le10begin->setObjectName(QString::fromUtf8("le10begin"));
    le10begin->setMaximumSize(QSize(50, 16777215));

    gridLayout51->addWidget(le10begin, 0, 2, 1, 1);

    label_21 = new QLabel(page_46);
    label_21->setObjectName(QString::fromUtf8("label_21"));

    gridLayout51->addWidget(label_21, 1, 0, 1, 1);

    le10end = new QLineEdit(page_46);
    le10end->setObjectName(QString::fromUtf8("le10end"));
    le10end->setMaximumSize(QSize(50, 16777215));

    gridLayout51->addWidget(le10end, 1, 2, 1, 1);

    spacerItem27 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout51->addItem(spacerItem27, 0, 1, 1, 1);


    gridLayout47->addLayout(gridLayout51, 3, 0, 1, 1);


    gridLayout46->addLayout(gridLayout47, 0, 0, 1, 1);

    toolBox_8->addItem(page_46, QApplication::translate("CommandsClass", "g_energy options (2)", 0, QApplication::UnicodeUTF8));

    gridLayout38->addWidget(toolBox_8, 0, 0, 1, 1);

    stackwMain->addWidget(stack_g_energy);
    stack_g_traj = new QWidget();
    stack_g_traj->setObjectName(QString::fromUtf8("stack_g_traj"));
    gridLayout52 = new QGridLayout(stack_g_traj);
    gridLayout52->setObjectName(QString::fromUtf8("gridLayout52"));
    toolBox_9 = new QToolBox(stack_g_traj);
    toolBox_9->setObjectName(QString::fromUtf8("toolBox_9"));
    toolBox_9->setFrameShape(QFrame::StyledPanel);
    page_9 = new QWidget();
    page_9->setObjectName(QString::fromUtf8("page_9"));
    page_9->setGeometry(QRect(0, 0, 130, 374));
    gridLayout53 = new QGridLayout(page_9);
    gridLayout53->setObjectName(QString::fromUtf8("gridLayout53"));
    textLabel2_34 = new QLabel(page_9);
    textLabel2_34->setObjectName(QString::fromUtf8("textLabel2_34"));
    textLabel2_34->setMaximumSize(QSize(16777215, 21));
    textLabel2_34->setFont(font3);
    textLabel2_34->setWordWrap(false);

    gridLayout53->addWidget(textLabel2_34, 0, 0, 1, 1);

    cb11input = new QComboBox(page_9);
    cb11input->setObjectName(QString::fromUtf8("cb11input"));
    cb11input->setMaximumSize(QSize(16777215, 21));

    gridLayout53->addWidget(cb11input, 0, 1, 1, 1);

    textLabel2_121 = new QLabel(page_9);
    textLabel2_121->setObjectName(QString::fromUtf8("textLabel2_121"));
    textLabel2_121->setMaximumSize(QSize(16777215, 21));
    textLabel2_121->setFont(font3);
    textLabel2_121->setWordWrap(false);

    gridLayout53->addWidget(textLabel2_121, 1, 0, 1, 1);

    cb11_s = new QComboBox(page_9);
    cb11_s->setObjectName(QString::fromUtf8("cb11_s"));
    cb11_s->setMaximumSize(QSize(16777215, 21));

    gridLayout53->addWidget(cb11_s, 1, 1, 1, 1);

    textLabel2_122 = new QLabel(page_9);
    textLabel2_122->setObjectName(QString::fromUtf8("textLabel2_122"));
    textLabel2_122->setMaximumSize(QSize(16777215, 21));
    textLabel2_122->setWordWrap(false);

    gridLayout53->addWidget(textLabel2_122, 2, 0, 1, 1);

    cb11_n = new QComboBox(page_9);
    cb11_n->setObjectName(QString::fromUtf8("cb11_n"));
    cb11_n->setMaximumSize(QSize(16777215, 21));

    gridLayout53->addWidget(cb11_n, 2, 1, 1, 1);

    textLabel2_120 = new QLabel(page_9);
    textLabel2_120->setObjectName(QString::fromUtf8("textLabel2_120"));
    textLabel2_120->setMaximumSize(QSize(16777215, 21));
    textLabel2_120->setWordWrap(false);

    gridLayout53->addWidget(textLabel2_120, 3, 0, 1, 1);

    le11_ox = new QLineEdit(page_9);
    le11_ox->setObjectName(QString::fromUtf8("le11_ox"));
    le11_ox->setMaximumSize(QSize(16777215, 21));

    gridLayout53->addWidget(le11_ox, 3, 1, 1, 1);

    textLabel2_2_33 = new QLabel(page_9);
    textLabel2_2_33->setObjectName(QString::fromUtf8("textLabel2_2_33"));
    textLabel2_2_33->setMaximumSize(QSize(16777215, 21));
    textLabel2_2_33->setWordWrap(false);

    gridLayout53->addWidget(textLabel2_2_33, 4, 0, 1, 1);

    le11_ov = new QLineEdit(page_9);
    le11_ov->setObjectName(QString::fromUtf8("le11_ov"));
    le11_ov->setMaximumSize(QSize(16777215, 21));

    gridLayout53->addWidget(le11_ov, 4, 1, 1, 1);

    textLabel1_15 = new QLabel(page_9);
    textLabel1_15->setObjectName(QString::fromUtf8("textLabel1_15"));
    textLabel1_15->setMaximumSize(QSize(16777215, 21));
    textLabel1_15->setWordWrap(false);

    gridLayout53->addWidget(textLabel1_15, 5, 0, 1, 1);

    le11_of = new QLineEdit(page_9);
    le11_of->setObjectName(QString::fromUtf8("le11_of"));
    le11_of->setMaximumSize(QSize(16777215, 21));

    gridLayout53->addWidget(le11_of, 5, 1, 1, 1);

    textLabel1_33 = new QLabel(page_9);
    textLabel1_33->setObjectName(QString::fromUtf8("textLabel1_33"));
    textLabel1_33->setMaximumSize(QSize(16777215, 21));
    textLabel1_33->setWordWrap(false);

    gridLayout53->addWidget(textLabel1_33, 6, 0, 1, 1);

    le11_ob = new QLineEdit(page_9);
    le11_ob->setObjectName(QString::fromUtf8("le11_ob"));
    le11_ob->setMaximumSize(QSize(16777215, 21));

    gridLayout53->addWidget(le11_ob, 6, 1, 1, 1);

    textLabel2_33 = new QLabel(page_9);
    textLabel2_33->setObjectName(QString::fromUtf8("textLabel2_33"));
    textLabel2_33->setMaximumSize(QSize(16777215, 21));
    textLabel2_33->setWordWrap(false);

    gridLayout53->addWidget(textLabel2_33, 7, 0, 1, 1);

    le11_ot = new QLineEdit(page_9);
    le11_ot->setObjectName(QString::fromUtf8("le11_ot"));
    le11_ot->setMaximumSize(QSize(16777215, 21));

    gridLayout53->addWidget(le11_ot, 7, 1, 1, 1);

    textLabel2_2_14 = new QLabel(page_9);
    textLabel2_2_14->setObjectName(QString::fromUtf8("textLabel2_2_14"));
    textLabel2_2_14->setMaximumSize(QSize(16777215, 21));
    textLabel2_2_14->setWordWrap(false);

    gridLayout53->addWidget(textLabel2_2_14, 8, 0, 1, 1);

    le11_ekt = new QLineEdit(page_9);
    le11_ekt->setObjectName(QString::fromUtf8("le11_ekt"));
    le11_ekt->setMaximumSize(QSize(16777215, 21));

    gridLayout53->addWidget(le11_ekt, 8, 1, 1, 1);

    textLabel1_13 = new QLabel(page_9);
    textLabel1_13->setObjectName(QString::fromUtf8("textLabel1_13"));
    textLabel1_13->setMaximumSize(QSize(16777215, 21));
    textLabel1_13->setWordWrap(false);

    gridLayout53->addWidget(textLabel1_13, 9, 0, 1, 1);

    le11_ekr = new QLineEdit(page_9);
    le11_ekr->setObjectName(QString::fromUtf8("le11_ekr"));
    le11_ekr->setMaximumSize(QSize(16777215, 21));

    gridLayout53->addWidget(le11_ekr, 9, 1, 1, 1);

    textLabel2_32 = new QLabel(page_9);
    textLabel2_32->setObjectName(QString::fromUtf8("textLabel2_32"));
    textLabel2_32->setMaximumSize(QSize(16777215, 21));
    textLabel2_32->setWordWrap(false);

    gridLayout53->addWidget(textLabel2_32, 10, 0, 1, 1);

    le11_cv = new QLineEdit(page_9);
    le11_cv->setObjectName(QString::fromUtf8("le11_cv"));
    le11_cv->setMaximumSize(QSize(16777215, 21));

    gridLayout53->addWidget(le11_cv, 10, 1, 1, 1);

    textLabel2_123 = new QLabel(page_9);
    textLabel2_123->setObjectName(QString::fromUtf8("textLabel2_123"));
    textLabel2_123->setMaximumSize(QSize(16777215, 21));
    textLabel2_123->setWordWrap(false);

    gridLayout53->addWidget(textLabel2_123, 11, 0, 1, 1);

    le11_cf = new QLineEdit(page_9);
    le11_cf->setObjectName(QString::fromUtf8("le11_cf"));
    le11_cf->setMaximumSize(QSize(16777215, 21));

    gridLayout53->addWidget(le11_cf, 11, 1, 1, 1);

    spacerItem28 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout53->addItem(spacerItem28, 12, 1, 1, 1);

    toolBox_9->addItem(page_9, QApplication::translate("CommandsClass", "g_traj files", 0, QApplication::UnicodeUTF8));
    page_10 = new QWidget();
    page_10->setObjectName(QString::fromUtf8("page_10"));
    page_10->setGeometry(QRect(0, 0, 327, 366));
    gridLayout54 = new QGridLayout(page_10);
    gridLayout54->setObjectName(QString::fromUtf8("gridLayout54"));
    gridLayout55 = new QGridLayout();
    gridLayout55->setObjectName(QString::fromUtf8("gridLayout55"));
    ch11plot = new QCheckBox(page_10);
    ch11plot->setObjectName(QString::fromUtf8("ch11plot"));
    ch11plot->setChecked(false);

    gridLayout55->addWidget(ch11plot, 0, 0, 1, 3);

    ch11index = new QCheckBox(page_10);
    ch11index->setObjectName(QString::fromUtf8("ch11index"));

    gridLayout55->addWidget(ch11index, 1, 0, 1, 3);

    ch11remove = new QCheckBox(page_10);
    ch11remove->setObjectName(QString::fromUtf8("ch11remove"));
    ch11remove->setChecked(false);

    gridLayout55->addWidget(ch11remove, 2, 0, 1, 3);

    label_55 = new QLabel(page_10);
    label_55->setObjectName(QString::fromUtf8("label_55"));

    gridLayout55->addWidget(label_55, 3, 0, 1, 1);

    ch11x = new QCheckBox(page_10);
    ch11x->setObjectName(QString::fromUtf8("ch11x"));
    ch11x->setChecked(true);

    gridLayout55->addWidget(ch11x, 4, 0, 1, 1);

    ch11y = new QCheckBox(page_10);
    ch11y->setObjectName(QString::fromUtf8("ch11y"));
    ch11y->setChecked(true);

    gridLayout55->addWidget(ch11y, 4, 1, 1, 1);

    ch11z = new QCheckBox(page_10);
    ch11z->setObjectName(QString::fromUtf8("ch11z"));
    ch11z->setChecked(true);

    gridLayout55->addWidget(ch11z, 4, 2, 1, 1);

    ch11vector = new QCheckBox(page_10);
    ch11vector->setObjectName(QString::fromUtf8("ch11vector"));
    ch11vector->setChecked(false);

    gridLayout55->addWidget(ch11vector, 5, 0, 1, 2);


    gridLayout54->addLayout(gridLayout55, 0, 0, 1, 2);

    label_56 = new QLabel(page_10);
    label_56->setObjectName(QString::fromUtf8("label_56"));

    gridLayout54->addWidget(label_56, 1, 0, 1, 1);

    sp11groups = new QSpinBox(page_10);
    sp11groups->setObjectName(QString::fromUtf8("sp11groups"));
    sp11groups->setMaximumSize(QSize(46, 16777215));
    sp11groups->setValue(1);

    gridLayout54->addWidget(sp11groups, 1, 1, 1, 1);

    splitter_3 = new QSplitter(page_10);
    splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
    splitter_3->setOrientation(Qt::Horizontal);
    label_57 = new QLabel(splitter_3);
    label_57->setObjectName(QString::fromUtf8("label_57"));
    splitter_3->addWidget(label_57);
    le11first = new QLineEdit(splitter_3);
    le11first->setObjectName(QString::fromUtf8("le11first"));
    le11first->setMaximumSize(QSize(72, 16777215));
    splitter_3->addWidget(le11first);
    label_58 = new QLabel(splitter_3);
    label_58->setObjectName(QString::fromUtf8("label_58"));
    splitter_3->addWidget(label_58);
    le11last = new QLineEdit(splitter_3);
    le11last->setObjectName(QString::fromUtf8("le11last"));
    le11last->setMaximumSize(QSize(72, 16777215));
    splitter_3->addWidget(le11last);

    gridLayout54->addWidget(splitter_3, 2, 0, 1, 2);

    textLabel2_150 = new QLabel(page_10);
    textLabel2_150->setObjectName(QString::fromUtf8("textLabel2_150"));
    textLabel2_150->setMaximumSize(QSize(16777215, 31));
    textLabel2_150->setWordWrap(false);

    gridLayout54->addWidget(textLabel2_150, 3, 0, 1, 1);

    le11only = new QLineEdit(page_10);
    le11only->setObjectName(QString::fromUtf8("le11only"));
    le11only->setMaximumSize(QSize(61, 16777215));

    gridLayout54->addWidget(le11only, 3, 1, 1, 1);

    label_59 = new QLabel(page_10);
    label_59->setObjectName(QString::fromUtf8("label_59"));

    gridLayout54->addWidget(label_59, 4, 0, 1, 1);

    le11binwidth = new QLineEdit(page_10);
    le11binwidth->setObjectName(QString::fromUtf8("le11binwidth"));

    gridLayout54->addWidget(le11binwidth, 4, 1, 1, 1);

    label_60 = new QLabel(page_10);
    label_60->setObjectName(QString::fromUtf8("label_60"));

    gridLayout54->addWidget(label_60, 5, 0, 1, 1);

    le11scale = new QLineEdit(page_10);
    le11scale->setObjectName(QString::fromUtf8("le11scale"));

    gridLayout54->addWidget(le11scale, 5, 1, 1, 1);

    spacerItem29 = new QSpacerItem(241, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout54->addItem(spacerItem29, 6, 0, 1, 1);

    toolBox_9->addItem(page_10, QApplication::translate("CommandsClass", "g_traj options", 0, QApplication::UnicodeUTF8));

    gridLayout52->addWidget(toolBox_9, 0, 0, 1, 1);

    stackwMain->addWidget(stack_g_traj);
    stack_g_analyze = new QWidget();
    stack_g_analyze->setObjectName(QString::fromUtf8("stack_g_analyze"));
    gridLayout56 = new QGridLayout(stack_g_analyze);
    gridLayout56->setObjectName(QString::fromUtf8("gridLayout56"));
    toolBox_10 = new QToolBox(stack_g_analyze);
    toolBox_10->setObjectName(QString::fromUtf8("toolBox_10"));
    toolBox_10->setFrameShape(QFrame::StyledPanel);
    page_11 = new QWidget();
    page_11->setObjectName(QString::fromUtf8("page_11"));
    page_11->setGeometry(QRect(0, 0, 134, 277));
    gridLayout57 = new QGridLayout(page_11);
    gridLayout57->setObjectName(QString::fromUtf8("gridLayout57"));
    textLabel2_36 = new QLabel(page_11);
    textLabel2_36->setObjectName(QString::fromUtf8("textLabel2_36"));
    textLabel2_36->setFont(font3);
    textLabel2_36->setWordWrap(false);

    gridLayout57->addWidget(textLabel2_36, 0, 0, 1, 1);

    cb12input = new QComboBox(page_11);
    cb12input->setObjectName(QString::fromUtf8("cb12input"));

    gridLayout57->addWidget(cb12input, 0, 1, 1, 1);

    textLabel2_37 = new QLabel(page_11);
    textLabel2_37->setObjectName(QString::fromUtf8("textLabel2_37"));
    textLabel2_37->setWordWrap(false);

    gridLayout57->addWidget(textLabel2_37, 1, 0, 1, 1);

    le12_ac = new QLineEdit(page_11);
    le12_ac->setObjectName(QString::fromUtf8("le12_ac"));

    gridLayout57->addWidget(le12_ac, 1, 1, 1, 1);

    textLabel2_2_15 = new QLabel(page_11);
    textLabel2_2_15->setObjectName(QString::fromUtf8("textLabel2_2_15"));
    textLabel2_2_15->setWordWrap(false);

    gridLayout57->addWidget(textLabel2_2_15, 2, 0, 1, 1);

    le12_msd = new QLineEdit(page_11);
    le12_msd->setObjectName(QString::fromUtf8("le12_msd"));

    gridLayout57->addWidget(le12_msd, 2, 1, 1, 1);

    textLabel1_14 = new QLabel(page_11);
    textLabel1_14->setObjectName(QString::fromUtf8("textLabel1_14"));
    textLabel1_14->setWordWrap(false);

    gridLayout57->addWidget(textLabel1_14, 3, 0, 1, 1);

    le12_cc = new QLineEdit(page_11);
    le12_cc->setObjectName(QString::fromUtf8("le12_cc"));

    gridLayout57->addWidget(le12_cc, 3, 1, 1, 1);

    textLabel2_35 = new QLabel(page_11);
    textLabel2_35->setObjectName(QString::fromUtf8("textLabel2_35"));
    textLabel2_35->setWordWrap(false);

    gridLayout57->addWidget(textLabel2_35, 4, 0, 1, 1);

    le12_dist = new QLineEdit(page_11);
    le12_dist->setObjectName(QString::fromUtf8("le12_dist"));

    gridLayout57->addWidget(le12_dist, 4, 1, 1, 1);

    textLabel2_105 = new QLabel(page_11);
    textLabel2_105->setObjectName(QString::fromUtf8("textLabel2_105"));
    textLabel2_105->setWordWrap(false);

    gridLayout57->addWidget(textLabel2_105, 5, 0, 1, 1);

    le12_av = new QLineEdit(page_11);
    le12_av->setObjectName(QString::fromUtf8("le12_av"));

    gridLayout57->addWidget(le12_av, 5, 1, 1, 1);

    textLabel2_106 = new QLabel(page_11);
    textLabel2_106->setObjectName(QString::fromUtf8("textLabel2_106"));
    textLabel2_106->setWordWrap(false);

    gridLayout57->addWidget(textLabel2_106, 6, 0, 1, 1);

    le12_ee = new QLineEdit(page_11);
    le12_ee->setObjectName(QString::fromUtf8("le12_ee"));

    gridLayout57->addWidget(le12_ee, 6, 1, 1, 1);

    textLabel1_31 = new QLabel(page_11);
    textLabel1_31->setObjectName(QString::fromUtf8("textLabel1_31"));
    textLabel1_31->setWordWrap(false);

    gridLayout57->addWidget(textLabel1_31, 7, 0, 1, 1);

    le12log = new QLineEdit(page_11);
    le12log->setObjectName(QString::fromUtf8("le12log"));

    gridLayout57->addWidget(le12log, 7, 1, 1, 1);

    spacerItem30 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout57->addItem(spacerItem30, 8, 1, 1, 1);

    toolBox_10->addItem(page_11, QApplication::translate("CommandsClass", "g_analyze files", 0, QApplication::UnicodeUTF8));
    page_12 = new QWidget();
    page_12->setObjectName(QString::fromUtf8("page_12"));
    page_12->setGeometry(QRect(0, 0, 303, 326));
    gridLayout58 = new QGridLayout(page_12);
    gridLayout58->setObjectName(QString::fromUtf8("gridLayout58"));
    ch12_expect = new QCheckBox(page_12);
    ch12_expect->setObjectName(QString::fromUtf8("ch12_expect"));
    ch12_expect->setChecked(true);

    gridLayout58->addWidget(ch12_expect, 0, 0, 1, 1);

    ch12derive = new QCheckBox(page_12);
    ch12derive->setObjectName(QString::fromUtf8("ch12derive"));

    gridLayout58->addWidget(ch12derive, 1, 0, 1, 1);

    ch12integrate = new QCheckBox(page_12);
    ch12integrate->setObjectName(QString::fromUtf8("ch12integrate"));
    ch12integrate->setChecked(false);

    gridLayout58->addWidget(ch12integrate, 2, 0, 1, 1);

    ch12interpret = new QCheckBox(page_12);
    ch12interpret->setObjectName(QString::fromUtf8("ch12interpret"));
    ch12interpret->setChecked(false);

    gridLayout58->addWidget(ch12interpret, 3, 0, 1, 1);

    gridLayout59 = new QGridLayout();
    gridLayout59->setObjectName(QString::fromUtf8("gridLayout59"));
    hboxLayout = new QHBoxLayout();
    hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
    label_29 = new QLabel(page_12);
    label_29->setObjectName(QString::fromUtf8("label_29"));

    hboxLayout->addWidget(label_29);

    le12first = new QLineEdit(page_12);
    le12first->setObjectName(QString::fromUtf8("le12first"));

    hboxLayout->addWidget(le12first);

    label_30 = new QLabel(page_12);
    label_30->setObjectName(QString::fromUtf8("label_30"));

    hboxLayout->addWidget(label_30);


    gridLayout59->addLayout(hboxLayout, 0, 0, 1, 1);

    vboxLayout1 = new QVBoxLayout();
    vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
    le12last = new QLineEdit(page_12);
    le12last->setObjectName(QString::fromUtf8("le12last"));

    vboxLayout1->addWidget(le12last);

    le12binwidth = new QLineEdit(page_12);
    le12binwidth->setObjectName(QString::fromUtf8("le12binwidth"));

    vboxLayout1->addWidget(le12binwidth);

    cb12error = new QComboBox(page_12);
    cb12error->setObjectName(QString::fromUtf8("cb12error"));

    vboxLayout1->addWidget(cb12error);

    le12average = new QLineEdit(page_12);
    le12average->setObjectName(QString::fromUtf8("le12average"));

    vboxLayout1->addWidget(le12average);

    le12print = new QLineEdit(page_12);
    le12print->setObjectName(QString::fromUtf8("le12print"));

    vboxLayout1->addWidget(le12print);

    sp12read = new QSpinBox(page_12);
    sp12read->setObjectName(QString::fromUtf8("sp12read"));
    sp12read->setMaximumSize(QSize(46, 16777215));
    sp12read->setValue(1);

    vboxLayout1->addWidget(sp12read);


    gridLayout59->addLayout(vboxLayout1, 0, 1, 6, 1);

    label_32 = new QLabel(page_12);
    label_32->setObjectName(QString::fromUtf8("label_32"));

    gridLayout59->addWidget(label_32, 1, 0, 1, 1);

    label_35 = new QLabel(page_12);
    label_35->setObjectName(QString::fromUtf8("label_35"));

    gridLayout59->addWidget(label_35, 2, 0, 1, 1);

    label_33 = new QLabel(page_12);
    label_33->setObjectName(QString::fromUtf8("label_33"));

    gridLayout59->addWidget(label_33, 3, 0, 1, 1);

    label_31 = new QLabel(page_12);
    label_31->setObjectName(QString::fromUtf8("label_31"));

    gridLayout59->addWidget(label_31, 4, 0, 1, 1);

    label_34 = new QLabel(page_12);
    label_34->setObjectName(QString::fromUtf8("label_34"));

    gridLayout59->addWidget(label_34, 5, 0, 1, 1);


    gridLayout58->addLayout(gridLayout59, 4, 0, 1, 1);

    toolBox_10->addItem(page_12, QApplication::translate("CommandsClass", "g_analyze options (1)", 0, QApplication::UnicodeUTF8));
    page_47 = new QWidget();
    page_47->setObjectName(QString::fromUtf8("page_47"));
    page_47->setGeometry(QRect(0, 0, 310, 323));
    gridLayout60 = new QGridLayout(page_47);
    gridLayout60->setObjectName(QString::fromUtf8("gridLayout60"));
    ch12fit = new QCheckBox(page_47);
    ch12fit->setObjectName(QString::fromUtf8("ch12fit"));

    gridLayout60->addWidget(ch12fit, 0, 0, 1, 2);

    ch12subtract = new QCheckBox(page_47);
    ch12subtract->setObjectName(QString::fromUtf8("ch12subtract"));
    ch12subtract->setChecked(true);

    gridLayout60->addWidget(ch12subtract, 1, 0, 1, 2);

    ch12acf_calc = new QCheckBox(page_47);
    ch12acf_calc->setObjectName(QString::fromUtf8("ch12acf_calc"));

    gridLayout60->addWidget(ch12acf_calc, 2, 0, 1, 2);

    ch12acf_norml = new QCheckBox(page_47);
    ch12acf_norml->setObjectName(QString::fromUtf8("ch12acf_norml"));
    ch12acf_norml->setChecked(true);

    gridLayout60->addWidget(ch12acf_norml, 3, 0, 1, 1);

    gridLayout61 = new QGridLayout();
    gridLayout61->setObjectName(QString::fromUtf8("gridLayout61"));
    label_37 = new QLabel(page_47);
    label_37->setObjectName(QString::fromUtf8("label_37"));

    gridLayout61->addWidget(label_37, 0, 0, 1, 1);

    vboxLayout2 = new QVBoxLayout();
    vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
    cb12order = new QComboBox(page_47);
    cb12order->setObjectName(QString::fromUtf8("cb12order"));

    vboxLayout2->addWidget(cb12order);

    sp12length = new QSpinBox(page_47);
    sp12length->setObjectName(QString::fromUtf8("sp12length"));
    sp12length->setMaximumSize(QSize(46, 16777215));
    sp12length->setMinimum(-1);
    sp12length->setValue(-1);

    vboxLayout2->addWidget(sp12length);

    cb12fitfunc = new QComboBox(page_47);
    cb12fitfunc->setObjectName(QString::fromUtf8("cb12fitfunc"));

    vboxLayout2->addWidget(cb12fitfunc);

    sp12skipcorr = new QSpinBox(page_47);
    sp12skipcorr->setObjectName(QString::fromUtf8("sp12skipcorr"));
    sp12skipcorr->setMaximumSize(QSize(46, 16777215));
    sp12skipcorr->setValue(0);

    vboxLayout2->addWidget(sp12skipcorr);

    le12begin = new QLineEdit(page_47);
    le12begin->setObjectName(QString::fromUtf8("le12begin"));

    vboxLayout2->addWidget(le12begin);

    le12end = new QLineEdit(page_47);
    le12end->setObjectName(QString::fromUtf8("le12end"));

    vboxLayout2->addWidget(le12end);


    gridLayout61->addLayout(vboxLayout2, 0, 1, 6, 1);

    label_38 = new QLabel(page_47);
    label_38->setObjectName(QString::fromUtf8("label_38"));

    gridLayout61->addWidget(label_38, 1, 0, 1, 1);

    label_39 = new QLabel(page_47);
    label_39->setObjectName(QString::fromUtf8("label_39"));

    gridLayout61->addWidget(label_39, 2, 0, 1, 1);

    label_40 = new QLabel(page_47);
    label_40->setObjectName(QString::fromUtf8("label_40"));

    gridLayout61->addWidget(label_40, 3, 0, 1, 1);

    label_41 = new QLabel(page_47);
    label_41->setObjectName(QString::fromUtf8("label_41"));

    gridLayout61->addWidget(label_41, 4, 0, 1, 1);

    label_36 = new QLabel(page_47);
    label_36->setObjectName(QString::fromUtf8("label_36"));

    gridLayout61->addWidget(label_36, 5, 0, 1, 1);


    gridLayout60->addLayout(gridLayout61, 4, 0, 1, 2);

    spacerItem31 = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout60->addItem(spacerItem31, 5, 1, 1, 1);

    toolBox_10->addItem(page_47, QApplication::translate("CommandsClass", "g_analyze options (2)", 0, QApplication::UnicodeUTF8));

    gridLayout56->addWidget(toolBox_10, 0, 0, 1, 1);

    stackwMain->addWidget(stack_g_analyze);
    stack_g_rms = new QWidget();
    stack_g_rms->setObjectName(QString::fromUtf8("stack_g_rms"));
    gridLayout62 = new QGridLayout(stack_g_rms);
    gridLayout62->setObjectName(QString::fromUtf8("gridLayout62"));
    toolBox_11 = new QToolBox(stack_g_rms);
    toolBox_11->setObjectName(QString::fromUtf8("toolBox_11"));
    toolBox_11->setFrameShape(QFrame::StyledPanel);
    page_13 = new QWidget();
    page_13->setObjectName(QString::fromUtf8("page_13"));
    page_13->setGeometry(QRect(0, 0, 131, 364));
    gridLayout63 = new QGridLayout(page_13);
    gridLayout63->setObjectName(QString::fromUtf8("gridLayout63"));
    textLabel2_39 = new QLabel(page_13);
    textLabel2_39->setObjectName(QString::fromUtf8("textLabel2_39"));
    textLabel2_39->setFont(font3);
    textLabel2_39->setWordWrap(false);

    gridLayout63->addWidget(textLabel2_39, 0, 0, 1, 1);

    cb13input = new QComboBox(page_13);
    cb13input->setObjectName(QString::fromUtf8("cb13input"));

    gridLayout63->addWidget(cb13input, 0, 1, 1, 1);

    textLabel2_109 = new QLabel(page_13);
    textLabel2_109->setObjectName(QString::fromUtf8("textLabel2_109"));
    textLabel2_109->setFont(font3);
    textLabel2_109->setWordWrap(false);

    gridLayout63->addWidget(textLabel2_109, 1, 0, 1, 1);

    cb13_f = new QComboBox(page_13);
    cb13_f->setObjectName(QString::fromUtf8("cb13_f"));

    gridLayout63->addWidget(cb13_f, 1, 1, 1, 1);

    textLabel2_110 = new QLabel(page_13);
    textLabel2_110->setObjectName(QString::fromUtf8("textLabel2_110"));
    textLabel2_110->setWordWrap(false);

    gridLayout63->addWidget(textLabel2_110, 2, 0, 1, 1);

    cb13_f2 = new QComboBox(page_13);
    cb13_f2->setObjectName(QString::fromUtf8("cb13_f2"));

    gridLayout63->addWidget(cb13_f2, 2, 1, 1, 1);

    textLabel2_111 = new QLabel(page_13);
    textLabel2_111->setObjectName(QString::fromUtf8("textLabel2_111"));
    textLabel2_111->setWordWrap(false);

    gridLayout63->addWidget(textLabel2_111, 3, 0, 1, 1);

    cb13index = new QComboBox(page_13);
    cb13index->setObjectName(QString::fromUtf8("cb13index"));

    gridLayout63->addWidget(cb13index, 3, 1, 1, 1);

    textLabel2_2_16 = new QLabel(page_13);
    textLabel2_2_16->setObjectName(QString::fromUtf8("textLabel2_2_16"));
    textLabel2_2_16->setFont(font3);
    textLabel2_2_16->setWordWrap(false);

    gridLayout63->addWidget(textLabel2_2_16, 4, 0, 1, 1);

    le13_o = new QLineEdit(page_13);
    le13_o->setObjectName(QString::fromUtf8("le13_o"));

    gridLayout63->addWidget(le13_o, 4, 1, 1, 1);

    textLabel2_40 = new QLabel(page_13);
    textLabel2_40->setObjectName(QString::fromUtf8("textLabel2_40"));
    textLabel2_40->setWordWrap(false);

    gridLayout63->addWidget(textLabel2_40, 5, 0, 1, 1);

    le13_mir = new QLineEdit(page_13);
    le13_mir->setObjectName(QString::fromUtf8("le13_mir"));

    gridLayout63->addWidget(le13_mir, 5, 1, 1, 1);

    textLabel2_2_32 = new QLabel(page_13);
    textLabel2_2_32->setObjectName(QString::fromUtf8("textLabel2_2_32"));
    textLabel2_2_32->setWordWrap(false);

    gridLayout63->addWidget(textLabel2_2_32, 6, 0, 1, 1);

    le13_a = new QLineEdit(page_13);
    le13_a->setObjectName(QString::fromUtf8("le13_a"));

    gridLayout63->addWidget(le13_a, 6, 1, 1, 1);

    textLabel2_108 = new QLabel(page_13);
    textLabel2_108->setObjectName(QString::fromUtf8("textLabel2_108"));
    textLabel2_108->setWordWrap(false);

    gridLayout63->addWidget(textLabel2_108, 7, 0, 1, 1);

    le13_dist = new QLineEdit(page_13);
    le13_dist->setObjectName(QString::fromUtf8("le13_dist"));

    gridLayout63->addWidget(le13_dist, 7, 1, 1, 1);

    textLabel2_38 = new QLabel(page_13);
    textLabel2_38->setObjectName(QString::fromUtf8("textLabel2_38"));
    textLabel2_38->setWordWrap(false);

    gridLayout63->addWidget(textLabel2_38, 8, 0, 1, 1);

    le13_m = new QLineEdit(page_13);
    le13_m->setObjectName(QString::fromUtf8("le13_m"));

    gridLayout63->addWidget(le13_m, 8, 1, 1, 1);

    textLabel1_32 = new QLabel(page_13);
    textLabel1_32->setObjectName(QString::fromUtf8("textLabel1_32"));
    textLabel1_32->setWordWrap(false);

    gridLayout63->addWidget(textLabel1_32, 9, 0, 1, 1);

    le13_bin = new QLineEdit(page_13);
    le13_bin->setObjectName(QString::fromUtf8("le13_bin"));

    gridLayout63->addWidget(le13_bin, 9, 1, 1, 1);

    textLabel2_107 = new QLabel(page_13);
    textLabel2_107->setObjectName(QString::fromUtf8("textLabel2_107"));
    textLabel2_107->setWordWrap(false);

    gridLayout63->addWidget(textLabel2_107, 10, 0, 1, 1);

    le13_bm = new QLineEdit(page_13);
    le13_bm->setObjectName(QString::fromUtf8("le13_bm"));

    gridLayout63->addWidget(le13_bm, 10, 1, 1, 1);

    spacerItem32 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout63->addItem(spacerItem32, 11, 1, 1, 1);

    toolBox_11->addItem(page_13, QApplication::translate("CommandsClass", "g_rms files", 0, QApplication::UnicodeUTF8));
    page_14 = new QWidget();
    page_14->setObjectName(QString::fromUtf8("page_14"));
    page_14->setGeometry(QRect(0, 0, 96, 26));
    ch13pbc = new QCheckBox(page_14);
    ch13pbc->setObjectName(QString::fromUtf8("ch13pbc"));
    ch13pbc->setGeometry(QRect(9, 9, 320, 22));
    ch13pbc->setChecked(true);
    ch13graph = new QCheckBox(page_14);
    ch13graph->setObjectName(QString::fromUtf8("ch13graph"));
    ch13graph->setGeometry(QRect(9, 33, 320, 22));
    label_54 = new QLabel(page_14);
    label_54->setObjectName(QString::fromUtf8("label_54"));
    label_54->setGeometry(QRect(9, 284, 320, 20));
    splitter_2 = new QSplitter(page_14);
    splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
    splitter_2->setGeometry(QRect(9, 61, 320, 23));
    splitter_2->setOrientation(Qt::Horizontal);
    label_48 = new QLabel(splitter_2);
    label_48->setObjectName(QString::fromUtf8("label_48"));
    splitter_2->addWidget(label_48);
    le13first = new QLineEdit(splitter_2);
    le13first->setObjectName(QString::fromUtf8("le13first"));
    le13first->setMaximumSize(QSize(16777215, 23));
    splitter_2->addWidget(le13first);
    label_49 = new QLabel(splitter_2);
    label_49->setObjectName(QString::fromUtf8("label_49"));
    splitter_2->addWidget(label_49);
    le13last = new QLineEdit(splitter_2);
    le13last->setObjectName(QString::fromUtf8("le13last"));
    le13last->setMaximumSize(QSize(16777215, 23));
    splitter_2->addWidget(le13last);
    layoutWidget = new QWidget(page_14);
    layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
    layoutWidget->setGeometry(QRect(9, 90, 320, 85));
    gridLayout64 = new QGridLayout(layoutWidget);
    gridLayout64->setObjectName(QString::fromUtf8("gridLayout64"));
    gridLayout64->setContentsMargins(0, 0, 0, 0);
    label_50 = new QLabel(layoutWidget);
    label_50->setObjectName(QString::fromUtf8("label_50"));

    gridLayout64->addWidget(label_50, 0, 0, 1, 1);

    cb13time = new QComboBox(layoutWidget);
    cb13time->setObjectName(QString::fromUtf8("cb13time"));

    gridLayout64->addWidget(cb13time, 0, 1, 1, 1);

    label_51 = new QLabel(layoutWidget);
    label_51->setObjectName(QString::fromUtf8("label_51"));

    gridLayout64->addWidget(label_51, 1, 0, 1, 1);

    cb13measure = new QComboBox(layoutWidget);
    cb13measure->setObjectName(QString::fromUtf8("cb13measure"));

    gridLayout64->addWidget(cb13measure, 1, 1, 1, 1);

    label_52 = new QLabel(layoutWidget);
    label_52->setObjectName(QString::fromUtf8("label_52"));

    gridLayout64->addWidget(label_52, 2, 0, 1, 1);

    cb13fit = new QComboBox(layoutWidget);
    cb13fit->setObjectName(QString::fromUtf8("cb13fit"));

    gridLayout64->addWidget(cb13fit, 2, 1, 1, 1);

    splitter = new QSplitter(page_14);
    splitter->setObjectName(QString::fromUtf8("splitter"));
    splitter->setGeometry(QRect(9, 309, 320, 44));
    splitter->setMaximumSize(QSize(16777215, 16777215));
    splitter->setOrientation(Qt::Horizontal);
    layoutWidget1 = new QWidget(splitter);
    layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
    vboxLayout3 = new QVBoxLayout(layoutWidget1);
    vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
    vboxLayout3->setContentsMargins(0, 0, 0, 0);
    label_42 = new QLabel(layoutWidget1);
    label_42->setObjectName(QString::fromUtf8("label_42"));

    vboxLayout3->addWidget(label_42);

    le13_max = new QLineEdit(layoutWidget1);
    le13_max->setObjectName(QString::fromUtf8("le13_max"));

    vboxLayout3->addWidget(le13_max);

    splitter->addWidget(layoutWidget1);
    layoutWidget2 = new QWidget(splitter);
    layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
    vboxLayout4 = new QVBoxLayout(layoutWidget2);
    vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
    vboxLayout4->setContentsMargins(0, 0, 0, 0);
    label_43 = new QLabel(layoutWidget2);
    label_43->setObjectName(QString::fromUtf8("label_43"));

    vboxLayout4->addWidget(label_43);

    le13_min = new QLineEdit(layoutWidget2);
    le13_min->setObjectName(QString::fromUtf8("le13_min"));

    vboxLayout4->addWidget(le13_min);

    splitter->addWidget(layoutWidget2);
    layoutWidget3 = new QWidget(splitter);
    layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
    vboxLayout5 = new QVBoxLayout(layoutWidget3);
    vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
    vboxLayout5->setContentsMargins(0, 0, 0, 0);
    label_44 = new QLabel(layoutWidget3);
    label_44->setObjectName(QString::fromUtf8("label_44"));

    vboxLayout5->addWidget(label_44);

    le13_bmax = new QLineEdit(layoutWidget3);
    le13_bmax->setObjectName(QString::fromUtf8("le13_bmax"));

    vboxLayout5->addWidget(le13_bmax);

    splitter->addWidget(layoutWidget3);
    layoutWidget4 = new QWidget(splitter);
    layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
    vboxLayout6 = new QVBoxLayout(layoutWidget4);
    vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
    vboxLayout6->setContentsMargins(0, 0, 0, 0);
    label_45 = new QLabel(layoutWidget4);
    label_45->setObjectName(QString::fromUtf8("label_45"));

    vboxLayout6->addWidget(label_45);

    le13_bmin = new QLineEdit(layoutWidget4);
    le13_bmin->setObjectName(QString::fromUtf8("le13_bmin"));

    vboxLayout6->addWidget(le13_bmin);

    splitter->addWidget(layoutWidget4);
    layoutWidget5 = new QWidget(page_14);
    layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
    layoutWidget5->setGeometry(QRect(9, 181, 320, 97));
    gridLayout65 = new QGridLayout(layoutWidget5);
    gridLayout65->setObjectName(QString::fromUtf8("gridLayout65"));
    gridLayout65->setContentsMargins(0, 0, 0, 0);
    label_53 = new QLabel(layoutWidget5);
    label_53->setObjectName(QString::fromUtf8("label_53"));

    gridLayout65->addWidget(label_53, 0, 0, 1, 1);

    sp13compare = new QSpinBox(layoutWidget5);
    sp13compare->setObjectName(QString::fromUtf8("sp13compare"));
    sp13compare->setMaximumSize(QSize(46, 25));
    sp13compare->setValue(0);

    gridLayout65->addWidget(sp13compare, 0, 1, 1, 1);

    label_47 = new QLabel(layoutWidget5);
    label_47->setObjectName(QString::fromUtf8("label_47"));

    gridLayout65->addWidget(label_47, 1, 0, 1, 1);

    sp13level = new QSpinBox(layoutWidget5);
    sp13level->setObjectName(QString::fromUtf8("sp13level"));
    sp13level->setMaximumSize(QSize(46, 25));
    sp13level->setMinimum(80);
    sp13level->setMaximum(200);
    sp13level->setValue(80);

    gridLayout65->addWidget(sp13level, 1, 1, 1, 1);

    label_46 = new QLabel(layoutWidget5);
    label_46->setObjectName(QString::fromUtf8("label_46"));

    gridLayout65->addWidget(label_46, 2, 0, 1, 1);

    sp13group = new QSpinBox(layoutWidget5);
    sp13group->setObjectName(QString::fromUtf8("sp13group"));
    sp13group->setMaximumSize(QSize(46, 25));
    sp13group->setValue(1);

    gridLayout65->addWidget(sp13group, 2, 1, 1, 1);

    toolBox_11->addItem(page_14, QApplication::translate("CommandsClass", "g_rms options", 0, QApplication::UnicodeUTF8));

    gridLayout62->addWidget(toolBox_11, 0, 0, 1, 1);

    stackwMain->addWidget(stack_g_rms);
    stack_g_confrms = new QWidget();
    stack_g_confrms->setObjectName(QString::fromUtf8("stack_g_confrms"));
    gridLayout66 = new QGridLayout(stack_g_confrms);
    gridLayout66->setObjectName(QString::fromUtf8("gridLayout66"));
    toolBox_12 = new QToolBox(stack_g_confrms);
    toolBox_12->setObjectName(QString::fromUtf8("toolBox_12"));
    toolBox_12->setFrameShape(QFrame::StyledPanel);
    page_15 = new QWidget();
    page_15->setObjectName(QString::fromUtf8("page_15"));
    page_15->setGeometry(QRect(0, 0, 345, 214));
    gridLayout67 = new QGridLayout(page_15);
    gridLayout67->setObjectName(QString::fromUtf8("gridLayout67"));
    textLabel2_42 = new QLabel(page_15);
    textLabel2_42->setObjectName(QString::fromUtf8("textLabel2_42"));
    textLabel2_42->setFont(font3);
    textLabel2_42->setWordWrap(false);

    gridLayout67->addWidget(textLabel2_42, 0, 0, 1, 2);

    cb14_f1 = new QComboBox(page_15);
    cb14_f1->setObjectName(QString::fromUtf8("cb14_f1"));

    gridLayout67->addWidget(cb14_f1, 0, 2, 1, 1);

    textLabel2_41 = new QLabel(page_15);
    textLabel2_41->setObjectName(QString::fromUtf8("textLabel2_41"));
    textLabel2_41->setFont(font3);
    textLabel2_41->setWordWrap(false);

    gridLayout67->addWidget(textLabel2_41, 1, 0, 1, 1);

    cb14_f2 = new QComboBox(page_15);
    cb14_f2->setObjectName(QString::fromUtf8("cb14_f2"));

    gridLayout67->addWidget(cb14_f2, 1, 2, 1, 1);

    textLabel2_2_17 = new QLabel(page_15);
    textLabel2_2_17->setObjectName(QString::fromUtf8("textLabel2_2_17"));
    textLabel2_2_17->setFont(font3);
    textLabel2_2_17->setWordWrap(false);

    gridLayout67->addWidget(textLabel2_2_17, 2, 0, 1, 2);

    le14_o = new QLineEdit(page_15);
    le14_o->setObjectName(QString::fromUtf8("le14_o"));

    gridLayout67->addWidget(le14_o, 2, 2, 1, 1);

    textLabel1_16 = new QLabel(page_15);
    textLabel1_16->setObjectName(QString::fromUtf8("textLabel1_16"));
    textLabel1_16->setWordWrap(false);

    gridLayout67->addWidget(textLabel1_16, 3, 0, 1, 1);

    cb14_n1 = new QComboBox(page_15);
    cb14_n1->setObjectName(QString::fromUtf8("cb14_n1"));

    gridLayout67->addWidget(cb14_n1, 3, 2, 1, 1);

    textLabel1_17 = new QLabel(page_15);
    textLabel1_17->setObjectName(QString::fromUtf8("textLabel1_17"));
    textLabel1_17->setWordWrap(false);

    gridLayout67->addWidget(textLabel1_17, 4, 0, 1, 1);

    cb14_n2 = new QComboBox(page_15);
    cb14_n2->setObjectName(QString::fromUtf8("cb14_n2"));

    gridLayout67->addWidget(cb14_n2, 4, 2, 1, 1);

    textLabel2_43 = new QLabel(page_15);
    textLabel2_43->setObjectName(QString::fromUtf8("textLabel2_43"));
    textLabel2_43->setWordWrap(false);

    gridLayout67->addWidget(textLabel2_43, 5, 0, 1, 2);

    le14_no = new QLineEdit(page_15);
    le14_no->setObjectName(QString::fromUtf8("le14_no"));

    gridLayout67->addWidget(le14_no, 5, 2, 1, 1);

    spacerItem33 = new QSpacerItem(259, 121, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout67->addItem(spacerItem33, 6, 1, 1, 2);

    toolBox_12->addItem(page_15, QApplication::translate("CommandsClass", "g_confrms files", 0, QApplication::UnicodeUTF8));
    page_16 = new QWidget();
    page_16->setObjectName(QString::fromUtf8("page_16"));
    page_16->setGeometry(QRect(0, 0, 282, 182));
    gridLayout68 = new QGridLayout(page_16);
    gridLayout68->setObjectName(QString::fromUtf8("gridLayout68"));
    ch14fit = new QCheckBox(page_16);
    ch14fit->setObjectName(QString::fromUtf8("ch14fit"));

    gridLayout68->addWidget(ch14fit, 0, 0, 1, 1);

    ch14mass = new QCheckBox(page_16);
    ch14mass->setObjectName(QString::fromUtf8("ch14mass"));
    ch14mass->setChecked(true);

    gridLayout68->addWidget(ch14mass, 1, 0, 1, 1);

    ch14try = new QCheckBox(page_16);
    ch14try->setObjectName(QString::fromUtf8("ch14try"));

    gridLayout68->addWidget(ch14try, 2, 0, 1, 1);

    ch14least = new QCheckBox(page_16);
    ch14least->setObjectName(QString::fromUtf8("ch14least"));
    ch14least->setChecked(true);

    gridLayout68->addWidget(ch14least, 3, 0, 1, 1);

    ch14compare = new QCheckBox(page_16);
    ch14compare->setObjectName(QString::fromUtf8("ch14compare"));

    gridLayout68->addWidget(ch14compare, 4, 0, 1, 1);

    ch14bfactor = new QCheckBox(page_16);
    ch14bfactor->setObjectName(QString::fromUtf8("ch14bfactor"));

    gridLayout68->addWidget(ch14bfactor, 5, 0, 1, 1);

    spacerItem34 = new QSpacerItem(135, 101, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout68->addItem(spacerItem34, 6, 0, 1, 1);

    toolBox_12->addItem(page_16, QApplication::translate("CommandsClass", "g_confrms options", 0, QApplication::UnicodeUTF8));

    gridLayout66->addWidget(toolBox_12, 0, 0, 1, 1);

    stackwMain->addWidget(stack_g_confrms);
    stack_g_cluster = new QWidget();
    stack_g_cluster->setObjectName(QString::fromUtf8("stack_g_cluster"));
    gridLayout69 = new QGridLayout(stack_g_cluster);
    gridLayout69->setObjectName(QString::fromUtf8("gridLayout69"));
    toolBox_13 = new QToolBox(stack_g_cluster);
    toolBox_13->setObjectName(QString::fromUtf8("toolBox_13"));
    toolBox_13->setFrameShape(QFrame::StyledPanel);
    page_17 = new QWidget();
    page_17->setObjectName(QString::fromUtf8("page_17"));
    page_17->setGeometry(QRect(0, 0, 131, 374));
    gridLayout70 = new QGridLayout(page_17);
    gridLayout70->setObjectName(QString::fromUtf8("gridLayout70"));
    textLabel2_44 = new QLabel(page_17);
    textLabel2_44->setObjectName(QString::fromUtf8("textLabel2_44"));
    textLabel2_44->setMaximumSize(QSize(16777215, 21));
    textLabel2_44->setWordWrap(false);

    gridLayout70->addWidget(textLabel2_44, 0, 0, 1, 1);

    cb15input = new QComboBox(page_17);
    cb15input->setObjectName(QString::fromUtf8("cb15input"));
    cb15input->setMaximumSize(QSize(16777215, 21));

    gridLayout70->addWidget(cb15input, 0, 1, 1, 1);

    textLabel2_136 = new QLabel(page_17);
    textLabel2_136->setObjectName(QString::fromUtf8("textLabel2_136"));
    textLabel2_136->setMaximumSize(QSize(16777215, 21));
    textLabel2_136->setWordWrap(false);

    gridLayout70->addWidget(textLabel2_136, 1, 0, 1, 1);

    cb15_s = new QComboBox(page_17);
    cb15_s->setObjectName(QString::fromUtf8("cb15_s"));
    cb15_s->setMaximumSize(QSize(16777215, 21));

    gridLayout70->addWidget(cb15_s, 1, 1, 1, 1);

    textLabel2_134 = new QLabel(page_17);
    textLabel2_134->setObjectName(QString::fromUtf8("textLabel2_134"));
    textLabel2_134->setMaximumSize(QSize(16777215, 21));
    textLabel2_134->setWordWrap(false);

    gridLayout70->addWidget(textLabel2_134, 2, 0, 1, 1);

    cb15_n = new QComboBox(page_17);
    cb15_n->setObjectName(QString::fromUtf8("cb15_n"));
    cb15_n->setMaximumSize(QSize(16777215, 21));

    gridLayout70->addWidget(cb15_n, 2, 1, 1, 1);

    textLabel2_2_60 = new QLabel(page_17);
    textLabel2_2_60->setObjectName(QString::fromUtf8("textLabel2_2_60"));
    textLabel2_2_60->setMaximumSize(QSize(16777215, 21));
    textLabel2_2_60->setFont(font3);
    textLabel2_2_60->setWordWrap(false);

    gridLayout70->addWidget(textLabel2_2_60, 3, 0, 1, 1);

    le15_o = new QLineEdit(page_17);
    le15_o->setObjectName(QString::fromUtf8("le15_o"));
    le15_o->setMaximumSize(QSize(16777215, 21));

    gridLayout70->addWidget(le15_o, 3, 1, 1, 1);

    textLabel2_2_18 = new QLabel(page_17);
    textLabel2_2_18->setObjectName(QString::fromUtf8("textLabel2_2_18"));
    textLabel2_2_18->setMaximumSize(QSize(16777215, 21));
    textLabel2_2_18->setFont(font3);
    textLabel2_2_18->setWordWrap(false);

    gridLayout70->addWidget(textLabel2_2_18, 4, 0, 1, 1);

    le15log = new QLineEdit(page_17);
    le15log->setObjectName(QString::fromUtf8("le15log"));
    le15log->setMaximumSize(QSize(16777215, 21));

    gridLayout70->addWidget(le15log, 4, 1, 1, 1);

    textLabel2_45 = new QLabel(page_17);
    textLabel2_45->setObjectName(QString::fromUtf8("textLabel2_45"));
    textLabel2_45->setMaximumSize(QSize(16777215, 21));
    textLabel2_45->setWordWrap(false);

    gridLayout70->addWidget(textLabel2_45, 5, 0, 1, 1);

    le15_dist = new QLineEdit(page_17);
    le15_dist->setObjectName(QString::fromUtf8("le15_dist"));
    le15_dist->setMaximumSize(QSize(16777215, 21));

    gridLayout70->addWidget(le15_dist, 5, 1, 1, 1);

    textLabel2_2_34 = new QLabel(page_17);
    textLabel2_2_34->setObjectName(QString::fromUtf8("textLabel2_2_34"));
    textLabel2_2_34->setMaximumSize(QSize(16777215, 21));
    textLabel2_2_34->setWordWrap(false);

    gridLayout70->addWidget(textLabel2_2_34, 6, 0, 1, 1);

    le15_ev = new QLineEdit(page_17);
    le15_ev->setObjectName(QString::fromUtf8("le15_ev"));
    le15_ev->setMaximumSize(QSize(16777215, 21));

    gridLayout70->addWidget(le15_ev, 6, 1, 1, 1);

    textLabel2_260 = new QLabel(page_17);
    textLabel2_260->setObjectName(QString::fromUtf8("textLabel2_260"));
    textLabel2_260->setMaximumSize(QSize(16777215, 21));
    textLabel2_260->setWordWrap(false);

    gridLayout70->addWidget(textLabel2_260, 7, 0, 1, 1);

    le15_sz = new QLineEdit(page_17);
    le15_sz->setObjectName(QString::fromUtf8("le15_sz"));
    le15_sz->setMaximumSize(QSize(16777215, 21));

    gridLayout70->addWidget(le15_sz, 7, 1, 1, 1);

    textLabel2_261 = new QLabel(page_17);
    textLabel2_261->setObjectName(QString::fromUtf8("textLabel2_261"));
    textLabel2_261->setMaximumSize(QSize(16777215, 21));
    textLabel2_261->setWordWrap(false);

    gridLayout70->addWidget(textLabel2_261, 8, 0, 1, 1);

    le15_tr = new QLineEdit(page_17);
    le15_tr->setObjectName(QString::fromUtf8("le15_tr"));
    le15_tr->setMaximumSize(QSize(16777215, 21));

    gridLayout70->addWidget(le15_tr, 8, 1, 1, 1);

    textLabel2_46 = new QLabel(page_17);
    textLabel2_46->setObjectName(QString::fromUtf8("textLabel2_46"));
    textLabel2_46->setMaximumSize(QSize(16777215, 21));
    textLabel2_46->setWordWrap(false);

    gridLayout70->addWidget(textLabel2_46, 9, 0, 1, 1);

    le15_ntr = new QLineEdit(page_17);
    le15_ntr->setObjectName(QString::fromUtf8("le15_ntr"));
    le15_ntr->setMaximumSize(QSize(16777215, 21));

    gridLayout70->addWidget(le15_ntr, 9, 1, 1, 1);

    textLabel1_34 = new QLabel(page_17);
    textLabel1_34->setObjectName(QString::fromUtf8("textLabel1_34"));
    textLabel1_34->setMaximumSize(QSize(16777215, 21));
    textLabel1_34->setWordWrap(false);

    gridLayout70->addWidget(textLabel1_34, 10, 0, 1, 1);

    le15_clid = new QLineEdit(page_17);
    le15_clid->setObjectName(QString::fromUtf8("le15_clid"));
    le15_clid->setMaximumSize(QSize(16777215, 21));

    gridLayout70->addWidget(le15_clid, 10, 1, 1, 1);

    textLabel2_133 = new QLabel(page_17);
    textLabel2_133->setObjectName(QString::fromUtf8("textLabel2_133"));
    textLabel2_133->setMaximumSize(QSize(16777215, 21));
    textLabel2_133->setWordWrap(false);

    gridLayout70->addWidget(textLabel2_133, 11, 0, 1, 1);

    le15_cl = new QLineEdit(page_17);
    le15_cl->setObjectName(QString::fromUtf8("le15_cl"));
    le15_cl->setMaximumSize(QSize(16777215, 21));

    gridLayout70->addWidget(le15_cl, 11, 1, 1, 1);

    spacerItem35 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout70->addItem(spacerItem35, 12, 1, 1, 1);

    toolBox_13->addItem(page_17, QApplication::translate("CommandsClass", "g_cluster files", 0, QApplication::UnicodeUTF8));
    page_18 = new QWidget();
    page_18->setObjectName(QString::fromUtf8("page_18"));
    page_18->setGeometry(QRect(0, 0, 273, 365));
    gridLayout71 = new QGridLayout(page_18);
    gridLayout71->setObjectName(QString::fromUtf8("gridLayout71"));
    ch15dist = new QCheckBox(page_18);
    ch15dist->setObjectName(QString::fromUtf8("ch15dist"));
    ch15dist->setChecked(false);

    gridLayout71->addWidget(ch15dist, 0, 0, 1, 5);

    ch15least = new QCheckBox(page_18);
    ch15least->setObjectName(QString::fromUtf8("ch15least"));
    ch15least->setChecked(true);

    gridLayout71->addWidget(ch15least, 1, 0, 1, 5);

    ch15aver = new QCheckBox(page_18);
    ch15aver->setObjectName(QString::fromUtf8("ch15aver"));
    ch15aver->setChecked(false);

    gridLayout71->addWidget(ch15aver, 2, 0, 1, 5);

    ch15treat = new QCheckBox(page_18);
    ch15treat->setObjectName(QString::fromUtf8("ch15treat"));
    ch15treat->setChecked(false);

    gridLayout71->addWidget(ch15treat, 3, 0, 1, 5);

    textLabel2_135 = new QLabel(page_18);
    textLabel2_135->setObjectName(QString::fromUtf8("textLabel2_135"));
    textLabel2_135->setWordWrap(false);

    gridLayout71->addWidget(textLabel2_135, 4, 0, 1, 1);

    le15first = new QLineEdit(page_18);
    le15first->setObjectName(QString::fromUtf8("le15first"));
    le15first->setMaximumSize(QSize(61, 16777215));

    gridLayout71->addWidget(le15first, 4, 1, 1, 1);

    sp2threadslabel_18 = new QLabel(page_18);
    sp2threadslabel_18->setObjectName(QString::fromUtf8("sp2threadslabel_18"));
    sp2threadslabel_18->setWordWrap(false);

    gridLayout71->addWidget(sp2threadslabel_18, 4, 2, 1, 2);

    le15last = new QLineEdit(page_18);
    le15last->setObjectName(QString::fromUtf8("le15last"));
    le15last->setMaximumSize(QSize(61, 16777215));

    gridLayout71->addWidget(le15last, 4, 4, 1, 1);

    textLabel2_137 = new QLabel(page_18);
    textLabel2_137->setObjectName(QString::fromUtf8("textLabel2_137"));
    textLabel2_137->setMaximumSize(QSize(16777215, 31));
    textLabel2_137->setWordWrap(false);

    gridLayout71->addWidget(textLabel2_137, 5, 0, 1, 4);

    le15only = new QLineEdit(page_18);
    le15only->setObjectName(QString::fromUtf8("le15only"));
    le15only->setMaximumSize(QSize(61, 16777215));

    gridLayout71->addWidget(le15only, 5, 4, 1, 1);

    label_61 = new QLabel(page_18);
    label_61->setObjectName(QString::fromUtf8("label_61"));

    gridLayout71->addWidget(label_61, 6, 0, 1, 3);

    vboxLayout7 = new QVBoxLayout();
    vboxLayout7->setObjectName(QString::fromUtf8("vboxLayout7"));
    cb15time = new QComboBox(page_18);
    cb15time->setObjectName(QString::fromUtf8("cb15time"));

    vboxLayout7->addWidget(cb15time);

    cb15method = new QComboBox(page_18);
    cb15method->setObjectName(QString::fromUtf8("cb15method"));
    cb15method->setMaximumSize(QSize(130, 16777215));

    vboxLayout7->addWidget(cb15method);


    gridLayout71->addLayout(vboxLayout7, 6, 3, 2, 2);

    label_62 = new QLabel(page_18);
    label_62->setObjectName(QString::fromUtf8("label_62"));

    gridLayout71->addWidget(label_62, 7, 0, 1, 3);

    label_63 = new QLabel(page_18);
    label_63->setObjectName(QString::fromUtf8("label_63"));

    gridLayout71->addWidget(label_63, 8, 0, 1, 4);

    sp15discre = new QSpinBox(page_18);
    sp15discre->setObjectName(QString::fromUtf8("sp15discre"));
    sp15discre->setMaximumSize(QSize(46, 16777215));
    sp15discre->setValue(40);

    gridLayout71->addWidget(sp15discre, 8, 4, 1, 1);

    label_64 = new QLabel(page_18);
    label_64->setObjectName(QString::fromUtf8("label_64"));
    label_64->setMaximumSize(QSize(16777215, 31));

    gridLayout71->addWidget(label_64, 9, 0, 1, 4);

    le15cutoff = new QLineEdit(page_18);
    le15cutoff->setObjectName(QString::fromUtf8("le15cutoff"));
    le15cutoff->setMaximumSize(QSize(55, 16777215));

    gridLayout71->addWidget(le15cutoff, 9, 4, 1, 1);

    label_65 = new QLabel(page_18);
    label_65->setObjectName(QString::fromUtf8("label_65"));

    gridLayout71->addWidget(label_65, 10, 0, 1, 4);

    le15max = new QLineEdit(page_18);
    le15max->setObjectName(QString::fromUtf8("le15max"));
    le15max->setMaximumSize(QSize(55, 16777215));

    gridLayout71->addWidget(le15max, 10, 4, 1, 1);

    spacerItem36 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout71->addItem(spacerItem36, 11, 0, 1, 1);

    toolBox_13->addItem(page_18, QApplication::translate("CommandsClass", "g_cluster options (1)", 0, QApplication::UnicodeUTF8));
    page_48 = new QWidget();
    page_48->setObjectName(QString::fromUtf8("page_48"));
    page_48->setGeometry(QRect(0, 0, 309, 330));
    gridLayout72 = new QGridLayout(page_48);
    gridLayout72->setObjectName(QString::fromUtf8("gridLayout72"));
    label_66 = new QLabel(page_48);
    label_66->setObjectName(QString::fromUtf8("label_66"));

    gridLayout72->addWidget(label_66, 0, 0, 1, 1);

    sp15nrth = new QSpinBox(page_48);
    sp15nrth->setObjectName(QString::fromUtf8("sp15nrth"));
    sp15nrth->setMaximumSize(QSize(46, 16777215));
    sp15nrth->setValue(1);

    gridLayout72->addWidget(sp15nrth, 0, 1, 1, 1);

    label_67 = new QLabel(page_48);
    label_67->setObjectName(QString::fromUtf8("label_67"));
    label_67->setMaximumSize(QSize(16777215, 30));

    gridLayout72->addWidget(label_67, 1, 0, 1, 1);

    sp15numb = new QSpinBox(page_48);
    sp15numb->setObjectName(QString::fromUtf8("sp15numb"));
    sp15numb->setMaximumSize(QSize(46, 16777215));
    sp15numb->setValue(0);

    gridLayout72->addWidget(sp15numb, 1, 1, 1, 1);

    label_68 = new QLabel(page_48);
    label_68->setObjectName(QString::fromUtf8("label_68"));
    label_68->setMaximumSize(QSize(16777215, 30));

    gridLayout72->addWidget(label_68, 2, 0, 1, 1);

    sp15per = new QSpinBox(page_48);
    sp15per->setObjectName(QString::fromUtf8("sp15per"));
    sp15per->setMaximumSize(QSize(46, 16777215));
    sp15per->setValue(1);

    gridLayout72->addWidget(sp15per, 2, 1, 1, 1);

    label_70 = new QLabel(page_48);
    label_70->setObjectName(QString::fromUtf8("label_70"));
    label_70->setMaximumSize(QSize(16777215, 30));

    gridLayout72->addWidget(label_70, 3, 0, 1, 1);

    le15minrms = new QLineEdit(page_48);
    le15minrms->setObjectName(QString::fromUtf8("le15minrms"));
    le15minrms->setMaximumSize(QSize(55, 16777215));

    gridLayout72->addWidget(le15minrms, 3, 1, 1, 1);

    label_69 = new QLabel(page_48);
    label_69->setObjectName(QString::fromUtf8("label_69"));
    label_69->setMaximumSize(QSize(16777215, 30));

    gridLayout72->addWidget(label_69, 4, 0, 1, 1);

    sp15near = new QSpinBox(page_48);
    sp15near->setObjectName(QString::fromUtf8("sp15near"));
    sp15near->setMaximumSize(QSize(46, 16777215));
    sp15near->setValue(10);

    gridLayout72->addWidget(sp15near, 4, 1, 1, 1);

    label_74 = new QLabel(page_48);
    label_74->setObjectName(QString::fromUtf8("label_74"));
    label_74->setMaximumSize(QSize(16777215, 30));

    gridLayout72->addWidget(label_74, 5, 0, 1, 1);

    sp15identical = new QSpinBox(page_48);
    sp15identical->setObjectName(QString::fromUtf8("sp15identical"));
    sp15identical->setMaximumSize(QSize(46, 16777215));
    sp15identical->setValue(3);

    gridLayout72->addWidget(sp15identical, 5, 1, 1, 1);

    label_76 = new QLabel(page_48);
    label_76->setObjectName(QString::fromUtf8("label_76"));
    label_76->setMaximumSize(QSize(16777215, 30));

    gridLayout72->addWidget(label_76, 6, 0, 1, 1);

    sp15xpm = new QSpinBox(page_48);
    sp15xpm->setObjectName(QString::fromUtf8("sp15xpm"));
    sp15xpm->setMaximumSize(QSize(46, 16777215));
    sp15xpm->setValue(1);

    gridLayout72->addWidget(sp15xpm, 6, 1, 1, 1);

    label_75 = new QLabel(page_48);
    label_75->setObjectName(QString::fromUtf8("label_75"));

    gridLayout72->addWidget(label_75, 7, 0, 1, 1);

    sp15iter = new QSpinBox(page_48);
    sp15iter->setObjectName(QString::fromUtf8("sp15iter"));
    sp15iter->setMaximumSize(QSize(59, 16777215));
    sp15iter->setMaximum(100000);
    sp15iter->setValue(10000);

    gridLayout72->addWidget(sp15iter, 7, 1, 1, 1);

    label_71 = new QLabel(page_48);
    label_71->setObjectName(QString::fromUtf8("label_71"));
    label_71->setMaximumSize(QSize(16777215, 30));

    gridLayout72->addWidget(label_71, 8, 0, 1, 1);

    le15boltz = new QLineEdit(page_48);
    le15boltz->setObjectName(QString::fromUtf8("le15boltz"));
    le15boltz->setMaximumSize(QSize(55, 16777215));

    gridLayout72->addWidget(le15boltz, 8, 1, 1, 1);

    toolBox_13->addItem(page_48, QApplication::translate("CommandsClass", "g_cluster options (2)", 0, QApplication::UnicodeUTF8));

    gridLayout69->addWidget(toolBox_13, 0, 0, 1, 1);

    stackwMain->addWidget(stack_g_cluster);
    stack_g_rmsf = new QWidget();
    stack_g_rmsf->setObjectName(QString::fromUtf8("stack_g_rmsf"));
    gridLayout73 = new QGridLayout(stack_g_rmsf);
    gridLayout73->setObjectName(QString::fromUtf8("gridLayout73"));
    toolBox_14 = new QToolBox(stack_g_rmsf);
    toolBox_14->setObjectName(QString::fromUtf8("toolBox_14"));
    toolBox_14->setFrameShape(QFrame::StyledPanel);
    page_19 = new QWidget();
    page_19->setObjectName(QString::fromUtf8("page_19"));
    page_19->setGeometry(QRect(0, 0, 151, 314));
    gridLayout74 = new QGridLayout(page_19);
    gridLayout74->setObjectName(QString::fromUtf8("gridLayout74"));
    textLabel2_49 = new QLabel(page_19);
    textLabel2_49->setObjectName(QString::fromUtf8("textLabel2_49"));
    textLabel2_49->setFont(font3);
    textLabel2_49->setWordWrap(false);

    gridLayout74->addWidget(textLabel2_49, 0, 0, 1, 1);

    cb16_f = new QComboBox(page_19);
    cb16_f->setObjectName(QString::fromUtf8("cb16_f"));

    gridLayout74->addWidget(cb16_f, 0, 1, 1, 1);

    textLabel2_165 = new QLabel(page_19);
    textLabel2_165->setObjectName(QString::fromUtf8("textLabel2_165"));
    textLabel2_165->setFont(font3);
    textLabel2_165->setWordWrap(false);

    gridLayout74->addWidget(textLabel2_165, 1, 0, 1, 1);

    cb16_s = new QComboBox(page_19);
    cb16_s->setObjectName(QString::fromUtf8("cb16_s"));

    gridLayout74->addWidget(cb16_s, 1, 1, 1, 1);

    textLabel2_166 = new QLabel(page_19);
    textLabel2_166->setObjectName(QString::fromUtf8("textLabel2_166"));
    textLabel2_166->setWordWrap(false);

    gridLayout74->addWidget(textLabel2_166, 2, 0, 1, 1);

    cb16_n = new QComboBox(page_19);
    cb16_n->setObjectName(QString::fromUtf8("cb16_n"));

    gridLayout74->addWidget(cb16_n, 2, 1, 1, 1);

    textLabel2_167 = new QLabel(page_19);
    textLabel2_167->setObjectName(QString::fromUtf8("textLabel2_167"));
    textLabel2_167->setWordWrap(false);

    gridLayout74->addWidget(textLabel2_167, 3, 0, 1, 1);

    cb16_q = new QComboBox(page_19);
    cb16_q->setObjectName(QString::fromUtf8("cb16_q"));

    gridLayout74->addWidget(cb16_q, 3, 1, 1, 1);

    textLabel2_47 = new QLabel(page_19);
    textLabel2_47->setObjectName(QString::fromUtf8("textLabel2_47"));
    textLabel2_47->setWordWrap(false);

    gridLayout74->addWidget(textLabel2_47, 4, 0, 1, 1);

    le16_oq = new QLineEdit(page_19);
    le16_oq->setObjectName(QString::fromUtf8("le16_oq"));

    gridLayout74->addWidget(le16_oq, 4, 1, 1, 1);

    textLabel2_160 = new QLabel(page_19);
    textLabel2_160->setObjectName(QString::fromUtf8("textLabel2_160"));
    textLabel2_160->setWordWrap(false);

    gridLayout74->addWidget(textLabel2_160, 5, 0, 1, 1);

    le16_ox = new QLineEdit(page_19);
    le16_ox->setObjectName(QString::fromUtf8("le16_ox"));

    gridLayout74->addWidget(le16_ox, 5, 1, 1, 1);

    textLabel2_161 = new QLabel(page_19);
    textLabel2_161->setObjectName(QString::fromUtf8("textLabel2_161"));
    textLabel2_161->setFont(font3);
    textLabel2_161->setWordWrap(false);

    gridLayout74->addWidget(textLabel2_161, 6, 0, 1, 1);

    le16_o = new QLineEdit(page_19);
    le16_o->setObjectName(QString::fromUtf8("le16_o"));

    gridLayout74->addWidget(le16_o, 6, 1, 1, 1);

    textLabel2_162 = new QLabel(page_19);
    textLabel2_162->setObjectName(QString::fromUtf8("textLabel2_162"));
    textLabel2_162->setWordWrap(false);

    gridLayout74->addWidget(textLabel2_162, 7, 0, 1, 1);

    le16_od = new QLineEdit(page_19);
    le16_od->setObjectName(QString::fromUtf8("le16_od"));

    gridLayout74->addWidget(le16_od, 7, 1, 1, 1);

    textLabel2_163 = new QLabel(page_19);
    textLabel2_163->setObjectName(QString::fromUtf8("textLabel2_163"));
    textLabel2_163->setWordWrap(false);

    gridLayout74->addWidget(textLabel2_163, 8, 0, 1, 1);

    textLabel2_164 = new QLabel(page_19);
    textLabel2_164->setObjectName(QString::fromUtf8("textLabel2_164"));
    textLabel2_164->setWordWrap(false);

    gridLayout74->addWidget(textLabel2_164, 9, 0, 1, 1);

    le16_dir = new QLineEdit(page_19);
    le16_dir->setObjectName(QString::fromUtf8("le16_dir"));

    gridLayout74->addWidget(le16_dir, 9, 1, 1, 1);

    spacerItem37 = new QSpacerItem(133, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout74->addItem(spacerItem37, 10, 0, 1, 2);

    le16_oc = new QLineEdit(page_19);
    le16_oc->setObjectName(QString::fromUtf8("le16_oc"));

    gridLayout74->addWidget(le16_oc, 8, 1, 1, 1);

    toolBox_14->addItem(page_19, QApplication::translate("CommandsClass", "g_rmsf files", 0, QApplication::UnicodeUTF8));
    page_20 = new QWidget();
    page_20->setObjectName(QString::fromUtf8("page_20"));
    page_20->setGeometry(QRect(0, 0, 284, 161));
    gridLayout75 = new QGridLayout(page_20);
    gridLayout75->setObjectName(QString::fromUtf8("gridLayout75"));
    textLabel2_159 = new QLabel(page_20);
    textLabel2_159->setObjectName(QString::fromUtf8("textLabel2_159"));
    textLabel2_159->setWordWrap(false);

    gridLayout75->addWidget(textLabel2_159, 0, 0, 1, 1);

    le16first = new QLineEdit(page_20);
    le16first->setObjectName(QString::fromUtf8("le16first"));
    le16first->setMaximumSize(QSize(91, 16777215));

    gridLayout75->addWidget(le16first, 0, 1, 1, 1);

    sp2threadslabel_25 = new QLabel(page_20);
    sp2threadslabel_25->setObjectName(QString::fromUtf8("sp2threadslabel_25"));
    sp2threadslabel_25->setWordWrap(false);

    gridLayout75->addWidget(sp2threadslabel_25, 0, 2, 1, 1);

    le16last = new QLineEdit(page_20);
    le16last->setObjectName(QString::fromUtf8("le16last"));
    le16last->setMaximumSize(QSize(91, 16777215));

    gridLayout75->addWidget(le16last, 0, 3, 1, 1);

    textLabel2_158 = new QLabel(page_20);
    textLabel2_158->setObjectName(QString::fromUtf8("textLabel2_158"));
    textLabel2_158->setWordWrap(false);

    gridLayout75->addWidget(textLabel2_158, 1, 0, 1, 3);

    le16only = new QLineEdit(page_20);
    le16only->setObjectName(QString::fromUtf8("le16only"));
    le16only->setMaximumSize(QSize(91, 16777215));

    gridLayout75->addWidget(le16only, 1, 3, 1, 1);

    ch16av = new QCheckBox(page_20);
    ch16av->setObjectName(QString::fromUtf8("ch16av"));

    gridLayout75->addWidget(ch16av, 2, 0, 1, 4);

    ch16aniso = new QCheckBox(page_20);
    ch16aniso->setObjectName(QString::fromUtf8("ch16aniso"));

    gridLayout75->addWidget(ch16aniso, 3, 0, 1, 4);

    spacerItem38 = new QSpacerItem(135, 171, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout75->addItem(spacerItem38, 4, 0, 1, 2);

    toolBox_14->addItem(page_20, QApplication::translate("CommandsClass", "g_rmsf options", 0, QApplication::UnicodeUTF8));

    gridLayout73->addWidget(toolBox_14, 0, 0, 1, 1);

    stackwMain->addWidget(stack_g_rmsf);
    stack_g_mindist = new QWidget();
    stack_g_mindist->setObjectName(QString::fromUtf8("stack_g_mindist"));
    gridLayout76 = new QGridLayout(stack_g_mindist);
    gridLayout76->setObjectName(QString::fromUtf8("gridLayout76"));
    toolBox_15 = new QToolBox(stack_g_mindist);
    toolBox_15->setObjectName(QString::fromUtf8("toolBox_15"));
    toolBox_15->setFrameShape(QFrame::StyledPanel);
    page_21 = new QWidget();
    page_21->setObjectName(QString::fromUtf8("page_21"));
    page_21->setGeometry(QRect(0, 0, 171, 187));
    gridLayout77 = new QGridLayout(page_21);
    gridLayout77->setObjectName(QString::fromUtf8("gridLayout77"));
    textLabel2_52 = new QLabel(page_21);
    textLabel2_52->setObjectName(QString::fromUtf8("textLabel2_52"));
    textLabel2_52->setWordWrap(false);

    gridLayout77->addWidget(textLabel2_52, 0, 0, 1, 1);

    co6inputfile_12 = new QComboBox(page_21);
    co6inputfile_12->setObjectName(QString::fromUtf8("co6inputfile_12"));

    gridLayout77->addWidget(co6inputfile_12, 0, 1, 1, 1);

    textLabel2_50 = new QLabel(page_21);
    textLabel2_50->setObjectName(QString::fromUtf8("textLabel2_50"));
    textLabel2_50->setWordWrap(false);

    gridLayout77->addWidget(textLabel2_50, 1, 0, 1, 1);

    le6outputtrajfile_12 = new QLineEdit(page_21);
    le6outputtrajfile_12->setObjectName(QString::fromUtf8("le6outputtrajfile_12"));

    gridLayout77->addWidget(le6outputtrajfile_12, 1, 1, 1, 1);

    textLabel2_2_20 = new QLabel(page_21);
    textLabel2_2_20->setObjectName(QString::fromUtf8("textLabel2_2_20"));
    textLabel2_2_20->setWordWrap(false);

    gridLayout77->addWidget(textLabel2_2_20, 2, 0, 1, 1);

    le6outputconffile_12 = new QLineEdit(page_21);
    le6outputconffile_12->setObjectName(QString::fromUtf8("le6outputconffile_12"));

    gridLayout77->addWidget(le6outputconffile_12, 2, 1, 1, 1);

    textLabel1_19 = new QLabel(page_21);
    textLabel1_19->setObjectName(QString::fromUtf8("textLabel1_19"));
    textLabel1_19->setWordWrap(false);

    gridLayout77->addWidget(textLabel1_19, 3, 0, 1, 1);

    le6logfile_12 = new QLineEdit(page_21);
    le6logfile_12->setObjectName(QString::fromUtf8("le6logfile_12"));

    gridLayout77->addWidget(le6logfile_12, 3, 1, 1, 1);

    textLabel2_51 = new QLabel(page_21);
    textLabel2_51->setObjectName(QString::fromUtf8("textLabel2_51"));
    textLabel2_51->setWordWrap(false);

    gridLayout77->addWidget(textLabel2_51, 4, 0, 1, 1);

    le6energyfile_12 = new QLineEdit(page_21);
    le6energyfile_12->setObjectName(QString::fromUtf8("le6energyfile_12"));

    gridLayout77->addWidget(le6energyfile_12, 4, 1, 1, 1);

    spacerItem39 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout77->addItem(spacerItem39, 5, 0, 1, 1);

    toolBox_15->addItem(page_21, QApplication::translate("CommandsClass", "g_mindist files", 0, QApplication::UnicodeUTF8));
    page_22 = new QWidget();
    page_22->setObjectName(QString::fromUtf8("page_22"));
    page_22->setGeometry(QRect(0, 0, 305, 155));
    gridLayout78 = new QGridLayout(page_22);
    gridLayout78->setObjectName(QString::fromUtf8("gridLayout78"));
    ch6loud_12 = new QCheckBox(page_22);
    ch6loud_12->setObjectName(QString::fromUtf8("ch6loud_12"));
    ch6loud_12->setChecked(true);

    gridLayout78->addWidget(ch6loud_12, 0, 0, 1, 1);

    spacerItem40 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout78->addItem(spacerItem40, 0, 1, 1, 1);

    ch6xray_12 = new QCheckBox(page_22);
    ch6xray_12->setObjectName(QString::fromUtf8("ch6xray_12"));

    gridLayout78->addWidget(ch6xray_12, 1, 0, 1, 2);

    sp6status_12 = new QSpinBox(page_22);
    sp6status_12->setObjectName(QString::fromUtf8("sp6status_12"));
    sp6status_12->setMaximumSize(QSize(46, 16777215));
    sp6status_12->setValue(1);

    gridLayout78->addWidget(sp6status_12, 2, 2, 1, 1);

    sp6threads_12 = new QSpinBox(page_22);
    sp6threads_12->setObjectName(QString::fromUtf8("sp6threads_12"));
    sp6threads_12->setMaximumSize(QSize(46, 16777215));
    sp6threads_12->setValue(1);

    gridLayout78->addWidget(sp6threads_12, 3, 2, 1, 1);

    spacerItem41 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout78->addItem(spacerItem41, 4, 0, 1, 1);

    toolBox_15->addItem(page_22, QApplication::translate("CommandsClass", "g_mindist options", 0, QApplication::UnicodeUTF8));

    gridLayout76->addWidget(toolBox_15, 0, 0, 1, 1);

    stackwMain->addWidget(stack_g_mindist);
    stack_g_dist = new QWidget();
    stack_g_dist->setObjectName(QString::fromUtf8("stack_g_dist"));
    gridLayout79 = new QGridLayout(stack_g_dist);
    gridLayout79->setObjectName(QString::fromUtf8("gridLayout79"));
    toolBox_16 = new QToolBox(stack_g_dist);
    toolBox_16->setObjectName(QString::fromUtf8("toolBox_16"));
    toolBox_16->setFrameShape(QFrame::StyledPanel);
    page_23 = new QWidget();
    page_23->setObjectName(QString::fromUtf8("page_23"));
    page_23->setGeometry(QRect(0, 0, 171, 187));
    gridLayout80 = new QGridLayout(page_23);
    gridLayout80->setObjectName(QString::fromUtf8("gridLayout80"));
    textLabel2_53 = new QLabel(page_23);
    textLabel2_53->setObjectName(QString::fromUtf8("textLabel2_53"));
    textLabel2_53->setWordWrap(false);

    gridLayout80->addWidget(textLabel2_53, 0, 0, 1, 1);

    co6inputfile_13 = new QComboBox(page_23);
    co6inputfile_13->setObjectName(QString::fromUtf8("co6inputfile_13"));

    gridLayout80->addWidget(co6inputfile_13, 0, 1, 1, 1);

    textLabel2_55 = new QLabel(page_23);
    textLabel2_55->setObjectName(QString::fromUtf8("textLabel2_55"));
    textLabel2_55->setWordWrap(false);

    gridLayout80->addWidget(textLabel2_55, 1, 0, 1, 1);

    le6outputtrajfile_13 = new QLineEdit(page_23);
    le6outputtrajfile_13->setObjectName(QString::fromUtf8("le6outputtrajfile_13"));

    gridLayout80->addWidget(le6outputtrajfile_13, 1, 1, 1, 1);

    textLabel2_2_21 = new QLabel(page_23);
    textLabel2_2_21->setObjectName(QString::fromUtf8("textLabel2_2_21"));
    textLabel2_2_21->setWordWrap(false);

    gridLayout80->addWidget(textLabel2_2_21, 2, 0, 1, 1);

    le6outputconffile_13 = new QLineEdit(page_23);
    le6outputconffile_13->setObjectName(QString::fromUtf8("le6outputconffile_13"));

    gridLayout80->addWidget(le6outputconffile_13, 2, 1, 1, 1);

    textLabel1_20 = new QLabel(page_23);
    textLabel1_20->setObjectName(QString::fromUtf8("textLabel1_20"));
    textLabel1_20->setWordWrap(false);

    gridLayout80->addWidget(textLabel1_20, 3, 0, 1, 1);

    le6logfile_13 = new QLineEdit(page_23);
    le6logfile_13->setObjectName(QString::fromUtf8("le6logfile_13"));

    gridLayout80->addWidget(le6logfile_13, 3, 1, 1, 1);

    textLabel2_54 = new QLabel(page_23);
    textLabel2_54->setObjectName(QString::fromUtf8("textLabel2_54"));
    textLabel2_54->setWordWrap(false);

    gridLayout80->addWidget(textLabel2_54, 4, 0, 1, 1);

    le6energyfile_13 = new QLineEdit(page_23);
    le6energyfile_13->setObjectName(QString::fromUtf8("le6energyfile_13"));

    gridLayout80->addWidget(le6energyfile_13, 4, 1, 1, 1);

    spacerItem42 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout80->addItem(spacerItem42, 5, 1, 1, 1);

    toolBox_16->addItem(page_23, QApplication::translate("CommandsClass", "g_dist files", 0, QApplication::UnicodeUTF8));
    page_24 = new QWidget();
    page_24->setObjectName(QString::fromUtf8("page_24"));
    page_24->setGeometry(QRect(0, 0, 305, 155));
    gridLayout81 = new QGridLayout(page_24);
    gridLayout81->setObjectName(QString::fromUtf8("gridLayout81"));
    ch6loud_13 = new QCheckBox(page_24);
    ch6loud_13->setObjectName(QString::fromUtf8("ch6loud_13"));
    ch6loud_13->setChecked(true);

    gridLayout81->addWidget(ch6loud_13, 0, 0, 1, 1);

    spacerItem43 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout81->addItem(spacerItem43, 0, 1, 1, 1);

    ch6xray_13 = new QCheckBox(page_24);
    ch6xray_13->setObjectName(QString::fromUtf8("ch6xray_13"));

    gridLayout81->addWidget(ch6xray_13, 1, 0, 1, 2);

    sp6status_13 = new QSpinBox(page_24);
    sp6status_13->setObjectName(QString::fromUtf8("sp6status_13"));
    sp6status_13->setMaximumSize(QSize(46, 16777215));
    sp6status_13->setValue(1);

    gridLayout81->addWidget(sp6status_13, 2, 2, 1, 1);

    sp6threads_13 = new QSpinBox(page_24);
    sp6threads_13->setObjectName(QString::fromUtf8("sp6threads_13"));
    sp6threads_13->setMaximumSize(QSize(46, 16777215));
    sp6threads_13->setValue(1);

    gridLayout81->addWidget(sp6threads_13, 3, 2, 1, 1);

    spacerItem44 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout81->addItem(spacerItem44, 4, 0, 1, 1);

    toolBox_16->addItem(page_24, QApplication::translate("CommandsClass", "g_dist options", 0, QApplication::UnicodeUTF8));

    gridLayout79->addWidget(toolBox_16, 0, 0, 1, 1);

    stackwMain->addWidget(stack_g_dist);
    stack_g_bond = new QWidget();
    stack_g_bond->setObjectName(QString::fromUtf8("stack_g_bond"));
    gridLayout82 = new QGridLayout(stack_g_bond);
    gridLayout82->setObjectName(QString::fromUtf8("gridLayout82"));
    toolBox_17 = new QToolBox(stack_g_bond);
    toolBox_17->setObjectName(QString::fromUtf8("toolBox_17"));
    toolBox_17->setFrameShape(QFrame::StyledPanel);
    page_25 = new QWidget();
    page_25->setObjectName(QString::fromUtf8("page_25"));
    page_25->setGeometry(QRect(0, 0, 308, 215));
    gridLayout83 = new QGridLayout(page_25);
    gridLayout83->setObjectName(QString::fromUtf8("gridLayout83"));
    textLabel2_56 = new QLabel(page_25);
    textLabel2_56->setObjectName(QString::fromUtf8("textLabel2_56"));
    textLabel2_56->setFont(font3);
    textLabel2_56->setWordWrap(false);

    gridLayout83->addWidget(textLabel2_56, 0, 0, 1, 1);

    cb19input = new QComboBox(page_25);
    cb19input->setObjectName(QString::fromUtf8("cb19input"));

    gridLayout83->addWidget(cb19input, 0, 1, 1, 1);

    textLabel2_58 = new QLabel(page_25);
    textLabel2_58->setObjectName(QString::fromUtf8("textLabel2_58"));
    textLabel2_58->setFont(font3);
    textLabel2_58->setWordWrap(false);

    gridLayout83->addWidget(textLabel2_58, 1, 0, 1, 1);

    cb19_n = new QComboBox(page_25);
    cb19_n->setObjectName(QString::fromUtf8("cb19_n"));

    gridLayout83->addWidget(cb19_n, 1, 1, 1, 1);

    textLabel2_62 = new QLabel(page_25);
    textLabel2_62->setObjectName(QString::fromUtf8("textLabel2_62"));
    textLabel2_62->setWordWrap(false);

    gridLayout83->addWidget(textLabel2_62, 2, 0, 1, 1);

    cb19_s = new QComboBox(page_25);
    cb19_s->setObjectName(QString::fromUtf8("cb19_s"));

    gridLayout83->addWidget(cb19_s, 2, 1, 1, 1);

    textLabel1_21 = new QLabel(page_25);
    textLabel1_21->setObjectName(QString::fromUtf8("textLabel1_21"));
    textLabel1_21->setFont(font3);
    textLabel1_21->setWordWrap(false);

    gridLayout83->addWidget(textLabel1_21, 3, 0, 1, 1);

    le19output = new QLineEdit(page_25);
    le19output->setObjectName(QString::fromUtf8("le19output"));

    gridLayout83->addWidget(le19output, 3, 1, 1, 1);

    textLabel2_2_22 = new QLabel(page_25);
    textLabel2_2_22->setObjectName(QString::fromUtf8("textLabel2_2_22"));
    textLabel2_2_22->setWordWrap(false);

    gridLayout83->addWidget(textLabel2_2_22, 4, 0, 1, 1);

    le19_d = new QLineEdit(page_25);
    le19_d->setObjectName(QString::fromUtf8("le19_d"));

    gridLayout83->addWidget(le19_d, 4, 1, 1, 1);

    textLabel2_57 = new QLabel(page_25);
    textLabel2_57->setObjectName(QString::fromUtf8("textLabel2_57"));
    textLabel2_57->setWordWrap(false);

    gridLayout83->addWidget(textLabel2_57, 5, 0, 1, 1);

    le19log = new QLineEdit(page_25);
    le19log->setObjectName(QString::fromUtf8("le19log"));

    gridLayout83->addWidget(le19log, 5, 1, 1, 1);

    spacerItem45 = new QSpacerItem(207, 141, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout83->addItem(spacerItem45, 6, 1, 1, 1);

    toolBox_17->addItem(page_25, QApplication::translate("CommandsClass", "g_bond files", 0, QApplication::UnicodeUTF8));
    page_26 = new QWidget();
    page_26->setObjectName(QString::fromUtf8("page_26"));
    page_26->setGeometry(QRect(0, 0, 288, 226));
    gridLayout84 = new QGridLayout(page_26);
    gridLayout84->setObjectName(QString::fromUtf8("gridLayout84"));
    ch19bond = new QCheckBox(page_26);
    ch19bond->setObjectName(QString::fromUtf8("ch19bond"));
    ch19bond->setChecked(true);

    gridLayout84->addWidget(ch19bond, 0, 0, 1, 4);

    ch19dist = new QCheckBox(page_26);
    ch19dist->setObjectName(QString::fromUtf8("ch19dist"));
    ch19dist->setChecked(true);

    gridLayout84->addWidget(ch19dist, 1, 0, 1, 5);

    textLabel2_138 = new QLabel(page_26);
    textLabel2_138->setObjectName(QString::fromUtf8("textLabel2_138"));
    textLabel2_138->setWordWrap(false);

    gridLayout84->addWidget(textLabel2_138, 2, 0, 1, 1);

    le19first = new QLineEdit(page_26);
    le19first->setObjectName(QString::fromUtf8("le19first"));
    le19first->setMaximumSize(QSize(91, 16777215));

    gridLayout84->addWidget(le19first, 2, 1, 1, 1);

    sp2threadslabel_19 = new QLabel(page_26);
    sp2threadslabel_19->setObjectName(QString::fromUtf8("sp2threadslabel_19"));
    sp2threadslabel_19->setWordWrap(false);

    gridLayout84->addWidget(sp2threadslabel_19, 2, 2, 1, 1);

    le19last = new QLineEdit(page_26);
    le19last->setObjectName(QString::fromUtf8("le19last"));
    le19last->setMaximumSize(QSize(91, 16777215));

    gridLayout84->addWidget(le19last, 2, 3, 1, 2);

    textLabel2_139 = new QLabel(page_26);
    textLabel2_139->setObjectName(QString::fromUtf8("textLabel2_139"));
    textLabel2_139->setWordWrap(false);

    gridLayout84->addWidget(textLabel2_139, 3, 0, 1, 3);

    le19only = new QLineEdit(page_26);
    le19only->setObjectName(QString::fromUtf8("le19only"));
    le19only->setMaximumSize(QSize(91, 16777215));

    gridLayout84->addWidget(le19only, 3, 3, 1, 2);

    textLabel2_140 = new QLabel(page_26);
    textLabel2_140->setObjectName(QString::fromUtf8("textLabel2_140"));
    textLabel2_140->setWordWrap(false);

    gridLayout84->addWidget(textLabel2_140, 4, 0, 1, 4);

    le19length = new QLineEdit(page_26);
    le19length->setObjectName(QString::fromUtf8("le19length"));
    le19length->setMaximumSize(QSize(91, 16777215));

    gridLayout84->addWidget(le19length, 4, 4, 1, 1);

    textLabel2_141 = new QLabel(page_26);
    textLabel2_141->setObjectName(QString::fromUtf8("textLabel2_141"));
    textLabel2_141->setWordWrap(false);

    gridLayout84->addWidget(textLabel2_141, 5, 0, 1, 4);

    le19width = new QLineEdit(page_26);
    le19width->setObjectName(QString::fromUtf8("le19width"));
    le19width->setMaximumSize(QSize(91, 16777215));

    gridLayout84->addWidget(le19width, 5, 4, 1, 1);

    spacerItem46 = new QSpacerItem(127, 101, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout84->addItem(spacerItem46, 6, 0, 1, 2);

    toolBox_17->addItem(page_26, QApplication::translate("CommandsClass", "g_bond options", 0, QApplication::UnicodeUTF8));

    gridLayout82->addWidget(toolBox_17, 0, 0, 1, 1);

    stackwMain->addWidget(stack_g_bond);
    stack_g_angle = new QWidget();
    stack_g_angle->setObjectName(QString::fromUtf8("stack_g_angle"));
    gridLayout85 = new QGridLayout(stack_g_angle);
    gridLayout85->setObjectName(QString::fromUtf8("gridLayout85"));
    toolBox_26 = new QToolBox(stack_g_angle);
    toolBox_26->setObjectName(QString::fromUtf8("toolBox_26"));
    toolBox_26->setFrameShape(QFrame::StyledPanel);
    page_43 = new QWidget();
    page_43->setObjectName(QString::fromUtf8("page_43"));
    page_43->setGeometry(QRect(0, 0, 171, 187));
    gridLayout86 = new QGridLayout(page_43);
    gridLayout86->setObjectName(QString::fromUtf8("gridLayout86"));
    textLabel2_92 = new QLabel(page_43);
    textLabel2_92->setObjectName(QString::fromUtf8("textLabel2_92"));
    textLabel2_92->setWordWrap(false);

    gridLayout86->addWidget(textLabel2_92, 0, 0, 1, 1);

    co6inputfile_23 = new QComboBox(page_43);
    co6inputfile_23->setObjectName(QString::fromUtf8("co6inputfile_23"));

    gridLayout86->addWidget(co6inputfile_23, 0, 1, 1, 1);

    textLabel2_93 = new QLabel(page_43);
    textLabel2_93->setObjectName(QString::fromUtf8("textLabel2_93"));
    textLabel2_93->setWordWrap(false);

    gridLayout86->addWidget(textLabel2_93, 1, 0, 1, 1);

    le6outputtrajfile_23 = new QLineEdit(page_43);
    le6outputtrajfile_23->setObjectName(QString::fromUtf8("le6outputtrajfile_23"));

    gridLayout86->addWidget(le6outputtrajfile_23, 1, 1, 1, 1);

    textLabel2_2_31 = new QLabel(page_43);
    textLabel2_2_31->setObjectName(QString::fromUtf8("textLabel2_2_31"));
    textLabel2_2_31->setWordWrap(false);

    gridLayout86->addWidget(textLabel2_2_31, 2, 0, 1, 1);

    le6outputconffile_23 = new QLineEdit(page_43);
    le6outputconffile_23->setObjectName(QString::fromUtf8("le6outputconffile_23"));

    gridLayout86->addWidget(le6outputconffile_23, 2, 1, 1, 1);

    textLabel1_30 = new QLabel(page_43);
    textLabel1_30->setObjectName(QString::fromUtf8("textLabel1_30"));
    textLabel1_30->setWordWrap(false);

    gridLayout86->addWidget(textLabel1_30, 3, 0, 1, 1);

    le6logfile_23 = new QLineEdit(page_43);
    le6logfile_23->setObjectName(QString::fromUtf8("le6logfile_23"));

    gridLayout86->addWidget(le6logfile_23, 3, 1, 1, 1);

    textLabel2_94 = new QLabel(page_43);
    textLabel2_94->setObjectName(QString::fromUtf8("textLabel2_94"));
    textLabel2_94->setWordWrap(false);

    gridLayout86->addWidget(textLabel2_94, 4, 0, 1, 1);

    le6energyfile_23 = new QLineEdit(page_43);
    le6energyfile_23->setObjectName(QString::fromUtf8("le6energyfile_23"));

    gridLayout86->addWidget(le6energyfile_23, 4, 1, 1, 1);

    spacerItem47 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout86->addItem(spacerItem47, 5, 1, 1, 1);

    toolBox_26->addItem(page_43, QApplication::translate("CommandsClass", "g_angle files", 0, QApplication::UnicodeUTF8));
    page_44 = new QWidget();
    page_44->setObjectName(QString::fromUtf8("page_44"));
    page_44->setGeometry(QRect(0, 0, 304, 155));
    gridLayout87 = new QGridLayout(page_44);
    gridLayout87->setObjectName(QString::fromUtf8("gridLayout87"));
    ch6loud_23 = new QCheckBox(page_44);
    ch6loud_23->setObjectName(QString::fromUtf8("ch6loud_23"));
    ch6loud_23->setChecked(true);

    gridLayout87->addWidget(ch6loud_23, 0, 0, 1, 1);

    spacerItem48 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout87->addItem(spacerItem48, 0, 1, 1, 1);

    ch6xray_23 = new QCheckBox(page_44);
    ch6xray_23->setObjectName(QString::fromUtf8("ch6xray_23"));

    gridLayout87->addWidget(ch6xray_23, 1, 0, 1, 2);

    textLabel2_95 = new QLabel(page_44);
    textLabel2_95->setObjectName(QString::fromUtf8("textLabel2_95"));
    textLabel2_95->setWordWrap(false);

    gridLayout87->addWidget(textLabel2_95, 2, 0, 2, 2);

    sp6status_23 = new QSpinBox(page_44);
    sp6status_23->setObjectName(QString::fromUtf8("sp6status_23"));
    sp6status_23->setMaximumSize(QSize(46, 16777215));
    sp6status_23->setValue(1);

    gridLayout87->addWidget(sp6status_23, 2, 2, 1, 1);

    sp6threads_23 = new QSpinBox(page_44);
    sp6threads_23->setObjectName(QString::fromUtf8("sp6threads_23"));
    sp6threads_23->setMaximumSize(QSize(46, 16777215));
    sp6threads_23->setValue(1);

    gridLayout87->addWidget(sp6threads_23, 3, 2, 2, 1);

    sp2threadslabel_11 = new QLabel(page_44);
    sp2threadslabel_11->setObjectName(QString::fromUtf8("sp2threadslabel_11"));
    sp2threadslabel_11->setWordWrap(false);

    gridLayout87->addWidget(sp2threadslabel_11, 4, 0, 1, 2);

    spacerItem49 = new QSpacerItem(20, 191, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout87->addItem(spacerItem49, 5, 0, 1, 1);

    toolBox_26->addItem(page_44, QApplication::translate("CommandsClass", "g_angle options", 0, QApplication::UnicodeUTF8));

    gridLayout85->addWidget(toolBox_26, 0, 0, 1, 1);

    stackwMain->addWidget(stack_g_angle);
    stack_g_dih = new QWidget();
    stack_g_dih->setObjectName(QString::fromUtf8("stack_g_dih"));
    gridLayout88 = new QGridLayout(stack_g_dih);
    gridLayout88->setObjectName(QString::fromUtf8("gridLayout88"));
    toolBox_25 = new QToolBox(stack_g_dih);
    toolBox_25->setObjectName(QString::fromUtf8("toolBox_25"));
    toolBox_25->setFrameShape(QFrame::StyledPanel);
    page_41 = new QWidget();
    page_41->setObjectName(QString::fromUtf8("page_41"));
    page_41->setGeometry(QRect(0, 0, 171, 187));
    gridLayout89 = new QGridLayout(page_41);
    gridLayout89->setObjectName(QString::fromUtf8("gridLayout89"));
    textLabel2_88 = new QLabel(page_41);
    textLabel2_88->setObjectName(QString::fromUtf8("textLabel2_88"));
    textLabel2_88->setWordWrap(false);

    gridLayout89->addWidget(textLabel2_88, 0, 0, 1, 1);

    co6inputfile_22 = new QComboBox(page_41);
    co6inputfile_22->setObjectName(QString::fromUtf8("co6inputfile_22"));

    gridLayout89->addWidget(co6inputfile_22, 0, 1, 1, 1);

    textLabel2_89 = new QLabel(page_41);
    textLabel2_89->setObjectName(QString::fromUtf8("textLabel2_89"));
    textLabel2_89->setWordWrap(false);

    gridLayout89->addWidget(textLabel2_89, 1, 0, 1, 1);

    le6outputtrajfile_22 = new QLineEdit(page_41);
    le6outputtrajfile_22->setObjectName(QString::fromUtf8("le6outputtrajfile_22"));

    gridLayout89->addWidget(le6outputtrajfile_22, 1, 1, 1, 1);

    textLabel2_2_30 = new QLabel(page_41);
    textLabel2_2_30->setObjectName(QString::fromUtf8("textLabel2_2_30"));
    textLabel2_2_30->setWordWrap(false);

    gridLayout89->addWidget(textLabel2_2_30, 2, 0, 1, 1);

    le6outputconffile_22 = new QLineEdit(page_41);
    le6outputconffile_22->setObjectName(QString::fromUtf8("le6outputconffile_22"));

    gridLayout89->addWidget(le6outputconffile_22, 2, 1, 1, 1);

    textLabel1_29 = new QLabel(page_41);
    textLabel1_29->setObjectName(QString::fromUtf8("textLabel1_29"));
    textLabel1_29->setWordWrap(false);

    gridLayout89->addWidget(textLabel1_29, 3, 0, 1, 1);

    le6logfile_22 = new QLineEdit(page_41);
    le6logfile_22->setObjectName(QString::fromUtf8("le6logfile_22"));

    gridLayout89->addWidget(le6logfile_22, 3, 1, 1, 1);

    textLabel2_90 = new QLabel(page_41);
    textLabel2_90->setObjectName(QString::fromUtf8("textLabel2_90"));
    textLabel2_90->setWordWrap(false);

    gridLayout89->addWidget(textLabel2_90, 4, 0, 1, 1);

    le6energyfile_22 = new QLineEdit(page_41);
    le6energyfile_22->setObjectName(QString::fromUtf8("le6energyfile_22"));

    gridLayout89->addWidget(le6energyfile_22, 4, 1, 1, 1);

    spacerItem50 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout89->addItem(spacerItem50, 5, 1, 1, 1);

    toolBox_25->addItem(page_41, QApplication::translate("CommandsClass", "g_dih files", 0, QApplication::UnicodeUTF8));
    page_42 = new QWidget();
    page_42->setObjectName(QString::fromUtf8("page_42"));
    page_42->setGeometry(QRect(0, 0, 304, 155));
    gridLayout90 = new QGridLayout(page_42);
    gridLayout90->setObjectName(QString::fromUtf8("gridLayout90"));
    ch6loud_22 = new QCheckBox(page_42);
    ch6loud_22->setObjectName(QString::fromUtf8("ch6loud_22"));
    ch6loud_22->setChecked(true);

    gridLayout90->addWidget(ch6loud_22, 0, 0, 1, 1);

    spacerItem51 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout90->addItem(spacerItem51, 0, 1, 1, 1);

    ch6xray_22 = new QCheckBox(page_42);
    ch6xray_22->setObjectName(QString::fromUtf8("ch6xray_22"));

    gridLayout90->addWidget(ch6xray_22, 1, 0, 1, 2);

    textLabel2_91 = new QLabel(page_42);
    textLabel2_91->setObjectName(QString::fromUtf8("textLabel2_91"));
    textLabel2_91->setWordWrap(false);

    gridLayout90->addWidget(textLabel2_91, 2, 0, 2, 2);

    sp6status_22 = new QSpinBox(page_42);
    sp6status_22->setObjectName(QString::fromUtf8("sp6status_22"));
    sp6status_22->setMaximumSize(QSize(46, 16777215));
    sp6status_22->setValue(1);

    gridLayout90->addWidget(sp6status_22, 2, 2, 1, 1);

    sp6threads_22 = new QSpinBox(page_42);
    sp6threads_22->setObjectName(QString::fromUtf8("sp6threads_22"));
    sp6threads_22->setMaximumSize(QSize(46, 16777215));
    sp6threads_22->setValue(1);

    gridLayout90->addWidget(sp6threads_22, 3, 2, 2, 1);

    sp2threadslabel_10 = new QLabel(page_42);
    sp2threadslabel_10->setObjectName(QString::fromUtf8("sp2threadslabel_10"));
    sp2threadslabel_10->setWordWrap(false);

    gridLayout90->addWidget(sp2threadslabel_10, 4, 0, 1, 2);

    spacerItem52 = new QSpacerItem(20, 191, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout90->addItem(spacerItem52, 5, 0, 1, 1);

    toolBox_25->addItem(page_42, QApplication::translate("CommandsClass", "g_dih options", 0, QApplication::UnicodeUTF8));

    gridLayout88->addWidget(toolBox_25, 0, 0, 1, 1);

    stackwMain->addWidget(stack_g_dih);
    stack_g_hbond = new QWidget();
    stack_g_hbond->setObjectName(QString::fromUtf8("stack_g_hbond"));
    gridLayout91 = new QGridLayout(stack_g_hbond);
    gridLayout91->setObjectName(QString::fromUtf8("gridLayout91"));
    toolBox_24 = new QToolBox(stack_g_hbond);
    toolBox_24->setObjectName(QString::fromUtf8("toolBox_24"));
    toolBox_24->setFrameShape(QFrame::StyledPanel);
    page_39 = new QWidget();
    page_39->setObjectName(QString::fromUtf8("page_39"));
    page_39->setGeometry(QRect(0, 0, 334, 431));
    gridLayout92 = new QGridLayout(page_39);
    gridLayout92->setObjectName(QString::fromUtf8("gridLayout92"));
    textLabel2_84 = new QLabel(page_39);
    textLabel2_84->setObjectName(QString::fromUtf8("textLabel2_84"));
    textLabel2_84->setMaximumSize(QSize(16777215, 21));
    textLabel2_84->setFont(font3);
    textLabel2_84->setWordWrap(false);

    gridLayout92->addWidget(textLabel2_84, 0, 0, 1, 1);

    cb22input = new QComboBox(page_39);
    cb22input->setObjectName(QString::fromUtf8("cb22input"));
    cb22input->setMaximumSize(QSize(16777215, 21));

    gridLayout92->addWidget(cb22input, 0, 1, 1, 1);

    textLabel2_145 = new QLabel(page_39);
    textLabel2_145->setObjectName(QString::fromUtf8("textLabel2_145"));
    textLabel2_145->setMaximumSize(QSize(16777215, 21));
    textLabel2_145->setFont(font3);
    textLabel2_145->setWordWrap(false);

    gridLayout92->addWidget(textLabel2_145, 1, 0, 1, 1);

    cb22_s = new QComboBox(page_39);
    cb22_s->setObjectName(QString::fromUtf8("cb22_s"));
    cb22_s->setMaximumSize(QSize(16777215, 21));

    gridLayout92->addWidget(cb22_s, 1, 1, 1, 1);

    textLabel2_143 = new QLabel(page_39);
    textLabel2_143->setObjectName(QString::fromUtf8("textLabel2_143"));
    textLabel2_143->setMaximumSize(QSize(16777215, 21));
    textLabel2_143->setWordWrap(false);

    gridLayout92->addWidget(textLabel2_143, 2, 0, 1, 1);

    cb22_n = new QComboBox(page_39);
    cb22_n->setObjectName(QString::fromUtf8("cb22_n"));
    cb22_n->setMaximumSize(QSize(16777215, 21));

    gridLayout92->addWidget(cb22_n, 2, 1, 1, 1);

    textLabel2_2_62 = new QLabel(page_39);
    textLabel2_2_62->setObjectName(QString::fromUtf8("textLabel2_2_62"));
    textLabel2_2_62->setMaximumSize(QSize(16777215, 21));
    textLabel2_2_62->setWordWrap(false);

    gridLayout92->addWidget(textLabel2_2_62, 3, 0, 1, 1);

    cb22_sel = new QComboBox(page_39);
    cb22_sel->setObjectName(QString::fromUtf8("cb22_sel"));
    cb22_sel->setMaximumSize(QSize(16777215, 21));

    gridLayout92->addWidget(cb22_sel, 3, 1, 1, 1);

    textLabel2_2_61 = new QLabel(page_39);
    textLabel2_2_61->setObjectName(QString::fromUtf8("textLabel2_2_61"));
    textLabel2_2_61->setMaximumSize(QSize(16777215, 21));
    textLabel2_2_61->setFont(font3);
    textLabel2_2_61->setWordWrap(false);

    gridLayout92->addWidget(textLabel2_2_61, 4, 0, 1, 1);

    le22_num = new QLineEdit(page_39);
    le22_num->setObjectName(QString::fromUtf8("le22_num"));
    le22_num->setMaximumSize(QSize(16777215, 21));

    gridLayout92->addWidget(le22_num, 4, 1, 1, 1);

    textLabel2_2_29 = new QLabel(page_39);
    textLabel2_2_29->setObjectName(QString::fromUtf8("textLabel2_2_29"));
    textLabel2_2_29->setMaximumSize(QSize(16777215, 21));
    textLabel2_2_29->setWordWrap(false);

    gridLayout92->addWidget(textLabel2_2_29, 5, 0, 1, 1);

    le22log = new QLineEdit(page_39);
    le22log->setObjectName(QString::fromUtf8("le22log"));
    le22log->setMaximumSize(QSize(16777215, 21));

    gridLayout92->addWidget(le22log, 5, 1, 1, 1);

    textLabel2_2_35 = new QLabel(page_39);
    textLabel2_2_35->setObjectName(QString::fromUtf8("textLabel2_2_35"));
    textLabel2_2_35->setMaximumSize(QSize(16777215, 21));
    textLabel2_2_35->setWordWrap(false);

    gridLayout92->addWidget(textLabel2_2_35, 6, 0, 1, 1);

    le22_ac = new QLineEdit(page_39);
    le22_ac->setObjectName(QString::fromUtf8("le22_ac"));
    le22_ac->setMaximumSize(QSize(16777215, 21));

    gridLayout92->addWidget(le22_ac, 6, 1, 1, 1);

    textLabel2_263 = new QLabel(page_39);
    textLabel2_263->setObjectName(QString::fromUtf8("textLabel2_263"));
    textLabel2_263->setMaximumSize(QSize(16777215, 21));
    textLabel2_263->setWordWrap(false);

    gridLayout92->addWidget(textLabel2_263, 7, 0, 1, 1);

    le22_dis = new QLineEdit(page_39);
    le22_dis->setObjectName(QString::fromUtf8("le22_dis"));
    le22_dis->setMaximumSize(QSize(16777215, 21));

    gridLayout92->addWidget(le22_dis, 7, 1, 1, 1);

    textLabel2_262 = new QLabel(page_39);
    textLabel2_262->setObjectName(QString::fromUtf8("textLabel2_262"));
    textLabel2_262->setMaximumSize(QSize(16777215, 21));
    textLabel2_262->setWordWrap(false);

    gridLayout92->addWidget(textLabel2_262, 8, 0, 1, 1);

    le22_ang = new QLineEdit(page_39);
    le22_ang->setObjectName(QString::fromUtf8("le22_ang"));
    le22_ang->setMaximumSize(QSize(16777215, 21));

    gridLayout92->addWidget(le22_ang, 8, 1, 1, 1);

    textLabel2_85 = new QLabel(page_39);
    textLabel2_85->setObjectName(QString::fromUtf8("textLabel2_85"));
    textLabel2_85->setMaximumSize(QSize(16777215, 21));
    textLabel2_85->setWordWrap(false);

    gridLayout92->addWidget(textLabel2_85, 9, 0, 1, 1);

    le22_hx = new QLineEdit(page_39);
    le22_hx->setObjectName(QString::fromUtf8("le22_hx"));
    le22_hx->setMaximumSize(QSize(16777215, 21));

    gridLayout92->addWidget(le22_hx, 9, 1, 1, 1);

    textLabel1_35 = new QLabel(page_39);
    textLabel1_35->setObjectName(QString::fromUtf8("textLabel1_35"));
    textLabel1_35->setMaximumSize(QSize(16777215, 21));
    textLabel1_35->setWordWrap(false);

    gridLayout92->addWidget(textLabel1_35, 10, 0, 1, 1);

    le22_hbn = new QLineEdit(page_39);
    le22_hbn->setObjectName(QString::fromUtf8("le22_hbn"));
    le22_hbn->setMaximumSize(QSize(16777215, 21));

    gridLayout92->addWidget(le22_hbn, 10, 1, 1, 1);

    textLabel2_144 = new QLabel(page_39);
    textLabel2_144->setObjectName(QString::fromUtf8("textLabel2_144"));
    textLabel2_144->setMaximumSize(QSize(16777215, 21));
    textLabel2_144->setWordWrap(false);

    gridLayout92->addWidget(textLabel2_144, 11, 0, 1, 1);

    le22_hbm = new QLineEdit(page_39);
    le22_hbm->setObjectName(QString::fromUtf8("le22_hbm"));
    le22_hbm->setMaximumSize(QSize(16777215, 21));

    gridLayout92->addWidget(le22_hbm, 11, 1, 1, 1);

    textLabel2_86 = new QLabel(page_39);
    textLabel2_86->setObjectName(QString::fromUtf8("textLabel2_86"));
    textLabel2_86->setMaximumSize(QSize(16777215, 21));
    textLabel2_86->setWordWrap(false);

    gridLayout92->addWidget(textLabel2_86, 12, 0, 1, 1);

    le22_don = new QLineEdit(page_39);
    le22_don->setObjectName(QString::fromUtf8("le22_don"));
    le22_don->setMaximumSize(QSize(16777215, 21));

    gridLayout92->addWidget(le22_don, 12, 1, 1, 1);

    textLabel2_146 = new QLabel(page_39);
    textLabel2_146->setObjectName(QString::fromUtf8("textLabel2_146"));
    textLabel2_146->setMaximumSize(QSize(16777215, 21));
    textLabel2_146->setWordWrap(false);

    gridLayout92->addWidget(textLabel2_146, 13, 0, 1, 1);

    le22_dan = new QLineEdit(page_39);
    le22_dan->setObjectName(QString::fromUtf8("le22_dan"));
    le22_dan->setMaximumSize(QSize(16777215, 21));

    gridLayout92->addWidget(le22_dan, 13, 1, 1, 1);

    textLabel2_147 = new QLabel(page_39);
    textLabel2_147->setObjectName(QString::fromUtf8("textLabel2_147"));
    textLabel2_147->setMaximumSize(QSize(16777215, 21));
    textLabel2_147->setWordWrap(false);

    gridLayout92->addWidget(textLabel2_147, 14, 0, 1, 1);

    le22_life = new QLineEdit(page_39);
    le22_life->setObjectName(QString::fromUtf8("le22_life"));
    le22_life->setMaximumSize(QSize(16777215, 21));

    gridLayout92->addWidget(le22_life, 14, 1, 1, 1);

    toolBox_24->addItem(page_39, QApplication::translate("CommandsClass", "g_hbond files", 0, QApplication::UnicodeUTF8));
    page_40 = new QWidget();
    page_40->setObjectName(QString::fromUtf8("page_40"));
    page_40->setGeometry(QRect(0, 0, 312, 399));
    gridLayout93 = new QGridLayout(page_40);
    gridLayout93->setObjectName(QString::fromUtf8("gridLayout93"));
    ch22solvent = new QCheckBox(page_40);
    ch22solvent->setObjectName(QString::fromUtf8("ch22solvent"));

    gridLayout93->addWidget(ch22solvent, 0, 0, 1, 3);

    ch22distance = new QCheckBox(page_40);
    ch22distance->setObjectName(QString::fromUtf8("ch22distance"));
    ch22distance->setChecked(true);

    gridLayout93->addWidget(ch22distance, 1, 0, 1, 3);

    ch22regard = new QCheckBox(page_40);
    ch22regard->setObjectName(QString::fromUtf8("ch22regard"));
    ch22regard->setChecked(true);

    gridLayout93->addWidget(ch22regard, 2, 0, 1, 4);

    ch22look = new QCheckBox(page_40);
    ch22look->setObjectName(QString::fromUtf8("ch22look"));
    ch22look->setChecked(false);

    gridLayout93->addWidget(ch22look, 3, 0, 1, 5);

    textLabel2_148 = new QLabel(page_40);
    textLabel2_148->setObjectName(QString::fromUtf8("textLabel2_148"));
    textLabel2_148->setWordWrap(false);

    gridLayout93->addWidget(textLabel2_148, 4, 0, 1, 1);

    le22first = new QLineEdit(page_40);
    le22first->setObjectName(QString::fromUtf8("le22first"));
    le22first->setMaximumSize(QSize(91, 16777215));

    gridLayout93->addWidget(le22first, 4, 1, 1, 1);

    sp2threadslabel_20 = new QLabel(page_40);
    sp2threadslabel_20->setObjectName(QString::fromUtf8("sp2threadslabel_20"));
    sp2threadslabel_20->setWordWrap(false);

    gridLayout93->addWidget(sp2threadslabel_20, 4, 2, 1, 1);

    le22last = new QLineEdit(page_40);
    le22last->setObjectName(QString::fromUtf8("le22last"));
    le22last->setMaximumSize(QSize(91, 16777215));

    gridLayout93->addWidget(le22last, 4, 3, 1, 2);

    textLabel2_149 = new QLabel(page_40);
    textLabel2_149->setObjectName(QString::fromUtf8("textLabel2_149"));
    textLabel2_149->setWordWrap(false);

    gridLayout93->addWidget(textLabel2_149, 5, 0, 1, 3);

    le22only = new QLineEdit(page_40);
    le22only->setObjectName(QString::fromUtf8("le22only"));
    le22only->setMaximumSize(QSize(91, 16777215));

    gridLayout93->addWidget(le22only, 5, 3, 1, 2);

    textLabel2_87 = new QLabel(page_40);
    textLabel2_87->setObjectName(QString::fromUtf8("textLabel2_87"));
    textLabel2_87->setWordWrap(false);

    gridLayout93->addWidget(textLabel2_87, 6, 0, 1, 1);

    le22cutang = new QLineEdit(page_40);
    le22cutang->setObjectName(QString::fromUtf8("le22cutang"));
    le22cutang->setMaximumSize(QSize(91, 16777215));

    gridLayout93->addWidget(le22cutang, 6, 1, 1, 1);

    sp2threadslabel_21 = new QLabel(page_40);
    sp2threadslabel_21->setObjectName(QString::fromUtf8("sp2threadslabel_21"));
    sp2threadslabel_21->setWordWrap(false);

    gridLayout93->addWidget(sp2threadslabel_21, 6, 2, 1, 2);

    le22cutrad = new QLineEdit(page_40);
    le22cutrad->setObjectName(QString::fromUtf8("le22cutrad"));
    le22cutrad->setMaximumSize(QSize(91, 16777215));

    gridLayout93->addWidget(le22cutrad, 6, 4, 1, 1);

    sp2threadslabel_22 = new QLabel(page_40);
    sp2threadslabel_22->setObjectName(QString::fromUtf8("sp2threadslabel_22"));
    sp2threadslabel_22->setWordWrap(false);

    gridLayout93->addWidget(sp2threadslabel_22, 7, 0, 1, 3);

    le22binang = new QLineEdit(page_40);
    le22binang->setObjectName(QString::fromUtf8("le22binang"));
    le22binang->setMaximumSize(QSize(91, 16777215));

    gridLayout93->addWidget(le22binang, 7, 4, 1, 1);

    sp2threadslabel_23 = new QLabel(page_40);
    sp2threadslabel_23->setObjectName(QString::fromUtf8("sp2threadslabel_23"));
    sp2threadslabel_23->setWordWrap(false);

    gridLayout93->addWidget(sp2threadslabel_23, 8, 0, 1, 3);

    le22bindist = new QLineEdit(page_40);
    le22bindist->setObjectName(QString::fromUtf8("le22bindist"));
    le22bindist->setMaximumSize(QSize(91, 16777215));

    gridLayout93->addWidget(le22bindist, 8, 4, 1, 1);

    sp2threadslabel_9 = new QLabel(page_40);
    sp2threadslabel_9->setObjectName(QString::fromUtf8("sp2threadslabel_9"));
    sp2threadslabel_9->setWordWrap(false);

    gridLayout93->addWidget(sp2threadslabel_9, 9, 0, 1, 4);

    le22shell = new QLineEdit(page_40);
    le22shell->setObjectName(QString::fromUtf8("le22shell"));
    le22shell->setMaximumSize(QSize(91, 16777215));

    gridLayout93->addWidget(le22shell, 9, 4, 1, 1);

    sp2threadslabel_24 = new QLabel(page_40);
    sp2threadslabel_24->setObjectName(QString::fromUtf8("sp2threadslabel_24"));
    sp2threadslabel_24->setWordWrap(false);

    gridLayout93->addWidget(sp2threadslabel_24, 10, 0, 1, 2);

    le22temp = new QLineEdit(page_40);
    le22temp->setObjectName(QString::fromUtf8("le22temp"));
    le22temp->setMaximumSize(QSize(91, 16777215));

    gridLayout93->addWidget(le22temp, 10, 4, 1, 1);

    spacerItem53 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout93->addItem(spacerItem53, 11, 1, 1, 1);

    toolBox_24->addItem(page_40, QApplication::translate("CommandsClass", "g_hbond options (1)", 0, QApplication::UnicodeUTF8));
    page_49 = new QWidget();
    page_49->setObjectName(QString::fromUtf8("page_49"));
    page_49->setGeometry(QRect(0, 0, 327, 399));
    gridLayout94 = new QGridLayout(page_49);
    gridLayout94->setObjectName(QString::fromUtf8("gridLayout94"));
    ch22single = new QCheckBox(page_49);
    ch22single->setObjectName(QString::fromUtf8("ch22single"));
    ch22single->setMaximumSize(QSize(16777215, 46));
    ch22single->setChecked(true);

    gridLayout94->addWidget(ch22single, 0, 0, 1, 2);

    ch22norm = new QCheckBox(page_49);
    ch22norm->setObjectName(QString::fromUtf8("ch22norm"));
    ch22norm->setChecked(true);

    gridLayout94->addWidget(ch22norm, 1, 0, 1, 1);

    label_73 = new QLabel(page_49);
    label_73->setObjectName(QString::fromUtf8("label_73"));
    label_73->setMaximumSize(QSize(16777215, 31));

    gridLayout94->addWidget(label_73, 2, 0, 1, 1);

    le22corr = new QLineEdit(page_49);
    le22corr->setObjectName(QString::fromUtf8("le22corr"));
    le22corr->setMaximumSize(QSize(51, 16777215));

    gridLayout94->addWidget(le22corr, 2, 1, 1, 1);

    label_77 = new QLabel(page_49);
    label_77->setObjectName(QString::fromUtf8("label_77"));
    label_77->setMaximumSize(QSize(16777215, 46));

    gridLayout94->addWidget(label_77, 3, 0, 1, 1);

    le22theore = new QLineEdit(page_49);
    le22theore->setObjectName(QString::fromUtf8("le22theore"));
    le22theore->setMaximumSize(QSize(51, 16777215));

    gridLayout94->addWidget(le22theore, 3, 1, 1, 1);

    label_78 = new QLabel(page_49);
    label_78->setObjectName(QString::fromUtf8("label_78"));

    gridLayout94->addWidget(label_78, 4, 0, 1, 1);

    sp22length = new QSpinBox(page_49);
    sp22length->setObjectName(QString::fromUtf8("sp22length"));
    sp22length->setMaximumSize(QSize(46, 16777215));
    sp22length->setMinimum(-1);
    sp22length->setValue(-1);

    gridLayout94->addWidget(sp22length, 4, 1, 1, 1);

    hboxLayout1 = new QHBoxLayout();
    hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
    label_80 = new QLabel(page_49);
    label_80->setObjectName(QString::fromUtf8("label_80"));

    hboxLayout1->addWidget(label_80);

    cb22fit = new QComboBox(page_49);
    cb22fit->setObjectName(QString::fromUtf8("cb22fit"));
    cb22fit->setMaximumSize(QSize(112, 16777215));

    hboxLayout1->addWidget(cb22fit);


    gridLayout94->addLayout(hboxLayout1, 5, 0, 1, 2);

    hboxLayout2 = new QHBoxLayout();
    hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
    label_83 = new QLabel(page_49);
    label_83->setObjectName(QString::fromUtf8("label_83"));

    hboxLayout2->addWidget(label_83);

    cb22order = new QComboBox(page_49);
    cb22order->setObjectName(QString::fromUtf8("cb22order"));
    cb22order->setMaximumSize(QSize(112, 16777215));

    hboxLayout2->addWidget(cb22order);


    gridLayout94->addLayout(hboxLayout2, 6, 0, 1, 2);

    label_81 = new QLabel(page_49);
    label_81->setObjectName(QString::fromUtf8("label_81"));
    label_81->setMaximumSize(QSize(16777215, 31));

    gridLayout94->addWidget(label_81, 7, 0, 1, 1);

    sp22skipcorr = new QSpinBox(page_49);
    sp22skipcorr->setObjectName(QString::fromUtf8("sp22skipcorr"));
    sp22skipcorr->setMaximumSize(QSize(46, 16777215));
    sp22skipcorr->setValue(0);

    gridLayout94->addWidget(sp22skipcorr, 7, 1, 1, 1);

    label_79 = new QLabel(page_49);
    label_79->setObjectName(QString::fromUtf8("label_79"));

    gridLayout94->addWidget(label_79, 8, 0, 1, 1);

    le22begin = new QLineEdit(page_49);
    le22begin->setObjectName(QString::fromUtf8("le22begin"));
    le22begin->setMaximumSize(QSize(51, 16777215));

    gridLayout94->addWidget(le22begin, 8, 1, 1, 1);

    label_82 = new QLabel(page_49);
    label_82->setObjectName(QString::fromUtf8("label_82"));

    gridLayout94->addWidget(label_82, 9, 0, 1, 1);

    le22end = new QLineEdit(page_49);
    le22end->setObjectName(QString::fromUtf8("le22end"));
    le22end->setMaximumSize(QSize(51, 16777215));

    gridLayout94->addWidget(le22end, 9, 1, 1, 1);

    spacerItem54 = new QSpacerItem(127, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout94->addItem(spacerItem54, 10, 0, 1, 1);

    toolBox_24->addItem(page_49, QApplication::translate("CommandsClass", "g_hbond options (2)", 0, QApplication::UnicodeUTF8));

    gridLayout91->addWidget(toolBox_24, 0, 0, 1, 1);

    stackwMain->addWidget(stack_g_hbond);
    stack_g_saltbr = new QWidget();
    stack_g_saltbr->setObjectName(QString::fromUtf8("stack_g_saltbr"));
    gridLayout95 = new QGridLayout(stack_g_saltbr);
    gridLayout95->setObjectName(QString::fromUtf8("gridLayout95"));
    toolBox_23 = new QToolBox(stack_g_saltbr);
    toolBox_23->setObjectName(QString::fromUtf8("toolBox_23"));
    toolBox_23->setFrameShape(QFrame::StyledPanel);
    page_37 = new QWidget();
    page_37->setObjectName(QString::fromUtf8("page_37"));
    page_37->setGeometry(QRect(0, 0, 350, 441));
    gridLayout96 = new QGridLayout(page_37);
    gridLayout96->setObjectName(QString::fromUtf8("gridLayout96"));
    textLabel2_80 = new QLabel(page_37);
    textLabel2_80->setObjectName(QString::fromUtf8("textLabel2_80"));
    textLabel2_80->setWordWrap(false);

    gridLayout96->addWidget(textLabel2_80, 0, 0, 1, 1);

    co6inputfile_20 = new QComboBox(page_37);
    co6inputfile_20->setObjectName(QString::fromUtf8("co6inputfile_20"));

    gridLayout96->addWidget(co6inputfile_20, 0, 1, 1, 1);

    textLabel2_81 = new QLabel(page_37);
    textLabel2_81->setObjectName(QString::fromUtf8("textLabel2_81"));
    textLabel2_81->setWordWrap(false);

    gridLayout96->addWidget(textLabel2_81, 1, 0, 1, 1);

    le6outputtrajfile_20 = new QLineEdit(page_37);
    le6outputtrajfile_20->setObjectName(QString::fromUtf8("le6outputtrajfile_20"));

    gridLayout96->addWidget(le6outputtrajfile_20, 1, 1, 1, 1);

    textLabel2_2_28 = new QLabel(page_37);
    textLabel2_2_28->setObjectName(QString::fromUtf8("textLabel2_2_28"));
    textLabel2_2_28->setWordWrap(false);

    gridLayout96->addWidget(textLabel2_2_28, 2, 0, 1, 1);

    le6outputconffile_20 = new QLineEdit(page_37);
    le6outputconffile_20->setObjectName(QString::fromUtf8("le6outputconffile_20"));

    gridLayout96->addWidget(le6outputconffile_20, 2, 1, 1, 1);

    textLabel1_27 = new QLabel(page_37);
    textLabel1_27->setObjectName(QString::fromUtf8("textLabel1_27"));
    textLabel1_27->setWordWrap(false);

    gridLayout96->addWidget(textLabel1_27, 3, 0, 1, 1);

    le6logfile_20 = new QLineEdit(page_37);
    le6logfile_20->setObjectName(QString::fromUtf8("le6logfile_20"));

    gridLayout96->addWidget(le6logfile_20, 3, 1, 1, 1);

    textLabel2_82 = new QLabel(page_37);
    textLabel2_82->setObjectName(QString::fromUtf8("textLabel2_82"));
    textLabel2_82->setWordWrap(false);

    gridLayout96->addWidget(textLabel2_82, 4, 0, 1, 1);

    le6energyfile_20 = new QLineEdit(page_37);
    le6energyfile_20->setObjectName(QString::fromUtf8("le6energyfile_20"));

    gridLayout96->addWidget(le6energyfile_20, 4, 1, 1, 1);

    spacerItem55 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout96->addItem(spacerItem55, 5, 1, 1, 1);

    toolBox_23->addItem(page_37, QApplication::translate("CommandsClass", "g_saltbr files", 0, QApplication::UnicodeUTF8));
    page_38 = new QWidget();
    page_38->setObjectName(QString::fromUtf8("page_38"));
    page_38->setGeometry(QRect(0, 0, 304, 155));
    gridLayout97 = new QGridLayout(page_38);
    gridLayout97->setObjectName(QString::fromUtf8("gridLayout97"));
    ch6loud_20 = new QCheckBox(page_38);
    ch6loud_20->setObjectName(QString::fromUtf8("ch6loud_20"));
    ch6loud_20->setChecked(true);

    gridLayout97->addWidget(ch6loud_20, 0, 0, 1, 1);

    spacerItem56 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout97->addItem(spacerItem56, 0, 1, 1, 1);

    ch6xray_20 = new QCheckBox(page_38);
    ch6xray_20->setObjectName(QString::fromUtf8("ch6xray_20"));

    gridLayout97->addWidget(ch6xray_20, 1, 0, 1, 2);

    textLabel2_83 = new QLabel(page_38);
    textLabel2_83->setObjectName(QString::fromUtf8("textLabel2_83"));
    textLabel2_83->setWordWrap(false);

    gridLayout97->addWidget(textLabel2_83, 2, 0, 2, 2);

    sp6status_20 = new QSpinBox(page_38);
    sp6status_20->setObjectName(QString::fromUtf8("sp6status_20"));
    sp6status_20->setMaximumSize(QSize(46, 16777215));
    sp6status_20->setValue(1);

    gridLayout97->addWidget(sp6status_20, 2, 2, 1, 1);

    sp6threads_20 = new QSpinBox(page_38);
    sp6threads_20->setObjectName(QString::fromUtf8("sp6threads_20"));
    sp6threads_20->setMaximumSize(QSize(46, 16777215));
    sp6threads_20->setValue(1);

    gridLayout97->addWidget(sp6threads_20, 3, 2, 2, 1);

    sp2threadslabel_8 = new QLabel(page_38);
    sp2threadslabel_8->setObjectName(QString::fromUtf8("sp2threadslabel_8"));
    sp2threadslabel_8->setWordWrap(false);

    gridLayout97->addWidget(sp2threadslabel_8, 4, 0, 1, 2);

    spacerItem57 = new QSpacerItem(20, 191, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout97->addItem(spacerItem57, 5, 0, 1, 1);

    toolBox_23->addItem(page_38, QApplication::translate("CommandsClass", "g_saltbr options", 0, QApplication::UnicodeUTF8));

    gridLayout95->addWidget(toolBox_23, 0, 0, 1, 1);

    stackwMain->addWidget(stack_g_saltbr);
    stack_g_sgangle = new QWidget();
    stack_g_sgangle->setObjectName(QString::fromUtf8("stack_g_sgangle"));
    gridLayout98 = new QGridLayout(stack_g_sgangle);
    gridLayout98->setObjectName(QString::fromUtf8("gridLayout98"));
    toolBox_22 = new QToolBox(stack_g_sgangle);
    toolBox_22->setObjectName(QString::fromUtf8("toolBox_22"));
    toolBox_22->setFrameShape(QFrame::StyledPanel);
    page_35 = new QWidget();
    page_35->setObjectName(QString::fromUtf8("page_35"));
    page_35->setGeometry(QRect(0, 0, 350, 441));
    gridLayout99 = new QGridLayout(page_35);
    gridLayout99->setObjectName(QString::fromUtf8("gridLayout99"));
    textLabel2_76 = new QLabel(page_35);
    textLabel2_76->setObjectName(QString::fromUtf8("textLabel2_76"));
    textLabel2_76->setWordWrap(false);

    gridLayout99->addWidget(textLabel2_76, 0, 0, 1, 1);

    co6inputfile_19 = new QComboBox(page_35);
    co6inputfile_19->setObjectName(QString::fromUtf8("co6inputfile_19"));

    gridLayout99->addWidget(co6inputfile_19, 0, 1, 1, 1);

    textLabel2_77 = new QLabel(page_35);
    textLabel2_77->setObjectName(QString::fromUtf8("textLabel2_77"));
    textLabel2_77->setWordWrap(false);

    gridLayout99->addWidget(textLabel2_77, 1, 0, 1, 1);

    le6outputtrajfile_19 = new QLineEdit(page_35);
    le6outputtrajfile_19->setObjectName(QString::fromUtf8("le6outputtrajfile_19"));

    gridLayout99->addWidget(le6outputtrajfile_19, 1, 1, 1, 1);

    textLabel2_2_27 = new QLabel(page_35);
    textLabel2_2_27->setObjectName(QString::fromUtf8("textLabel2_2_27"));
    textLabel2_2_27->setWordWrap(false);

    gridLayout99->addWidget(textLabel2_2_27, 2, 0, 1, 1);

    le6outputconffile_19 = new QLineEdit(page_35);
    le6outputconffile_19->setObjectName(QString::fromUtf8("le6outputconffile_19"));

    gridLayout99->addWidget(le6outputconffile_19, 2, 1, 1, 1);

    textLabel1_26 = new QLabel(page_35);
    textLabel1_26->setObjectName(QString::fromUtf8("textLabel1_26"));
    textLabel1_26->setWordWrap(false);

    gridLayout99->addWidget(textLabel1_26, 3, 0, 1, 1);

    le6logfile_19 = new QLineEdit(page_35);
    le6logfile_19->setObjectName(QString::fromUtf8("le6logfile_19"));

    gridLayout99->addWidget(le6logfile_19, 3, 1, 1, 1);

    textLabel2_78 = new QLabel(page_35);
    textLabel2_78->setObjectName(QString::fromUtf8("textLabel2_78"));
    textLabel2_78->setWordWrap(false);

    gridLayout99->addWidget(textLabel2_78, 4, 0, 1, 1);

    le6energyfile_19 = new QLineEdit(page_35);
    le6energyfile_19->setObjectName(QString::fromUtf8("le6energyfile_19"));

    gridLayout99->addWidget(le6energyfile_19, 4, 1, 1, 1);

    spacerItem58 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout99->addItem(spacerItem58, 5, 1, 1, 1);

    toolBox_22->addItem(page_35, QApplication::translate("CommandsClass", "g_sgangle files", 0, QApplication::UnicodeUTF8));
    page_36 = new QWidget();
    page_36->setObjectName(QString::fromUtf8("page_36"));
    page_36->setGeometry(QRect(0, 0, 304, 155));
    gridLayout100 = new QGridLayout(page_36);
    gridLayout100->setObjectName(QString::fromUtf8("gridLayout100"));
    ch6loud_19 = new QCheckBox(page_36);
    ch6loud_19->setObjectName(QString::fromUtf8("ch6loud_19"));
    ch6loud_19->setChecked(true);

    gridLayout100->addWidget(ch6loud_19, 0, 0, 1, 1);

    spacerItem59 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout100->addItem(spacerItem59, 0, 1, 1, 1);

    ch6xray_19 = new QCheckBox(page_36);
    ch6xray_19->setObjectName(QString::fromUtf8("ch6xray_19"));

    gridLayout100->addWidget(ch6xray_19, 1, 0, 1, 2);

    textLabel2_79 = new QLabel(page_36);
    textLabel2_79->setObjectName(QString::fromUtf8("textLabel2_79"));
    textLabel2_79->setWordWrap(false);

    gridLayout100->addWidget(textLabel2_79, 2, 0, 2, 2);

    sp6status_19 = new QSpinBox(page_36);
    sp6status_19->setObjectName(QString::fromUtf8("sp6status_19"));
    sp6status_19->setMaximumSize(QSize(46, 16777215));
    sp6status_19->setValue(1);

    gridLayout100->addWidget(sp6status_19, 2, 2, 1, 1);

    sp6threads_19 = new QSpinBox(page_36);
    sp6threads_19->setObjectName(QString::fromUtf8("sp6threads_19"));
    sp6threads_19->setMaximumSize(QSize(46, 16777215));
    sp6threads_19->setValue(1);

    gridLayout100->addWidget(sp6threads_19, 3, 2, 2, 1);

    sp2threadslabel_7 = new QLabel(page_36);
    sp2threadslabel_7->setObjectName(QString::fromUtf8("sp2threadslabel_7"));
    sp2threadslabel_7->setWordWrap(false);

    gridLayout100->addWidget(sp2threadslabel_7, 4, 0, 1, 2);

    spacerItem60 = new QSpacerItem(20, 191, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout100->addItem(spacerItem60, 5, 0, 1, 1);

    toolBox_22->addItem(page_36, QApplication::translate("CommandsClass", "g_sgangle options", 0, QApplication::UnicodeUTF8));

    gridLayout98->addWidget(toolBox_22, 0, 0, 1, 1);

    stackwMain->addWidget(stack_g_sgangle);
    stack_g_potential = new QWidget();
    stack_g_potential->setObjectName(QString::fromUtf8("stack_g_potential"));
    gridLayout101 = new QGridLayout(stack_g_potential);
    gridLayout101->setObjectName(QString::fromUtf8("gridLayout101"));
    toolBox_21 = new QToolBox(stack_g_potential);
    toolBox_21->setObjectName(QString::fromUtf8("toolBox_21"));
    toolBox_21->setFrameShape(QFrame::StyledPanel);
    page_33 = new QWidget();
    page_33->setObjectName(QString::fromUtf8("page_33"));
    page_33->setGeometry(QRect(0, 0, 350, 441));
    gridLayout102 = new QGridLayout(page_33);
    gridLayout102->setObjectName(QString::fromUtf8("gridLayout102"));
    textLabel2_72 = new QLabel(page_33);
    textLabel2_72->setObjectName(QString::fromUtf8("textLabel2_72"));
    textLabel2_72->setFont(font3);
    textLabel2_72->setWordWrap(false);

    gridLayout102->addWidget(textLabel2_72, 0, 0, 1, 1);

    textLabel2_73 = new QLabel(page_33);
    textLabel2_73->setObjectName(QString::fromUtf8("textLabel2_73"));
    textLabel2_73->setFont(font3);
    textLabel2_73->setWordWrap(false);

    gridLayout102->addWidget(textLabel2_73, 1, 0, 1, 2);

    cb25input = new QComboBox(page_33);
    cb25input->setObjectName(QString::fromUtf8("cb25input"));

    gridLayout102->addWidget(cb25input, 0, 2, 1, 1);

    cb25_n = new QComboBox(page_33);
    cb25_n->setObjectName(QString::fromUtf8("cb25_n"));

    gridLayout102->addWidget(cb25_n, 1, 2, 2, 1);

    textLabel2_128 = new QLabel(page_33);
    textLabel2_128->setObjectName(QString::fromUtf8("textLabel2_128"));
    textLabel2_128->setFont(font3);
    textLabel2_128->setWordWrap(false);

    gridLayout102->addWidget(textLabel2_128, 2, 0, 2, 2);

    cb25_s = new QComboBox(page_33);
    cb25_s->setObjectName(QString::fromUtf8("cb25_s"));

    gridLayout102->addWidget(cb25_s, 3, 2, 1, 1);

    textLabel2_2_26 = new QLabel(page_33);
    textLabel2_2_26->setObjectName(QString::fromUtf8("textLabel2_2_26"));
    textLabel2_2_26->setFont(font3);
    textLabel2_2_26->setWordWrap(false);

    gridLayout102->addWidget(textLabel2_2_26, 4, 0, 1, 1);

    le25output = new QLineEdit(page_33);
    le25output->setObjectName(QString::fromUtf8("le25output"));

    gridLayout102->addWidget(le25output, 4, 2, 1, 1);

    textLabel1_25 = new QLabel(page_33);
    textLabel1_25->setObjectName(QString::fromUtf8("textLabel1_25"));
    textLabel1_25->setFont(font3);
    textLabel1_25->setWordWrap(false);

    gridLayout102->addWidget(textLabel1_25, 5, 0, 1, 1);

    le25_oc = new QLineEdit(page_33);
    le25_oc->setObjectName(QString::fromUtf8("le25_oc"));

    gridLayout102->addWidget(le25_oc, 5, 2, 1, 1);

    textLabel2_74 = new QLabel(page_33);
    textLabel2_74->setObjectName(QString::fromUtf8("textLabel2_74"));
    textLabel2_74->setFont(font3);
    textLabel2_74->setWordWrap(false);

    gridLayout102->addWidget(textLabel2_74, 6, 0, 1, 1);

    le25_of = new QLineEdit(page_33);
    le25_of->setObjectName(QString::fromUtf8("le25_of"));

    gridLayout102->addWidget(le25_of, 6, 2, 1, 1);

    spacerItem61 = new QSpacerItem(195, 141, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout102->addItem(spacerItem61, 7, 2, 1, 1);

    toolBox_21->addItem(page_33, QApplication::translate("CommandsClass", "g_potential files", 0, QApplication::UnicodeUTF8));
    page_34 = new QWidget();
    page_34->setObjectName(QString::fromUtf8("page_34"));
    page_34->setGeometry(QRect(0, 0, 315, 347));
    gridLayout103 = new QGridLayout(page_34);
    gridLayout103->setObjectName(QString::fromUtf8("gridLayout103"));
    ch25sphere = new QCheckBox(page_34);
    ch25sphere->setObjectName(QString::fromUtf8("ch25sphere"));
    ch25sphere->setChecked(false);

    gridLayout103->addWidget(ch25sphere, 0, 0, 1, 3);

    textLabel2_130 = new QLabel(page_34);
    textLabel2_130->setObjectName(QString::fromUtf8("textLabel2_130"));
    textLabel2_130->setWordWrap(false);

    gridLayout103->addWidget(textLabel2_130, 1, 0, 1, 1);

    le25first = new QLineEdit(page_34);
    le25first->setObjectName(QString::fromUtf8("le25first"));
    le25first->setMaximumSize(QSize(91, 16777215));

    gridLayout103->addWidget(le25first, 1, 1, 1, 1);

    sp2threadslabel_15 = new QLabel(page_34);
    sp2threadslabel_15->setObjectName(QString::fromUtf8("sp2threadslabel_15"));
    sp2threadslabel_15->setWordWrap(false);

    gridLayout103->addWidget(sp2threadslabel_15, 1, 2, 1, 1);

    le25last = new QLineEdit(page_34);
    le25last->setObjectName(QString::fromUtf8("le25last"));
    le25last->setMaximumSize(QSize(91, 16777215));

    gridLayout103->addWidget(le25last, 1, 3, 1, 2);

    textLabel2_129 = new QLabel(page_34);
    textLabel2_129->setObjectName(QString::fromUtf8("textLabel2_129"));
    textLabel2_129->setWordWrap(false);

    gridLayout103->addWidget(textLabel2_129, 2, 0, 1, 3);

    le25only = new QLineEdit(page_34);
    le25only->setObjectName(QString::fromUtf8("le25only"));
    le25only->setMaximumSize(QSize(91, 16777215));

    gridLayout103->addWidget(le25only, 2, 3, 1, 2);

    textLabel2_131 = new QLabel(page_34);
    textLabel2_131->setObjectName(QString::fromUtf8("textLabel2_131"));
    textLabel2_131->setWordWrap(false);

    gridLayout103->addWidget(textLabel2_131, 3, 0, 1, 3);

    le25take = new QLineEdit(page_34);
    le25take->setObjectName(QString::fromUtf8("le25take"));
    le25take->setMaximumSize(QSize(91, 16777215));

    gridLayout103->addWidget(le25take, 3, 3, 1, 2);

    textLabel2_132 = new QLabel(page_34);
    textLabel2_132->setObjectName(QString::fromUtf8("textLabel2_132"));
    textLabel2_132->setMaximumSize(QSize(16777215, 32));
    textLabel2_132->setWordWrap(false);

    gridLayout103->addWidget(textLabel2_132, 4, 0, 1, 4);

    sp25calc = new QSpinBox(page_34);
    sp25calc->setObjectName(QString::fromUtf8("sp25calc"));
    sp25calc->setMaximumSize(QSize(46, 16777215));
    sp25calc->setValue(10);

    gridLayout103->addWidget(sp25calc, 4, 4, 1, 1);

    textLabel2_75 = new QLabel(page_34);
    textLabel2_75->setObjectName(QString::fromUtf8("textLabel2_75"));
    textLabel2_75->setWordWrap(false);

    gridLayout103->addWidget(textLabel2_75, 5, 0, 1, 4);

    sp25disc_first = new QSpinBox(page_34);
    sp25disc_first->setObjectName(QString::fromUtf8("sp25disc_first"));
    sp25disc_first->setMaximumSize(QSize(46, 16777215));
    sp25disc_first->setValue(0);

    gridLayout103->addWidget(sp25disc_first, 5, 4, 1, 1);

    sp2threadslabel_16 = new QLabel(page_34);
    sp2threadslabel_16->setObjectName(QString::fromUtf8("sp2threadslabel_16"));
    sp2threadslabel_16->setWordWrap(false);

    gridLayout103->addWidget(sp2threadslabel_16, 6, 0, 1, 4);

    sp25disc_last = new QSpinBox(page_34);
    sp25disc_last->setObjectName(QString::fromUtf8("sp25disc_last"));
    sp25disc_last->setMaximumSize(QSize(46, 16777215));
    sp25disc_last->setValue(0);

    gridLayout103->addWidget(sp25disc_last, 6, 4, 1, 1);

    sp2threadslabel_17 = new QLabel(page_34);
    sp2threadslabel_17->setObjectName(QString::fromUtf8("sp2threadslabel_17"));
    sp2threadslabel_17->setWordWrap(false);

    gridLayout103->addWidget(sp2threadslabel_17, 7, 0, 1, 3);

    sp25groups = new QSpinBox(page_34);
    sp25groups->setObjectName(QString::fromUtf8("sp25groups"));
    sp25groups->setMaximumSize(QSize(46, 16777215));
    sp25groups->setValue(1);

    gridLayout103->addWidget(sp25groups, 7, 4, 1, 1);

    sp2threadslabel_6 = new QLabel(page_34);
    sp2threadslabel_6->setObjectName(QString::fromUtf8("sp2threadslabel_6"));
    sp2threadslabel_6->setMaximumSize(QSize(16777215, 32));
    sp2threadslabel_6->setWordWrap(false);

    gridLayout103->addWidget(sp2threadslabel_6, 8, 0, 1, 3);

    le25transl = new QLineEdit(page_34);
    le25transl->setObjectName(QString::fromUtf8("le25transl"));
    le25transl->setMaximumSize(QSize(91, 16777215));

    gridLayout103->addWidget(le25transl, 8, 3, 1, 2);

    spacerItem62 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout103->addItem(spacerItem62, 9, 0, 1, 1);

    toolBox_21->addItem(page_34, QApplication::translate("CommandsClass", "g_potential options", 0, QApplication::UnicodeUTF8));

    gridLayout101->addWidget(toolBox_21, 0, 0, 1, 1);

    stackwMain->addWidget(stack_g_potential);
    stack_g_chi = new QWidget();
    stack_g_chi->setObjectName(QString::fromUtf8("stack_g_chi"));
    gridLayout104 = new QGridLayout(stack_g_chi);
    gridLayout104->setObjectName(QString::fromUtf8("gridLayout104"));
    toolBox_20 = new QToolBox(stack_g_chi);
    toolBox_20->setObjectName(QString::fromUtf8("toolBox_20"));
    toolBox_20->setFrameShape(QFrame::StyledPanel);
    page_31 = new QWidget();
    page_31->setObjectName(QString::fromUtf8("page_31"));
    page_31->setGeometry(QRect(0, 0, 350, 441));
    gridLayout105 = new QGridLayout(page_31);
    gridLayout105->setObjectName(QString::fromUtf8("gridLayout105"));
    textLabel2_68 = new QLabel(page_31);
    textLabel2_68->setObjectName(QString::fromUtf8("textLabel2_68"));
    textLabel2_68->setWordWrap(false);

    gridLayout105->addWidget(textLabel2_68, 0, 0, 1, 1);

    co6inputfile_17 = new QComboBox(page_31);
    co6inputfile_17->setObjectName(QString::fromUtf8("co6inputfile_17"));

    gridLayout105->addWidget(co6inputfile_17, 0, 1, 1, 1);

    textLabel2_69 = new QLabel(page_31);
    textLabel2_69->setObjectName(QString::fromUtf8("textLabel2_69"));
    textLabel2_69->setWordWrap(false);

    gridLayout105->addWidget(textLabel2_69, 1, 0, 1, 1);

    le6outputtrajfile_17 = new QLineEdit(page_31);
    le6outputtrajfile_17->setObjectName(QString::fromUtf8("le6outputtrajfile_17"));

    gridLayout105->addWidget(le6outputtrajfile_17, 1, 1, 1, 1);

    textLabel2_2_25 = new QLabel(page_31);
    textLabel2_2_25->setObjectName(QString::fromUtf8("textLabel2_2_25"));
    textLabel2_2_25->setWordWrap(false);

    gridLayout105->addWidget(textLabel2_2_25, 2, 0, 1, 1);

    le6outputconffile_17 = new QLineEdit(page_31);
    le6outputconffile_17->setObjectName(QString::fromUtf8("le6outputconffile_17"));

    gridLayout105->addWidget(le6outputconffile_17, 2, 1, 1, 1);

    textLabel1_24 = new QLabel(page_31);
    textLabel1_24->setObjectName(QString::fromUtf8("textLabel1_24"));
    textLabel1_24->setWordWrap(false);

    gridLayout105->addWidget(textLabel1_24, 3, 0, 1, 1);

    le6logfile_17 = new QLineEdit(page_31);
    le6logfile_17->setObjectName(QString::fromUtf8("le6logfile_17"));

    gridLayout105->addWidget(le6logfile_17, 3, 1, 1, 1);

    textLabel2_70 = new QLabel(page_31);
    textLabel2_70->setObjectName(QString::fromUtf8("textLabel2_70"));
    textLabel2_70->setWordWrap(false);

    gridLayout105->addWidget(textLabel2_70, 4, 0, 1, 1);

    le6energyfile_17 = new QLineEdit(page_31);
    le6energyfile_17->setObjectName(QString::fromUtf8("le6energyfile_17"));

    gridLayout105->addWidget(le6energyfile_17, 4, 1, 1, 1);

    spacerItem63 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout105->addItem(spacerItem63, 5, 1, 1, 1);

    toolBox_20->addItem(page_31, QApplication::translate("CommandsClass", "g_chi files", 0, QApplication::UnicodeUTF8));
    page_32 = new QWidget();
    page_32->setObjectName(QString::fromUtf8("page_32"));
    page_32->setGeometry(QRect(0, 0, 304, 155));
    gridLayout106 = new QGridLayout(page_32);
    gridLayout106->setObjectName(QString::fromUtf8("gridLayout106"));
    ch6loud_17 = new QCheckBox(page_32);
    ch6loud_17->setObjectName(QString::fromUtf8("ch6loud_17"));
    ch6loud_17->setChecked(true);

    gridLayout106->addWidget(ch6loud_17, 0, 0, 1, 1);

    spacerItem64 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout106->addItem(spacerItem64, 0, 1, 1, 1);

    ch6xray_17 = new QCheckBox(page_32);
    ch6xray_17->setObjectName(QString::fromUtf8("ch6xray_17"));

    gridLayout106->addWidget(ch6xray_17, 1, 0, 1, 2);

    textLabel2_71 = new QLabel(page_32);
    textLabel2_71->setObjectName(QString::fromUtf8("textLabel2_71"));
    textLabel2_71->setWordWrap(false);

    gridLayout106->addWidget(textLabel2_71, 2, 0, 2, 2);

    sp6status_17 = new QSpinBox(page_32);
    sp6status_17->setObjectName(QString::fromUtf8("sp6status_17"));
    sp6status_17->setMaximumSize(QSize(46, 16777215));
    sp6status_17->setValue(1);

    gridLayout106->addWidget(sp6status_17, 2, 2, 1, 1);

    sp6threads_17 = new QSpinBox(page_32);
    sp6threads_17->setObjectName(QString::fromUtf8("sp6threads_17"));
    sp6threads_17->setMaximumSize(QSize(46, 16777215));
    sp6threads_17->setValue(1);

    gridLayout106->addWidget(sp6threads_17, 3, 2, 2, 1);

    sp2threadslabel_5 = new QLabel(page_32);
    sp2threadslabel_5->setObjectName(QString::fromUtf8("sp2threadslabel_5"));
    sp2threadslabel_5->setWordWrap(false);

    gridLayout106->addWidget(sp2threadslabel_5, 4, 0, 1, 2);

    spacerItem65 = new QSpacerItem(20, 191, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout106->addItem(spacerItem65, 5, 0, 1, 1);

    toolBox_20->addItem(page_32, QApplication::translate("CommandsClass", "g_chi options", 0, QApplication::UnicodeUTF8));

    gridLayout104->addWidget(toolBox_20, 0, 0, 1, 1);

    stackwMain->addWidget(stack_g_chi);
    stack_g_helix = new QWidget();
    stack_g_helix->setObjectName(QString::fromUtf8("stack_g_helix"));
    gridLayout107 = new QGridLayout(stack_g_helix);
    gridLayout107->setObjectName(QString::fromUtf8("gridLayout107"));
    toolBox_19 = new QToolBox(stack_g_helix);
    toolBox_19->setObjectName(QString::fromUtf8("toolBox_19"));
    toolBox_19->setFrameShape(QFrame::StyledPanel);
    page_29 = new QWidget();
    page_29->setObjectName(QString::fromUtf8("page_29"));
    page_29->setGeometry(QRect(0, 0, 350, 441));
    gridLayout108 = new QGridLayout(page_29);
    gridLayout108->setObjectName(QString::fromUtf8("gridLayout108"));
    textLabel2_64 = new QLabel(page_29);
    textLabel2_64->setObjectName(QString::fromUtf8("textLabel2_64"));
    textLabel2_64->setFont(font3);
    textLabel2_64->setWordWrap(false);

    gridLayout108->addWidget(textLabel2_64, 0, 0, 1, 1);

    cb27input = new QComboBox(page_29);
    cb27input->setObjectName(QString::fromUtf8("cb27input"));

    gridLayout108->addWidget(cb27input, 0, 1, 1, 1);

    textLabel2_65 = new QLabel(page_29);
    textLabel2_65->setObjectName(QString::fromUtf8("textLabel2_65"));
    textLabel2_65->setFont(font3);
    textLabel2_65->setWordWrap(false);

    gridLayout108->addWidget(textLabel2_65, 1, 0, 1, 1);

    cb27_n = new QComboBox(page_29);
    cb27_n->setObjectName(QString::fromUtf8("cb27_n"));

    gridLayout108->addWidget(cb27_n, 1, 1, 1, 1);

    textLabel2_127 = new QLabel(page_29);
    textLabel2_127->setObjectName(QString::fromUtf8("textLabel2_127"));
    textLabel2_127->setFont(font3);
    textLabel2_127->setWordWrap(false);

    gridLayout108->addWidget(textLabel2_127, 2, 0, 1, 1);

    cb27_f = new QComboBox(page_29);
    cb27_f->setObjectName(QString::fromUtf8("cb27_f"));

    gridLayout108->addWidget(cb27_f, 2, 1, 1, 1);

    textLabel2_2_24 = new QLabel(page_29);
    textLabel2_2_24->setObjectName(QString::fromUtf8("textLabel2_2_24"));
    textLabel2_2_24->setWordWrap(false);

    gridLayout108->addWidget(textLabel2_2_24, 3, 0, 1, 1);

    le27_to = new QLineEdit(page_29);
    le27_to->setObjectName(QString::fromUtf8("le27_to"));

    gridLayout108->addWidget(le27_to, 3, 1, 1, 1);

    textLabel1_23 = new QLabel(page_29);
    textLabel1_23->setObjectName(QString::fromUtf8("textLabel1_23"));
    textLabel1_23->setFont(font3);
    textLabel1_23->setWordWrap(false);

    gridLayout108->addWidget(textLabel1_23, 4, 0, 1, 1);

    le27_cz = new QLineEdit(page_29);
    le27_cz->setObjectName(QString::fromUtf8("le27_cz"));

    gridLayout108->addWidget(le27_cz, 4, 1, 1, 1);

    textLabel2_66 = new QLabel(page_29);
    textLabel2_66->setObjectName(QString::fromUtf8("textLabel2_66"));
    textLabel2_66->setFont(font3);
    textLabel2_66->setWordWrap(false);

    gridLayout108->addWidget(textLabel2_66, 5, 0, 1, 1);

    le27_co = new QLineEdit(page_29);
    le27_co->setObjectName(QString::fromUtf8("le27_co"));

    gridLayout108->addWidget(le27_co, 5, 1, 1, 1);

    spacerItem66 = new QSpacerItem(195, 121, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout108->addItem(spacerItem66, 6, 1, 1, 1);

    toolBox_19->addItem(page_29, QApplication::translate("CommandsClass", "g_helix files", 0, QApplication::UnicodeUTF8));
    page_30 = new QWidget();
    page_30->setObjectName(QString::fromUtf8("page_30"));
    page_30->setGeometry(QRect(0, 0, 314, 341));
    gridLayout109 = new QGridLayout(page_30);
    gridLayout109->setObjectName(QString::fromUtf8("gridLayout109"));
    ch27check = new QCheckBox(page_30);
    ch27check->setObjectName(QString::fromUtf8("ch27check"));
    ch27check->setChecked(false);

    gridLayout109->addWidget(ch27check, 0, 0, 1, 6);

    ch27toggle = new QCheckBox(page_30);
    ch27toggle->setObjectName(QString::fromUtf8("ch27toggle"));
    ch27toggle->setChecked(true);

    gridLayout109->addWidget(ch27toggle, 1, 0, 1, 3);

    ch27write = new QCheckBox(page_30);
    ch27write->setObjectName(QString::fromUtf8("ch27write"));

    gridLayout109->addWidget(ch27write, 2, 0, 1, 5);

    textLabel2_125 = new QLabel(page_30);
    textLabel2_125->setObjectName(QString::fromUtf8("textLabel2_125"));
    textLabel2_125->setWordWrap(false);

    gridLayout109->addWidget(textLabel2_125, 3, 0, 1, 1);

    le27first = new QLineEdit(page_30);
    le27first->setObjectName(QString::fromUtf8("le27first"));
    le27first->setMaximumSize(QSize(91, 16777215));

    gridLayout109->addWidget(le27first, 3, 1, 1, 1);

    sp2threadslabel_13 = new QLabel(page_30);
    sp2threadslabel_13->setObjectName(QString::fromUtf8("sp2threadslabel_13"));
    sp2threadslabel_13->setWordWrap(false);

    gridLayout109->addWidget(sp2threadslabel_13, 3, 2, 1, 2);

    le27last = new QLineEdit(page_30);
    le27last->setObjectName(QString::fromUtf8("le27last"));
    le27last->setMaximumSize(QSize(91, 16777215));

    gridLayout109->addWidget(le27last, 3, 4, 1, 2);

    textLabel2_126 = new QLabel(page_30);
    textLabel2_126->setObjectName(QString::fromUtf8("textLabel2_126"));
    textLabel2_126->setWordWrap(false);

    gridLayout109->addWidget(textLabel2_126, 4, 0, 1, 4);

    le27only = new QLineEdit(page_30);
    le27only->setObjectName(QString::fromUtf8("le27only"));
    le27only->setMaximumSize(QSize(91, 16777215));

    gridLayout109->addWidget(le27only, 4, 4, 1, 2);

    textLabel2_142 = new QLabel(page_30);
    textLabel2_142->setObjectName(QString::fromUtf8("textLabel2_142"));
    textLabel2_142->setWordWrap(false);

    gridLayout109->addWidget(textLabel2_142, 5, 0, 1, 5);

    sp27seq = new QSpinBox(page_30);
    sp27seq->setObjectName(QString::fromUtf8("sp27seq"));
    sp27seq->setMaximumSize(QSize(46, 16777215));
    sp27seq->setValue(1);

    gridLayout109->addWidget(sp27seq, 5, 5, 1, 1);

    textLabel2_67 = new QLabel(page_30);
    textLabel2_67->setObjectName(QString::fromUtf8("textLabel2_67"));
    textLabel2_67->setWordWrap(false);

    gridLayout109->addWidget(textLabel2_67, 6, 0, 1, 3);

    sp27firstres = new QSpinBox(page_30);
    sp27firstres->setObjectName(QString::fromUtf8("sp27firstres"));
    sp27firstres->setMaximumSize(QSize(46, 16777215));
    sp27firstres->setValue(0);

    gridLayout109->addWidget(sp27firstres, 6, 5, 1, 1);

    sp2threadslabel_4 = new QLabel(page_30);
    sp2threadslabel_4->setObjectName(QString::fromUtf8("sp2threadslabel_4"));
    sp2threadslabel_4->setWordWrap(false);

    gridLayout109->addWidget(sp2threadslabel_4, 7, 0, 1, 3);

    sp27lastres = new QSpinBox(page_30);
    sp27lastres->setObjectName(QString::fromUtf8("sp27lastres"));
    sp27lastres->setMaximumSize(QSize(46, 16777215));
    sp27lastres->setValue(0);

    gridLayout109->addWidget(sp27lastres, 7, 5, 1, 1);

    sp2threadslabel_14 = new QLabel(page_30);
    sp2threadslabel_14->setObjectName(QString::fromUtf8("sp2threadslabel_14"));
    sp2threadslabel_14->setWordWrap(false);

    gridLayout109->addWidget(sp2threadslabel_14, 8, 0, 1, 3);

    cb27property = new QComboBox(page_30);
    cb27property->setObjectName(QString::fromUtf8("cb27property"));

    gridLayout109->addWidget(cb27property, 8, 3, 1, 3);

    spacerItem67 = new QSpacerItem(127, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout109->addItem(spacerItem67, 9, 0, 1, 2);

    toolBox_19->addItem(page_30, QApplication::translate("CommandsClass", "g_helix options", 0, QApplication::UnicodeUTF8));

    gridLayout107->addWidget(toolBox_19, 0, 0, 1, 1);

    stackwMain->addWidget(stack_g_helix);
    stack_g_rama = new QWidget();
    stack_g_rama->setObjectName(QString::fromUtf8("stack_g_rama"));
    gridLayout110 = new QGridLayout(stack_g_rama);
    gridLayout110->setObjectName(QString::fromUtf8("gridLayout110"));
    toolBox_18 = new QToolBox(stack_g_rama);
    toolBox_18->setObjectName(QString::fromUtf8("toolBox_18"));
    toolBox_18->setFrameShape(QFrame::StyledPanel);
    page_27 = new QWidget();
    page_27->setObjectName(QString::fromUtf8("page_27"));
    page_27->setGeometry(QRect(0, 0, 350, 441));
    gridLayout111 = new QGridLayout(page_27);
    gridLayout111->setObjectName(QString::fromUtf8("gridLayout111"));
    textLabel2_60 = new QLabel(page_27);
    textLabel2_60->setObjectName(QString::fromUtf8("textLabel2_60"));
    textLabel2_60->setFont(font3);
    textLabel2_60->setWordWrap(false);

    gridLayout111->addWidget(textLabel2_60, 0, 0, 1, 1);

    cb28input = new QComboBox(page_27);
    cb28input->setObjectName(QString::fromUtf8("cb28input"));

    gridLayout111->addWidget(cb28input, 0, 1, 1, 1);

    textLabel2_61 = new QLabel(page_27);
    textLabel2_61->setObjectName(QString::fromUtf8("textLabel2_61"));
    textLabel2_61->setFont(font3);
    textLabel2_61->setWordWrap(false);

    gridLayout111->addWidget(textLabel2_61, 1, 0, 1, 1);

    cb28_s = new QComboBox(page_27);
    cb28_s->setObjectName(QString::fromUtf8("cb28_s"));

    gridLayout111->addWidget(cb28_s, 1, 1, 1, 1);

    textLabel2_2_23 = new QLabel(page_27);
    textLabel2_2_23->setObjectName(QString::fromUtf8("textLabel2_2_23"));
    textLabel2_2_23->setFont(font3);
    textLabel2_2_23->setWordWrap(false);

    gridLayout111->addWidget(textLabel2_2_23, 2, 0, 1, 1);

    le28output = new QLineEdit(page_27);
    le28output->setObjectName(QString::fromUtf8("le28output"));

    gridLayout111->addWidget(le28output, 2, 1, 1, 1);

    spacerItem68 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout111->addItem(spacerItem68, 3, 1, 1, 1);

    toolBox_18->addItem(page_27, QApplication::translate("CommandsClass", "g_rama files", 0, QApplication::UnicodeUTF8));
    page_28 = new QWidget();
    page_28->setObjectName(QString::fromUtf8("page_28"));
    page_28->setGeometry(QRect(0, 0, 192, 109));
    gridLayout112 = new QGridLayout(page_28);
    gridLayout112->setObjectName(QString::fromUtf8("gridLayout112"));
    textLabel2_63 = new QLabel(page_28);
    textLabel2_63->setObjectName(QString::fromUtf8("textLabel2_63"));
    textLabel2_63->setWordWrap(false);

    gridLayout112->addWidget(textLabel2_63, 0, 0, 1, 1);

    le28first = new QLineEdit(page_28);
    le28first->setObjectName(QString::fromUtf8("le28first"));
    le28first->setMaximumSize(QSize(91, 16777215));

    gridLayout112->addWidget(le28first, 0, 1, 1, 1);

    sp2threadslabel_3 = new QLabel(page_28);
    sp2threadslabel_3->setObjectName(QString::fromUtf8("sp2threadslabel_3"));
    sp2threadslabel_3->setWordWrap(false);

    gridLayout112->addWidget(sp2threadslabel_3, 0, 2, 1, 1);

    le28last = new QLineEdit(page_28);
    le28last->setObjectName(QString::fromUtf8("le28last"));
    le28last->setMaximumSize(QSize(91, 16777215));

    gridLayout112->addWidget(le28last, 0, 3, 1, 1);

    textLabel2_124 = new QLabel(page_28);
    textLabel2_124->setObjectName(QString::fromUtf8("textLabel2_124"));
    textLabel2_124->setWordWrap(false);

    gridLayout112->addWidget(textLabel2_124, 1, 0, 1, 3);

    le28only = new QLineEdit(page_28);
    le28only->setObjectName(QString::fromUtf8("le28only"));
    le28only->setMaximumSize(QSize(91, 16777215));

    gridLayout112->addWidget(le28only, 1, 3, 1, 1);

    spacerItem69 = new QSpacerItem(20, 191, QSizePolicy::Minimum, QSizePolicy::Expanding);

    gridLayout112->addItem(spacerItem69, 2, 0, 1, 2);

    toolBox_18->addItem(page_28, QApplication::translate("CommandsClass", "g_rama options", 0, QApplication::UnicodeUTF8));

    gridLayout110->addWidget(toolBox_18, 0, 0, 1, 1);

    stackwMain->addWidget(stack_g_rama);

    gridLayout->addWidget(stackwMain, 0, 2, 1, 2);

    leCommandLine = new QLineEdit(CommandsClass);
    leCommandLine->setObjectName(QString::fromUtf8("leCommandLine"));
    QPalette palette2;
    QBrush brush3(QColor(255, 255, 0, 255));
    brush3.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Active, QPalette::Text, brush3);
    QBrush brush4(QColor(98, 98, 98, 255));
    brush4.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Active, QPalette::Base, brush4);
    palette2.setBrush(QPalette::Inactive, QPalette::Text, brush3);
    palette2.setBrush(QPalette::Inactive, QPalette::Base, brush4);
    QBrush brush5(QColor(119, 119, 119, 255));
    brush5.setStyle(Qt::SolidPattern);
    palette2.setBrush(QPalette::Disabled, QPalette::Text, brush5);
    palette2.setBrush(QPalette::Disabled, QPalette::Base, brush2);
    leCommandLine->setPalette(palette2);
    QFont font4;
    font4.setFamily(QString::fromUtf8("DejaVu Sans"));
    font4.setPointSize(11);
    font4.setBold(true);
    font4.setWeight(75);
    leCommandLine->setFont(font4);
    leCommandLine->setFrame(true);

    gridLayout->addWidget(leCommandLine, 1, 0, 1, 3);

    pbRun = new QPushButton(CommandsClass);
    pbRun->setObjectName(QString::fromUtf8("pbRun"));
    pbRun->setMaximumSize(QSize(64, 16777215));
    pbRun->setAutoDefault(false);
    pbRun->setDefault(true);

    gridLayout->addWidget(pbRun, 1, 3, 1, 1);

    chTerminal = new QCheckBox(CommandsClass);
    chTerminal->setObjectName(QString::fromUtf8("chTerminal"));
    chTerminal->setChecked(true);

    gridLayout->addWidget(chTerminal, 2, 0, 1, 1);

    spacerItem70 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    gridLayout->addItem(spacerItem70, 2, 1, 1, 2);


    retranslateUi(CommandsClass);
    QObject::connect(leCommandLine, SIGNAL(returnPressed()), pbRun, SLOT(click()));

    stackwMain->setCurrentIndex(0);
    toolBox->setCurrentIndex(0);
    toolBox_2->setCurrentIndex(0);
    toolBox_4->setCurrentIndex(0);
    toolBox_3->setCurrentIndex(0);
    tbxGrompp->setCurrentIndex(0);
    tbxMdrun->setCurrentIndex(0);
    toolBox_5->setCurrentIndex(0);
    toolBox_6->setCurrentIndex(0);
    toolBox_7->setCurrentIndex(0);
    toolBox_8->setCurrentIndex(0);
    toolBox_9->setCurrentIndex(0);
    toolBox_10->setCurrentIndex(0);
    toolBox_11->setCurrentIndex(0);
    toolBox_12->setCurrentIndex(0);
    toolBox_13->setCurrentIndex(0);
    toolBox_14->setCurrentIndex(0);
    toolBox_15->setCurrentIndex(0);
    toolBox_16->setCurrentIndex(0);
    toolBox_17->setCurrentIndex(0);
    toolBox_26->setCurrentIndex(0);
    toolBox_25->setCurrentIndex(0);
    toolBox_24->setCurrentIndex(0);
    toolBox_23->setCurrentIndex(0);
    toolBox_22->setCurrentIndex(0);
    toolBox_21->setCurrentIndex(0);
    toolBox_20->setCurrentIndex(0);
    toolBox_19->setCurrentIndex(0);
    toolBox_18->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(CommandsClass);
    } // setupUi

    void retranslateUi(QWidget *CommandsClass)
    {
    CommandsClass->setWindowTitle(QApplication::translate("CommandsClass", "Gromacs Commands", 0, QApplication::UnicodeUTF8));
    trwCommands->headerItem()->setText(0, QApplication::translate("CommandsClass", "Programs by Topic", 0, QApplication::UnicodeUTF8));
    trwCommands->headerItem()->setText(1, QApplication::translate("CommandsClass", "Description", 0, QApplication::UnicodeUTF8));
    trwCommands->clear();

    QTreeWidgetItem *__item = new QTreeWidgetItem(trwCommands);
    __item->setText(0, QApplication::translate("CommandsClass", "Generating topologies", 0, QApplication::UnicodeUTF8));
    __item->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/1rightarrow.png")));
    __item->setText(1, QString());

    QTreeWidgetItem *__item1 = new QTreeWidgetItem(__item);
    __item1->setText(0, QApplication::translate("CommandsClass", "pdb2gmx", 0, QApplication::UnicodeUTF8));
    __item1->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/button_ok.png")));
    __item1->setText(1, QApplication::translate("CommandsClass", "converts pdb files to topology and coordinate files", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item2 = new QTreeWidgetItem(__item);
    __item2->setText(0, QApplication::translate("CommandsClass", "x2top", 0, QApplication::UnicodeUTF8));
    __item2->setText(1, QApplication::translate("CommandsClass", "generates a primitive topology from coordinates", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item3 = new QTreeWidgetItem(__item);
    __item3->setText(0, QApplication::translate("CommandsClass", "editconf", 0, QApplication::UnicodeUTF8));
    __item3->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/button_ok.png")));
    __item3->setText(1, QApplication::translate("CommandsClass", "edits the box and writes subgroups", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item4 = new QTreeWidgetItem(__item);
    __item4->setText(0, QApplication::translate("CommandsClass", "genbox", 0, QApplication::UnicodeUTF8));
    __item4->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/button_ok.png")));
    __item4->setText(1, QApplication::translate("CommandsClass", "solvates a system", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item5 = new QTreeWidgetItem(__item);
    __item5->setText(0, QApplication::translate("CommandsClass", "genion", 0, QApplication::UnicodeUTF8));
    __item5->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/button_ok.png")));
    __item5->setText(1, QApplication::translate("CommandsClass", "generates mono atomic ions on energetically favorable positions", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item6 = new QTreeWidgetItem(__item);
    __item6->setText(0, QApplication::translate("CommandsClass", "genconf", 0, QApplication::UnicodeUTF8));
    __item6->setText(1, QApplication::translate("CommandsClass", "multiplies a conformation in 'random' orientations", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item7 = new QTreeWidgetItem(__item);
    __item7->setText(0, QApplication::translate("CommandsClass", "genpr", 0, QApplication::UnicodeUTF8));
    __item7->setText(1, QApplication::translate("CommandsClass", "generates position restraints for index groups", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item8 = new QTreeWidgetItem(__item);
    __item8->setText(0, QApplication::translate("CommandsClass", "protonate", 0, QApplication::UnicodeUTF8));
    __item8->setText(1, QApplication::translate("CommandsClass", "protonates structures", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item9 = new QTreeWidgetItem(trwCommands);
    __item9->setText(0, QApplication::translate("CommandsClass", "Running a simulation", 0, QApplication::UnicodeUTF8));
    __item9->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/1rightarrow.png")));
    __item9->setText(1, QString());

    QTreeWidgetItem *__item10 = new QTreeWidgetItem(__item9);
    __item10->setText(0, QApplication::translate("CommandsClass", "grompp", 0, QApplication::UnicodeUTF8));
    __item10->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/button_ok.png")));
    __item10->setText(1, QApplication::translate("CommandsClass", "makes a run input file", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item11 = new QTreeWidgetItem(__item9);
    __item11->setText(0, QApplication::translate("CommandsClass", "tpbconv", 0, QApplication::UnicodeUTF8));
    __item11->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/button_ok.png")));
    __item11->setText(1, QApplication::translate("CommandsClass", "makes a run input file for restarting a crashed run", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item12 = new QTreeWidgetItem(__item9);
    __item12->setText(0, QApplication::translate("CommandsClass", "mdrun", 0, QApplication::UnicodeUTF8));
    __item12->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/button_ok.png")));
    __item12->setText(1, QApplication::translate("CommandsClass", "performs a simulation", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item13 = new QTreeWidgetItem(trwCommands);
    __item13->setText(0, QApplication::translate("CommandsClass", "Viewing trajectories", 0, QApplication::UnicodeUTF8));
    __item13->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/1rightarrow.png")));
    __item13->setText(1, QString());

    QTreeWidgetItem *__item14 = new QTreeWidgetItem(__item13);
    __item14->setText(0, QApplication::translate("CommandsClass", "ngmx", 0, QApplication::UnicodeUTF8));
    __item14->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/button_ok.png")));
    __item14->setText(1, QApplication::translate("CommandsClass", "displays a trajectory", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item15 = new QTreeWidgetItem(__item13);
    __item15->setText(0, QApplication::translate("CommandsClass", "trjconv", 0, QApplication::UnicodeUTF8));
    __item15->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/checkmark_korganizer.png")));
    __item15->setText(1, QApplication::translate("CommandsClass", "converts trajectories to e.g. pdb which can be viewed with e.g. rasmol", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item16 = new QTreeWidgetItem(trwCommands);
    __item16->setText(0, QApplication::translate("CommandsClass", "Processing energies", 0, QApplication::UnicodeUTF8));
    __item16->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/1rightarrow.png")));
    __item16->setText(1, QString());

    QTreeWidgetItem *__item17 = new QTreeWidgetItem(__item16);
    __item17->setText(0, QApplication::translate("CommandsClass", "g_energy", 0, QApplication::UnicodeUTF8));
    __item17->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/button_ok.png")));
    __item17->setText(1, QApplication::translate("CommandsClass", "writes energies to xvg files and displays averages", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item18 = new QTreeWidgetItem(__item16);
    __item18->setText(0, QApplication::translate("CommandsClass", "g_enemat", 0, QApplication::UnicodeUTF8));
    __item18->setText(1, QApplication::translate("CommandsClass", "extracts an energy matrix from an energy file", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item19 = new QTreeWidgetItem(__item16);
    __item19->setText(0, QApplication::translate("CommandsClass", "mdrun", 0, QApplication::UnicodeUTF8));
    __item19->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/button_ok.png")));
    __item19->setText(1, QApplication::translate("CommandsClass", "with -rerun (re)calculates energies for trajectory frames", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item20 = new QTreeWidgetItem(trwCommands);
    __item20->setText(0, QApplication::translate("CommandsClass", "Converting files", 0, QApplication::UnicodeUTF8));
    __item20->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/1rightarrow.png")));
    __item20->setText(1, QString());

    QTreeWidgetItem *__item21 = new QTreeWidgetItem(__item20);
    __item21->setText(0, QApplication::translate("CommandsClass", "editconf", 0, QApplication::UnicodeUTF8));
    __item21->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/button_ok.png")));
    __item21->setText(1, QApplication::translate("CommandsClass", "converts and manipulates structure files", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item22 = new QTreeWidgetItem(__item20);
    __item22->setText(0, QApplication::translate("CommandsClass", "trjconv", 0, QApplication::UnicodeUTF8));
    __item22->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/button_ok.png")));
    __item22->setText(1, QApplication::translate("CommandsClass", "converts and manipulates trajectory files", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item23 = new QTreeWidgetItem(__item20);
    __item23->setText(0, QApplication::translate("CommandsClass", "trjcat", 0, QApplication::UnicodeUTF8));
    __item23->setText(1, QApplication::translate("CommandsClass", "concatenates trajectory files", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item24 = new QTreeWidgetItem(__item20);
    __item24->setText(0, QApplication::translate("CommandsClass", "eneconv", 0, QApplication::UnicodeUTF8));
    __item24->setText(1, QApplication::translate("CommandsClass", "converts energy files", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item25 = new QTreeWidgetItem(__item20);
    __item25->setText(0, QApplication::translate("CommandsClass", "xmp2ps", 0, QApplication::UnicodeUTF8));
    __item25->setText(1, QApplication::translate("CommandsClass", "converts XPM matrices to encapsulated postscript (or XPM)", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item26 = new QTreeWidgetItem(trwCommands);
    __item26->setText(0, QApplication::translate("CommandsClass", "Tools", 0, QApplication::UnicodeUTF8));
    __item26->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/1rightarrow.png")));
    __item26->setText(1, QString());

    QTreeWidgetItem *__item27 = new QTreeWidgetItem(__item26);
    __item27->setText(0, QApplication::translate("CommandsClass", "make_ndx", 0, QApplication::UnicodeUTF8));
    __item27->setText(1, QApplication::translate("CommandsClass", "makes index files", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item28 = new QTreeWidgetItem(__item26);
    __item28->setText(0, QApplication::translate("CommandsClass", "mk_angndx", 0, QApplication::UnicodeUTF8));
    __item28->setText(1, QApplication::translate("CommandsClass", "generates index files for g_angle", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item29 = new QTreeWidgetItem(__item26);
    __item29->setText(0, QApplication::translate("CommandsClass", "gmxcheck", 0, QApplication::UnicodeUTF8));
    __item29->setText(1, QApplication::translate("CommandsClass", "checks and compares files", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item30 = new QTreeWidgetItem(__item26);
    __item30->setText(0, QApplication::translate("CommandsClass", "gmxdump", 0, QApplication::UnicodeUTF8));
    __item30->setText(1, QApplication::translate("CommandsClass", "makes binary files human readable", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item31 = new QTreeWidgetItem(__item26);
    __item31->setText(0, QApplication::translate("CommandsClass", "g_traj", 0, QApplication::UnicodeUTF8));
    __item31->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/button_ok.png")));
    __item31->setText(1, QApplication::translate("CommandsClass", "plots x, v and f of selected atoms/groups (and more) from a trajectory", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item32 = new QTreeWidgetItem(__item26);
    __item32->setText(0, QApplication::translate("CommandsClass", "g_analyze", 0, QApplication::UnicodeUTF8));
    __item32->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/button_ok.png")));
    __item32->setText(1, QApplication::translate("CommandsClass", "analyzes data sets", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item33 = new QTreeWidgetItem(__item26);
    __item33->setText(0, QApplication::translate("CommandsClass", "trjorder", 0, QApplication::UnicodeUTF8));
    __item33->setText(1, QApplication::translate("CommandsClass", "orders molecules according to their distance to a group", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item34 = new QTreeWidgetItem(__item26);
    __item34->setText(0, QApplication::translate("CommandsClass", "g_filter", 0, QApplication::UnicodeUTF8));
    __item34->setText(1, QApplication::translate("CommandsClass", "frequency filters trajectories, useful for making smooth movies", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item35 = new QTreeWidgetItem(__item26);
    __item35->setText(0, QApplication::translate("CommandsClass", "g_lie", 0, QApplication::UnicodeUTF8));
    __item35->setText(1, QApplication::translate("CommandsClass", "free energy estimate from linear combinations", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item36 = new QTreeWidgetItem(__item26);
    __item36->setText(0, QApplication::translate("CommandsClass", "g_dyndom", 0, QApplication::UnicodeUTF8));
    __item36->setText(1, QApplication::translate("CommandsClass", "interpolate and extrapolate structure rotations", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item37 = new QTreeWidgetItem(__item26);
    __item37->setText(0, QApplication::translate("CommandsClass", "g_morph", 0, QApplication::UnicodeUTF8));
    __item37->setText(1, QApplication::translate("CommandsClass", "linear interpolation of conformations", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item38 = new QTreeWidgetItem(__item26);
    __item38->setText(0, QApplication::translate("CommandsClass", "g_wham", 0, QApplication::UnicodeUTF8));
    __item38->setText(1, QApplication::translate("CommandsClass", "weighted histogram analysis after umbrella sampling", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item39 = new QTreeWidgetItem(__item26);
    __item39->setText(0, QApplication::translate("CommandsClass", "ffscan", 0, QApplication::UnicodeUTF8));
    __item39->setText(1, QApplication::translate("CommandsClass", "scan and modify force field data for a single point energy calculation", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item40 = new QTreeWidgetItem(__item26);
    __item40->setText(0, QApplication::translate("CommandsClass", "xpm2ps", 0, QApplication::UnicodeUTF8));
    __item40->setText(1, QApplication::translate("CommandsClass", "convert XPM (XPixelMap) file to postscript", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item41 = new QTreeWidgetItem(trwCommands);
    __item41->setText(0, QApplication::translate("CommandsClass", "Distances between structures", 0, QApplication::UnicodeUTF8));
    __item41->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/1rightarrow.png")));
    __item41->setText(1, QString());

    QTreeWidgetItem *__item42 = new QTreeWidgetItem(__item41);
    __item42->setText(0, QApplication::translate("CommandsClass", "g_rms", 0, QApplication::UnicodeUTF8));
    __item42->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/button_ok.png")));
    __item42->setText(1, QApplication::translate("CommandsClass", "calculates rmsd's with a reference structure and rmsd matrices", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item43 = new QTreeWidgetItem(__item41);
    __item43->setText(0, QApplication::translate("CommandsClass", "g_confrms", 0, QApplication::UnicodeUTF8));
    __item43->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/button_ok.png")));
    __item43->setText(1, QApplication::translate("CommandsClass", "fits two structures and calculates the rmsd", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item44 = new QTreeWidgetItem(__item41);
    __item44->setText(0, QApplication::translate("CommandsClass", "g_cluster", 0, QApplication::UnicodeUTF8));
    __item44->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/button_ok.png")));
    __item44->setText(1, QApplication::translate("CommandsClass", "clusters structures", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item45 = new QTreeWidgetItem(__item41);
    __item45->setText(0, QApplication::translate("CommandsClass", "g_rmsf", 0, QApplication::UnicodeUTF8));
    __item45->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/button_ok.png")));
    __item45->setText(1, QApplication::translate("CommandsClass", "calculates atomic fluctuations", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item46 = new QTreeWidgetItem(__item41);
    __item46->setText(0, QApplication::translate("CommandsClass", "disco", 0, QApplication::UnicodeUTF8));
    __item46->setText(1, QApplication::translate("CommandsClass", "distance geometry calculation with the CONCOORD algorithm", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item47 = new QTreeWidgetItem(__item41);
    __item47->setText(0, QApplication::translate("CommandsClass", "cdist", 0, QApplication::UnicodeUTF8));
    __item47->setText(1, QApplication::translate("CommandsClass", "create input for disco", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item48 = new QTreeWidgetItem(trwCommands);
    __item48->setText(0, QApplication::translate("CommandsClass", "Distances in structures over time", 0, QApplication::UnicodeUTF8));
    __item48->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/1rightarrow.png")));
    __item48->setText(1, QString());

    QTreeWidgetItem *__item49 = new QTreeWidgetItem(__item48);
    __item49->setText(0, QApplication::translate("CommandsClass", "g_mindist", 0, QApplication::UnicodeUTF8));
    __item49->setText(1, QApplication::translate("CommandsClass", "calculates the minimum distance between two groups", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item50 = new QTreeWidgetItem(__item48);
    __item50->setText(0, QApplication::translate("CommandsClass", "g_dist", 0, QApplication::UnicodeUTF8));
    __item50->setText(1, QApplication::translate("CommandsClass", "calculates the distances between the centers of mass of two groups", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item51 = new QTreeWidgetItem(__item48);
    __item51->setText(0, QApplication::translate("CommandsClass", "g_bond", 0, QApplication::UnicodeUTF8));
    __item51->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/button_ok.png")));
    __item51->setText(1, QApplication::translate("CommandsClass", "calculates distances between atoms", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item52 = new QTreeWidgetItem(__item48);
    __item52->setText(0, QApplication::translate("CommandsClass", "g_mdmat", 0, QApplication::UnicodeUTF8));
    __item52->setText(1, QApplication::translate("CommandsClass", "calculates residue contact maps", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item53 = new QTreeWidgetItem(__item48);
    __item53->setText(0, QApplication::translate("CommandsClass", "g_rmsdist", 0, QApplication::UnicodeUTF8));
    __item53->setText(1, QApplication::translate("CommandsClass", "calculates atom pair distances averaged with power 2, -3 or -6", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item54 = new QTreeWidgetItem(trwCommands);
    __item54->setText(0, QApplication::translate("CommandsClass", "Mass distribution properties over time", 0, QApplication::UnicodeUTF8));
    __item54->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/1rightarrow.png")));
    __item54->setText(1, QString());

    QTreeWidgetItem *__item55 = new QTreeWidgetItem(__item54);
    __item55->setText(0, QApplication::translate("CommandsClass", "g_traj", 0, QApplication::UnicodeUTF8));
    __item55->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/button_ok.png")));
    __item55->setText(1, QApplication::translate("CommandsClass", "plots x, v, f, box, temperature and rotational energy", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item56 = new QTreeWidgetItem(__item54);
    __item56->setText(0, QApplication::translate("CommandsClass", "g_gyrate", 0, QApplication::UnicodeUTF8));
    __item56->setText(1, QApplication::translate("CommandsClass", "calculates the radius of gyration", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item57 = new QTreeWidgetItem(__item54);
    __item57->setText(0, QApplication::translate("CommandsClass", "g_msd", 0, QApplication::UnicodeUTF8));
    __item57->setText(1, QApplication::translate("CommandsClass", "calculates mean square displacements", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item58 = new QTreeWidgetItem(__item54);
    __item58->setText(0, QApplication::translate("CommandsClass", "g_rotacf", 0, QApplication::UnicodeUTF8));
    __item58->setText(1, QApplication::translate("CommandsClass", "calculates the rotational correlation function for molecules", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item59 = new QTreeWidgetItem(__item54);
    __item59->setText(0, QApplication::translate("CommandsClass", "g_rdf", 0, QApplication::UnicodeUTF8));
    __item59->setText(1, QApplication::translate("CommandsClass", "calculates radial distribution functions", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item60 = new QTreeWidgetItem(trwCommands);
    __item60->setText(0, QApplication::translate("CommandsClass", "Analyzing bonded interactions", 0, QApplication::UnicodeUTF8));
    __item60->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/1rightarrow.png")));
    __item60->setText(1, QString());

    QTreeWidgetItem *__item61 = new QTreeWidgetItem(__item60);
    __item61->setText(0, QApplication::translate("CommandsClass", "g_bond", 0, QApplication::UnicodeUTF8));
    __item61->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/button_ok.png")));
    __item61->setText(1, QApplication::translate("CommandsClass", "calculates bond length distributions", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item62 = new QTreeWidgetItem(__item60);
    __item62->setText(0, QApplication::translate("CommandsClass", "mk_angndx", 0, QApplication::UnicodeUTF8));
    __item62->setText(1, QApplication::translate("CommandsClass", "generates index files for g_angle", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item63 = new QTreeWidgetItem(__item60);
    __item63->setText(0, QApplication::translate("CommandsClass", "g_angle", 0, QApplication::UnicodeUTF8));
    __item63->setText(1, QApplication::translate("CommandsClass", "calculates distributions and correlations for angles and dihedrals", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item64 = new QTreeWidgetItem(__item60);
    __item64->setText(0, QApplication::translate("CommandsClass", "g_dih", 0, QApplication::UnicodeUTF8));
    __item64->setText(1, QApplication::translate("CommandsClass", "analyzes dihedral transitions", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item65 = new QTreeWidgetItem(trwCommands);
    __item65->setText(0, QApplication::translate("CommandsClass", "Structural properties", 0, QApplication::UnicodeUTF8));
    __item65->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/1rightarrow.png")));
    __item65->setText(1, QString());

    QTreeWidgetItem *__item66 = new QTreeWidgetItem(__item65);
    __item66->setText(0, QApplication::translate("CommandsClass", "g_hbond", 0, QApplication::UnicodeUTF8));
    __item66->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/button_ok.png")));
    __item66->setText(1, QApplication::translate("CommandsClass", "computes and analyzes hydrogen bonds", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item67 = new QTreeWidgetItem(__item65);
    __item67->setText(0, QApplication::translate("CommandsClass", "g_saltbr", 0, QApplication::UnicodeUTF8));
    __item67->setText(1, QApplication::translate("CommandsClass", "computes salt bridges", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item68 = new QTreeWidgetItem(__item65);
    __item68->setText(0, QApplication::translate("CommandsClass", "g_sas", 0, QApplication::UnicodeUTF8));
    __item68->setText(1, QApplication::translate("CommandsClass", "computes solvent accessible surface area", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item69 = new QTreeWidgetItem(__item65);
    __item69->setText(0, QApplication::translate("CommandsClass", "g_order", 0, QApplication::UnicodeUTF8));
    __item69->setText(1, QApplication::translate("CommandsClass", "computes the order parameter per atom for carbon tails", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item70 = new QTreeWidgetItem(__item65);
    __item70->setText(0, QApplication::translate("CommandsClass", "g_sgangle", 0, QApplication::UnicodeUTF8));
    __item70->setText(1, QApplication::translate("CommandsClass", "computes the angle and distance between two groups", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item71 = new QTreeWidgetItem(__item65);
    __item71->setText(0, QApplication::translate("CommandsClass", "g_sorient", 0, QApplication::UnicodeUTF8));
    __item71->setText(1, QApplication::translate("CommandsClass", "analyzes solvent orientation around solutes", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item72 = new QTreeWidgetItem(__item65);
    __item72->setText(0, QApplication::translate("CommandsClass", "g_bundle", 0, QApplication::UnicodeUTF8));
    __item72->setText(1, QApplication::translate("CommandsClass", "analyzes bundles of axes, e.g. helices", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item73 = new QTreeWidgetItem(__item65);
    __item73->setText(0, QApplication::translate("CommandsClass", "g_disre", 0, QApplication::UnicodeUTF8));
    __item73->setText(1, QApplication::translate("CommandsClass", "analyzes distance restraints", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item74 = new QTreeWidgetItem(__item65);
    __item74->setText(0, QApplication::translate("CommandsClass", "g_clustsize", 0, QApplication::UnicodeUTF8));
    __item74->setText(1, QApplication::translate("CommandsClass", "calculate size distributions of atomic clusters", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item75 = new QTreeWidgetItem(__item65);
    __item75->setText(0, QApplication::translate("CommandsClass", "disco", 0, QApplication::UnicodeUTF8));
    __item75->setText(1, QApplication::translate("CommandsClass", "distance geometry calculation with the CONCOORD algorithm", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item76 = new QTreeWidgetItem(__item65);
    __item76->setText(0, QApplication::translate("CommandsClass", "cdist", 0, QApplication::UnicodeUTF8));
    __item76->setText(1, QApplication::translate("CommandsClass", "create input for disco", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item77 = new QTreeWidgetItem(__item65);
    __item77->setText(0, QApplication::translate("CommandsClass", "anadock", 0, QApplication::UnicodeUTF8));
    __item77->setText(1, QApplication::translate("CommandsClass", "cluster structures from Autodock runs", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item78 = new QTreeWidgetItem(trwCommands);
    __item78->setText(0, QApplication::translate("CommandsClass", "Kinetic properties", 0, QApplication::UnicodeUTF8));
    __item78->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/1rightarrow.png")));
    __item78->setText(1, QString());

    QTreeWidgetItem *__item79 = new QTreeWidgetItem(__item78);
    __item79->setText(0, QApplication::translate("CommandsClass", "g_traj", 0, QApplication::UnicodeUTF8));
    __item79->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/button_ok.png")));
    __item79->setText(1, QApplication::translate("CommandsClass", "plots x, v, f, box, temperature and rotational energy", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item80 = new QTreeWidgetItem(__item78);
    __item80->setText(0, QApplication::translate("CommandsClass", "g_velacc", 0, QApplication::UnicodeUTF8));
    __item80->setText(1, QApplication::translate("CommandsClass", "calculates velocity autocorrelation functions", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item81 = new QTreeWidgetItem(__item78);
    __item81->setText(0, QApplication::translate("CommandsClass", "g_tcaf", 0, QApplication::UnicodeUTF8));
    __item81->setText(1, QApplication::translate("CommandsClass", "calculates viscosities of liquids", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item82 = new QTreeWidgetItem(trwCommands);
    __item82->setText(0, QApplication::translate("CommandsClass", "Electrostatic properties", 0, QApplication::UnicodeUTF8));
    __item82->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/1rightarrow.png")));
    __item82->setText(1, QString());

    QTreeWidgetItem *__item83 = new QTreeWidgetItem(__item82);
    __item83->setText(0, QApplication::translate("CommandsClass", "genion", 0, QApplication::UnicodeUTF8));
    __item83->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/button_ok.png")));
    __item83->setText(1, QApplication::translate("CommandsClass", "generates mono atomic ions on energetically favorable positions", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item84 = new QTreeWidgetItem(__item82);
    __item84->setText(0, QApplication::translate("CommandsClass", "g_potential", 0, QApplication::UnicodeUTF8));
    __item84->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/button_ok.png")));
    __item84->setText(1, QApplication::translate("CommandsClass", "calculates the electrostatic potential across the box", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item85 = new QTreeWidgetItem(__item82);
    __item85->setText(0, QApplication::translate("CommandsClass", "g_dipoles", 0, QApplication::UnicodeUTF8));
    __item85->setText(1, QApplication::translate("CommandsClass", "computes the total dipole plus fluctuations", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item86 = new QTreeWidgetItem(__item82);
    __item86->setText(0, QApplication::translate("CommandsClass", "g_dielectric", 0, QApplication::UnicodeUTF8));
    __item86->setText(1, QApplication::translate("CommandsClass", "calculates frequency dependent dielectric constants", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item87 = new QTreeWidgetItem(trwCommands);
    __item87->setText(0, QApplication::translate("CommandsClass", "Protein specific analysis", 0, QApplication::UnicodeUTF8));
    __item87->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/1rightarrow.png")));
    __item87->setText(1, QString());

    QTreeWidgetItem *__item88 = new QTreeWidgetItem(__item87);
    __item88->setText(0, QApplication::translate("CommandsClass", "do_dssp", 0, QApplication::UnicodeUTF8));
    __item88->setText(1, QApplication::translate("CommandsClass", "assigns secondary structure and calculates solvent accessible surface area", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item89 = new QTreeWidgetItem(__item87);
    __item89->setText(0, QApplication::translate("CommandsClass", "g_chi", 0, QApplication::UnicodeUTF8));
    __item89->setText(1, QApplication::translate("CommandsClass", "calculates everything you want to know about chi and other dihedrals", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item90 = new QTreeWidgetItem(__item87);
    __item90->setText(0, QApplication::translate("CommandsClass", "g_helix", 0, QApplication::UnicodeUTF8));
    __item90->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/button_ok.png")));
    __item90->setText(1, QApplication::translate("CommandsClass", "calculates everything you want to know about helices", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item91 = new QTreeWidgetItem(__item87);
    __item91->setText(0, QApplication::translate("CommandsClass", "g_rama", 0, QApplication::UnicodeUTF8));
    __item91->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/button_ok.png")));
    __item91->setText(1, QApplication::translate("CommandsClass", "computes Ramachandran plots", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item92 = new QTreeWidgetItem(__item87);
    __item92->setText(0, QApplication::translate("CommandsClass", "xrama", 0, QApplication::UnicodeUTF8));
    __item92->setText(1, QApplication::translate("CommandsClass", "shows animated Ramachandran plots", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item93 = new QTreeWidgetItem(__item87);
    __item93->setText(0, QApplication::translate("CommandsClass", "wheel", 0, QApplication::UnicodeUTF8));
    __item93->setText(1, QApplication::translate("CommandsClass", "plots helical wheels", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item94 = new QTreeWidgetItem(trwCommands);
    __item94->setText(0, QApplication::translate("CommandsClass", "Interfaces", 0, QApplication::UnicodeUTF8));
    __item94->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/1rightarrow.png")));
    __item94->setText(1, QString());

    QTreeWidgetItem *__item95 = new QTreeWidgetItem(__item94);
    __item95->setText(0, QApplication::translate("CommandsClass", "g_potential", 0, QApplication::UnicodeUTF8));
    __item95->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/button_ok.png")));
    __item95->setText(1, QApplication::translate("CommandsClass", "calculates the electrostatic potential across the box", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item96 = new QTreeWidgetItem(__item94);
    __item96->setText(0, QApplication::translate("CommandsClass", "g_density", 0, QApplication::UnicodeUTF8));
    __item96->setText(1, QApplication::translate("CommandsClass", "calculates the density of the system", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item97 = new QTreeWidgetItem(__item94);
    __item97->setText(0, QApplication::translate("CommandsClass", "g_densmap", 0, QApplication::UnicodeUTF8));
    __item97->setText(1, QApplication::translate("CommandsClass", "calculates 2D planar or axial-radial density maps", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item98 = new QTreeWidgetItem(__item94);
    __item98->setText(0, QApplication::translate("CommandsClass", "g_order", 0, QApplication::UnicodeUTF8));
    __item98->setText(1, QApplication::translate("CommandsClass", "computes the order parameter per atom for carbon tails", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item99 = new QTreeWidgetItem(__item94);
    __item99->setText(0, QApplication::translate("CommandsClass", "g_h2order", 0, QApplication::UnicodeUTF8));
    __item99->setText(1, QApplication::translate("CommandsClass", "computes the orientation of water molecules", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item100 = new QTreeWidgetItem(__item94);
    __item100->setText(0, QApplication::translate("CommandsClass", "g_bundle", 0, QApplication::UnicodeUTF8));
    __item100->setText(1, QApplication::translate("CommandsClass", "analyzes bundles of axes, e.g. transmembrane helices", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item101 = new QTreeWidgetItem(trwCommands);
    __item101->setText(0, QApplication::translate("CommandsClass", "Covariance analysis", 0, QApplication::UnicodeUTF8));
    __item101->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/1rightarrow.png")));
    __item101->setText(1, QString());

    QTreeWidgetItem *__item102 = new QTreeWidgetItem(__item101);
    __item102->setText(0, QApplication::translate("CommandsClass", "g_covar", 0, QApplication::UnicodeUTF8));
    __item102->setText(1, QApplication::translate("CommandsClass", "calculates and diagonalizes the covariance matrix", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item103 = new QTreeWidgetItem(__item101);
    __item103->setText(0, QApplication::translate("CommandsClass", "g_anaeig", 0, QApplication::UnicodeUTF8));
    __item103->setText(1, QApplication::translate("CommandsClass", "analyzes the eigenvectors", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item104 = new QTreeWidgetItem(__item101);
    __item104->setText(0, QApplication::translate("CommandsClass", "make_edi", 0, QApplication::UnicodeUTF8));
    __item104->setText(1, QApplication::translate("CommandsClass", "generate input files for essential dynamics sampling", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item105 = new QTreeWidgetItem(trwCommands);
    __item105->setText(0, QApplication::translate("CommandsClass", "Normal modes", 0, QApplication::UnicodeUTF8));
    __item105->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/1rightarrow.png")));
    __item105->setText(1, QString());

    QTreeWidgetItem *__item106 = new QTreeWidgetItem(__item105);
    __item106->setText(0, QApplication::translate("CommandsClass", "grompp", 0, QApplication::UnicodeUTF8));
    __item106->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/button_ok.png")));
    __item106->setText(1, QApplication::translate("CommandsClass", "makes a run input file", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item107 = new QTreeWidgetItem(__item105);
    __item107->setText(0, QApplication::translate("CommandsClass", "mdrun", 0, QApplication::UnicodeUTF8));
    __item107->setIcon(0, QIcon(QString::fromUtf8(":/new/prefix1/images/button_ok.png")));
    __item107->setText(1, QApplication::translate("CommandsClass", "finds a potential energy minimum / calculates the Hessian", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item108 = new QTreeWidgetItem(__item105);
    __item108->setText(0, QApplication::translate("CommandsClass", "g_nmeig", 0, QApplication::UnicodeUTF8));
    __item108->setText(1, QApplication::translate("CommandsClass", "diagonalizes the Hessian", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item109 = new QTreeWidgetItem(__item105);
    __item109->setText(0, QApplication::translate("CommandsClass", "g_nmtraj", 0, QApplication::UnicodeUTF8));
    __item109->setText(1, QApplication::translate("CommandsClass", "generate oscillating trajectory of an eigenmode", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item110 = new QTreeWidgetItem(__item105);
    __item110->setText(0, QApplication::translate("CommandsClass", "g_anaeig", 0, QApplication::UnicodeUTF8));
    __item110->setText(1, QApplication::translate("CommandsClass", "analyzes the normal modes", 0, QApplication::UnicodeUTF8));

    QTreeWidgetItem *__item111 = new QTreeWidgetItem(__item105);
    __item111->setText(0, QApplication::translate("CommandsClass", "g_nmens", 0, QApplication::UnicodeUTF8));
    __item111->setText(1, QApplication::translate("CommandsClass", "generates an ensemble of structures from the normal modes", 0, QApplication::UnicodeUTF8));
    textEdit->setHtml(QApplication::translate("CommandsClass", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><span style=\" font-size:12pt; font-weight:600; color:#000000;\">Command Section</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; color:#000000;\">Open the sub-tree that you want and then double-click  commands to bring up their interfaces.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-righ"
        "t:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; color:#000000;\">Note that not all of commands have their own interfaces yet. Only those with green tick mark have their GUIs implemented.</p></body></html>", 0, QApplication::UnicodeUTF8));
    textLabel2->setText(QApplication::translate("CommandsClass", "Input File (-f)", 0, QApplication::UnicodeUTF8));
    cb1inputfile->clear();
    cb1inputfile->insertItems(0, QStringList()
     << QString()
    );
    textLabel1->setText(QApplication::translate("CommandsClass", "Output (-o)", 0, QApplication::UnicodeUTF8));
    le1outputfile->setText(QApplication::translate("CommandsClass", "outconf_pdb2gmx.gro", 0, QApplication::UnicodeUTF8));
    textLabel1_5->setText(QApplication::translate("CommandsClass", "Topology (-p)", 0, QApplication::UnicodeUTF8));
    le1topologyfile->setText(QApplication::translate("CommandsClass", "topol.top", 0, QApplication::UnicodeUTF8));
    textLabel1_4->setText(QApplication::translate("CommandsClass", "Output (-i)", 0, QApplication::UnicodeUTF8));
    le1includefile->setText(QString());
    textLabel1_9->setText(QApplication::translate("CommandsClass", "Output (-n)", 0, QApplication::UnicodeUTF8));
    le1_n->setText(QString());
    textLabel1_10->setText(QApplication::translate("CommandsClass", "Output (-q)", 0, QApplication::UnicodeUTF8));
    le1_q->setText(QString());
    toolBox->setItemText(toolBox->indexOf(page_pdb2gmx_files), QApplication::translate("CommandsClass", "pdb2gmx files", 0, QApplication::UnicodeUTF8));
    textLabel1_2_2->setText(QApplication::translate("CommandsClass", "Forcefield", 0, QApplication::UnicodeUTF8));
    cb1forcefield->clear();
    cb1forcefield->insertItems(0, QStringList()
     << QApplication::translate("CommandsClass", "oplsaa", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "G43b1", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "G43a1", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "G43a2", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "G45a3", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "G53a5", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "G53a6", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "gmx", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "encads", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "encadv", 0, QApplication::UnicodeUTF8)
    );
    textLabel1_2_8->setText(QApplication::translate("CommandsClass", "Water Model", 0, QApplication::UnicodeUTF8));
    cb1watermodel->clear();
    cb1watermodel->insertItems(0, QStringList()
     << QApplication::translate("CommandsClass", "spc", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "spce", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "tip3p", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "tip4p", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "tip5p", 0, QApplication::UnicodeUTF8)
    );
    textLabel2_2->setText(QApplication::translate("CommandsClass", "Force Constant", 0, QApplication::UnicodeUTF8));
    le1force_const->setText(QApplication::translate("CommandsClass", "1000", 0, QApplication::UnicodeUTF8));
    textLabel1_2_3->setText(QApplication::translate("CommandsClass", "Min Angle For H-Bonds", 0, QApplication::UnicodeUTF8));
    le1minangle_h->setText(QApplication::translate("CommandsClass", "135", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("CommandsClass", "Max Distance For H-Bond", 0, QApplication::UnicodeUTF8));
    le1maxdist_h->setText(QApplication::translate("CommandsClass", "0.3", 0, QApplication::UnicodeUTF8));
    ch1heavy_h->setText(QApplication::translate("CommandsClass", "Heavy Hydrogen Atoms", 0, QApplication::UnicodeUTF8));
    ch1doublemass_h->setText(QApplication::translate("CommandsClass", "Double Mass For Hydrogen Atoms", 0, QApplication::UnicodeUTF8));
    ch1ignore_h->setText(QApplication::translate("CommandsClass", "Ignore Hydrogen Atoms", 0, QApplication::UnicodeUTF8));
    toolBox->setItemText(toolBox->indexOf(page_pdb2gmx_options), QApplication::translate("CommandsClass", "pdb2gmx options", 0, QApplication::UnicodeUTF8));
    textLabel2_3->setText(QApplication::translate("CommandsClass", "Input File (-f)", 0, QApplication::UnicodeUTF8));
    cb2inputfile->clear();
    cb2inputfile->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_23->setText(QApplication::translate("CommandsClass", "Input (-n)", 0, QApplication::UnicodeUTF8));
    cb2_n->clear();
    cb2_n->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_24->setText(QApplication::translate("CommandsClass", "Input (-bf)", 0, QApplication::UnicodeUTF8));
    cb2_bf->clear();
    cb2_bf->insertItems(0, QStringList()
     << QString()
    );
    textLabel1_2->setText(QApplication::translate("CommandsClass", "Output (-o)", 0, QApplication::UnicodeUTF8));
    le2outputfile->setText(QApplication::translate("CommandsClass", "outconf_editconf.gro", 0, QApplication::UnicodeUTF8));
    textLabel1_11->setText(QApplication::translate("CommandsClass", "Output (-mead)", 0, QApplication::UnicodeUTF8));
    le2_mead->setText(QString());
    toolBox_2->setItemText(toolBox_2->indexOf(page_editconf_files), QApplication::translate("CommandsClass", "editconf files", 0, QApplication::UnicodeUTF8));
    textLabel2_4->setText(QApplication::translate("CommandsClass", "Box Type", 0, QApplication::UnicodeUTF8));
    cb2boxtype->clear();
    cb2boxtype->insertItems(0, QStringList()
     << QString()
     << QApplication::translate("CommandsClass", "tric", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "cubic", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "dodecahedron", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "octahedron", 0, QApplication::UnicodeUTF8)
    );
    textLabel2_2_4->setText(QApplication::translate("CommandsClass", "Box Vector Lengths", 0, QApplication::UnicodeUTF8));
    le2vector_length->setText(QApplication::translate("CommandsClass", "0 0 0", 0, QApplication::UnicodeUTF8));
    textLabel3->setText(QApplication::translate("CommandsClass", "Box Vector Angles", 0, QApplication::UnicodeUTF8));
    le2vector_angle->setText(QApplication::translate("CommandsClass", "90 90 90", 0, QApplication::UnicodeUTF8));
    textLabel2_2_3->setText(QApplication::translate("CommandsClass", "Geometrical Center", 0, QApplication::UnicodeUTF8));
    le2geom_center->setText(QApplication::translate("CommandsClass", "0 0 0", 0, QApplication::UnicodeUTF8));
    textLabel4->setText(QApplication::translate("CommandsClass", "Translation", 0, QApplication::UnicodeUTF8));
    le2translation->setText(QApplication::translate("CommandsClass", "0 0 0", 0, QApplication::UnicodeUTF8));
    textLabel4_2->setText(QApplication::translate("CommandsClass", "Rotation", 0, QApplication::UnicodeUTF8));
    le2rotation->setText(QApplication::translate("CommandsClass", "0 0 0", 0, QApplication::UnicodeUTF8));
    textLabel2_2_2->setText(QApplication::translate("CommandsClass", "Solute-Box Distance", 0, QApplication::UnicodeUTF8));
    le2solute_box_dist->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    ch2center_mol->setText(QApplication::translate("CommandsClass", "Center Molecule in the Box", 0, QApplication::UnicodeUTF8));
    ch2orient_mol->setText(QApplication::translate("CommandsClass", "Orient Molecule Along Its Principle Axis", 0, QApplication::UnicodeUTF8));
    toolBox_2->setItemText(toolBox_2->indexOf(page_editconf_options), QApplication::translate("CommandsClass", "editconf options", 0, QApplication::UnicodeUTF8));
    textLabel2_7->setText(QApplication::translate("CommandsClass", "Input File (-cp)", 0, QApplication::UnicodeUTF8));
    cb3inputfile_pro->clear();
    cb3inputfile_pro->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_6->setText(QApplication::translate("CommandsClass", "Input File (-cs)", 0, QApplication::UnicodeUTF8));
    cb3inputfile_water->clear();
    cb3inputfile_water->insertItems(0, QStringList()
     << QApplication::translate("CommandsClass", "spc216.gro", 0, QApplication::UnicodeUTF8)
    );
    textLabel2_5->setText(QApplication::translate("CommandsClass", "Input File (-ci)", 0, QApplication::UnicodeUTF8));
    cb3inputfile_extra->clear();
    cb3inputfile_extra->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_2_5->setText(QApplication::translate("CommandsClass", "Topology File (-p)", 0, QApplication::UnicodeUTF8));
    cb3topologyfile->clear();
    cb3topologyfile->insertItems(0, QStringList()
     << QString()
    );
    textLabel1_3->setText(QApplication::translate("CommandsClass", "Output (-o)", 0, QApplication::UnicodeUTF8));
    lec3outputfile->setText(QApplication::translate("CommandsClass", "outconf_genbox.gro", 0, QApplication::UnicodeUTF8));
    toolBox_4->setItemText(toolBox_4->indexOf(page_genbox_files), QApplication::translate("CommandsClass", "genbox files", 0, QApplication::UnicodeUTF8));
    textLabel2_8->setText(QApplication::translate("CommandsClass", "Box Size", 0, QApplication::UnicodeUTF8));
    le3boxsize->setText(QApplication::translate("CommandsClass", "0 0 0", 0, QApplication::UnicodeUTF8));
    textLabel2_4_2->setText(QApplication::translate("CommandsClass", "Number of Extra Mol to Insert", 0, QApplication::UnicodeUTF8));
    le3extramol_number->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    toolBox_4->setItemText(toolBox_4->indexOf(page_genbox_options), QApplication::translate("CommandsClass", "genbox options", 0, QApplication::UnicodeUTF8));
    textLabel2_9->setText(QApplication::translate("CommandsClass", "Input File (-s)", 0, QApplication::UnicodeUTF8));
    cb4inputfile->clear();
    cb4inputfile->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_11->setText(QApplication::translate("CommandsClass", "Index File (-n)", 0, QApplication::UnicodeUTF8));
    cb4indexfile->clear();
    cb4indexfile->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_151->setText(QApplication::translate("CommandsClass", "Input (-table)", 0, QApplication::UnicodeUTF8));
    cb4_table->clear();
    cb4_table->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_10->setText(QApplication::translate("CommandsClass", "Output File (-o)", 0, QApplication::UnicodeUTF8));
    le4outputfile->setText(QApplication::translate("CommandsClass", "outconf_genion.gro", 0, QApplication::UnicodeUTF8));
    textLabel2_2_6->setText(QApplication::translate("CommandsClass", "Log File (g)", 0, QApplication::UnicodeUTF8));
    le4logfile->setText(QApplication::translate("CommandsClass", "outlog_genion.log", 0, QApplication::UnicodeUTF8));
    textLabel1_6->setText(QApplication::translate("CommandsClass", "PDB Output (-pot)", 0, QApplication::UnicodeUTF8));
    le4pdboutput->setText(QString());
    toolBox_3->setItemText(toolBox_3->indexOf(page_genion_files), QApplication::translate("CommandsClass", "genion files", 0, QApplication::UnicodeUTF8));
    groupBox_11->setTitle(QApplication::translate("CommandsClass", "Positive Ions", 0, QApplication::UnicodeUTF8));
    textLabel2_4_3->setText(QApplication::translate("CommandsClass", "Name", 0, QApplication::UnicodeUTF8));
    le4posion_name->setText(QApplication::translate("CommandsClass", "Na", 0, QApplication::UnicodeUTF8));
    textLabel2_4_2_2->setText(QApplication::translate("CommandsClass", "Number", 0, QApplication::UnicodeUTF8));
    le4posion_number->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel2_4_2_3->setText(QApplication::translate("CommandsClass", "Charge", 0, QApplication::UnicodeUTF8));
    le4posion_charge->setText(QApplication::translate("CommandsClass", "1", 0, QApplication::UnicodeUTF8));
    groupBox_12->setTitle(QApplication::translate("CommandsClass", "Negative Ions", 0, QApplication::UnicodeUTF8));
    textLabel2_4_2_4->setText(QApplication::translate("CommandsClass", "Name", 0, QApplication::UnicodeUTF8));
    le4negion_name->setText(QApplication::translate("CommandsClass", "Cl", 0, QApplication::UnicodeUTF8));
    textLabel2_4_2_2_2->setText(QApplication::translate("CommandsClass", "Number", 0, QApplication::UnicodeUTF8));
    le4negion_number->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel2_4_2_3_2->setText(QApplication::translate("CommandsClass", "Charge", 0, QApplication::UnicodeUTF8));
    le4negion_charge->setText(QApplication::translate("CommandsClass", "-1", 0, QApplication::UnicodeUTF8));
    textLabel4_3->setText(QApplication::translate("CommandsClass", "Min of Distance Between Ions", 0, QApplication::UnicodeUTF8));
    le4min_dist->setText(QApplication::translate("CommandsClass", "0.6", 0, QApplication::UnicodeUTF8));
    textLabel5->setText(QApplication::translate("CommandsClass", "Scaling Factor for PDB File", 0, QApplication::UnicodeUTF8));
    le4scalingfactor->setText(QApplication::translate("CommandsClass", "0.001", 0, QApplication::UnicodeUTF8));
    ch4random_place->setText(QApplication::translate("CommandsClass", "Random Placement of Ions", 0, QApplication::UnicodeUTF8));
    toolBox_3->setItemText(toolBox_3->indexOf(page_genion_options), QApplication::translate("CommandsClass", "genion options", 0, QApplication::UnicodeUTF8));
    textLabel2_12->setText(QApplication::translate("CommandsClass", "Input File (-c)", 0, QApplication::UnicodeUTF8));
    cb5inputfile->clear();
    cb5inputfile->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_13->setText(QApplication::translate("CommandsClass", "MDP (-f)", 0, QApplication::UnicodeUTF8));
    cb5mdpfile->clear();
    cb5mdpfile->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_2_7->setText(QApplication::translate("CommandsClass", "Topology (-p)", 0, QApplication::UnicodeUTF8));
    cb5topologyfile->clear();
    cb5topologyfile->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_2_10->setText(QApplication::translate("CommandsClass", "Input (-r)", 0, QApplication::UnicodeUTF8));
    cb5_r->clear();
    cb5_r->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_2_11->setText(QApplication::translate("CommandsClass", "Input (-rb)", 0, QApplication::UnicodeUTF8));
    cb5_rb->clear();
    cb5_rb->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_2_12->setText(QApplication::translate("CommandsClass", "Input (-n)", 0, QApplication::UnicodeUTF8));
    cb5_n->clear();
    cb5_n->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_2_36->setText(QApplication::translate("CommandsClass", "Input (-t)", 0, QApplication::UnicodeUTF8));
    cb5_t->clear();
    cb5_t->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_2_37->setText(QApplication::translate("CommandsClass", "Input (-e)", 0, QApplication::UnicodeUTF8));
    cb5_e->clear();
    cb5_e->insertItems(0, QStringList()
     << QString()
    );
    textLabel1_7->setText(QApplication::translate("CommandsClass", "Output File (-o)", 0, QApplication::UnicodeUTF8));
    le5outputfile->setText(QApplication::translate("CommandsClass", "outtpr_grompp.tpr", 0, QApplication::UnicodeUTF8));
    textLabel2_14->setText(QApplication::translate("CommandsClass", "Output (-po)", 0, QApplication::UnicodeUTF8));
    le5_po->setText(QString());
    textLabel2_3_3->setText(QApplication::translate("CommandsClass", "Output (-deshuf)", 0, QApplication::UnicodeUTF8));
    textLabel2_2_2_3->setText(QApplication::translate("CommandsClass", "Output (-pp)", 0, QApplication::UnicodeUTF8));
    tbxGrompp->setItemText(tbxGrompp->indexOf(page_grompp_files), QApplication::translate("CommandsClass", "grompp files", 0, QApplication::UnicodeUTF8));
    ch5loud->setText(QApplication::translate("CommandsClass", "Be loud and noisy", 0, QApplication::UnicodeUTF8));
    ch5shuffle->setText(QApplication::translate("CommandsClass", "Shuffle molecules over nodes", 0, QApplication::UnicodeUTF8));
    ch5sort->setText(QApplication::translate("CommandsClass", "Sort molecules according to x coordinate", 0, QApplication::UnicodeUTF8));
    ch5rem_virtual->setText(QApplication::translate("CommandsClass", "Remove constant bonded interactionss with\n"
" virtual sites", 0, QApplication::UnicodeUTF8));
    ch5remove_waals->setText(QApplication::translate("CommandsClass", "Remove 1-4 interactions without\n"
" van der Waals", 0, QApplication::UnicodeUTF8));
    ch5renumber->setText(QApplication::translate("CommandsClass", "Renumber and minimize number of atomtypes", 0, QApplication::UnicodeUTF8));
    txt->setText(QApplication::translate("CommandsClass", "First frame at this time", 0, QApplication::UnicodeUTF8));
    textLabel2_15->setText(QApplication::translate("CommandsClass", "Number of status files for nodes", 0, QApplication::UnicodeUTF8));
    textLabel3_2->setText(QApplication::translate("CommandsClass", "Stop processing after # warnings", 0, QApplication::UnicodeUTF8));
    tbxGrompp->setItemText(tbxGrompp->indexOf(page_grompp_options), QApplication::translate("CommandsClass", "grompp options", 0, QApplication::UnicodeUTF8));
    textLabel2_16->setText(QApplication::translate("CommandsClass", "Input File (-s)", 0, QApplication::UnicodeUTF8));
    cb6_s->clear();
    cb6_s->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_17->setText(QApplication::translate("CommandsClass", "Output (-o)", 0, QApplication::UnicodeUTF8));
    le6_o->setText(QApplication::translate("CommandsClass", "outtraj_mdrun.trr", 0, QApplication::UnicodeUTF8));
    textLabel2_2_2_4->setText(QApplication::translate("CommandsClass", "Comp Traj (-x)", 0, QApplication::UnicodeUTF8));
    textLabel2_2_8->setText(QApplication::translate("CommandsClass", "Output (-c)", 0, QApplication::UnicodeUTF8));
    le6_c->setText(QApplication::translate("CommandsClass", "outconf_mdrun.gro", 0, QApplication::UnicodeUTF8));
    textLabel2_18->setText(QApplication::translate("CommandsClass", "Energy File (-e)", 0, QApplication::UnicodeUTF8));
    le6_e->setText(QString());
    textLabel1_8->setText(QApplication::translate("CommandsClass", "Log File (-g)", 0, QApplication::UnicodeUTF8));
    le6_g->setText(QApplication::translate("CommandsClass", "outlog_mdrun.log", 0, QApplication::UnicodeUTF8));
    textLabel2_3_4->setText(QApplication::translate("CommandsClass", "Output (-dgdl)", 0, QApplication::UnicodeUTF8));
    textLabel2_3_5->setText(QApplication::translate("CommandsClass", "Output (-field)", 0, QApplication::UnicodeUTF8));
    textLabel2_152->setText(QApplication::translate("CommandsClass", "Input (-table)", 0, QApplication::UnicodeUTF8));
    cb6_table->clear();
    cb6_table->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_153->setText(QApplication::translate("CommandsClass", "Input (-tablep)", 0, QApplication::UnicodeUTF8));
    cb6_tablep->clear();
    cb6_tablep->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_154->setText(QApplication::translate("CommandsClass", "Input (-rerun)", 0, QApplication::UnicodeUTF8));
    cb6_rerun->clear();
    cb6_rerun->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_2_2_5->setText(QApplication::translate("CommandsClass", "Output (-tpi)", 0, QApplication::UnicodeUTF8));
    tbxMdrun->setItemText(tbxMdrun->indexOf(page_mdrun_files), QApplication::translate("CommandsClass", "mdrun files (1)", 0, QApplication::UnicodeUTF8));
    textLabel2_155->setText(QApplication::translate("CommandsClass", "Input (-ei)", 0, QApplication::UnicodeUTF8));
    cb6_ei->clear();
    cb6_ei->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_2_2_6->setText(QApplication::translate("CommandsClass", "Output (-eo)", 0, QApplication::UnicodeUTF8));
    textLabel2_156->setText(QApplication::translate("CommandsClass", "Input (-j)", 0, QApplication::UnicodeUTF8));
    cb6_j->clear();
    cb6_j->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_2_2_7->setText(QApplication::translate("CommandsClass", "Output (-jo)", 0, QApplication::UnicodeUTF8));
    textLabel2_2_2_8->setText(QApplication::translate("CommandsClass", "Output (-ffout)", 0, QApplication::UnicodeUTF8));
    textLabel2_2_2_9->setText(QApplication::translate("CommandsClass", "Output (-devout)", 0, QApplication::UnicodeUTF8));
    textLabel2_2_2_10->setText(QApplication::translate("CommandsClass", "Output (-runav)", 0, QApplication::UnicodeUTF8));
    textLabel2_157->setText(QApplication::translate("CommandsClass", "Input (-pi)", 0, QApplication::UnicodeUTF8));
    cb6_pi->clear();
    cb6_pi->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_2_2_11->setText(QApplication::translate("CommandsClass", "Output (-po)", 0, QApplication::UnicodeUTF8));
    textLabel2_2_2_12->setText(QApplication::translate("CommandsClass", "Output (-pd)", 0, QApplication::UnicodeUTF8));
    textLabel2_2_2_15->setText(QApplication::translate("CommandsClass", "Input (-pn)", 0, QApplication::UnicodeUTF8));
    cb6_pn->clear();
    cb6_pn->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_2_2_13->setText(QApplication::translate("CommandsClass", "Output (-mtx)", 0, QApplication::UnicodeUTF8));
    textLabel2_2_2_14->setText(QApplication::translate("CommandsClass", "Output (-dn)", 0, QApplication::UnicodeUTF8));
    tbxMdrun->setItemText(tbxMdrun->indexOf(page_50), QApplication::translate("CommandsClass", "mdrun files (2)", 0, QApplication::UnicodeUTF8));
    ch6loud->setText(QApplication::translate("CommandsClass", "Be loud and noisy", 0, QApplication::UnicodeUTF8));
    ch6xray->setText(QApplication::translate("CommandsClass", "Include x-ray bombardment on system", 0, QApplication::UnicodeUTF8));
    ch6glass->setText(QApplication::translate("CommandsClass", "Glass simulation with special long range\n"
" corrections", 0, QApplication::UnicodeUTF8));
    ch6dvdl->setText(QApplication::translate("CommandsClass", "Write separate V and dVdl terms in log files", 0, QApplication::UnicodeUTF8));
    ch6compactlog->setText(QApplication::translate("CommandsClass", "Write a compact log file", 0, QApplication::UnicodeUTF8));
    ch6legend->setText(QApplication::translate("CommandsClass", "Add legend for xvg files", 0, QApplication::UnicodeUTF8));
    textLabel2_19->setText(QApplication::translate("CommandsClass", "Number of nodes", 0, QApplication::UnicodeUTF8));
    sp2threadslabel->setText(QApplication::translate("CommandsClass", "Number of threads to start on each node ", 0, QApplication::UnicodeUTF8));
    textLabel3_3->setText(QApplication::translate("CommandsClass", "Attempt replica exchange every # steps ", 0, QApplication::UnicodeUTF8));
    textLabel2_2_9->setText(QApplication::translate("CommandsClass", "Seed for replica exchange, -1 is generate a seed ", 0, QApplication::UnicodeUTF8));
    tbxMdrun->setItemText(tbxMdrun->indexOf(page_mdrun_options), QApplication::translate("CommandsClass", "mdrun options", 0, QApplication::UnicodeUTF8));
    textLabel2_20->setText(QApplication::translate("CommandsClass", "Input File (-s)", 0, QApplication::UnicodeUTF8));
    cb7inputfile->clear();
    cb7inputfile->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_22->setText(QApplication::translate("CommandsClass", "Input (-f)", 0, QApplication::UnicodeUTF8));
    cb7full->clear();
    cb7full->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_96->setText(QApplication::translate("CommandsClass", "Input (-e)", 0, QApplication::UnicodeUTF8));
    cb7energy->clear();
    cb7energy->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_97->setText(QApplication::translate("CommandsClass", "Input (-n)", 0, QApplication::UnicodeUTF8));
    cb7index->clear();
    cb7index->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_21->setText(QApplication::translate("CommandsClass", "Output (-o)", 0, QApplication::UnicodeUTF8));
    le7output->setText(QApplication::translate("CommandsClass", "tpxout.tpr", 0, QApplication::UnicodeUTF8));
    toolBox_5->setItemText(toolBox_5->indexOf(page), QApplication::translate("CommandsClass", "tpbconv files", 0, QApplication::UnicodeUTF8));
    ch7charges->setText(QApplication::translate("CommandsClass", "Set the charges of a group (from the index)\n"
" to zero ", 0, QApplication::UnicodeUTF8));
    ch7continuous->setText(QApplication::translate("CommandsClass", "For a continuous trajectory, the constraints \n"
"should not be solved before the first step (default) ", 0, QApplication::UnicodeUTF8));
    textLabel2_59->setText(QApplication::translate("CommandsClass", "Extend runtime by this amount (ps)", 0, QApplication::UnicodeUTF8));
    le7extend_this->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    le7extend_until->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    le7continue->setText(QApplication::translate("CommandsClass", "-1", 0, QApplication::UnicodeUTF8));
    sp2threadslabel_2->setText(QApplication::translate("CommandsClass", "Extend runtime until this ending time (ps) ", 0, QApplication::UnicodeUTF8));
    sp2threadslabel_12->setText(QApplication::translate("CommandsClass", "Continue from frame at this time (ps) \n"
"instead of the last frame ", 0, QApplication::UnicodeUTF8));
    toolBox_5->setItemText(toolBox_5->indexOf(page_2), QApplication::translate("CommandsClass", "tpbconv options", 0, QApplication::UnicodeUTF8));
    textLabel2_25->setText(QApplication::translate("CommandsClass", "Input Trajectory (-f)", 0, QApplication::UnicodeUTF8));
    cb8traj->clear();
    cb8traj->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_98->setText(QApplication::translate("CommandsClass", "Input (-s)", 0, QApplication::UnicodeUTF8));
    cb8runinput->clear();
    cb8runinput->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_99->setText(QApplication::translate("CommandsClass", "Index File (-n)", 0, QApplication::UnicodeUTF8));
    cb8index->clear();
    cb8index->insertItems(0, QStringList()
     << QString()
    );
    toolBox_6->setItemText(toolBox_6->indexOf(page_3), QApplication::translate("CommandsClass", "ngmx files", 0, QApplication::UnicodeUTF8));
    textLabel2_101->setText(QApplication::translate("CommandsClass", "First frame (ps) to read from trajectory ", 0, QApplication::UnicodeUTF8));
    le8first->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel2_100->setText(QApplication::translate("CommandsClass", "Last frame (ps) to read from trajectory ", 0, QApplication::UnicodeUTF8));
    le8last->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel2_102->setText(QApplication::translate("CommandsClass", "Only use frame when \n"
"t MOD dt = first time (ps)", 0, QApplication::UnicodeUTF8));
    le8dt->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    toolBox_6->setItemText(toolBox_6->indexOf(page_4), QApplication::translate("CommandsClass", "ngmx options", 0, QApplication::UnicodeUTF8));
    textLabel2_27->setText(QApplication::translate("CommandsClass", "Input File (-f)", 0, QApplication::UnicodeUTF8));
    cb9inputfile->clear();
    cb9inputfile->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_28->setText(QApplication::translate("CommandsClass", "Input (-s)", 0, QApplication::UnicodeUTF8));
    cb9_s->clear();
    cb9_s->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_103->setText(QApplication::translate("CommandsClass", "Input (-n)", 0, QApplication::UnicodeUTF8));
    cb9_n->clear();
    cb9_n->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_118->setText(QApplication::translate("CommandsClass", "Input (-fr)", 0, QApplication::UnicodeUTF8));
    cb9_fr->clear();
    cb9_fr->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_119->setText(QApplication::translate("CommandsClass", "Input (-sub)", 0, QApplication::UnicodeUTF8));
    cb9_sub->clear();
    cb9_sub->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_104->setText(QApplication::translate("CommandsClass", "Input (-drop)", 0, QApplication::UnicodeUTF8));
    cb9_drop->clear();
    cb9_drop->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_26->setText(QApplication::translate("CommandsClass", "Output File (-o)", 0, QApplication::UnicodeUTF8));
    le9_output->setText(QString());
    toolBox_7->setItemText(toolBox_7->indexOf(page_5), QApplication::translate("CommandsClass", "trjconv files", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("CommandsClass", "First frame", 0, QApplication::UnicodeUTF8));
    le9first->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("CommandsClass", "Last frame", 0, QApplication::UnicodeUTF8));
    le9last->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel2_168->setText(QApplication::translate("CommandsClass", "Only use frame when \n"
"t MOD dt = first time (ps)", 0, QApplication::UnicodeUTF8));
    le9only->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    label_9->setText(QApplication::translate("CommandsClass", "Only write every nr-th frame", 0, QApplication::UnicodeUTF8));
    label_11->setText(QApplication::translate("CommandsClass", "Dump frame nearest specified time (ps)", 0, QApplication::UnicodeUTF8));
    le9dump->setText(QApplication::translate("CommandsClass", "-1", 0, QApplication::UnicodeUTF8));
    label_12->setText(QApplication::translate("CommandsClass", "Starting time (ps)", 0, QApplication::UnicodeUTF8));
    le9starting->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    label_13->setText(QApplication::translate("CommandsClass", "Change time step between input frames (ps)", 0, QApplication::UnicodeUTF8));
    le9change->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("CommandsClass", "Time unit", 0, QApplication::UnicodeUTF8));
    cb9time->clear();
    cb9time->insertItems(0, QStringList()
     << QApplication::translate("CommandsClass", "ps", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "fs", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "ns", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "us", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "ms", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "s", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "m", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "h", 0, QApplication::UnicodeUTF8)
    );
    label_7->setText(QApplication::translate("CommandsClass", "PBC treatment", 0, QApplication::UnicodeUTF8));
    cb9pbc->clear();
    cb9pbc->insertItems(0, QStringList()
     << QApplication::translate("CommandsClass", "none", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "whole", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "inbox", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "nojump", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "cluster", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "com", 0, QApplication::UnicodeUTF8)
    );
    label_5->setText(QApplication::translate("CommandsClass", "Unit-cell representation", 0, QApplication::UnicodeUTF8));
    cb9cell->clear();
    cb9cell->insertItems(0, QStringList()
     << QApplication::translate("CommandsClass", "rect", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "tric", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "compact", 0, QApplication::UnicodeUTF8)
    );
    label_6->setText(QApplication::translate("CommandsClass", "Center atoms in box", 0, QApplication::UnicodeUTF8));
    cb9center->clear();
    cb9center->insertItems(0, QStringList()
     << QApplication::translate("CommandsClass", "no", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "tric", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "rect", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "zero", 0, QApplication::UnicodeUTF8)
    );
    toolBox_7->setItemText(toolBox_7->indexOf(page_6), QApplication::translate("CommandsClass", "trjconv options (1)", 0, QApplication::UnicodeUTF8));
    label_8->setText(QApplication::translate("CommandsClass", "Fit mol to ref structure in structure file", 0, QApplication::UnicodeUTF8));
    cb9fit->clear();
    cb9fit->insertItems(0, QStringList()
     << QApplication::translate("CommandsClass", "none", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "rot+trans", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "translation", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "progressive", 0, QApplication::UnicodeUTF8)
    );
    ch9velocity->setText(QApplication::translate("CommandsClass", "Read and write velocities if possible", 0, QApplication::UnicodeUTF8));
    ch9force->setText(QApplication::translate("CommandsClass", "Read and write forces if possible", 0, QApplication::UnicodeUTF8));
    label_14->setText(QApplication::translate("CommandsClass", "Truncate input trj file after this time (ps)", 0, QApplication::UnicodeUTF8));
    le9truncate->setText(QApplication::translate("CommandsClass", "-1", 0, QApplication::UnicodeUTF8));
    ch9append->setText(QApplication::translate("CommandsClass", "Append output", 0, QApplication::UnicodeUTF8));
    ch9write->setText(QApplication::translate("CommandsClass", "Write each frame to a separate gro, g96 or pdb file", 0, QApplication::UnicodeUTF8));
    ch9TER->setText(QApplication::translate("CommandsClass", "Use 'TER' in pdb file as end of frame in stead of \n"
"default 'ENDMDL'", 0, QApplication::UnicodeUTF8));
    label_16->setText(QApplication::translate("CommandsClass", "Drop all frames below this value", 0, QApplication::UnicodeUTF8));
    le9below->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    label_17->setText(QApplication::translate("CommandsClass", "Drop all frames above this value", 0, QApplication::UnicodeUTF8));
    le9above->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    toolBox_7->setItemText(toolBox_7->indexOf(page_45), QApplication::translate("CommandsClass", "tjconv options (2)", 0, QApplication::UnicodeUTF8));
    textLabel2_30->setText(QApplication::translate("CommandsClass", "Input File (-f)", 0, QApplication::UnicodeUTF8));
    cb10input->clear();
    cb10input->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_31->setText(QApplication::translate("CommandsClass", "Input (-f2)", 0, QApplication::UnicodeUTF8));
    cb10_f2->clear();
    cb10_f2->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_2_13->setText(QApplication::translate("CommandsClass", "Input (-s)", 0, QApplication::UnicodeUTF8));
    cb10_s->clear();
    cb10_s->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_29->setText(QApplication::translate("CommandsClass", "Output (-o)", 0, QApplication::UnicodeUTF8));
    le10output->setText(QApplication::translate("CommandsClass", "energy.xvg", 0, QApplication::UnicodeUTF8));
    textLabel2_112->setText(QApplication::translate("CommandsClass", "Output (-viol)", 0, QApplication::UnicodeUTF8));
    le10_viol->setText(QString());
    textLabel2_113->setText(QApplication::translate("CommandsClass", "Output (-pairs)", 0, QApplication::UnicodeUTF8));
    le10_pairs->setText(QString());
    textLabel2_114->setText(QApplication::translate("CommandsClass", "Output (-oten)", 0, QApplication::UnicodeUTF8));
    le10_oten->setText(QString());
    textLabel2_115->setText(QApplication::translate("CommandsClass", "Output (-corr)", 0, QApplication::UnicodeUTF8));
    le10_corr->setText(QString());
    textLabel2_116->setText(QApplication::translate("CommandsClass", "Output (-vis)", 0, QApplication::UnicodeUTF8));
    le10_vis->setText(QString());
    textLabel2_117->setText(QApplication::translate("CommandsClass", "Output (-ravg)", 0, QApplication::UnicodeUTF8));
    le10_ravg->setText(QString());
    toolBox_8->setItemText(toolBox_8->indexOf(page_7), QApplication::translate("CommandsClass", "g_energy files", 0, QApplication::UnicodeUTF8));
    ch10free->setText(QApplication::translate("CommandsClass", "Do a free energy estimate", 0, QApplication::UnicodeUTF8));
    ch10sum->setText(QApplication::translate("CommandsClass", "Sum the energy terms selected rather than \n"
"display them all", 0, QApplication::UnicodeUTF8));
    ch10dipole->setText(QApplication::translate("CommandsClass", "Compute the total dipole moment", 0, QApplication::UnicodeUTF8));
    label_22->setText(QApplication::translate("CommandsClass", "First frame", 0, QApplication::UnicodeUTF8));
    le10first->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    label_23->setText(QApplication::translate("CommandsClass", "Last frame", 0, QApplication::UnicodeUTF8));
    le10last->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    label_24->setText(QApplication::translate("CommandsClass", "Reference temperature for free energy \n"
"calculation", 0, QApplication::UnicodeUTF8));
    le10ref->setText(QApplication::translate("CommandsClass", "300", 0, QApplication::UnicodeUTF8));
    label_25->setText(QApplication::translate("CommandsClass", "Subtract a zero-point energy", 0, QApplication::UnicodeUTF8));
    le10subtract->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    label_26->setText(QApplication::translate("CommandsClass", "Skip number of frames ", 0, QApplication::UnicodeUTF8));
    label_27->setText(QApplication::translate("CommandsClass", "Number of molecules", 0, QApplication::UnicodeUTF8));
    label_28->setText(QApplication::translate("CommandsClass", "Number of degrees of freedom per molecule", 0, QApplication::UnicodeUTF8));
    toolBox_8->setItemText(toolBox_8->indexOf(page_8), QApplication::translate("CommandsClass", "g_energy options (1)", 0, QApplication::UnicodeUTF8));
    ch10autocorr->setText(QApplication::translate("CommandsClass", "Calculate autocorrelation of energy fluctuations \n"
"rather than energy itself", 0, QApplication::UnicodeUTF8));
    ch10inst->setText(QApplication::translate("CommandsClass", "Analyse instantaneous orientation data", 0, QApplication::UnicodeUTF8));
    ch10eigen->setText(QApplication::translate("CommandsClass", "Also plot the eigenvectors with -oten", 0, QApplication::UnicodeUTF8));
    ch10normal->setText(QApplication::translate("CommandsClass", "Normalize ACF", 0, QApplication::UnicodeUTF8));
    label_10->setText(QApplication::translate("CommandsClass", "Length of the ACF", 0, QApplication::UnicodeUTF8));
    label_15->setText(QApplication::translate("CommandsClass", "Order of Legendre polynomial for ACF ", 0, QApplication::UnicodeUTF8));
    cb10order->clear();
    cb10order->insertItems(0, QStringList()
     << QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "1", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "2", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "3", 0, QApplication::UnicodeUTF8)
    );
    label_18->setText(QApplication::translate("CommandsClass", "Fit function", 0, QApplication::UnicodeUTF8));
    cb10fit->clear();
    cb10fit->insertItems(0, QStringList()
     << QApplication::translate("CommandsClass", "exp", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "aexp", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "exp_exp", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "vac", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "exp5", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "exp7", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "exp9", 0, QApplication::UnicodeUTF8)
    );
    label_19->setText(QApplication::translate("CommandsClass", "Skip N points in the output file of \n"
"correlation functions", 0, QApplication::UnicodeUTF8));
    label_20->setText(QApplication::translate("CommandsClass", "Begin of exponential fit", 0, QApplication::UnicodeUTF8));
    le10begin->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    label_21->setText(QApplication::translate("CommandsClass", "End of exponential fit", 0, QApplication::UnicodeUTF8));
    le10end->setText(QApplication::translate("CommandsClass", "-1", 0, QApplication::UnicodeUTF8));
    toolBox_8->setItemText(toolBox_8->indexOf(page_46), QApplication::translate("CommandsClass", "g_energy options (2)", 0, QApplication::UnicodeUTF8));
    textLabel2_34->setText(QApplication::translate("CommandsClass", "Input File (-f)", 0, QApplication::UnicodeUTF8));
    cb11input->clear();
    cb11input->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_121->setText(QApplication::translate("CommandsClass", "Input (-s)", 0, QApplication::UnicodeUTF8));
    cb11_s->clear();
    cb11_s->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_122->setText(QApplication::translate("CommandsClass", "Input (-n)", 0, QApplication::UnicodeUTF8));
    cb11_n->clear();
    cb11_n->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_120->setText(QApplication::translate("CommandsClass", "Output (-ox)", 0, QApplication::UnicodeUTF8));
    le11_ox->setText(QString());
    textLabel2_2_33->setText(QApplication::translate("CommandsClass", "Output (-ov)", 0, QApplication::UnicodeUTF8));
    le11_ov->setText(QString());
    textLabel1_15->setText(QApplication::translate("CommandsClass", "Output (-of)", 0, QApplication::UnicodeUTF8));
    le11_of->setText(QString());
    textLabel1_33->setText(QApplication::translate("CommandsClass", "Output (-ob)", 0, QApplication::UnicodeUTF8));
    le11_ob->setText(QString());
    textLabel2_33->setText(QApplication::translate("CommandsClass", "Output (-ot)", 0, QApplication::UnicodeUTF8));
    le11_ot->setText(QString());
    textLabel2_2_14->setText(QApplication::translate("CommandsClass", "Output (-ekt)", 0, QApplication::UnicodeUTF8));
    le11_ekt->setText(QString());
    textLabel1_13->setText(QApplication::translate("CommandsClass", "Output (-ekr)", 0, QApplication::UnicodeUTF8));
    le11_ekr->setText(QString());
    textLabel2_32->setText(QApplication::translate("CommandsClass", "Output (-cv)", 0, QApplication::UnicodeUTF8));
    le11_cv->setText(QString());
    textLabel2_123->setText(QApplication::translate("CommandsClass", "Output (-cf)", 0, QApplication::UnicodeUTF8));
    le11_cf->setText(QString());
    toolBox_9->setItemText(toolBox_9->indexOf(page_9), QApplication::translate("CommandsClass", "g_traj files", 0, QApplication::UnicodeUTF8));
    ch11plot->setText(QApplication::translate("CommandsClass", "Plot data for the com of each group", 0, QApplication::UnicodeUTF8));
    ch11index->setText(QApplication::translate("CommandsClass", "Index contains molecule numbers iso atom \n"
"numbers", 0, QApplication::UnicodeUTF8));
    ch11remove->setText(QApplication::translate("CommandsClass", "Remove jumps of atoms across the box", 0, QApplication::UnicodeUTF8));
    label_55->setText(QApplication::translate("CommandsClass", "Plot:", 0, QApplication::UnicodeUTF8));
    ch11x->setText(QApplication::translate("CommandsClass", "X-component", 0, QApplication::UnicodeUTF8));
    ch11y->setText(QApplication::translate("CommandsClass", "Y-component", 0, QApplication::UnicodeUTF8));
    ch11z->setText(QApplication::translate("CommandsClass", "Z-component", 0, QApplication::UnicodeUTF8));
    ch11vector->setText(QApplication::translate("CommandsClass", "Plot vector length", 0, QApplication::UnicodeUTF8));
    label_56->setText(QApplication::translate("CommandsClass", "Number of groups to consider", 0, QApplication::UnicodeUTF8));
    label_57->setText(QApplication::translate("CommandsClass", "First frame", 0, QApplication::UnicodeUTF8));
    le11first->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    label_58->setText(QApplication::translate("CommandsClass", "Last frame", 0, QApplication::UnicodeUTF8));
    le11last->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel2_150->setText(QApplication::translate("CommandsClass", "Only use frame when \n"
"t MOD dt = first time (ps)", 0, QApplication::UnicodeUTF8));
    le11only->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    label_59->setText(QApplication::translate("CommandsClass", "Binwidth for velocity histogram (nm/ps)", 0, QApplication::UnicodeUTF8));
    le11binwidth->setText(QApplication::translate("CommandsClass", "1", 0, QApplication::UnicodeUTF8));
    label_60->setText(QApplication::translate("CommandsClass", "Scale factor for pdb output, 0 is autoscale", 0, QApplication::UnicodeUTF8));
    le11scale->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    toolBox_9->setItemText(toolBox_9->indexOf(page_10), QApplication::translate("CommandsClass", "g_traj options", 0, QApplication::UnicodeUTF8));
    textLabel2_36->setText(QApplication::translate("CommandsClass", "Input File (-f)", 0, QApplication::UnicodeUTF8));
    cb12input->clear();
    cb12input->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_37->setText(QApplication::translate("CommandsClass", "Output (-ac)", 0, QApplication::UnicodeUTF8));
    le12_ac->setText(QString());
    textLabel2_2_15->setText(QApplication::translate("CommandsClass", "Output (-msd)", 0, QApplication::UnicodeUTF8));
    le12_msd->setText(QString());
    textLabel1_14->setText(QApplication::translate("CommandsClass", "Output (-cc)", 0, QApplication::UnicodeUTF8));
    le12_cc->setText(QString());
    textLabel2_35->setText(QApplication::translate("CommandsClass", "Output (-dist)", 0, QApplication::UnicodeUTF8));
    le12_dist->setText(QString());
    textLabel2_105->setText(QApplication::translate("CommandsClass", "Output (-av)", 0, QApplication::UnicodeUTF8));
    le12_av->setText(QString());
    textLabel2_106->setText(QApplication::translate("CommandsClass", "Output (-ee)", 0, QApplication::UnicodeUTF8));
    le12_ee->setText(QString());
    textLabel1_31->setText(QApplication::translate("CommandsClass", "Log File (-g)", 0, QApplication::UnicodeUTF8));
    le12log->setText(QApplication::translate("CommandsClass", "fitlog.log", 0, QApplication::UnicodeUTF8));
    toolBox_10->setItemText(toolBox_10->indexOf(page_11), QApplication::translate("CommandsClass", "g_analyze files", 0, QApplication::UnicodeUTF8));
    ch12_expect->setText(QApplication::translate("CommandsClass", "Expect a time in the input", 0, QApplication::UnicodeUTF8));
    ch12derive->setText(QApplication::translate("CommandsClass", "Use the derivative", 0, QApplication::UnicodeUTF8));
    ch12integrate->setText(QApplication::translate("CommandsClass", "Integrate data function(s) numerically using \n"
"trapezium rule", 0, QApplication::UnicodeUTF8));
    ch12interpret->setText(QApplication::translate("CommandsClass", "Interpret second data set as error in the \n"
"y values for integrating", 0, QApplication::UnicodeUTF8));
    label_29->setText(QApplication::translate("CommandsClass", "First time", 0, QApplication::UnicodeUTF8));
    le12first->setText(QApplication::translate("CommandsClass", "-1", 0, QApplication::UnicodeUTF8));
    label_30->setText(QApplication::translate("CommandsClass", "Last time", 0, QApplication::UnicodeUTF8));
    le12last->setText(QApplication::translate("CommandsClass", "-1", 0, QApplication::UnicodeUTF8));
    le12binwidth->setText(QApplication::translate("CommandsClass", "0.1", 0, QApplication::UnicodeUTF8));
    cb12error->clear();
    cb12error->insertItems(0, QStringList()
     << QApplication::translate("CommandsClass", "none", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "stddev", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "error", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "90", 0, QApplication::UnicodeUTF8)
    );
    le12average->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    le12print->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    label_32->setText(QApplication::translate("CommandsClass", "Binwidth for the distribution", 0, QApplication::UnicodeUTF8));
    label_35->setText(QApplication::translate("CommandsClass", "Error bars for -av", 0, QApplication::UnicodeUTF8));
    label_33->setText(QApplication::translate("CommandsClass", "Start averaging the integral from here", 0, QApplication::UnicodeUTF8));
    label_31->setText(QApplication::translate("CommandsClass", "Print the high-frequency fluctuation", 0, QApplication::UnicodeUTF8));
    label_34->setText(QApplication::translate("CommandsClass", "Read # sets seperated by &", 0, QApplication::UnicodeUTF8));
    toolBox_10->setItemText(toolBox_10->indexOf(page_12), QApplication::translate("CommandsClass", "g_analyze options (1)", 0, QApplication::UnicodeUTF8));
    ch12fit->setText(QApplication::translate("CommandsClass", "Fit data to: b t^a", 0, QApplication::UnicodeUTF8));
    ch12subtract->setText(QApplication::translate("CommandsClass", "Subtract the average before autocorrelating", 0, QApplication::UnicodeUTF8));
    ch12acf_calc->setText(QApplication::translate("CommandsClass", "Calculate one ACF over all sets", 0, QApplication::UnicodeUTF8));
    ch12acf_norml->setText(QApplication::translate("CommandsClass", "Normalize ACF", 0, QApplication::UnicodeUTF8));
    label_37->setText(QApplication::translate("CommandsClass", "Order of Legendre polynomial for ACF", 0, QApplication::UnicodeUTF8));
    cb12order->clear();
    cb12order->insertItems(0, QStringList()
     << QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "1", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "2", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "3", 0, QApplication::UnicodeUTF8)
    );
    cb12fitfunc->clear();
    cb12fitfunc->insertItems(0, QStringList()
     << QApplication::translate("CommandsClass", "none", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "exp", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "aexp", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "exp_exp", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "vac", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "exp5", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "exp7", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "exp9", 0, QApplication::UnicodeUTF8)
    );
    le12begin->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    le12end->setText(QApplication::translate("CommandsClass", "-1", 0, QApplication::UnicodeUTF8));
    label_38->setText(QApplication::translate("CommandsClass", "Length of the ACF", 0, QApplication::UnicodeUTF8));
    label_39->setText(QApplication::translate("CommandsClass", "Fit function", 0, QApplication::UnicodeUTF8));
    label_40->setText(QApplication::translate("CommandsClass", "Skip N points in the output file of \n"
"correlation functions", 0, QApplication::UnicodeUTF8));
    label_41->setText(QApplication::translate("CommandsClass", "Begin of exponential fit", 0, QApplication::UnicodeUTF8));
    label_36->setText(QApplication::translate("CommandsClass", "End of exponential fit", 0, QApplication::UnicodeUTF8));
    toolBox_10->setItemText(toolBox_10->indexOf(page_47), QApplication::translate("CommandsClass", "g_analyze options (2)", 0, QApplication::UnicodeUTF8));
    textLabel2_39->setText(QApplication::translate("CommandsClass", "Input File (-s)", 0, QApplication::UnicodeUTF8));
    cb13input->clear();
    cb13input->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_109->setText(QApplication::translate("CommandsClass", "Input (-f)", 0, QApplication::UnicodeUTF8));
    cb13_f->clear();
    cb13_f->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_110->setText(QApplication::translate("CommandsClass", "Input (-f2)", 0, QApplication::UnicodeUTF8));
    cb13_f2->clear();
    cb13_f2->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_111->setText(QApplication::translate("CommandsClass", "Index File (-n)", 0, QApplication::UnicodeUTF8));
    cb13index->clear();
    cb13index->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_2_16->setText(QApplication::translate("CommandsClass", "Output (-o)", 0, QApplication::UnicodeUTF8));
    le13_o->setText(QApplication::translate("CommandsClass", "rmsd.xvg", 0, QApplication::UnicodeUTF8));
    textLabel2_40->setText(QApplication::translate("CommandsClass", "Output (-mir)", 0, QApplication::UnicodeUTF8));
    le13_mir->setText(QString());
    textLabel2_2_32->setText(QApplication::translate("CommandsClass", "Output (-a)", 0, QApplication::UnicodeUTF8));
    le13_a->setText(QString());
    textLabel2_108->setText(QApplication::translate("CommandsClass", "Output (-dist)", 0, QApplication::UnicodeUTF8));
    le13_dist->setText(QString());
    textLabel2_38->setText(QApplication::translate("CommandsClass", "Output (-m)", 0, QApplication::UnicodeUTF8));
    le13_m->setText(QString());
    textLabel1_32->setText(QApplication::translate("CommandsClass", "Output (-bin)", 0, QApplication::UnicodeUTF8));
    le13_bin->setText(QString());
    textLabel2_107->setText(QApplication::translate("CommandsClass", "Output (-bm)", 0, QApplication::UnicodeUTF8));
    le13_bm->setText(QString());
    toolBox_11->setItemText(toolBox_11->indexOf(page_13), QApplication::translate("CommandsClass", "g_rms files", 0, QApplication::UnicodeUTF8));
    ch13pbc->setText(QApplication::translate("CommandsClass", "PBC check", 0, QApplication::UnicodeUTF8));
    ch13graph->setText(QApplication::translate("CommandsClass", "Split graph where time is zero", 0, QApplication::UnicodeUTF8));
    label_54->setText(QApplication::translate("CommandsClass", "Levels for matrices", 0, QApplication::UnicodeUTF8));
    label_48->setText(QApplication::translate("CommandsClass", "First frame", 0, QApplication::UnicodeUTF8));
    le13first->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    label_49->setText(QApplication::translate("CommandsClass", "Last frame", 0, QApplication::UnicodeUTF8));
    le13last->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    label_50->setText(QApplication::translate("CommandsClass", "Time unit", 0, QApplication::UnicodeUTF8));
    cb13time->clear();
    cb13time->insertItems(0, QStringList()
     << QApplication::translate("CommandsClass", "ps", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "fs", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "ns", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "us", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "ms", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "s", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "m", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "h", 0, QApplication::UnicodeUTF8)
    );
    label_51->setText(QApplication::translate("CommandsClass", "Structural difference measure", 0, QApplication::UnicodeUTF8));
    cb13measure->clear();
    cb13measure->insertItems(0, QStringList()
     << QApplication::translate("CommandsClass", "rmsd", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "rho", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "rhosc", 0, QApplication::UnicodeUTF8)
    );
    label_52->setText(QApplication::translate("CommandsClass", "Fit to reference structure", 0, QApplication::UnicodeUTF8));
    cb13fit->clear();
    cb13fit->insertItems(0, QStringList()
     << QApplication::translate("CommandsClass", "rot+trans", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "translation", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "none", 0, QApplication::UnicodeUTF8)
    );
    label_42->setText(QApplication::translate("CommandsClass", "-max", 0, QApplication::UnicodeUTF8));
    le13_max->setText(QApplication::translate("CommandsClass", "-1", 0, QApplication::UnicodeUTF8));
    label_43->setText(QApplication::translate("CommandsClass", "-min", 0, QApplication::UnicodeUTF8));
    le13_min->setText(QApplication::translate("CommandsClass", "-1", 0, QApplication::UnicodeUTF8));
    label_44->setText(QApplication::translate("CommandsClass", "-bmax", 0, QApplication::UnicodeUTF8));
    le13_bmax->setText(QApplication::translate("CommandsClass", "-1", 0, QApplication::UnicodeUTF8));
    label_45->setText(QApplication::translate("CommandsClass", "-bmin", 0, QApplication::UnicodeUTF8));
    le13_bmin->setText(QApplication::translate("CommandsClass", "-1", 0, QApplication::UnicodeUTF8));
    label_53->setText(QApplication::translate("CommandsClass", "Compare with previous frame", 0, QApplication::UnicodeUTF8));
    label_47->setText(QApplication::translate("CommandsClass", "Number of levels in the matrices", 0, QApplication::UnicodeUTF8));
    label_46->setText(QApplication::translate("CommandsClass", "Number of groups to compute RMS between", 0, QApplication::UnicodeUTF8));
    toolBox_11->setItemText(toolBox_11->indexOf(page_14), QApplication::translate("CommandsClass", "g_rms options", 0, QApplication::UnicodeUTF8));
    textLabel2_42->setText(QApplication::translate("CommandsClass", "Input (-f1)", 0, QApplication::UnicodeUTF8));
    cb14_f1->clear();
    cb14_f1->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_41->setText(QApplication::translate("CommandsClass", "Input (-f2)", 0, QApplication::UnicodeUTF8));
    cb14_f2->clear();
    cb14_f2->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_2_17->setText(QApplication::translate("CommandsClass", "Output (-o)", 0, QApplication::UnicodeUTF8));
    le14_o->setText(QApplication::translate("CommandsClass", "fit.pdb", 0, QApplication::UnicodeUTF8));
    textLabel1_16->setText(QApplication::translate("CommandsClass", "Input (-n1)", 0, QApplication::UnicodeUTF8));
    cb14_n1->clear();
    cb14_n1->insertItems(0, QStringList()
     << QString()
    );
    textLabel1_17->setText(QApplication::translate("CommandsClass", "Input (-n2)", 0, QApplication::UnicodeUTF8));
    cb14_n2->clear();
    cb14_n2->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_43->setText(QApplication::translate("CommandsClass", "Output (-no)", 0, QApplication::UnicodeUTF8));
    le14_no->setText(QString());
    toolBox_12->setItemText(toolBox_12->indexOf(page_15), QApplication::translate("CommandsClass", "g_confrms files", 0, QApplication::UnicodeUTF8));
    ch14fit->setText(QApplication::translate("CommandsClass", "Only write the fitted structure to file", 0, QApplication::UnicodeUTF8));
    ch14mass->setText(QApplication::translate("CommandsClass", "Mass-weighted fitting and RMSD", 0, QApplication::UnicodeUTF8));
    ch14try->setText(QApplication::translate("CommandsClass", "Try to make molecules whole again", 0, QApplication::UnicodeUTF8));
    ch14least->setText(QApplication::translate("CommandsClass", "Do least squares superposition of the target \n"
"structure to the reference", 0, QApplication::UnicodeUTF8));
    ch14compare->setText(QApplication::translate("CommandsClass", "Only compare matching atom names", 0, QApplication::UnicodeUTF8));
    ch14bfactor->setText(QApplication::translate("CommandsClass", "Output B-factors from atomic MSD values ", 0, QApplication::UnicodeUTF8));
    toolBox_12->setItemText(toolBox_12->indexOf(page_16), QApplication::translate("CommandsClass", "g_confrms options", 0, QApplication::UnicodeUTF8));
    textLabel2_44->setText(QApplication::translate("CommandsClass", "Input File (-f)", 0, QApplication::UnicodeUTF8));
    cb15input->clear();
    cb15input->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_136->setText(QApplication::translate("CommandsClass", "Input (-s)", 0, QApplication::UnicodeUTF8));
    cb15_s->clear();
    cb15_s->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_134->setText(QApplication::translate("CommandsClass", "Input (-n)", 0, QApplication::UnicodeUTF8));
    cb15_n->clear();
    cb15_n->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_2_60->setText(QApplication::translate("CommandsClass", "Output (-o)", 0, QApplication::UnicodeUTF8));
    le15_o->setText(QApplication::translate("CommandsClass", "rmsd-clust.xpm", 0, QApplication::UnicodeUTF8));
    textLabel2_2_18->setText(QApplication::translate("CommandsClass", "Log File (-g)", 0, QApplication::UnicodeUTF8));
    le15log->setText(QApplication::translate("CommandsClass", "cluster.log", 0, QApplication::UnicodeUTF8));
    textLabel2_45->setText(QApplication::translate("CommandsClass", "Output (-dist)", 0, QApplication::UnicodeUTF8));
    le15_dist->setText(QString());
    textLabel2_2_34->setText(QApplication::translate("CommandsClass", "Output (-ev)", 0, QApplication::UnicodeUTF8));
    le15_ev->setText(QString());
    textLabel2_260->setText(QApplication::translate("CommandsClass", "Output (-sz)", 0, QApplication::UnicodeUTF8));
    le15_sz->setText(QString());
    textLabel2_261->setText(QApplication::translate("CommandsClass", "Output (-tr)", 0, QApplication::UnicodeUTF8));
    le15_tr->setText(QString());
    textLabel2_46->setText(QApplication::translate("CommandsClass", "Output (-ntr)", 0, QApplication::UnicodeUTF8));
    le15_ntr->setText(QString());
    textLabel1_34->setText(QApplication::translate("CommandsClass", "Output (-clid)", 0, QApplication::UnicodeUTF8));
    le15_clid->setText(QString());
    textLabel2_133->setText(QApplication::translate("CommandsClass", "Output (-cl)", 0, QApplication::UnicodeUTF8));
    le15_cl->setText(QString());
    toolBox_13->setItemText(toolBox_13->indexOf(page_17), QApplication::translate("CommandsClass", "g_cluster files", 0, QApplication::UnicodeUTF8));
    ch15dist->setText(QApplication::translate("CommandsClass", "Use RMSD of distances instead of RMS deviation", 0, QApplication::UnicodeUTF8));
    ch15least->setText(QApplication::translate("CommandsClass", "Use least squares fitting before RMSD calculation", 0, QApplication::UnicodeUTF8));
    ch15aver->setText(QApplication::translate("CommandsClass", "Write average iso middle structure for each cluster", 0, QApplication::UnicodeUTF8));
    ch15treat->setText(QApplication::translate("CommandsClass", "Treat the RMSD matrix as consisting of 0 and 1", 0, QApplication::UnicodeUTF8));
    textLabel2_135->setText(QApplication::translate("CommandsClass", "First frame", 0, QApplication::UnicodeUTF8));
    le15first->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    sp2threadslabel_18->setText(QApplication::translate("CommandsClass", "Last frame", 0, QApplication::UnicodeUTF8));
    le15last->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel2_137->setText(QApplication::translate("CommandsClass", "Only use frame when \n"
"t MOD dt = first time (ps)", 0, QApplication::UnicodeUTF8));
    le15only->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    label_61->setText(QApplication::translate("CommandsClass", "Time unit", 0, QApplication::UnicodeUTF8));
    cb15time->clear();
    cb15time->insertItems(0, QStringList()
     << QApplication::translate("CommandsClass", "ps", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "fs", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "ns", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "us", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "ms", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "s", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "m", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "h", 0, QApplication::UnicodeUTF8)
    );
    cb15method->clear();
    cb15method->insertItems(0, QStringList()
     << QApplication::translate("CommandsClass", "linkage", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "jarvis-patrick", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "monte-carlo", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "diagonalization", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "gromos", 0, QApplication::UnicodeUTF8)
    );
    label_62->setText(QApplication::translate("CommandsClass", "Cluster determination method", 0, QApplication::UnicodeUTF8));
    label_63->setText(QApplication::translate("CommandsClass", "Discretize RMSD matrix in # levels", 0, QApplication::UnicodeUTF8));
    label_64->setText(QApplication::translate("CommandsClass", "RMSD cut-off (nm) for two structures \n"
"to be neighbor", 0, QApplication::UnicodeUTF8));
    le15cutoff->setText(QApplication::translate("CommandsClass", "0.1", 0, QApplication::UnicodeUTF8));
    label_65->setText(QApplication::translate("CommandsClass", "Maximum level in RMSD matrix", 0, QApplication::UnicodeUTF8));
    le15max->setText(QApplication::translate("CommandsClass", "-1", 0, QApplication::UnicodeUTF8));
    toolBox_13->setItemText(toolBox_13->indexOf(page_18), QApplication::translate("CommandsClass", "g_cluster options (1)", 0, QApplication::UnicodeUTF8));
    label_66->setText(QApplication::translate("CommandsClass", "Only analyze every nr-th frame", 0, QApplication::UnicodeUTF8));
    label_67->setText(QApplication::translate("CommandsClass", "Write all structures for first # clusters to \n"
"numbered files", 0, QApplication::UnicodeUTF8));
    label_68->setText(QApplication::translate("CommandsClass", "Only write all structures if more than # \n"
"per cluster", 0, QApplication::UnicodeUTF8));
    label_70->setText(QApplication::translate("CommandsClass", "Minimum rms difference with rest of \n"
"cluster for writing structures", 0, QApplication::UnicodeUTF8));
    le15minrms->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    label_69->setText(QApplication::translate("CommandsClass", "Number of nearest neighbors considered \n"
"for Jarvis-Patrick algorithm, 0 is use cutoff", 0, QApplication::UnicodeUTF8));
    label_74->setText(QApplication::translate("CommandsClass", "Number of identical nearest neighbors \n"
"required to form a cluster", 0, QApplication::UnicodeUTF8));
    label_76->setText(QApplication::translate("CommandsClass", "Minimum number of structures in cluster \n"
"for coloring in the xpm file", 0, QApplication::UnicodeUTF8));
    label_75->setText(QApplication::translate("CommandsClass", "Number of iterations for MC", 0, QApplication::UnicodeUTF8));
    label_71->setText(QApplication::translate("CommandsClass", "Boltzmann weighting factor for Monte \n"
"Carlo optimization", 0, QApplication::UnicodeUTF8));
    le15boltz->setText(QApplication::translate("CommandsClass", "0.001", 0, QApplication::UnicodeUTF8));
    toolBox_13->setItemText(toolBox_13->indexOf(page_48), QApplication::translate("CommandsClass", "g_cluster options (2)", 0, QApplication::UnicodeUTF8));
    textLabel2_49->setText(QApplication::translate("CommandsClass", "Input (-f)", 0, QApplication::UnicodeUTF8));
    cb16_f->clear();
    cb16_f->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_165->setText(QApplication::translate("CommandsClass", "Input (-s)", 0, QApplication::UnicodeUTF8));
    cb16_s->clear();
    cb16_s->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_166->setText(QApplication::translate("CommandsClass", "Input (-n)", 0, QApplication::UnicodeUTF8));
    cb16_n->clear();
    cb16_n->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_167->setText(QApplication::translate("CommandsClass", "Input (-q)", 0, QApplication::UnicodeUTF8));
    cb16_q->clear();
    cb16_q->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_47->setText(QApplication::translate("CommandsClass", "Output (-oq)", 0, QApplication::UnicodeUTF8));
    le16_oq->setText(QString());
    textLabel2_160->setText(QApplication::translate("CommandsClass", "Output (-ox)", 0, QApplication::UnicodeUTF8));
    le16_ox->setText(QString());
    textLabel2_161->setText(QApplication::translate("CommandsClass", "Output (-o)", 0, QApplication::UnicodeUTF8));
    le16_o->setText(QApplication::translate("CommandsClass", "rmsf.xvg", 0, QApplication::UnicodeUTF8));
    textLabel2_162->setText(QApplication::translate("CommandsClass", "Output (-od)", 0, QApplication::UnicodeUTF8));
    le16_od->setText(QString());
    textLabel2_163->setText(QApplication::translate("CommandsClass", "Output (-oc)", 0, QApplication::UnicodeUTF8));
    textLabel2_164->setText(QApplication::translate("CommandsClass", "Log (-dir)", 0, QApplication::UnicodeUTF8));
    le16_dir->setText(QApplication::translate("CommandsClass", "rmsf.log", 0, QApplication::UnicodeUTF8));
    le16_oc->setText(QString());
    toolBox_14->setItemText(toolBox_14->indexOf(page_19), QApplication::translate("CommandsClass", "g_rmsf files", 0, QApplication::UnicodeUTF8));
    textLabel2_159->setText(QApplication::translate("CommandsClass", "First frame", 0, QApplication::UnicodeUTF8));
    le16first->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    sp2threadslabel_25->setText(QApplication::translate("CommandsClass", "Last frame", 0, QApplication::UnicodeUTF8));
    le16last->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel2_158->setText(QApplication::translate("CommandsClass", "Only use frame when \n"
"t MOD dt = first time (ps)", 0, QApplication::UnicodeUTF8));
    le16only->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    ch16av->setText(QApplication::translate("CommandsClass", "Calculate averages for each residue ", 0, QApplication::UnicodeUTF8));
    ch16aniso->setText(QApplication::translate("CommandsClass", "Compute anisotropic termperature factors", 0, QApplication::UnicodeUTF8));
    toolBox_14->setItemText(toolBox_14->indexOf(page_20), QApplication::translate("CommandsClass", "g_rmsf options", 0, QApplication::UnicodeUTF8));
    textLabel2_52->setText(QApplication::translate("CommandsClass", "Input File", 0, QApplication::UnicodeUTF8));
    co6inputfile_12->clear();
    co6inputfile_12->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_50->setText(QApplication::translate("CommandsClass", "Output Trajectory", 0, QApplication::UnicodeUTF8));
    le6outputtrajfile_12->setText(QApplication::translate("CommandsClass", "traj.trr", 0, QApplication::UnicodeUTF8));
    textLabel2_2_20->setText(QApplication::translate("CommandsClass", "Output Conformation", 0, QApplication::UnicodeUTF8));
    le6outputconffile_12->setText(QApplication::translate("CommandsClass", "mdout.gro", 0, QApplication::UnicodeUTF8));
    textLabel1_19->setText(QApplication::translate("CommandsClass", "Log File", 0, QApplication::UnicodeUTF8));
    le6logfile_12->setText(QApplication::translate("CommandsClass", "md.log", 0, QApplication::UnicodeUTF8));
    textLabel2_51->setText(QApplication::translate("CommandsClass", "Energy File", 0, QApplication::UnicodeUTF8));
    le6energyfile_12->setText(QString());
    toolBox_15->setItemText(toolBox_15->indexOf(page_21), QApplication::translate("CommandsClass", "g_mindist files", 0, QApplication::UnicodeUTF8));
    ch6loud_12->setText(QApplication::translate("CommandsClass", "Be loud and noisy", 0, QApplication::UnicodeUTF8));
    ch6xray_12->setText(QApplication::translate("CommandsClass", "Include x-ray bombardment on system", 0, QApplication::UnicodeUTF8));
    toolBox_15->setItemText(toolBox_15->indexOf(page_22), QApplication::translate("CommandsClass", "g_mindist options", 0, QApplication::UnicodeUTF8));
    textLabel2_53->setText(QApplication::translate("CommandsClass", "Input File", 0, QApplication::UnicodeUTF8));
    co6inputfile_13->clear();
    co6inputfile_13->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_55->setText(QApplication::translate("CommandsClass", "Output Trajectory", 0, QApplication::UnicodeUTF8));
    le6outputtrajfile_13->setText(QApplication::translate("CommandsClass", "traj.trr", 0, QApplication::UnicodeUTF8));
    textLabel2_2_21->setText(QApplication::translate("CommandsClass", "Output Conformation", 0, QApplication::UnicodeUTF8));
    le6outputconffile_13->setText(QApplication::translate("CommandsClass", "mdout.gro", 0, QApplication::UnicodeUTF8));
    textLabel1_20->setText(QApplication::translate("CommandsClass", "Log File", 0, QApplication::UnicodeUTF8));
    le6logfile_13->setText(QApplication::translate("CommandsClass", "md.log", 0, QApplication::UnicodeUTF8));
    textLabel2_54->setText(QApplication::translate("CommandsClass", "Energy File", 0, QApplication::UnicodeUTF8));
    le6energyfile_13->setText(QString());
    toolBox_16->setItemText(toolBox_16->indexOf(page_23), QApplication::translate("CommandsClass", "g_dist files", 0, QApplication::UnicodeUTF8));
    ch6loud_13->setText(QApplication::translate("CommandsClass", "Be loud and noisy", 0, QApplication::UnicodeUTF8));
    ch6xray_13->setText(QApplication::translate("CommandsClass", "Include x-ray bombardment on system", 0, QApplication::UnicodeUTF8));
    toolBox_16->setItemText(toolBox_16->indexOf(page_24), QApplication::translate("CommandsClass", "g_dist options", 0, QApplication::UnicodeUTF8));
    textLabel2_56->setText(QApplication::translate("CommandsClass", "Input File (-f)", 0, QApplication::UnicodeUTF8));
    cb19input->clear();
    cb19input->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_58->setText(QApplication::translate("CommandsClass", "Index File (-n)", 0, QApplication::UnicodeUTF8));
    cb19_n->clear();
    cb19_n->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_62->setText(QApplication::translate("CommandsClass", "Input (-s)", 0, QApplication::UnicodeUTF8));
    cb19_s->clear();
    cb19_s->insertItems(0, QStringList()
     << QString()
    );
    textLabel1_21->setText(QApplication::translate("CommandsClass", "Output (-o)", 0, QApplication::UnicodeUTF8));
    le19output->setText(QApplication::translate("CommandsClass", "bonds.xvg", 0, QApplication::UnicodeUTF8));
    textLabel2_2_22->setText(QApplication::translate("CommandsClass", "Output (-d)", 0, QApplication::UnicodeUTF8));
    le19_d->setText(QString());
    textLabel2_57->setText(QApplication::translate("CommandsClass", "Log File (-l)", 0, QApplication::UnicodeUTF8));
    le19log->setText(QApplication::translate("CommandsClass", "bonds.log", 0, QApplication::UnicodeUTF8));
    toolBox_17->setItemText(toolBox_17->indexOf(page_25), QApplication::translate("CommandsClass", "g_bond files", 0, QApplication::UnicodeUTF8));
    ch19bond->setText(QApplication::translate("CommandsClass", "Average bond length distributions", 0, QApplication::UnicodeUTF8));
    ch19dist->setText(QApplication::translate("CommandsClass", "Average distances (turns on -d)", 0, QApplication::UnicodeUTF8));
    textLabel2_138->setText(QApplication::translate("CommandsClass", "First frame", 0, QApplication::UnicodeUTF8));
    le19first->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    sp2threadslabel_19->setText(QApplication::translate("CommandsClass", "Last frame", 0, QApplication::UnicodeUTF8));
    le19last->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel2_139->setText(QApplication::translate("CommandsClass", "Only use frame when \n"
"t MOD dt = first time (ps)", 0, QApplication::UnicodeUTF8));
    le19only->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel2_140->setText(QApplication::translate("CommandsClass", "Bond length.(by default length of first bond)", 0, QApplication::UnicodeUTF8));
    le19length->setText(QApplication::translate("CommandsClass", "-1", 0, QApplication::UnicodeUTF8));
    textLabel2_141->setText(QApplication::translate("CommandsClass", "Half width of distribution as fraction of blen", 0, QApplication::UnicodeUTF8));
    le19width->setText(QApplication::translate("CommandsClass", "0.1", 0, QApplication::UnicodeUTF8));
    toolBox_17->setItemText(toolBox_17->indexOf(page_26), QApplication::translate("CommandsClass", "g_bond options", 0, QApplication::UnicodeUTF8));
    textLabel2_92->setText(QApplication::translate("CommandsClass", "Input File", 0, QApplication::UnicodeUTF8));
    co6inputfile_23->clear();
    co6inputfile_23->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_93->setText(QApplication::translate("CommandsClass", "Output Trajectory", 0, QApplication::UnicodeUTF8));
    le6outputtrajfile_23->setText(QApplication::translate("CommandsClass", "traj.trr", 0, QApplication::UnicodeUTF8));
    textLabel2_2_31->setText(QApplication::translate("CommandsClass", "Output Conformation", 0, QApplication::UnicodeUTF8));
    le6outputconffile_23->setText(QApplication::translate("CommandsClass", "mdout.gro", 0, QApplication::UnicodeUTF8));
    textLabel1_30->setText(QApplication::translate("CommandsClass", "Log File", 0, QApplication::UnicodeUTF8));
    le6logfile_23->setText(QApplication::translate("CommandsClass", "md.log", 0, QApplication::UnicodeUTF8));
    textLabel2_94->setText(QApplication::translate("CommandsClass", "Energy File", 0, QApplication::UnicodeUTF8));
    le6energyfile_23->setText(QString());
    toolBox_26->setItemText(toolBox_26->indexOf(page_43), QApplication::translate("CommandsClass", "g_angle files", 0, QApplication::UnicodeUTF8));
    ch6loud_23->setText(QApplication::translate("CommandsClass", "Be loud and noisy", 0, QApplication::UnicodeUTF8));
    ch6xray_23->setText(QApplication::translate("CommandsClass", "Include x-ray bombardment on system", 0, QApplication::UnicodeUTF8));
    textLabel2_95->setText(QApplication::translate("CommandsClass", "Number of status files for nodes", 0, QApplication::UnicodeUTF8));
    sp2threadslabel_11->setText(QApplication::translate("CommandsClass", "Number of threads for each node", 0, QApplication::UnicodeUTF8));
    toolBox_26->setItemText(toolBox_26->indexOf(page_44), QApplication::translate("CommandsClass", "g_angle options", 0, QApplication::UnicodeUTF8));
    textLabel2_88->setText(QApplication::translate("CommandsClass", "Input File", 0, QApplication::UnicodeUTF8));
    co6inputfile_22->clear();
    co6inputfile_22->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_89->setText(QApplication::translate("CommandsClass", "Output Trajectory", 0, QApplication::UnicodeUTF8));
    le6outputtrajfile_22->setText(QApplication::translate("CommandsClass", "traj.trr", 0, QApplication::UnicodeUTF8));
    textLabel2_2_30->setText(QApplication::translate("CommandsClass", "Output Conformation", 0, QApplication::UnicodeUTF8));
    le6outputconffile_22->setText(QApplication::translate("CommandsClass", "mdout.gro", 0, QApplication::UnicodeUTF8));
    textLabel1_29->setText(QApplication::translate("CommandsClass", "Log File", 0, QApplication::UnicodeUTF8));
    le6logfile_22->setText(QApplication::translate("CommandsClass", "md.log", 0, QApplication::UnicodeUTF8));
    textLabel2_90->setText(QApplication::translate("CommandsClass", "Energy File", 0, QApplication::UnicodeUTF8));
    le6energyfile_22->setText(QString());
    toolBox_25->setItemText(toolBox_25->indexOf(page_41), QApplication::translate("CommandsClass", "g_dih files", 0, QApplication::UnicodeUTF8));
    ch6loud_22->setText(QApplication::translate("CommandsClass", "Be loud and noisy", 0, QApplication::UnicodeUTF8));
    ch6xray_22->setText(QApplication::translate("CommandsClass", "Include x-ray bombardment on system", 0, QApplication::UnicodeUTF8));
    textLabel2_91->setText(QApplication::translate("CommandsClass", "Number of status files for nodes", 0, QApplication::UnicodeUTF8));
    sp2threadslabel_10->setText(QApplication::translate("CommandsClass", "Number of threads for each node", 0, QApplication::UnicodeUTF8));
    toolBox_25->setItemText(toolBox_25->indexOf(page_42), QApplication::translate("CommandsClass", "g_dih options", 0, QApplication::UnicodeUTF8));
    textLabel2_84->setText(QApplication::translate("CommandsClass", "Input File (-f)", 0, QApplication::UnicodeUTF8));
    cb22input->clear();
    cb22input->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_145->setText(QApplication::translate("CommandsClass", "Input (-s)", 0, QApplication::UnicodeUTF8));
    cb22_s->clear();
    cb22_s->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_143->setText(QApplication::translate("CommandsClass", "Input (-n)", 0, QApplication::UnicodeUTF8));
    cb22_n->clear();
    cb22_n->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_2_62->setText(QApplication::translate("CommandsClass", "Input (-sel)", 0, QApplication::UnicodeUTF8));
    cb22_sel->clear();
    cb22_sel->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_2_61->setText(QApplication::translate("CommandsClass", "Output (-num)", 0, QApplication::UnicodeUTF8));
    le22_num->setText(QApplication::translate("CommandsClass", "hbnum.xvg", 0, QApplication::UnicodeUTF8));
    textLabel2_2_29->setText(QApplication::translate("CommandsClass", "Log File (-g)", 0, QApplication::UnicodeUTF8));
    le22log->setText(QString());
    textLabel2_2_35->setText(QApplication::translate("CommandsClass", "Output (-ac)", 0, QApplication::UnicodeUTF8));
    le22_ac->setText(QString());
    textLabel2_263->setText(QApplication::translate("CommandsClass", "Output (-dis)", 0, QApplication::UnicodeUTF8));
    le22_dis->setText(QString());
    textLabel2_262->setText(QApplication::translate("CommandsClass", "Output (-ang)", 0, QApplication::UnicodeUTF8));
    le22_ang->setText(QString());
    textLabel2_85->setText(QApplication::translate("CommandsClass", "Output (-hx)", 0, QApplication::UnicodeUTF8));
    le22_hx->setText(QString());
    textLabel1_35->setText(QApplication::translate("CommandsClass", "Output (-hbn)", 0, QApplication::UnicodeUTF8));
    le22_hbn->setText(QString());
    textLabel2_144->setText(QApplication::translate("CommandsClass", "Output (-hbm)", 0, QApplication::UnicodeUTF8));
    le22_hbm->setText(QString());
    textLabel2_86->setText(QApplication::translate("CommandsClass", "Output (-don)", 0, QApplication::UnicodeUTF8));
    le22_don->setText(QString());
    textLabel2_146->setText(QApplication::translate("CommandsClass", "Output (-dan)", 0, QApplication::UnicodeUTF8));
    le22_dan->setText(QString());
    textLabel2_147->setText(QApplication::translate("CommandsClass", "Output (-life)", 0, QApplication::UnicodeUTF8));
    le22_life->setText(QString());
    toolBox_24->setItemText(toolBox_24->indexOf(page_39), QApplication::translate("CommandsClass", "g_hbond files", 0, QApplication::UnicodeUTF8));
    ch22solvent->setText(QApplication::translate("CommandsClass", "Analyze solvent insertion", 0, QApplication::UnicodeUTF8));
    ch22distance->setText(QApplication::translate("CommandsClass", "Use distance Donor-Acceptor ", 0, QApplication::UnicodeUTF8));
    ch22regard->setText(QApplication::translate("CommandsClass", "Regard nitrogen atoms as acceptors", 0, QApplication::UnicodeUTF8));
    ch22look->setText(QApplication::translate("CommandsClass", "Do not look for hydrogen bonds, but merely for \n"
"contacts within the cut-off distance", 0, QApplication::UnicodeUTF8));
    textLabel2_148->setText(QApplication::translate("CommandsClass", "First frame", 0, QApplication::UnicodeUTF8));
    le22first->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    sp2threadslabel_20->setText(QApplication::translate("CommandsClass", "Last frame", 0, QApplication::UnicodeUTF8));
    le22last->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel2_149->setText(QApplication::translate("CommandsClass", "Only use frame when \n"
"t MOD dt = first time (ps)", 0, QApplication::UnicodeUTF8));
    le22only->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel2_87->setText(QApplication::translate("CommandsClass", "Cutoff angle", 0, QApplication::UnicodeUTF8));
    le22cutang->setText(QApplication::translate("CommandsClass", "30", 0, QApplication::UnicodeUTF8));
    sp2threadslabel_21->setText(QApplication::translate("CommandsClass", "Cutoff radius", 0, QApplication::UnicodeUTF8));
    le22cutrad->setText(QApplication::translate("CommandsClass", "0.35", 0, QApplication::UnicodeUTF8));
    sp2threadslabel_22->setText(QApplication::translate("CommandsClass", "Binwidth angle distribution (degrees)", 0, QApplication::UnicodeUTF8));
    le22binang->setText(QApplication::translate("CommandsClass", "1", 0, QApplication::UnicodeUTF8));
    sp2threadslabel_23->setText(QApplication::translate("CommandsClass", "Binwidth distance distribution (nm)", 0, QApplication::UnicodeUTF8));
    le22bindist->setText(QApplication::translate("CommandsClass", "0.005", 0, QApplication::UnicodeUTF8));
    sp2threadslabel_9->setText(QApplication::translate("CommandsClass", "when > 0, only calculate hydrogen bonds \n"
"within # nm shell around one particle", 0, QApplication::UnicodeUTF8));
    le22shell->setText(QApplication::translate("CommandsClass", "-1", 0, QApplication::UnicodeUTF8));
    sp2threadslabel_24->setText(QApplication::translate("CommandsClass", "Temperature (K)", 0, QApplication::UnicodeUTF8));
    le22temp->setText(QApplication::translate("CommandsClass", "298.15", 0, QApplication::UnicodeUTF8));
    toolBox_24->setItemText(toolBox_24->indexOf(page_40), QApplication::translate("CommandsClass", "g_hbond options (1)", 0, QApplication::UnicodeUTF8));
    ch22single->setText(QApplication::translate("CommandsClass", "H-bonds between the same donor and acceptor, \n"
"but with different hydrogen are treated as a \n"
"single H-bond. ", 0, QApplication::UnicodeUTF8));
    ch22norm->setText(QApplication::translate("CommandsClass", "Normalize ACF", 0, QApplication::UnicodeUTF8));
    label_73->setText(QApplication::translate("CommandsClass", "Time from which to start fitting the correlation \n"
"functions", 0, QApplication::UnicodeUTF8));
    le22corr->setText(QApplication::translate("CommandsClass", "1", 0, QApplication::UnicodeUTF8));
    label_77->setText(QApplication::translate("CommandsClass", "Theoretical maximum number of \n"
"hydrogen bonds used for normalizing HB \n"
"autocorrelation function.", 0, QApplication::UnicodeUTF8));
    le22theore->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    label_78->setText(QApplication::translate("CommandsClass", "Length of the ACF", 0, QApplication::UnicodeUTF8));
    label_80->setText(QApplication::translate("CommandsClass", "Fit function", 0, QApplication::UnicodeUTF8));
    cb22fit->clear();
    cb22fit->insertItems(0, QStringList()
     << QApplication::translate("CommandsClass", "none", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "exp", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "aexp", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "exp_exp", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "vac", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "exp5", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "exp7", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "exp9", 0, QApplication::UnicodeUTF8)
    );
    label_83->setText(QApplication::translate("CommandsClass", "Order of Legendre polynomial for ACF", 0, QApplication::UnicodeUTF8));
    cb22order->clear();
    cb22order->insertItems(0, QStringList()
     << QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "1", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "2", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "3", 0, QApplication::UnicodeUTF8)
    );
    label_81->setText(QApplication::translate("CommandsClass", "Skip N points in the output file of \n"
"correlation functions", 0, QApplication::UnicodeUTF8));
    label_79->setText(QApplication::translate("CommandsClass", "Begin of exponential fit", 0, QApplication::UnicodeUTF8));
    le22begin->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    label_82->setText(QApplication::translate("CommandsClass", "End of exponential fit", 0, QApplication::UnicodeUTF8));
    le22end->setText(QApplication::translate("CommandsClass", "-1", 0, QApplication::UnicodeUTF8));
    toolBox_24->setItemText(toolBox_24->indexOf(page_49), QApplication::translate("CommandsClass", "g_hbond options (2)", 0, QApplication::UnicodeUTF8));
    textLabel2_80->setText(QApplication::translate("CommandsClass", "Input File", 0, QApplication::UnicodeUTF8));
    co6inputfile_20->clear();
    co6inputfile_20->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_81->setText(QApplication::translate("CommandsClass", "Output Trajectory", 0, QApplication::UnicodeUTF8));
    le6outputtrajfile_20->setText(QApplication::translate("CommandsClass", "traj.trr", 0, QApplication::UnicodeUTF8));
    textLabel2_2_28->setText(QApplication::translate("CommandsClass", "Output Conformation", 0, QApplication::UnicodeUTF8));
    le6outputconffile_20->setText(QApplication::translate("CommandsClass", "mdout.gro", 0, QApplication::UnicodeUTF8));
    textLabel1_27->setText(QApplication::translate("CommandsClass", "Log File", 0, QApplication::UnicodeUTF8));
    le6logfile_20->setText(QApplication::translate("CommandsClass", "md.log", 0, QApplication::UnicodeUTF8));
    textLabel2_82->setText(QApplication::translate("CommandsClass", "Energy File", 0, QApplication::UnicodeUTF8));
    le6energyfile_20->setText(QString());
    toolBox_23->setItemText(toolBox_23->indexOf(page_37), QApplication::translate("CommandsClass", "g_saltbr files", 0, QApplication::UnicodeUTF8));
    ch6loud_20->setText(QApplication::translate("CommandsClass", "Be loud and noisy", 0, QApplication::UnicodeUTF8));
    ch6xray_20->setText(QApplication::translate("CommandsClass", "Include x-ray bombardment on system", 0, QApplication::UnicodeUTF8));
    textLabel2_83->setText(QApplication::translate("CommandsClass", "Number of status files for nodes", 0, QApplication::UnicodeUTF8));
    sp2threadslabel_8->setText(QApplication::translate("CommandsClass", "Number of threads for each node", 0, QApplication::UnicodeUTF8));
    toolBox_23->setItemText(toolBox_23->indexOf(page_38), QApplication::translate("CommandsClass", "g_saltbr options", 0, QApplication::UnicodeUTF8));
    textLabel2_76->setText(QApplication::translate("CommandsClass", "Input File", 0, QApplication::UnicodeUTF8));
    co6inputfile_19->clear();
    co6inputfile_19->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_77->setText(QApplication::translate("CommandsClass", "Output Trajectory", 0, QApplication::UnicodeUTF8));
    le6outputtrajfile_19->setText(QApplication::translate("CommandsClass", "traj.trr", 0, QApplication::UnicodeUTF8));
    textLabel2_2_27->setText(QApplication::translate("CommandsClass", "Output Conformation", 0, QApplication::UnicodeUTF8));
    le6outputconffile_19->setText(QApplication::translate("CommandsClass", "mdout.gro", 0, QApplication::UnicodeUTF8));
    textLabel1_26->setText(QApplication::translate("CommandsClass", "Log File", 0, QApplication::UnicodeUTF8));
    le6logfile_19->setText(QApplication::translate("CommandsClass", "md.log", 0, QApplication::UnicodeUTF8));
    textLabel2_78->setText(QApplication::translate("CommandsClass", "Energy File", 0, QApplication::UnicodeUTF8));
    le6energyfile_19->setText(QString());
    toolBox_22->setItemText(toolBox_22->indexOf(page_35), QApplication::translate("CommandsClass", "g_sgangle files", 0, QApplication::UnicodeUTF8));
    ch6loud_19->setText(QApplication::translate("CommandsClass", "Be loud and noisy", 0, QApplication::UnicodeUTF8));
    ch6xray_19->setText(QApplication::translate("CommandsClass", "Include x-ray bombardment on system", 0, QApplication::UnicodeUTF8));
    textLabel2_79->setText(QApplication::translate("CommandsClass", "Number of status files for nodes", 0, QApplication::UnicodeUTF8));
    sp2threadslabel_7->setText(QApplication::translate("CommandsClass", "Number of threads for each node", 0, QApplication::UnicodeUTF8));
    toolBox_22->setItemText(toolBox_22->indexOf(page_36), QApplication::translate("CommandsClass", "g_sgangle options", 0, QApplication::UnicodeUTF8));
    textLabel2_72->setText(QApplication::translate("CommandsClass", "Input File (-f)", 0, QApplication::UnicodeUTF8));
    textLabel2_73->setText(QApplication::translate("CommandsClass", "Input (-n)", 0, QApplication::UnicodeUTF8));
    cb25input->clear();
    cb25input->insertItems(0, QStringList()
     << QString()
    );
    cb25_n->clear();
    cb25_n->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_128->setText(QApplication::translate("CommandsClass", "Input (-s)", 0, QApplication::UnicodeUTF8));
    cb25_s->clear();
    cb25_s->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_2_26->setText(QApplication::translate("CommandsClass", "Output (-o)", 0, QApplication::UnicodeUTF8));
    le25output->setText(QString());
    textLabel1_25->setText(QApplication::translate("CommandsClass", "Output (-oc)", 0, QApplication::UnicodeUTF8));
    le25_oc->setText(QString());
    textLabel2_74->setText(QApplication::translate("CommandsClass", "Output (-of)", 0, QApplication::UnicodeUTF8));
    le25_of->setText(QString());
    toolBox_21->setItemText(toolBox_21->indexOf(page_33), QApplication::translate("CommandsClass", "g_potential files", 0, QApplication::UnicodeUTF8));
    ch25sphere->setText(QApplication::translate("CommandsClass", "Calculate spherical thingie", 0, QApplication::UnicodeUTF8));
    textLabel2_130->setText(QApplication::translate("CommandsClass", "First frame", 0, QApplication::UnicodeUTF8));
    le25first->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    sp2threadslabel_15->setText(QApplication::translate("CommandsClass", "Last frame", 0, QApplication::UnicodeUTF8));
    le25last->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel2_129->setText(QApplication::translate("CommandsClass", "Only use frame when \n"
"t MOD dt = first time (ps)", 0, QApplication::UnicodeUTF8));
    le25only->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel2_131->setText(QApplication::translate("CommandsClass", "Take the normal on the \n"
"membrane in direction X, Y or Z.", 0, QApplication::UnicodeUTF8));
    le25take->setText(QApplication::translate("CommandsClass", "z", 0, QApplication::UnicodeUTF8));
    textLabel2_132->setText(QApplication::translate("CommandsClass", "Calculate potential as function of boxlength, \n"
"dividing the box in #nr slices", 0, QApplication::UnicodeUTF8));
    textLabel2_75->setText(QApplication::translate("CommandsClass", "Discard first #nr slices of box for integration", 0, QApplication::UnicodeUTF8));
    sp2threadslabel_16->setText(QApplication::translate("CommandsClass", "Discard last #nr slices of box for integration", 0, QApplication::UnicodeUTF8));
    sp2threadslabel_17->setText(QApplication::translate("CommandsClass", "Number of groups to consider", 0, QApplication::UnicodeUTF8));
    sp2threadslabel_6->setText(QApplication::translate("CommandsClass", "Translate all coordinates <distance> in \n"
"the direction of the box", 0, QApplication::UnicodeUTF8));
    le25transl->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    toolBox_21->setItemText(toolBox_21->indexOf(page_34), QApplication::translate("CommandsClass", "g_potential options", 0, QApplication::UnicodeUTF8));
    textLabel2_68->setText(QApplication::translate("CommandsClass", "Input File", 0, QApplication::UnicodeUTF8));
    co6inputfile_17->clear();
    co6inputfile_17->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_69->setText(QApplication::translate("CommandsClass", "Output Trajectory", 0, QApplication::UnicodeUTF8));
    le6outputtrajfile_17->setText(QApplication::translate("CommandsClass", "traj.trr", 0, QApplication::UnicodeUTF8));
    textLabel2_2_25->setText(QApplication::translate("CommandsClass", "Output Conformation", 0, QApplication::UnicodeUTF8));
    le6outputconffile_17->setText(QApplication::translate("CommandsClass", "mdout.gro", 0, QApplication::UnicodeUTF8));
    textLabel1_24->setText(QApplication::translate("CommandsClass", "Log File", 0, QApplication::UnicodeUTF8));
    le6logfile_17->setText(QApplication::translate("CommandsClass", "md.log", 0, QApplication::UnicodeUTF8));
    textLabel2_70->setText(QApplication::translate("CommandsClass", "Energy File", 0, QApplication::UnicodeUTF8));
    le6energyfile_17->setText(QString());
    toolBox_20->setItemText(toolBox_20->indexOf(page_31), QApplication::translate("CommandsClass", "g_chi files", 0, QApplication::UnicodeUTF8));
    ch6loud_17->setText(QApplication::translate("CommandsClass", "Be loud and noisy", 0, QApplication::UnicodeUTF8));
    ch6xray_17->setText(QApplication::translate("CommandsClass", "Include x-ray bombardment on system", 0, QApplication::UnicodeUTF8));
    textLabel2_71->setText(QApplication::translate("CommandsClass", "Number of status files for nodes", 0, QApplication::UnicodeUTF8));
    sp2threadslabel_5->setText(QApplication::translate("CommandsClass", "Number of threads for each node", 0, QApplication::UnicodeUTF8));
    toolBox_20->setItemText(toolBox_20->indexOf(page_32), QApplication::translate("CommandsClass", "g_chi options", 0, QApplication::UnicodeUTF8));
    textLabel2_64->setText(QApplication::translate("CommandsClass", "Input File (-s)", 0, QApplication::UnicodeUTF8));
    cb27input->clear();
    cb27input->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_65->setText(QApplication::translate("CommandsClass", "Input (-n)", 0, QApplication::UnicodeUTF8));
    cb27_n->clear();
    cb27_n->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_127->setText(QApplication::translate("CommandsClass", "Input (-f)", 0, QApplication::UnicodeUTF8));
    cb27_f->clear();
    cb27_f->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_2_24->setText(QApplication::translate("CommandsClass", "Output (-to)", 0, QApplication::UnicodeUTF8));
    le27_to->setText(QString());
    textLabel1_23->setText(QApplication::translate("CommandsClass", "Output (-cz)", 0, QApplication::UnicodeUTF8));
    le27_cz->setText(QString());
    textLabel2_66->setText(QApplication::translate("CommandsClass", "Output (-co)", 0, QApplication::UnicodeUTF8));
    le27_co->setText(QString());
    toolBox_19->setItemText(toolBox_19->indexOf(page_29), QApplication::translate("CommandsClass", "g_helix files", 0, QApplication::UnicodeUTF8));
    ch27check->setText(QApplication::translate("CommandsClass", "Check at every step which part of the sequence \n"
"is helical", 0, QApplication::UnicodeUTF8));
    ch27toggle->setText(QApplication::translate("CommandsClass", "Toggle fit to a perfect helix", 0, QApplication::UnicodeUTF8));
    ch27write->setText(QApplication::translate("CommandsClass", "Write a new 'trajectory' file for ED", 0, QApplication::UnicodeUTF8));
    textLabel2_125->setText(QApplication::translate("CommandsClass", "First frame", 0, QApplication::UnicodeUTF8));
    le27first->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    sp2threadslabel_13->setText(QApplication::translate("CommandsClass", "Last frame", 0, QApplication::UnicodeUTF8));
    le27last->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel2_126->setText(QApplication::translate("CommandsClass", "Only use frame when \n"
"t MOD dt = first time (ps)", 0, QApplication::UnicodeUTF8));
    le27only->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel2_142->setText(QApplication::translate("CommandsClass", "The first residue number in the sequence", 0, QApplication::UnicodeUTF8));
    textLabel2_67->setText(QApplication::translate("CommandsClass", "First residue in helix", 0, QApplication::UnicodeUTF8));
    sp2threadslabel_4->setText(QApplication::translate("CommandsClass", "Last residue in helix", 0, QApplication::UnicodeUTF8));
    sp2threadslabel_14->setText(QApplication::translate("CommandsClass", "Property to weight eigenvectors \n"
"with", 0, QApplication::UnicodeUTF8));
    cb27property->clear();
    cb27property->insertItems(0, QStringList()
     << QApplication::translate("CommandsClass", "RAD", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "TWIST", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "RISE", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "LEN", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "NHX", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "DIP", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "RMS", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "CPHI", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "RMSA", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "PHI", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "PSI", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "HB3", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "HB4", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "HB5", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("CommandsClass", "CD222", 0, QApplication::UnicodeUTF8)
    );
    toolBox_19->setItemText(toolBox_19->indexOf(page_30), QApplication::translate("CommandsClass", "g_helix options", 0, QApplication::UnicodeUTF8));
    textLabel2_60->setText(QApplication::translate("CommandsClass", "Input File", 0, QApplication::UnicodeUTF8));
    cb28input->clear();
    cb28input->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_61->setText(QApplication::translate("CommandsClass", "Input (-s)", 0, QApplication::UnicodeUTF8));
    cb28_s->clear();
    cb28_s->insertItems(0, QStringList()
     << QString()
    );
    textLabel2_2_23->setText(QApplication::translate("CommandsClass", "Output ", 0, QApplication::UnicodeUTF8));
    le28output->setText(QApplication::translate("CommandsClass", "rama.xvg", 0, QApplication::UnicodeUTF8));
    toolBox_18->setItemText(toolBox_18->indexOf(page_27), QApplication::translate("CommandsClass", "g_rama files", 0, QApplication::UnicodeUTF8));
    textLabel2_63->setText(QApplication::translate("CommandsClass", "First frame", 0, QApplication::UnicodeUTF8));
    le28first->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    sp2threadslabel_3->setText(QApplication::translate("CommandsClass", "Last frame", 0, QApplication::UnicodeUTF8));
    le28last->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    textLabel2_124->setText(QApplication::translate("CommandsClass", "Only use frame when \n"
"t MOD dt = first time (ps)", 0, QApplication::UnicodeUTF8));
    le28only->setText(QApplication::translate("CommandsClass", "0", 0, QApplication::UnicodeUTF8));
    toolBox_18->setItemText(toolBox_18->indexOf(page_28), QApplication::translate("CommandsClass", "g_rama options", 0, QApplication::UnicodeUTF8));
    pbRun->setText(QApplication::translate("CommandsClass", "Run", 0, QApplication::UnicodeUTF8));
    chTerminal->setText(QApplication::translate("CommandsClass", "Run in terminal", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(CommandsClass);
    } // retranslateUi

};

namespace Ui {
    class CommandsClass: public Ui_CommandsClass {};
} // namespace Ui

#endif // UI_COMMANDS_H
