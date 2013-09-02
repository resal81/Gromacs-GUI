#include "commands.h"
#include <QDir>
#include <QTreeWidgetItem>




Commands::Commands(QWidget *parent, Logger *log)
	:QWidget(parent)
{
	setupUi(this);
	
	//qDebug()<<">> constructor ....";
	
	m_widgets_pdb2gmx 	= this->stack_pdb2gmx->findChildren<QWidget *>();
	m_widgets_editconf 	= this->stack_editconf->findChildren<QWidget *>();
	m_widgets_genbox 	= this->stack_genbox->findChildren<QWidget *>();
	m_widgets_genion 	= this->stack_genion->findChildren<QWidget *>();
	m_widgets_grompp 	= this->stack_grompp->findChildren<QWidget *>();
	m_widgets_mdrun 	= this->stack_mdrun->findChildren<QWidget *>();
	m_widgets_tpbconv 	= this->stack_tpbconv->findChildren<QWidget *>();
	m_widgets_ngmx 		= this->stack_ngmx->findChildren<QWidget *>();
	m_widgets_trjconv 	= this->stack_trjconv->findChildren<QWidget *>();
	m_widgets_g_energy 	= this->stack_g_energy->findChildren<QWidget *>();
	m_widgets_g_traj 	= this->stack_g_traj->findChildren<QWidget *>();
	m_widgets_g_analyze = this->stack_g_analyze->findChildren<QWidget *>();
	m_widgets_g_rms 	= this->stack_g_rms->findChildren<QWidget *>();
	m_widgets_g_cluster	= this->stack_g_cluster->findChildren<QWidget *>();
	m_widgets_g_bond 	= this->stack_g_bond->findChildren<QWidget *>();
	m_widgets_g_hbond 	= this->stack_g_hbond->findChildren<QWidget *>();
	m_widgets_g_potential 	= this->stack_g_potential->findChildren<QWidget *>();
	m_widgets_g_helix 	= this->stack_g_helix->findChildren<QWidget *>();
	m_widgets_g_rama 	= this->stack_g_rama->findChildren<QWidget *>();
	m_widgets_g_confrms = this->stack_g_confrms->findChildren<QWidget *>();
	m_widgets_g_rmsf 	= this->stack_g_rmsf->findChildren<QWidget *>();
	
	
	assignHashTables();
	createComboBoxesList();
			
	makeConnections(m_widgets_pdb2gmx, 	SLOT(updatePdb2gmx()));
	makeConnections(m_widgets_editconf, SLOT(updateEditconf()));
	makeConnections(m_widgets_genbox, 	SLOT(updateGenbox()));
	makeConnections(m_widgets_genion, 	SLOT(updateGenion()));
	makeConnections(m_widgets_grompp, 	SLOT(updateGrompp()));
	makeConnections(m_widgets_mdrun, 	SLOT(updateMdrun()));
	makeConnections(m_widgets_tpbconv, 	SLOT(updateTpbconv()));
	makeConnections(m_widgets_ngmx, 	SLOT(updateNgmx()));
	makeConnections(m_widgets_trjconv, 	SLOT(updateTrjconv()));
	makeConnections(m_widgets_g_energy, SLOT(updateG_energy()));
	makeConnections(m_widgets_g_traj, 	SLOT(updateG_traj()));
	makeConnections(m_widgets_g_analyze,SLOT(updateG_analyze()));
	makeConnections(m_widgets_g_rms, 	SLOT(updateG_rms()));
	makeConnections(m_widgets_g_cluster,SLOT(updateG_cluster()));
	makeConnections(m_widgets_g_bond, 	SLOT(updateG_bond()));
	makeConnections(m_widgets_g_hbond, 	SLOT(updateG_hbond()));
	makeConnections(m_widgets_g_potential, 	SLOT(updateG_potential()));
	makeConnections(m_widgets_g_helix, 	SLOT(updateG_helix()));
	makeConnections(m_widgets_g_rama, 	SLOT(updateG_rama()));
	makeConnections(m_widgets_g_confrms,SLOT(updateG_confrms()));
	makeConnections(m_widgets_g_rmsf, 	SLOT(updateG_rmsf()));

	connect(trwCommands, SIGNAL(itemDoubleClicked(QTreeWidgetItem *, int)), this, SLOT(makeTreeWidgetConnections(QTreeWidgetItem*)));
	
	trwCommands->setColumnWidth(0,240);
	trwCommands->setColumnWidth(1,500);
	stackwMain->setCurrentIndex(0); 
	leCommandLine->clear();
	
	m_log= new Logger();
	m_log=log;
	
	//m_log->logIt(QString("\n commands.cpp | Commands() | in constructor"));
	m_picstruct=QPixmap("icons/16x16/struct.png");
	m_picmdp=QPixmap("icons/16x16/mdp.png");
	m_pictpr=QPixmap("icons/16x16/tpr.png");
	m_pictraj=QPixmap("icons/16x16/traj.png");
	m_picxvg=QPixmap("icons/16x16/xvg.png");
	m_picedr=QPixmap("icons/16x16/edr.png");
	m_pictop=QPixmap("icons/16x16/top.png");
	m_picother=QPixmap("icons/16x16/other.png");
	
	
}

