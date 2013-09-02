#ifndef COMMANDS_H
#define COMMANDS_H

#include "ui_commands.h"
#include "logger.h"
#include <QHash>
#include <QPixmap>
#include <QIcon>

class QString;
class QDir;

/*!
 * \class Commands
 * \brief This class provides the user interface for commands.
 */
class Commands : public QWidget, public Ui::CommandsClass
{
	Q_OBJECT
	
public:
	Commands(QWidget *parent=0, Logger *log=0);
	
public slots:
	void updateCombos(QDir &d);
	QString getCommand();
	
private slots:
	void assignHashTables();
	void makeConnections( QList<QWidget *> &, const char* );
	void makeTreeWidgetConnections(QTreeWidgetItem*);
	void createComboBoxesList();
	
	void updatePdb2gmx();
	void updateEditconf();
	void updateGenbox();
	void updateGenion();
	void updateGrompp();
	void updateMdrun();
	void updateTpbconv();
	void updateNgmx();
	void updateTrjconv();
	void updateG_energy();
	void updateG_traj();
	void updateG_analyze();
	void updateG_rms();
	void updateG_cluster();
	void updateG_bond();
	void updateG_hbond();
	void updateG_potential();
	void updateG_helix();
	void updateG_rama();
	void updateG_confrms();
	void updateG_rmsf();

	
	void updateCommandLine(QList<QWidget *> &widgetlist, QHash <QString, QStringList > &hash, const QString command); 
	
private:
	QHash <QString, QStringList > m_hash_pdb2gmx ,m_hash_editconf ,m_hash_genbox  ,m_hash_genion   ,m_hash_grompp    , m_hash_mdrun;
	QHash <QString, QStringList > m_hash_tpbconv ,m_hash_ngmx     ,m_hash_trjconv ,m_hash_g_energy ,m_hash_g_analyze ,m_hash_g_rms ;
	QHash <QString, QStringList > m_hash_g_cluster ,m_hash_g_bond ,m_hash_g_hbond ,m_hash_g_potential ,m_hash_g_helix ,m_hash_g_rama;
	QHash <QString, QStringList > m_hash_g_traj  ,m_hash_g_confrms, m_hash_g_rmsf;
	
	QList<QWidget *> m_widgets_pdb2gmx ,m_widgets_editconf ,m_widgets_genbox  ,m_widgets_genion   ,m_widgets_grompp    ,m_widgets_mdrun;
	QList<QWidget *> m_widgets_tpbconv ,m_widgets_ngmx     ,m_widgets_trjconv ,m_widgets_g_energy ,m_widgets_g_analyze ,m_widgets_g_rms;
	QList<QWidget *> m_widgets_g_cluster ,m_widgets_g_bond ,m_widgets_g_hbond ,m_widgets_g_potential,m_widgets_g_helix ,m_widgets_g_rama;
	QList<QWidget *> m_widgets_g_traj    ,m_widgets_g_confrms  ,m_widgets_g_rmsf;
	
	QList< QComboBox *> m_comboboxes;
	Logger *m_log;
	QPixmap m_picstruct, m_picmdp, m_pictpr, m_pictraj, m_picxvg, m_pictop, m_picedr, m_picother;
};

#endif
 
