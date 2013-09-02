#include "mdpconfig.h"
#include <QFile>
#include <QString>
#include <QTextStream>
#include <QMessageBox>
#include <QStringList>
#include <QFileDialog>

#define NUMBER 99

MdpConfig::MdpConfig(QWidget *parent, QDir d)
	:QDialog(parent)
{
	setupUi(this);
		
	dir=d;
	
	for (int i=0; i<NUMBER; i++)
			{ fields<<QStringList::QStringList();}
	
	fields[0]<<"title"<<""<<"";
	fields[1]<<"cpp"<<"/usr/bin/cpp"<<"/usr/bin/cpp";
	fields[2]<<"include"<<""<<"";
	fields[3]<<"define"<<""<<"";
	
	fields[4]<<"integrator"<<"md"<<"md";
	fields[5]<<"tinit"<<"0"<<"0";
	fields[6]<<"dt"<<"0.001"<<"0.001";
	fields[7]<<"nsteps"<<"0"<<"0";
	fields[8]<<"init_step"<<"0"<<"0";
	fields[9]<<"comm-mode"<<"Linear"<<"Linear";
	fields[10]<<"nstcomm"<<"1"<<"1";
	fields[11]<<"comm-grps"<<""<<"";
	
	fields[12]<<"emtol"<<"10.0"<<"10.0";
	fields[13]<<"emstep"<<"0.01"<<"0.01";
	fields[14]<<"nstcgsteep"<<"1000"<<"1000";
	fields[15]<<"nbfgscorr"<<"10"<<"10";
	
	fields[16]<<"nstlist"<<"10"<<"10";
	fields[17]<<"ns_type"<<"grid"<<"grid";
	fields[18]<<"pbc"<<"xyz"<<"xyz";
	fields[19]<<"rlist"<<"1"<<"1";
	
	fields[20]<<"constraints"<<"none"<<"none";
	fields[21]<<"constraint-algorithm"<<"lincs"<<"lincs";
	fields[22]<<"unconstrained-start"<<"no"<<"no";
	fields[23]<<"shake_tol"<<"0.0001"<<"0.0001";
	fields[24]<<"lincs_order"<<"4"<<"4";
	fields[25]<<"lincs_iter"<<"1"<<"1";
	fields[26]<<"lincs_warnangle"<<"30"<<"30";
	fields[27]<<"morse"<<"no"<<"no";
	
	fields[28]<<"coulombtype"<<"Cut-off"<<"Cut-off";
	fields[29]<<"rcoulomb_switch"<<"0"<<"0";
	fields[30]<<"rcoulomb"<<"1"<<"1";
	fields[31]<<"epsilon_r"<<"1"<<"1";
	fields[32]<<"epsilon_rf"<<"1"<<"1";
	fields[33]<<"fourierspacing"<<"0.12"<<"0.12";
	fields[34]<<"fourier_nx"<<"0"<<"0";
	fields[35]<<"fourier_ny"<<"0"<<"0";
	fields[36]<<"fourier_nz"<<"0"<<"0";
	fields[37]<<"pme_order"<<"4"<<"4";
	fields[38]<<"ewald_rtol"<<"1e-5"<<"1e-5";
	fields[39]<<"ewald_geometry"<<"3d"<<"3d";
	fields[40]<<"epsilon_surface"<<"0"<<"0";
	fields[41]<<"optimize_fft"<<"no"<<"no";
	
	fields[42]<<"vdw-type"<<"Cut-off"<<"Cut-off";
	fields[43]<<"rvdw_switch"<<"0"<<"0";
	fields[44]<<"rvdw"<<"1"<<"1";
	fields[45]<<"DispCorr"<<"no"<<"no";
	
	fields[46]<<"nstxout"<<"100"<<"100";
	fields[47]<<"nstvout"<<"100"<<"100";
	fields[48]<<"nstfout"<<"0"<<"0";
	fields[49]<<"nstlog"<<"100"<<"100";
	fields[50]<<"nstenergy"<<"100"<<"100";
	fields[51]<<"nstxtcout"<<"0"<<"0";
	fields[52]<<"xtc_precision"<<"1000"<<"1000";
	fields[53]<<"xtc-grps"<<""<<"";
	fields[54]<<"energygrps"<<""<<"";
	
	fields[55]<<"tcoupl"<<"no"<<"no";
	fields[56]<<"tc-grps"<<""<<"";
	fields[57]<<"ref-t"<<""<<"";
	fields[58]<<"tau-t"<<""<<"";
	fields[59]<<"Pcoupl"<<"no"<<"no";
	fields[60]<<"Pcoupltype"<<"isotropic"<<"isotropic";
	fields[61]<<"tau_p"<<"1"<<"1";
	fields[62]<<"compressibility"<<""<<"";
	fields[63]<<"ref-p"<<""<<"";
	
	
	fields[64]<<"gen-vel"<<"no"<<"no";
	fields[65]<<"gen_temp"<<"300"<<"300";
	fields[66]<<"gen_seed"<<"173529"<<"173529";
	
	fields[67]<<"free-energy"<<"no"<<"no";
	fields[68]<<"init_lambda"<<"0"<<"0";
	fields[69]<<"delta_lambda"<<"0"<<"0";
	fields[70]<<"sc_alpha"<<"0"<<"0";
	fields[71]<<"sc_power"<<"1"<<"1";
	fields[72]<<"sc_sigma"<<"0.3"<<"0.3";
	
	fields[73]<<"energygrp_table"<<""<<"";
	fields[74]<<"table-extension"<<"1"<<"1";
	
	fields[75]<<"annealing"<<"no"<<"no";
	fields[76]<<"annealing_npoints"<<""<<"";
	fields[77]<<"annealing_time"<<""<<"";
	fields[78]<<"annealing_temp"<<""<<"";
	
	fields[79]<<"bd_fric"<<"0"<<"0";
	fields[80]<<"ld_seed"<<"1993"<<"1993";
	
	fields[81]<<"acc-grps"<<""<<"";
	fields[82]<<"accelerate"<<""<<"";
	fields[83]<<"freezegrps"<<""<<"";
	fields[84]<<"freezedim"<<""<<"";
	fields[85]<<"cos_acceleration"<<""<<"";
	fields[86]<<"deform"<<""<<"";
		
	fields[87]<<"disre"<<"no"<<"no";
	fields[88]<<"disre-weighting"<<"conservative"<<"conservative";
	fields[89]<<"disre-mixed"<<"no"<<"no";
	fields[90]<<"nstdisreout"<<"100"<<"100";
	fields[91]<<"disre_fc"<<"1000"<<"1000";
	fields[92]<<"disre_tau"<<"0"<<"0";
	fields[93]<<"orire"<<"no"<<"no";
	fields[94]<<"orire_fc"<<""<<"";
	fields[95]<<"orire_tau"<<""<<"";
	fields[96]<<"orire-fitgrp"<<""<<"";
	fields[97]<<"nstdihreout"<<""<<"";
	
	fields[98]<<"ergygrp_excl"<<""<<"";
	//fields[100]<<""<<""<<"";
	
	//fields[]<< <<;
	
	connect(pbPreview, SIGNAL(clicked()), this , SLOT(makePreview()));
	connect(pbSave,    SIGNAL(clicked()), this , SLOT(saveMdp()));
	connect(tabwMain,  SIGNAL(currentChanged(int)), this, SLOT(tabChanged(int)));
	connect(pbClose,   SIGNAL(clicked()), this , SLOT(closeMdpConfig()));
		
	} 