void Commands::assignHashTables()
{
	//qDebug()<< "assigning hash tables....";
	
	//m_log->logIt(QString("\n commands.cpp | assignHashTables() | starting assigning hash tables"));
	
	m_hash_pdb2gmx["cb1inputfile"]    << ""<<""<<" -f ";
	m_hash_pdb2gmx["le1outputfile"]   << ""<<""<<" -o ";
	m_hash_pdb2gmx["le1includefile"]  <<""<<""<<" -i ";
	m_hash_pdb2gmx["le1topologyfile"] << ""<<""<<" -p ";
	m_hash_pdb2gmx["le1_n"]           << ""<<""<<" -n ";
	m_hash_pdb2gmx["le1_q"]           << ""<<""<<" -q ";
	m_hash_pdb2gmx["cb1forcefield"]   << ""<<""<<" -ff ";
	m_hash_pdb2gmx["cb1watermodel"]   << "spc"<<""<<" -water ";
	m_hash_pdb2gmx["le1force_const"]  <<"1000"<<""<<" -posrefc ";
	m_hash_pdb2gmx["le1minangle_h"]   << "135"<<""<<"  -angle ";
	m_hash_pdb2gmx["le1maxdist_h"]    << "0.3"<<""<<" -dist ";
	m_hash_pdb2gmx["ch1heavy_h"]      << ""<<""<<"  ";
	m_hash_pdb2gmx["ch1doublemass_h"] <<""<<""<<"  ";
	m_hash_pdb2gmx["ch1ignore_h"]     << ""<<""<<" -ignh ";

	m_hash_editconf["cb2inputfile"]       << ""<<""<<" -f ";
	m_hash_editconf["cb2_n"]              << ""<<""<<" -n ";
	m_hash_editconf["cb2_bf"]             << ""<<""<<" -bf ";
	m_hash_editconf["le2outputfile"]      << ""<<""<<" -o ";
	m_hash_editconf["le2_mead"]           << ""<<""<<" -mead ";
	m_hash_editconf["cb2boxtype"]         << ""<<""<<" -bt ";
	m_hash_editconf["le2vector_length"]   << "0 0 0"<<""<<" -box ";
	m_hash_editconf["le2vector_angle"]    << "90 90 90"<<""<<" -angles ";
	m_hash_editconf["le2geom_center"]     << "0 0 0"<<""<<" -center ";
	m_hash_editconf["le2translation"]     << "0 0 0"<<""<<" -translate ";
	m_hash_editconf["le2rotation"]        << "0 0 0"<<""<<" -rotate ";
	m_hash_editconf["le2solute_box_dist"] << "0"<<""<<" -d ";
	m_hash_editconf["ch2center_mol"]      << ""<<""<<" -c ";
	m_hash_editconf["ch2orient_mol"]      << ""<<""<<" -princ ";

	m_hash_genbox["cb3inputfile_pro"]   << ""<<""<<" -cp "; 
	m_hash_genbox["cb3inputfile_water"] << ""<<""<<" -cs ";
	m_hash_genbox["cb3inputfile_extra"] << ""<<""<<" -ci ";
	m_hash_genbox["cb3topologyfile"]    << ""<<""<<" -p  ";
	m_hash_genbox["lec3outputfile"]     << ""<<""<<" -o ";
	m_hash_genbox["le3boxsize"]         << "0 0 0"<<""<<" -box ";
	m_hash_genbox["le3extramol_number"] << "0"<<""<<" -nmol ";

	m_hash_genion["cb4inputfile"]     << ""<<""<<" -s ";
	m_hash_genion["cb4indexfile"]     << ""<<""<<" -n ";
	m_hash_genion["cb4_table"]        << ""<<""<<" -table ";
	m_hash_genion["le4outputfile"]    << ""<<""<<" -o ";
	m_hash_genion["le4logfile"]       << ""<<""<<" -g ";
	m_hash_genion["le4pdboutput"]     << ""<<""<<" -pot ";
	m_hash_genion["le4posion_name"]   << "Na"<<""<<" -pname ";
	m_hash_genion["le4posion_number"] << "0"<<""<<" -np ";
	m_hash_genion["le4posion_charge"] << "1"<<""<<" -pq ";
	m_hash_genion["le4negion_name"]   << "Cl"<<""<<" -nname ";
	m_hash_genion["le4negion_number"] << "0"<<""<<" -nn ";
	m_hash_genion["le4negion_charge"] << "-1"<<""<<" -nq ";
	m_hash_genion["le4min_dist"]      << "0.6"<<""<<" -rmin ";
	m_hash_genion["le4scalingfactor"] << "0.001"<<""<<" -scale ";
	m_hash_genion["ch4random_place"]  << ""<<""<<" -random  ";	

	m_hash_grompp["cb5inputfile"]     << ""<<""<<" -c ";
	m_hash_grompp["cb5mdpfile"]       << ""<<""<<" -f ";
	m_hash_grompp["cb5topologyfile"]  <<""<<""<<" -p ";
	m_hash_grompp["cb5_r"]            <<""<<""<<" -r ";
	m_hash_grompp["cb5_rb"]           <<""<<""<<" -rb ";
	m_hash_grompp["cb5_n"]            <<""<<""<<" -n ";
	m_hash_grompp["cb5_t"]            <<""<<""<<" -t ";
	m_hash_grompp["cb5_e"]            <<""<<""<<" -e ";
	m_hash_grompp["le5outputfile"]    << ""<<""<<" -o ";
	m_hash_grompp["le5_po"]           << ""<<""<<" -po ";
	m_hash_grompp["le5_deshuf"]       << ""<<""<<" -deshuf ";
	m_hash_grompp["le5_pp"]           <<""<<""<<" -pp ";
	m_hash_grompp["ch5loud"]          << " "<<""<<" -nov ";
	m_hash_grompp["ch5shuffle"]       << ""<<""<<" -shuffle ";
	m_hash_grompp["ch5sort"]          << ""<<""<<" -sort ";
	m_hash_grompp["ch5rem_virtual"]   <<" "<<""<<" -normvsbds ";
	m_hash_grompp["ch5remove_waals"]  << ""<<""<<" -check14 ";
	m_hash_grompp["ch5renumber"]      <<" "<<""<<" -norenum ";
	m_hash_grompp["sp5first_frame"]   << "-1"<<""<<" -time  ";
	m_hash_grompp["sp5nodes"]         << "1"<<""<<" -np ";
	m_hash_grompp["sp5warnings"]      << "10"<<""<<" -maxwarn ";
	
	m_hash_mdrun["cb6_s"]    << ""<<""<<" -s ";
	m_hash_mdrun["le6_o"]    << ""<<""<<" -o ";
	m_hash_mdrun["le6_x"]    << ""<<""<<" -x ";
	m_hash_mdrun["le6_c"]    << ""<<""<<" -c ";
	m_hash_mdrun["le6_e"]    << ""<<""<<" -e ";
	m_hash_mdrun["le6_g"]    << ""<<""<<" -g ";
	m_hash_mdrun["le6_dgdl"] << ""<<""<<" -dgdl ";
	m_hash_mdrun["le6_field"]<< ""<<""<<" -field ";
	m_hash_mdrun["cb6_table"]<< ""<<""<<" -table ";
	m_hash_mdrun["cb6_tablep"]    << ""<<""<<" -tablep ";
	m_hash_mdrun["cb6_rerun"]<< ""<<""<<" -rerun ";
	m_hash_mdrun["le6_tpi"]  << ""<<""<<" -tpi ";
	m_hash_mdrun["cb6_ei"]   << ""<<""<<" -ei ";
	m_hash_mdrun["le6_eo"]   << ""<<""<<" -eo ";
	m_hash_mdrun["cb6_j"]    << ""<<""<<" -j ";
	m_hash_mdrun["le6_jo"]   << ""<<""<<" -jo ";
	m_hash_mdrun["le6_ffout"]<< ""<<""<<" -ffout ";
	m_hash_mdrun["le6_devout"]    << ""<<""<<" -devout ";
	m_hash_mdrun["le6_runav"]<< ""<<""<<" -runav ";
	m_hash_mdrun["cb6_pi"]   << ""<<""<<" -pi ";
	m_hash_mdrun["le6_po"]   << ""<<""<<" -po ";
	m_hash_mdrun["le6_pd"]   << ""<<""<<" -pd ";
	m_hash_mdrun["cb6_pn"]   << ""<<""<<" -pn ";
	m_hash_mdrun["le6_mtx"]  << ""<<""<<" -mtx ";
	m_hash_mdrun["le6_dn"]   << ""<<""<<" -dn ";
	m_hash_mdrun["ch6loud"]       << " "<<""<<" -nov ";
	m_hash_mdrun["ch6xray"]       << ""<<""<<" -ionize ";
	m_hash_mdrun["ch6glass"]      << ""<<""<<" -glas ";
	m_hash_mdrun["ch6dvdl"]       << ""<<""<<" -sepdvdl ";
	m_hash_mdrun["ch6compactlog"] << " "<<""<<" -nocompact ";
	m_hash_mdrun["ch6legend"]     << " "<<""<<" -noxvgr ";
	m_hash_mdrun["sp6status"]     << "1"<<""<<" -np ";
	m_hash_mdrun["sp6threads"]    << "1"<<""<<" -nt ";
	m_hash_mdrun["sp6replica_seed"]     << "0"<<""<<" -replex ";
	m_hash_mdrun["sp6replica_steps"]    << "-1"<<""<<" -reseed ";
	
	m_hash_tpbconv["cb7inputfile"]  << ""<<""<<" -s ";
	m_hash_tpbconv["cb7full"]     	<< ""<<""<<" -f ";
	m_hash_tpbconv["cb7energy"]     << ""<<""<<" -e ";
	m_hash_tpbconv["cb7index"]      << ""<<""<<" -n ";
	m_hash_tpbconv["le7output"]     << ""<<""<<" -o ";
	m_hash_tpbconv["ch7charges"]    << ""<<""<<" -zeroq ";
	m_hash_tpbconv["ch7continuous"] << " "<<""<<" -nounconstrained ";
	m_hash_tpbconv["le7extend_this"]<< "0"<<""<<" -extend ";
	m_hash_tpbconv["le7extend_until"]<< "0"<<""<<" -until ";
	m_hash_tpbconv["le7continue"]   << "-1"<<""<<" -time ";
	
	m_hash_ngmx["cb8traj"]     << ""<<""<<" -f ";
	m_hash_ngmx["cb8runinput"] << ""<<""<<" -s ";
	m_hash_ngmx["cb8index"]    << ""<<""<<" -n ";
	m_hash_ngmx["le8first"]    << "0"<<""<<" -b ";
	m_hash_ngmx["le8last"]     << "0"<<""<<" -e ";
	m_hash_ngmx["le8dt"]       << "0"<<""<<" -dt ";
	
	m_hash_trjconv["cb9inputfile"]   << ""<<""<<" -f ";
	m_hash_trjconv["cb9_s"]     << ""<<""<<" -s ";
	m_hash_trjconv["cb9_n"]     << ""<<""<<" -n ";
	m_hash_trjconv["cb9_fr"]    << ""<<""<<" -fr ";
	m_hash_trjconv["cb9_sub"]   << ""<<""<<" -sub ";
	m_hash_trjconv["cb9_drop"]  << ""<<""<<" -drop ";
	m_hash_trjconv["le9_output"]<< ""<<""<<" -o ";
	m_hash_trjconv["le9first"]  << "0"<<""<<" -b ";
	m_hash_trjconv["le9last"]   << "0"<<""<<" -e ";
	m_hash_trjconv["le9only"]   << "0"<<""<<" -dt ";
	m_hash_trjconv["sp9only"]   << "1"<<""<<" -skip ";
	m_hash_trjconv["le9dump"]   << "-1"<<""<<" -dump ";
	m_hash_trjconv["le9starting"]     << "0"<<""<<" -t0 ";
	m_hash_trjconv["le9change"] << "0"<<""<<" -timestep ";
	m_hash_trjconv["cb9time"]   << "ps"<<""<<" -tu ";
	m_hash_trjconv["cb9pbc"]    << "none"<<""<<" -pbc ";
	m_hash_trjconv["cb9cell"]   << "rect"<<""<<" -ur ";
	m_hash_trjconv["cb9center"] << "no"<<""<<" -center ";
	m_hash_trjconv["cb9fit"]    << "none"<<""<<" -fit ";
	m_hash_trjconv["ch9velocity"]    << " "<<""<<" -novel ";
	m_hash_trjconv["ch9force"]  << ""<<""<<" -force ";
	m_hash_trjconv["le9truncate"]    << "-1"<<""<<" -trunc ";
	m_hash_trjconv["ch9append"] << ""<<""<<" -app ";
	m_hash_trjconv["ch9write"]  << ""<<""<<" -sep ";
	m_hash_trjconv["ch9TER"]    << ""<<""<<" -ter ";
	m_hash_trjconv["le9below"]  << "0"<<""<<" -dropunder ";
	m_hash_trjconv["le9above"]  << "0"<<""<<" -dropover ";
	
	m_hash_g_energy["cb10input"]   << ""<<""<<" -f ";
	m_hash_g_energy["cb10_f2"]     << ""<<""<<" -f2 ";
	m_hash_g_energy["cb10_s"]      << ""<<""<<" -s ";
	m_hash_g_energy["le10output"]  << ""<<""<<" -o ";
	m_hash_g_energy["le10_viol"]    << ""<<""<<" -viol ";
	m_hash_g_energy["le10_pairs"]  << ""<<""<<" -pairs ";
	m_hash_g_energy["le10_oten"]   << ""<<""<<" -oten ";
	m_hash_g_energy["le10_corr"]   << ""<<""<<" -corr ";
	m_hash_g_energy["le10_vis"]    << ""<<""<<" -vis ";
	m_hash_g_energy["le10_ravg"]   << ""<<""<<" -ravg ";
	m_hash_g_energy["ch10free"]    << ""<<""<<" -fee ";
	m_hash_g_energy["ch10sum"]     << ""<<""<<" -sum ";
	m_hash_g_energy["ch10dipole"]  << ""<<""<<" -mutot ";
	m_hash_g_energy["le10first"]   << "0"<<""<<" -b ";
	m_hash_g_energy["le10last"]    << "0"<<""<<" -e ";
	m_hash_g_energy["le10ref"]     << "300"<<""<<" -fetemp ";
	m_hash_g_energy["le10subtract"]<< "0"<<""<<" -zero ";
	m_hash_g_energy["sp10skip"]    << "0"<<""<<" -skip ";
	m_hash_g_energy["sp10mols"]    << "1"<<""<<" -nmol ";
	m_hash_g_energy["sp10degrees"] << "3"<<""<<" -ndf ";
	m_hash_g_energy["ch10autocorr"]<< ""<<""<<" -fluc ";
	m_hash_g_energy["ch10inst"]    << ""<<""<<" -orinst ";
	m_hash_g_energy["ch10eigen"]   << ""<<""<<" -ovec";
	m_hash_g_energy["ch10normal"]  << " "<<""<<" -nonormalize ";
	m_hash_g_energy["sp10length"]  << "-1"<<""<<" -acflen ";
	m_hash_g_energy["cb10order"]   << "0"<<""<<" -P ";
	m_hash_g_energy["cb10fit"]     << "exp"<<""<<" -fitfn ";
	m_hash_g_energy["sp10skipn"]   << "0"<<""<<" -ncskip ";
	m_hash_g_energy["le10begin"]   << "0"<<""<<" -beginfit ";
	m_hash_g_energy["le10end"]     << "-1"<<""<<" -endfit     ";
	
	m_hash_g_analyze["cb12input"]   << ""<<""<<" -f ";
	m_hash_g_analyze["le12_ac"]     << ""<<""<<" -ac ";
	m_hash_g_analyze["le12_msd"]    << ""<<""<<" -msd ";
	m_hash_g_analyze["le12_cc"]     << ""<<""<<" -cc ";
	m_hash_g_analyze["le12_dist"]   << ""<<""<<" -dist ";
	m_hash_g_analyze["le12_av"]     << ""<<""<<" -av ";
	m_hash_g_analyze["le12_ee"]     << ""<<""<<" -ee ";
	m_hash_g_analyze["le12log"]     << ""<<""<<" -g ";
	m_hash_g_analyze["ch12_expect"] << " "<<""<<" -notime ";
	m_hash_g_analyze["ch12derive"]  << ""<<""<<" -d ";
	m_hash_g_analyze["ch12integrate"]    << ""<<""<<" -integrate ";
	m_hash_g_analyze["ch12interpret"]    << ""<<""<<" -xydy ";
	m_hash_g_analyze["le12first"]    << "-1"<<""<<" -b ";
	m_hash_g_analyze["le12last"]     << "-1"<<""<<" -e ";
	m_hash_g_analyze["le12binwidth"] << "0.1"<<""<<" -bw ";
	m_hash_g_analyze["cb12error"]    << "none"<<""<<" -errbar ";
	m_hash_g_analyze["le12average"]  << "0"<<""<<" -aver_start ";
	m_hash_g_analyze["le12print"]    << "0"<<""<<" -filter ";
	m_hash_g_analyze["sp12read"]     << "1"<<""<<" -n ";
	m_hash_g_analyze["ch12fit"]      << ""<<""<<" -power ";
	m_hash_g_analyze["ch12subtract"] << " "<<""<<" -nosubav ";
	m_hash_g_analyze["ch12acf_calc"] << ""<<""<<" -oneacf ";
	m_hash_g_analyze["ch12acf_norml"]<< " "<<""<<" -nonormalize ";
	m_hash_g_analyze["cb12order"]    << "0"<<""<<" -P ";
	m_hash_g_analyze["sp12length"]   << "-1"<<""<<" -acflen ";
	m_hash_g_analyze["cb12fitfunc"]  << "none"<<""<<" -fitfn ";
	m_hash_g_analyze["sp12skipcorr"] << "0"<<""<<" -ncskip ";
	m_hash_g_analyze["le12begin"]    << "0"<<""<<" -beginfit ";
	m_hash_g_analyze["le12end"]      << "-1"<<""<<" -endfit ";
	
	m_hash_g_rms["cb13input"]  << ""<<""<<" -s ";
	m_hash_g_rms["cb13_f"]     << ""<<""<<" -f ";
	m_hash_g_rms["cb13_f2"]    << ""<<""<<" -f2 ";
	m_hash_g_rms["cb13index"]  << ""<<""<<" -n ";
	m_hash_g_rms["le13_o"]     << ""<<""<<" -o ";
	m_hash_g_rms["le13_mir"]   << ""<<""<<" -mir ";
	m_hash_g_rms["le13_a"]     << ""<<""<<" -a ";
	m_hash_g_rms["le13_dist"]  << ""<<""<<" -dist ";
	m_hash_g_rms["le13_m"]     << ""<<""<<" -m ";
	m_hash_g_rms["le13_bin"]   << ""<<""<<" -bin ";
	m_hash_g_rms["le13_bm"]    << ""<<""<<" -bm ";
	m_hash_g_rms["ch13pbc"]    << " "<<""<<" -nopbc ";
	m_hash_g_rms["ch13graph"]  << ""<<""<<" -split ";
	m_hash_g_rms["le13first"]  << "0"<<""<<" -b ";
	m_hash_g_rms["le13last"]   << "0"<<""<<" -e ";
	m_hash_g_rms["cb13time"]   << "ps"<<""<<" -tu ";
	m_hash_g_rms["cb13measure"]<< "rmsd"<<""<<" -what ";
	m_hash_g_rms["cb13fit"]    << "rot+trans"<<""<<" -fit ";
	m_hash_g_rms["sp13compare"]<< "0"<<""<<" -prev ";
	m_hash_g_rms["sp13group"]  << "1"<<""<<" -ng ";
	m_hash_g_rms["sp13level"]  << "80"<<""<<" -nlevels ";
	m_hash_g_rms["le13_max"]   << "-1"<<""<<" -max ";
	m_hash_g_rms["le13_min"]   << "-1"<<""<<" -min ";
	m_hash_g_rms["le13_bmax"]  << "-1"<<""<<" -bmax ";
	m_hash_g_rms["le13_bmin"]  << "-1"<<""<<" -bmin ";
	
	m_hash_g_rama["cb28input"]  << ""<<""<<" -f ";
	m_hash_g_rama["cb28_s"]     << ""<<""<<" -s ";
	m_hash_g_rama["le28output"] << ""<<""<<" -o ";
	m_hash_g_rama["le28first"]  << "0"<<""<<" -b ";
	m_hash_g_rama["le28last"]   << "0"<<""<<" -e ";
	m_hash_g_rama["le28only"]   << "0"<<""<<" -dt ";
	
	m_hash_g_helix["cb27input"]  << ""<<""<<" -s ";
	m_hash_g_helix["cb27_n"]     << ""<<""<<" -n ";
	m_hash_g_helix["cb27_f"]     << ""<<""<<" -f ";
	m_hash_g_helix["le27_to"]    << ""<<""<<" -to ";
	m_hash_g_helix["le27_cz"]    << ""<<""<<" -cz ";
	m_hash_g_helix["le27_co"]    << ""<<""<<" -co ";
	m_hash_g_helix["ch27check"]  << ""<<""<<" -q ";
	m_hash_g_helix["ch27toggle"] << " "<<""<<" -noF ";
	m_hash_g_helix["ch27write"]  << ""<<""<<" -ev ";
	m_hash_g_helix["le27first"]  << "0"<<""<<" -b ";
	m_hash_g_helix["le27last"]   << "0"<<""<<" -e ";
	m_hash_g_helix["le27only"]   << "0"<<""<<" -dt ";
	m_hash_g_helix["sp27seq"]    << "1"<<""<<" -r0 ";
	m_hash_g_helix["sp27firstres"]     << "0"<<""<<" -ahxstart ";
	m_hash_g_helix["sp27lastres"]<< "0"<<""<<" -ahxend ";
	m_hash_g_helix["cb27property"]    << "RAD"<<""<<" -prop ";
	
	m_hash_g_potential["cb25input"]  << ""<<""<<" -f ";
	m_hash_g_potential["cb25_n"]     << ""<<""<<" -n ";
	m_hash_g_potential["cb25_s"]     << ""<<""<<" -s ";
	m_hash_g_potential["le25output"] << ""<<""<<" -o ";
	m_hash_g_potential["le25_oc"]    << ""<<""<<" -oc ";
	m_hash_g_potential["le25_of"]    << ""<<""<<" -of ";
	m_hash_g_potential["ch25sphere"] << ""<<""<<" -spherical ";
	m_hash_g_potential["le25first"]  << "0"<<""<<" -b ";
	m_hash_g_potential["le25last"]   << "0"<<""<<" -e ";
	m_hash_g_potential["le25only"]   << "0"<<""<<" -dt ";
	m_hash_g_potential["le25take"]   << "z"<<""<<" -d ";
	m_hash_g_potential["sp25calc"]   << "10"<<""<<" -sl ";
	m_hash_g_potential["sp25disc_first"]  << "0"<<""<<" -cb ";
	m_hash_g_potential["sp25disc_last"]   << "0"<<""<<" -ce ";
	m_hash_g_potential["sp25groups"] << "1"<<""<<" -ng ";
	m_hash_g_potential["le25transl"] << "0"<<""<<" -tz ";
	
	m_hash_g_hbond["cb22input"]  << ""<<""<<" -f ";
	m_hash_g_hbond["cb22_s"]     << ""<<""<<" -s ";
	m_hash_g_hbond["cb22_n"]     << ""<<""<<" -n ";
	m_hash_g_hbond["cb22_sel"]   << ""<<""<<" -sel ";
	m_hash_g_hbond["le22_num"]   << ""<<""<<" -num ";
	m_hash_g_hbond["le22log"]    << ""<<""<<" -g ";
	m_hash_g_hbond["le22_ac"]    << ""<<""<<" -ac ";
	m_hash_g_hbond["le22_dis"]   << ""<<""<<" -dis ";
	m_hash_g_hbond["le22_ang"]   << ""<<""<<" -ang ";
	m_hash_g_hbond["le22_hx"]    << ""<<""<<" -hx ";
	m_hash_g_hbond["le22_hbn"]   << ""<<""<<" -hbn ";
	m_hash_g_hbond["le22_hbm"]   << ""<<""<<" -hbm ";
	m_hash_g_hbond["le22_don"]   << ""<<""<<" -don ";
	m_hash_g_hbond["le22_dan"]   << ""<<""<<" -dan ";
	m_hash_g_hbond["le22_life"]  << ""<<""<<" -life ";
	m_hash_g_hbond["ch22solvent"]     << ""<<""<<" -ins ";
	m_hash_g_hbond["ch22distance"]<< " "<<""<<" -noda ";
	m_hash_g_hbond["ch22regard"] << " "<<""<<" -nonitacc ";
	m_hash_g_hbond["ch22look"]   << ""<<""<<" -contact ";
	m_hash_g_hbond["le22first"]  << "0"<<""<<" -b ";
	m_hash_g_hbond["le22last"]   << "0"<<""<<" -e ";
	m_hash_g_hbond["le22only"]   << "0"<<""<<" -dt ";
	m_hash_g_hbond["le22cutang"] << "30"<<""<<" -a ";
	m_hash_g_hbond["le22cutrad"] << "0.35"<<""<<" -r ";
	m_hash_g_hbond["le22binang"] << "1"<<""<<" -abin ";
	m_hash_g_hbond["le22bindist"]<< "0.005"<<""<<" -rbin ";
	m_hash_g_hbond["le22shell"]  << "-1"<<""<<" -shell ";
	m_hash_g_hbond["le22temp"]   << "298.15"<<""<<" -temp ";
	m_hash_g_hbond["ch22single"] << " "<<""<<" -nomerge ";
	m_hash_g_hbond["ch22norm"]   << " "<<""<<" -nonormalize ";
	m_hash_g_hbond["le22corr"]   << "1"<<""<<" -fitstart ";
	m_hash_g_hbond["le22theore"] << "0"<<""<<" -max_hb ";
	m_hash_g_hbond["sp22length"] << "-1"<<""<<" -acflen ";
	m_hash_g_hbond["cb22fit"]    << "none"<<""<<" -fitfn ";
	m_hash_g_hbond["cb22order"]    << "0"<<""<<" -P ";	
	m_hash_g_hbond["sp22skipcorr"]    << "0"<<""<<" -ncskip ";
	m_hash_g_hbond["le22begin"]  << "0"<<""<<" -beginfit ";
	m_hash_g_hbond["le22end"]    << "-1"<<""<<" -endfit ";
	
	m_hash_g_bond["cb19input"]  << ""<<""<<" -f ";
	m_hash_g_bond["cb19_n"]     << ""<<""<<" -n ";
	m_hash_g_bond["cb19_s"]     << ""<<""<<" -s ";
	m_hash_g_bond["le19output"] << ""<<""<<" -o ";
	m_hash_g_bond["le19_d"]     << ""<<""<<" -d ";
	m_hash_g_bond["le19log"]    << ""<<""<<" -l ";
	m_hash_g_bond["ch19bond"]   << " "<<""<<" -noaver ";
	m_hash_g_bond["ch19dist"]   << " "<<""<<" -noaverdist ";
	m_hash_g_bond["le19first"]  << "0"<<""<<" -b ";
	m_hash_g_bond["le19last"]   << "0"<<""<<" -e ";
	m_hash_g_bond["le19only"]   << "0"<<""<<" -dt ";
	m_hash_g_bond["le19length"] << "-1"<<""<<" -blen ";
	m_hash_g_bond["le19width"]  << "0.1"<<""<<" -tol ";
	
	m_hash_g_cluster["cb15input"]  << ""<<""<<" -f ";
	m_hash_g_cluster["cb15_s"]     << ""<<""<<" -s ";
	m_hash_g_cluster["cb15_n"]     << ""<<""<<" -n ";
	m_hash_g_cluster["le15_o"]     << ""<<""<<" -o ";
	m_hash_g_cluster["le15log"]    << ""<<""<<" -g ";
	m_hash_g_cluster["le15_dist"]  << ""<<""<<" -dist ";
	m_hash_g_cluster["le15_ev"]    << ""<<""<<" -ev ";
	m_hash_g_cluster["le15_sz"]    << ""<<""<<" -sz ";
	m_hash_g_cluster["le15_tr"]    << ""<<""<<" -tr ";
	m_hash_g_cluster["le15_ntr"]   << ""<<""<<" -ntr ";
	m_hash_g_cluster["le15_clid"]  << ""<<""<<" -clid ";	
	m_hash_g_cluster["le15_cl"]    << ""<<""<<" -cl ";
	m_hash_g_cluster["ch15dist"]   << ""<<""<<" -dista ";
	m_hash_g_cluster["ch15least"]  << " "<<""<<" -nofit ";
	m_hash_g_cluster["ch15aver"]   << ""<<""<<" -av ";
	m_hash_g_cluster["ch15treat"]  << ""<<""<<" -binary ";
	m_hash_g_cluster["le15first"]  << "0"<<""<<" -b ";
	m_hash_g_cluster["le15last"]   << "0"<<""<<" -e ";
	m_hash_g_cluster["le15only"]   << "0"<<""<<" -dt ";
	m_hash_g_cluster["cb15time"]   << "ps"<<""<<" -tu ";
	m_hash_g_cluster["cb15method"] << "linkage"<<""<<" -method ";
	m_hash_g_cluster["sp15discre"] << "40"<<""<<" -nlevels ";
	m_hash_g_cluster["le15cutoff"] << "0.1"<<""<<" -cutoff ";
	m_hash_g_cluster["le15max"]    << "-1"<<""<<" -max ";
	m_hash_g_cluster["sp15nrth"]   << "1"<<""<<" -skip ";
	m_hash_g_cluster["sp15numb"]   << "0"<<""<<" -wcl ";
	m_hash_g_cluster["sp15per"]    << "1"<<""<<" -nst ";
	m_hash_g_cluster["le15minrms"] << "0"<<""<<" -rmsmin ";
	m_hash_g_cluster["sp15near"]   << "10"<<""<<" -M ";
	m_hash_g_cluster["sp15identical"]   << "3"<<""<<" -P ";
	m_hash_g_cluster["sp15xpm"]    << "1"<<""<<" -minstruct ";
	m_hash_g_cluster["sp15iter"]   << "10000"<<""<<" -niter ";
	m_hash_g_cluster["le15boltz"]  << "0.001"<<""<<" -kT ";
	
	m_hash_g_traj["cb11input"]  << ""<<""<<" -f ";
	m_hash_g_traj["cb11_s"]     << ""<<""<<" -s ";
	m_hash_g_traj["cb11_n"]     << ""<<""<<" -n ";
	m_hash_g_traj["le11_ox"]    << ""<<""<<" -ox ";
	m_hash_g_traj["le11_ov"]    << ""<<""<<" -ov ";
	m_hash_g_traj["le11_of"]    << ""<<""<<" -of ";
	m_hash_g_traj["le11_ob"]    << ""<<""<<" -ob ";
	m_hash_g_traj["le11_ot"]    << ""<<""<<" -ot ";
	m_hash_g_traj["le11_ekt"]   << ""<<""<<" -ekt ";
	m_hash_g_traj["le11_ekr"]   << ""<<""<<" -ekr ";
	m_hash_g_traj["le11_cv"]    << ""<<""<<" -cv ";	
	m_hash_g_traj["le11_cf"]    << ""<<""<<" -cf ";
	m_hash_g_traj["ch11plot"]   << ""<<""<<" -com ";
	m_hash_g_traj["ch11index"]  << ""<<""<<" -mol ";
	m_hash_g_traj["ch11remove"] << ""<<""<<" -nojump ";
	m_hash_g_traj["ch11x"]      << " "<<""<<" -nox ";
	m_hash_g_traj["ch11y"]      << " "<<""<<" -noy ";
	m_hash_g_traj["ch11z"]      << " "<<""<<" -noz ";
	m_hash_g_traj["ch11vector"] << ""<<""<<" -len ";
	m_hash_g_traj["sp11groups"] << "1"<<""<<" -ng ";
	m_hash_g_traj["le11first"]  << "0"<<""<<" -b ";
	m_hash_g_traj["le11last"]   << "0"<<""<<" -e ";
	m_hash_g_traj["le11only"]   << "0"<<""<<" -dt ";	
	m_hash_g_traj["le11binwidth"]    << "1"<<""<<" -bin ";
	m_hash_g_traj["le11scale"]  << "0"<<""<<" -scale ";
	
	m_hash_g_confrms["cb14_f1"]     << ""<<""<<" -f1 ";
	m_hash_g_confrms["cb14_f2"]     << ""<<""<<" -f2 ";
	m_hash_g_confrms["le14_o"]      << ""<<""<<" -o ";
	m_hash_g_confrms["cb14_n1"]     << ""<<""<<" -n1 ";
	m_hash_g_confrms["cb14_n2"]     << ""<<""<<" -n2 ";
	m_hash_g_confrms["le14_no"]     << ""<<""<<" -o ";
	m_hash_g_confrms["ch14fit"]     << ""<<""<<" -one ";
	m_hash_g_confrms["ch14mass"]    << " "<<""<<" -nomw ";
	m_hash_g_confrms["ch14try"]     << ""<<""<<" -pbc ";
	m_hash_g_confrms["ch14least"]   << " "<<""<<" -nofit ";
	m_hash_g_confrms["ch14compare"] << ""<<""<<" -name ";
	m_hash_g_confrms["ch14bfactor"] << ""<<""<<" -bfac ";
	
	m_hash_g_rmsf["cb16_f"]     << ""<<""<<" -f ";
	m_hash_g_rmsf["cb16_s"]     << ""<<""<<" -s ";
	m_hash_g_rmsf["cb16_n"]     << ""<<""<<" -n ";
	m_hash_g_rmsf["cb16_q"]     << ""<<""<<" -q ";
	m_hash_g_rmsf["le16_oq"]    << ""<<""<<" -oq ";
	m_hash_g_rmsf["le16_ox"]    << ""<<""<<" -ox ";
	m_hash_g_rmsf["le16_o"]     << ""<<""<<" -o ";
	m_hash_g_rmsf["le16_od"]    << ""<<""<<" -od ";
	m_hash_g_rmsf["le16_oc"]    << ""<<""<<" -oc ";
	m_hash_g_rmsf["le16_dir"]   << ""<<""<<" -dir ";
	m_hash_g_rmsf["le16first"]  << "0"<<""<<" -b ";
	m_hash_g_rmsf["le16last"]   << "0"<<""<<" -e ";
	m_hash_g_rmsf["le16only"]   << "0"<<""<<" -dt ";
	m_hash_g_rmsf["ch16av"]     << ""<<""<<" -res ";
	m_hash_g_rmsf["ch16aniso"]  << ""<<""<<" -aniso ";
	
	
	/*m_hash_[""]     << ""<<""<<"  ";
	m_hash_[""]     << ""<<""<<"  ";
	m_hash_[""]     << ""<<""<<"  ";
	m_hash_[""]     << ""<<""<<"  ";
	m_hash_[""]     << ""<<""<<"  ";
	m_hash_[""]     << ""<<""<<"  ";
	m_hash_[""]     << ""<<""<<"  ";
	m_hash_[""]     << ""<<""<<"  ";
	m_hash_[""]     << ""<<""<<"  ";
	m_hash_[""]     << ""<<""<<"  ";
	m_hash_[""]     << ""<<""<<"  ";
	m_hash_[""]     << ""<<""<<"  ";
	m_hash_[""]     << ""<<""<<"  ";
	m_hash_[""]     << ""<<""<<"  ";
	m_hash_[""]     << ""<<""<<"  ";*/	
			

	//m_log->logIt(QString("\n commands.cpp | assignHashTables() | finishing assigning hash tables"));
	//qDebug()<< "finishing assigning hash tables....";
}

