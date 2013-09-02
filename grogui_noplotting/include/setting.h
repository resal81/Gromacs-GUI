#ifndef SETTING_H
#define SETTING_H

#include "ui_setting.h"
#include "addpopupitem.h"
#include <QDialog>

class Setting : public QDialog, public Ui::SettingClass
{
	Q_OBJECT
	
public:
	Setting(QWidget *parent=0);
	~Setting();
	
private slots:
	void showAddItemDlg();
	void addItem(QString,QString);
	void removeItem();
	void readSettings();
	void saveSettings();
	void getGroHelpLink();
	void getRootDir();
	
signals:
	void settingsChanged();

private:
	AddPopupItem* additem_dlg;

};

#endif