void MdpConfig::tabChanged(int i)
{
	if (i==1)
		makePreview();
}


void MdpConfig::makePreview()
{
	updateFields();
	writeChanges();
	tabwMain->setCurrentIndex(1);
}

void MdpConfig::updateFields()
{
	fields[0].replace(2,this->Le2title->text());
	fields[1].replace(2,this->Le2pre->text());
	fields[2].replace(2,this->Le2include->text());
	fields[3].replace(2,this->Co2define->currentText());
	
	fields[4].replace(2,this->Co3integrator->currentText());
	fields[5].replace(2,this->Le3tinit->text());
	fields[6].replace(2,this->Le3dt->text());
	fields[7].replace(2,this->Le3nsteps->text());
	fields[8].replace(2,this->Le3initstep->text());
	fields[9].replace(2,this->Co3commmode->currentText());
	fields[10].replace(2,this->Le3nstcomm->text());
	fields[11].replace(2,this->Le3commgrps->text());
	
	fields[12].replace(2,Le4emtol->text());
	fields[13].replace(2,Le4emstep->text());
	fields[14].replace(2,Le4nstcgsteep->text());
	fields[15].replace(2,Le4nbfgscorr->text());
	
	fields[16].replace(2,Le5nstlist->text());
	fields[17].replace(2,Co5nstype->currentText());
	fields[18].replace(2,Co5pbc->currentText());
	fields[19].replace(2,Le5rlist->text());
	
	fields[20].replace(2,Co6constraints->currentText());
	fields[21].replace(2,Co6constalg->currentText());
	fields[22].replace(2,Co6unconststart->currentText());
	fields[23].replace(2,Le6shaketol->text());
	fields[24].replace(2,Le6lincsorder->text());
	fields[25].replace(2,Le6lincsiter->text());
	fields[26].replace(2,Le6lincswarna->text());
	fields[27].replace(2,Co6morse->currentText());
	
	fields[28].replace(2,Co7coulotype->currentText());
	fields[29].replace(2,Le7rcouloswitch->text());
	fields[30].replace(2,Le7rcoulomb->text());
	fields[31].replace(2,Le7epsilonr->text());	
	fields[32].replace(2,Le7epsilonrf->text());
	fields[33].replace(2,Le7fouspacing->text());
	fields[34].replace(2,Le7founx->text());
	fields[35].replace(2,Le7founy->text());
	fields[36].replace(2,Le7founz->text());
	fields[37].replace(2,Le7pmeorder->text());
	fields[38].replace(2,Le7ewaldrtol->text());
	fields[39].replace(2,Co7ewaldgeo->currentText());
	fields[40].replace(2,Le7epsisurf->text());
	fields[41].replace(2,Co7optimfft->currentText());
	
	fields[42].replace(2,Co8vdwtype->currentText());
	fields[43].replace(2,Le8rdwswitch->text());
	fields[44].replace(2,Le8rvdw->text());
	fields[45].replace(2,Co8dispcorr->currentText());
	
	fields[46].replace(2,Le9nstxout->text());
	fields[47].replace(2,Le9nstv->text());
	fields[48].replace(2,Le9nstf->text());
	fields[49].replace(2,Le9nstlog->text());
	fields[50].replace(2,Le9nstener->text());
	fields[51].replace(2,Le9nstxtc->text());	
	fields[52].replace(2,Le9xtcpre->text());
	fields[53].replace(2,Le9xtcgrps->text());
	fields[54].replace(2,Le9energygrps->text());
	
	fields[55].replace(2,Co10tcouple->currentText());
	fields[56].replace(2,Le10tcgrps->text());
	fields[57].replace(2,Le10reft->text());
	fields[58].replace(2,Le10taut->text());
	fields[59].replace(2,Co11pcoupl->currentText());
	fields[60].replace(2,Co11pcoutype->currentText());
	fields[61].replace(2,Le11taup->text());
	fields[62].replace(2,Le11comprss->text());
	fields[63].replace(2,Le11refp->text());
	
	fields[64].replace(2,Co12genvel->currentText());
	fields[65].replace(2,Le12gentemp->text());
	fields[66].replace(2,Le12genseed->text());
	
	fields[67].replace(2,Co13freeener->currentText());
	fields[68].replace(2,Le13initlam->text());
	fields[69].replace(2,Le13deltlam->text());
	fields[70].replace(2,Le13scalpha->text());
	fields[71].replace(2,Le13scpower->text());	
	fields[72].replace(2,Le13scsigma->text());
	
	fields[73].replace(2,Le14enertable->text());
	fields[74].replace(2,Le14tableext->text());
	
	fields[75].replace(2,Co15annealing->currentText());
	fields[76].replace(2,Le15anpoints->text());
	fields[77].replace(2,Le15antime->text());
	fields[78].replace(2,Le15antemp->text());
	
	fields[79].replace(2,Le16bdfric->text());
	fields[80].replace(2,Le16ldseed->text());
	
	fields[81].replace(2,Le17accgrps->text());
	fields[82].replace(2,Le17accelerate->text());
	fields[83].replace(2,Le17freezgrps->text());
	fields[84].replace(2,Le17freezedim->text());
	fields[85].replace(2,Le17cosacc->text());
	fields[86].replace(2,Le17deform->text());
	
	fields[87].replace(2,Co18disre->currentText());
	fields[88].replace(2,Co18disweight->currentText());
	fields[89].replace(2,Co18dismixed->currentText());
	fields[90].replace(2,Le18nstdisreout->text());
	fields[91].replace(2,Le18disrefc->text());
	fields[92].replace(2,Le18disretau->text());
	fields[93].replace(2,Co18orie->currentText());
	fields[94].replace(2,Le18oriefc->text());
	fields[95].replace(2,Le18orietau->text());
	fields[96].replace(2,Le18oriefitgrp->text());
	fields[97].replace(2,Le18nstorireout->text());
	
	fields[98].replace(2,Le21enerexclud->text());
	//fields[99].replace(2,->text());
	//fields[100].replace(2,->text());
	//fields[].replace(2,->text());
}