void Commands::makeConnections( QList<QWidget *> &widgetlist, const char *slot )
{	
	//qDebug()<<"making connections ....";
	foreach (QWidget *w, widgetlist)
	{
		if (w->objectName().isEmpty())
				
				continue;
		
		if ( qobject_cast<QComboBox *> (w)  ) 
			{	connect(w, SIGNAL(currentIndexChanged(QString)), this , slot );	
				//qDebug()<<"Object "<<w->objectName()<<" emitted the signal!";
			    continue;
			}
		
		if ( qobject_cast<QLineEdit *> (w)  ) 
			{	connect(w, SIGNAL(textChanged(QString)), this , slot );
				//qDebug()<<"Object "<<w->objectName()<<" emitted the signal!";
				continue;
			}
		
		if ( qobject_cast<QCheckBox *> (w)  ) 
			{	connect(w, SIGNAL(toggled(bool)), this , slot );
				//qDebug()<<"Object "<<w->objectName()<<" emitted the signal!";
				continue;	
			}
		
		if ( qobject_cast<QSpinBox *> (w)  ) 
			{	connect(w, SIGNAL(valueChanged(QString)), this , slot );
				//qDebug()<<"Object "<<w->objectName()<<" emitted the signal!";
				continue;	
			}
	}
}


void Commands::updateCommandLine(QList<QWidget *> &widgetlist, 
		                                 QHash <QString, QStringList > &hash,
		                                 const QString command)
{
	//qDebug()<<">> updatecommandline ....";
	foreach (QWidget *w, widgetlist)
	{	
		QString name("");
		name = w->objectName();
		//qDebug()<<name;
		if (name.isEmpty())
					continue;
		if ( qobject_cast<QComboBox *>(w)  )
			{ 	hash[name].replace(1, static_cast<QComboBox *>(w)->currentText()) ;
				//qDebug()<<"QWidget hash["<<name<<"]. Current value is "<< hash[name][1]<<".\n";
				continue;
			}
		if ( qobject_cast<QLineEdit *>(w)  )
			{ 	
				if ( qobject_cast<QAbstractSpinBox *>(w->parent()) )
					continue;
				if ( qobject_cast<QComboBox *>(w->parent()) )
					continue;
				hash[name].replace(1, static_cast<QLineEdit *>(w)->text()) ; 
				//qDebug()<<"QWidget hash["<<name<<"]. Current value is "<< hash[name][1]<<".\n";
				continue;
			}
		if ( qobject_cast<QSpinBox *>(w)  )
			{ 	hash[name].replace(1, static_cast<QSpinBox *>(w)->text()) ; 
				continue;
			}
		if ( qobject_cast<QCheckBox *>(w)  )
			{ 	
				if (static_cast<QCheckBox *>(w)->isChecked())
				{
					hash[name].replace(1," ") ;
					//qDebug()<<"QWidget hash["<<name<<"] is checked."<<".\n";
					continue;
					}
				else if (! static_cast<QCheckBox *>(w)->isChecked())
				{
					hash[name].replace(1,"") ;
				
					//qDebug()<<"QWidget hash["<<name<<"] is unchecked."<<".\n";
					continue;
				}
			}
		else
			continue;
	}
	
			
	QString s(command);
	s+=" ";
	
	for (int i=0; i<widgetlist.size(); ++i)
	{
		QString name("");
		name = widgetlist[i]->objectName();
		if(name.isEmpty())
			continue;
		
		if ( hash.value(name).value(0) != hash.value(name).value(1) )
			{	
				s+= hash.value(name).value(2) ;
				s+= hash.value(name).value(1) ;
			}
			
	}
	
	leCommandLine->setText(s);	
	
}


