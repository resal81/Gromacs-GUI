#include "iconprovider.h"



IconProvider::IconProvider()
: QFileIconProvider()
{
	
/* setup extension list to use */
	file_struct.clear();
	file_mdp.clear();
	file_top.clear();
	file_traj.clear();
	file_tpr.clear();
	file_xvg.clear();
	file_edr.clear();
	file_log.clear();
	
	file_struct << "gro" << "pdb" << "g96" ;
	file_mdp << "mdp" ;
	file_top << "top" << "itp" << "rtp" << "ndx";
	file_traj << "trj" << "xtc" << "trr" ;
	file_tpr << "tpr" << "tpb" << "tpa" ;
	file_xvg << "xvg" ;
	file_edr << "edr" << "ene" ;
	file_log << "log" ;
	file_xpm << "xpm";// << "cpp" << "h" ;
	
	m_picstruct=QPixmap("icons/16x16/struct.png");
	m_picmdp=QPixmap("icons/16x16/mdp.png");
	m_pictpr=QPixmap("icons/16x16/tpr.png");
	m_pictraj=QPixmap("icons/16x16/traj.png");
	m_picxvg=QPixmap("icons/16x16/xvg.png");
	m_picedr=QPixmap("icons/16x16/edr.png");
	m_pictop=QPixmap("icons/16x16/top.png");
	m_picother=QPixmap("icons/16x16/other.png");
	m_picfolder=QPixmap("icons/16x16/folder.png");
	m_piclog=QPixmap("icons/16x16/log.png");
	m_picxpm=QPixmap("icons/16x16/xpm.png");
	
}



QIcon IconProvider::icon(const QFileInfo &fi) const
{
    
    if (fi.isDir())
        return QIcon(m_picfolder);
        
    const QString ext = fi.suffix().toLower();
    if (file_struct.contains(ext)) {
        return QIcon(m_picstruct);
    } else if (file_mdp.contains(ext)) {
        return QIcon(m_picmdp);
    } else if (file_top.contains(ext)) {
        return QIcon(m_pictop);
    } else if (file_traj.contains(ext)) {
        return QIcon(m_pictraj);
    } else if (file_tpr.contains(ext)) {
        return QIcon(m_pictpr);
    } else if (file_xvg.contains(ext)) {
        return QIcon(m_picxvg);
    } else if (file_edr.contains(ext)) {
        return QIcon(m_picedr);
    } else if (file_log.contains(ext)) {
        return QIcon(m_piclog);
    }else if (file_xpm.contains(ext)) {
        return QIcon(m_picxpm);
    }else {
        return QIcon(m_picother);
    }
    /* end icon s*/
}  

 