void MdpConfig::writeChanges()
{	
	tePreview->clear();
	for(int i=0; i < fields.size(); i++)
	{
		if (fields[i][1]==fields[i][2])
			{	continue;	}
		else
			{
				QString s("");
				s += fields[i][0];
				s += "\t = \t"  ;      
				s += fields[i][2]  ;             
				              
				tePreview->append(s);
			}
	}
}

bool MdpConfig::saveMdp()
{
	/*QStringList fileName;
	
	QFileDialog dialog(this);
	dialog.setFileMode(QFileDialog::AnyFile);
	dialog.setFilter(tr("MDP Files (*.mdp) ;; All Files (*)"));
	dialog.setDirectory(dir.path());
	dialog.setDefaultSuffix("mdp");
	if (dialog.exec())
	     fileName = dialog.selectedFiles();*/
	
	QString fileName = QFileDialog::getSaveFileName(this, tr("Save MDP File"),dir.path(),
	                            tr("MDP Files (*.mdp )"));
	//QString fileName = QFileDialog::getSaveFileName(this, tr("Save As"), dir.path(), tr("MDP Files (*.mdp)"));
	if (fileName.isEmpty())
	         return false;
	
	QFile file(fileName);
	if (!file.open(QFile::WriteOnly | QFile::Text)) 
	{
	         QMessageBox::warning(this, tr("MDP Writer"),
	                              tr("Cannot write file %1:\n%2.")
	                              .arg(fileName[0])
	                              .arg(file.errorString()));
	         return false;
	}
    QTextStream out(&file);
    //QApplication::setOverrideCursor(Qt::WaitCursor);
    out << tePreview->toPlainText();
    //QApplication::restoreOverrideCursor();
    return true;
}
		
	         