//==================================================================================
//updateCOMMAND section
void Commands::updatePdb2gmx()
{
	updateCommandLine(m_widgets_pdb2gmx, m_hash_pdb2gmx, "pdb2gmx");
}

void Commands::updateEditconf()
{
	updateCommandLine(m_widgets_editconf, m_hash_editconf, "editconf");
}

void Commands::updateGenbox()
{
	updateCommandLine(m_widgets_genbox, m_hash_genbox, "genbox");
}

void Commands::updateGenion()
{
	updateCommandLine(m_widgets_genion, m_hash_genion, "genion");
}

void Commands::updateGrompp()
{
	updateCommandLine(m_widgets_grompp, m_hash_grompp, "grompp");
}

void Commands::updateMdrun()
{
	updateCommandLine(m_widgets_mdrun, m_hash_mdrun, "mdrun");
}

void Commands::updateTpbconv()
{
	updateCommandLine(m_widgets_tpbconv, m_hash_tpbconv, "tpbconv");
}

void Commands::updateNgmx()
{
	updateCommandLine(m_widgets_ngmx, m_hash_ngmx, "ngmx");
}

void Commands::updateTrjconv()
{
	updateCommandLine(m_widgets_trjconv, m_hash_trjconv, "trjconv");
}

void Commands::updateG_energy()
{
	updateCommandLine(m_widgets_g_energy, m_hash_g_energy, "g_energy");
}

