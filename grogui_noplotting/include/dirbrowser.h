#ifndef DIRBROWSER_H
#define DIRBROWSER_H

#include <QDir>
#include <QString>
#include <QStringList>
#include <QDirModel>
#include <QContextMenuEvent>
#include <QTimer>
#include <QMenu>
#include <QHash>
#include <QFile>
#include "ui_dirbrowser.h"
#include "iconprovider.h"

class DirBrowser : public QWidget, public Ui::DirBrowserClass
{
	Q_OBJECT
	
public:
	
	DirBrowser(QWidget *parent=0);
	~DirBrowser();
	QDir *m_working_directory;
	void reload();
	
	
	
public slots:
	void setRootDirectory(QDir *d);
	
	
	
private slots:
	//void createActions();
	void createUserMenuActions();
	void showContextMenu(const QPoint);
	void showContextMenu_File();
	void showContextMenu_Dir();
	void showContextMenu_General();
	void evaluateContextMenuCommand();
	void reloadDirs();
	void setDirectory(const QModelIndex&);
	void goToRootDir();
	void autoUpdate();
	void createListOfFiles();
	void createNewFolder();
	void openFileBrowserHere();
	void openTerminalHere();
	void runCustomCommand(QString );
	void listItemDoubleClicked(const QModelIndex& index);
	void upListView();
	

signals:
	void contentsChanged();
	void openFilePopup(QString);
	
protected:
	QModelIndex indexAt( const QPoint & point ) const ;
	
private:
	QDir *m_root_dir;
	QTimer *timer;
	QDirModel *m_model_1, *m_model_2;
	QFileInfo *m_fileinfo;
	QStringList m_list_of_files_old;
	QHash <QString, QString> m_hash_popup_commands;
	QString m_fbrowser_name;
	QMenu *m_context_menu, *m_context_user_menu;
	QString m_action_text;
	QStringList m_commandname_list;
	QString m_external_terminal;
	
	IconProvider *icons;
	QFile m_file;
	QString m_fileName;

};


#endif

