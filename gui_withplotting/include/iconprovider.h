#ifndef ICONPROVIDER_H
#define ICONPROVIDER_H
#include <QStringList>
#include <QPixmap>
#include <QIcon>
#include <QFileIconProvider>


class IconProvider : public QFileIconProvider
{
	
	public:
		IconProvider();
		~IconProvider() {};
		QIcon icon( const QFileInfo & fi ) const;
		//QIcon icon( const QFileInfo & fi );
		//QIcon icon( IconType type );
		
	private:
		QStringList file_struct, file_mdp, file_top, file_traj, file_tpr, file_xvg, file_edr, file_log, file_xpm;
		QPixmap m_picstruct, m_picmdp, m_pictpr, m_pictraj, m_picxvg, m_pictop, m_picedr, m_picother, m_piclog, m_picfolder, m_picxpm;


};



#endif 