void Commands::updateG_analyze()
{
	updateCommandLine(m_widgets_g_analyze, m_hash_g_analyze, "g_analyze");
}

void Commands::updateG_rms()
{
	updateCommandLine(m_widgets_g_rms, m_hash_g_rms, "g_rms");
}

void Commands::updateG_traj()
{
	updateCommandLine(m_widgets_g_traj, m_hash_g_traj, "g_traj");
}

void Commands::updateG_cluster()
{
	updateCommandLine(m_widgets_g_cluster, m_hash_g_cluster, "g_cluster");
}

void Commands::updateG_bond()
{
	updateCommandLine(m_widgets_g_bond, m_hash_g_bond, "g_bond");
}

void Commands::updateG_hbond()
{
	updateCommandLine(m_widgets_g_hbond, m_hash_g_hbond, "g_hbond");
}

void Commands::updateG_potential()
{
	updateCommandLine(m_widgets_g_potential, m_hash_g_potential, "g_potential");
}

void Commands::updateG_helix()
{
	updateCommandLine(m_widgets_g_helix, m_hash_g_helix, "g_helix");
}

void Commands::updateG_rama()
{
	updateCommandLine(m_widgets_g_rama, m_hash_g_rama, "g_rama");
}

void Commands::updateG_confrms()
{
	updateCommandLine(m_widgets_g_confrms, m_hash_g_confrms, "g_confrms");
}

void Commands::updateG_rmsf()
{
	updateCommandLine(m_widgets_g_rmsf, m_hash_g_rmsf, "g_rmsf");
}
//==================================================================================

QString Commands::getCommand()
{
	return leCommandLine->text();
}

void Commands::updateCombos(QDir &d)
{
	//qDebug()<<">> updatecombos ....";
	QStringList *list_of_files= new QStringList();
	foreach(QFileInfo f_info, d.entryInfoList((QDir::Files | QDir::NoSymLinks) , QDir::Name) )
		{
			if( ! (f_info.fileName().contains("#") or f_info.fileName().endsWith(".log") ))
				*list_of_files<<f_info.fileName() ;
		}
		
	foreach(QComboBox *cb, m_comboboxes)
	{
		cb->clear();
		cb->addItem("");
		foreach(QString s, *list_of_files)
		{
			if      (s.endsWith("gro") or s.endsWith("pdb")or s.endsWith("g96"))  {cb->addItem(QIcon(m_picstruct),s);continue;}
			else if (s.endsWith("mdp"))  										{cb->addItem(QIcon(m_picmdp),s);continue;}
			else if (s.endsWith("tpr") or s.endsWith("tpb")or s.endsWith("tpa"))  {cb->addItem(QIcon(m_pictpr),s);continue;}
			else if (s.endsWith("trj") or s.endsWith("xtc")or s.endsWith("trr"))  {cb->addItem(QIcon(m_pictraj),s);continue;}
			else if (s.endsWith("xvg"))  										{cb->addItem(QIcon(m_picxvg),s);continue;}
			else if (s.endsWith("edr") or s.endsWith("ene"))  					{cb->addItem(QIcon(m_picedr),s);continue;}
			else if (s.endsWith("top") or s.endsWith("itp") or s.endsWith("rtp") or s.endsWith("ndx"))  {cb->addItem(QIcon(m_pictop),s);continue;}
			else                                        					 {cb->addItem(QIcon(m_picother),s);continue;}
		}
			
	}
	
	delete list_of_files;
	list_of_files=0;
	
	while(1)
	{
		if (stackwMain->currentIndex()==0) {leCommandLine->clear(); break;}
		else if (stackwMain->currentIndex()==1)  {updatePdb2gmx(); break;}
		else if (stackwMain->currentIndex()==2)  {updateEditconf(); break;}
		else if (stackwMain->currentIndex()==3)  {updateGenbox(); break;}
		else if (stackwMain->currentIndex()==4)  {updateGenion(); break;}
		else if (stackwMain->currentIndex()==5)  {updateGrompp(); break;}
		else if (stackwMain->currentIndex()==6)  {updateMdrun(); break;}
		else if (stackwMain->currentIndex()==7)  {updateTpbconv(); break;}
		else if (stackwMain->currentIndex()==8)  {updateNgmx(); break;}
		else if (stackwMain->currentIndex()==9)  {updateTrjconv(); break;}
		else if (stackwMain->currentIndex()==10) {updateG_energy(); break;}
		else if (stackwMain->currentIndex()==11) {updateG_traj(); break;}
		else if (stackwMain->currentIndex()==12) {updateG_analyze(); break;}
		else if (stackwMain->currentIndex()==13) {updateG_rms(); break;}
		else if (stackwMain->currentIndex()==14) {updateG_confrms(); break;}
		else if (stackwMain->currentIndex()==15) {updateG_cluster(); break;}
		else if (stackwMain->currentIndex()==16) {updateG_rmsf(); break;}
		else if (stackwMain->currentIndex()==19) {updateG_bond(); break;}
		else if (stackwMain->currentIndex()==22) {updateG_hbond(); break;}
		else if (stackwMain->currentIndex()==25) {updateG_potential(); break;}
		else if (stackwMain->currentIndex()==27) {updateG_helix(); break;}
		else if (stackwMain->currentIndex()==28) {updateG_rama(); break;}
		
		else {leCommandLine->clear(); break;}
		
	}
		
}

void Commands::makeTreeWidgetConnections(QTreeWidgetItem* item)
{
	//qDebug()<<">> treeconnections ....";
	const QString name= item->text(0);
	while(1)
	{
		if      (name=="pdb2gmx")  {stackwMain->setCurrentIndex(1); updatePdb2gmx() ; break;}
		else if (name=="editconf") {stackwMain->setCurrentIndex(2); updateEditconf(); break;}
		else if (name=="genbox")   {stackwMain->setCurrentIndex(3); updateGenbox()  ; break;}
		else if (name=="genion")   {stackwMain->setCurrentIndex(4); updateGenion()  ; break;}
		else if (name=="grompp")   {stackwMain->setCurrentIndex(5); updateGrompp()  ; break;}
		else if (name=="mdrun")    {stackwMain->setCurrentIndex(6); updateMdrun()   ; break;}
		else if (name=="tpbconv")  {stackwMain->setCurrentIndex(7); updateTpbconv() ; break;}
		else if (name=="ngmx")     {stackwMain->setCurrentIndex(8); updateNgmx()    ; break;}
		else if (name=="trjconv")  {stackwMain->setCurrentIndex(9); updateTrjconv() ; break;}
		else if (name=="g_energy") {stackwMain->setCurrentIndex(10);updateG_energy(); break;}
		else if (name=="g_traj")   {stackwMain->setCurrentIndex(11);updateG_traj()  ; break;}
		else if (name=="g_analyze"){stackwMain->setCurrentIndex(12);updateG_analyze() ; break;}
		else if (name=="g_rms")    {stackwMain->setCurrentIndex(13);updateG_rms()   ; break;}
		else if (name=="g_confrms"){stackwMain->setCurrentIndex(14);updateG_confrms()   ; break;}
		else if (name=="g_cluster"){stackwMain->setCurrentIndex(15);updateG_cluster() ; break;}
		else if (name=="g_rmsf")   {stackwMain->setCurrentIndex(16);updateG_rmsf()   ; break;}
		else if (name=="g_bond")   {stackwMain->setCurrentIndex(19);updateG_bond()  ; break;}
		else if (name=="g_hbond")  {stackwMain->setCurrentIndex(22);updateG_hbond() ; break;}
		else if (name=="g_potential") {stackwMain->setCurrentIndex(25);updateG_potential() ; break;}
		else if (name=="g_helix")  {stackwMain->setCurrentIndex(27);updateG_helix() ; break;}
		else if (name=="g_rama")   {stackwMain->setCurrentIndex(28);updateG_rama()  ; break;}
		
		else                       {stackwMain->setCurrentIndex(0); leCommandLine->clear(); break;}
	}
}

void Commands::createComboBoxesList()
{
	//qDebug()<<">> createcomboboxlist ....";
	QStringList *freezed_combos = new QStringList();
	*freezed_combos<<"cb1forcefield"<<"cb1watermodel"<<"cb2boxtype"<<"cb3inputfile_water" 
				   <<"cb9time"<<"cb9pbc"<<"cb9cell"<<"cb9center"<<"cb9fit"
				   <<"cb10order"<<"cb10fit"<<"cb12error"<<"cb12order"<<"cb12fitfunc"
				   <<"cb13time"<<"cb13measure"<<"cb13fit"<<"cb15time"<<"cb15method"
				   <<"cb22fit"<<"cb22order"<<"cb27property";
	
	QList< QList<QWidget *> > list_of_pagewidgets ;
	list_of_pagewidgets<< m_widgets_pdb2gmx << m_widgets_editconf 
					<< m_widgets_genbox	<< m_widgets_genion 
					<< m_widgets_grompp << m_widgets_mdrun  
					<< m_widgets_tpbconv << m_widgets_ngmx
					<< m_widgets_trjconv << m_widgets_g_energy
					<< m_widgets_g_analyze << m_widgets_g_rms
					<< m_widgets_g_traj << m_widgets_g_cluster
					<< m_widgets_g_bond << m_widgets_g_hbond
					<< m_widgets_g_potential << m_widgets_g_helix
					<< m_widgets_g_rama << m_widgets_g_confrms << m_widgets_g_rmsf;
					
	
	foreach(QList<QWidget *> pages, list_of_pagewidgets)
		{
				foreach(QWidget *w, pages)
				{
					if(qobject_cast<QComboBox *>(w))
					{	
						//m_log->logIt(QString("Object %1 is a combobox").arg(w->objectName()));
						if (! freezed_combos->contains(w->objectName()) )
						{
						//	m_log->logIt(QString("Object %1 is a non-freezed combobox").arg(w->objectName()));
							m_comboboxes<< static_cast<QComboBox *>(w);
						}
					}
				}
		}
	list_of_pagewidgets.clear();
	
	delete freezed_combos;
	freezed_combos=0;
}












 
