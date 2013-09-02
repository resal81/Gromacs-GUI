#ifndef MDPCONFIG_H
#define MDPCONFI_H

#include "ui_mdpconfig.h"
#include <QDir>
#include <QtGui/QDialog>

class MdpConfig : public QDialog, public Ui::MdpConfigClass
{
	Q_OBJECT
	
public:
	MdpConfig(QWidget *parent=0, QDir d=QDir::home());
	
public slots:
	void makePreview();
	void updateFields();
	void writeChanges();
	bool saveMdp();
	
	void tabChanged(int);

private:
	QList< QStringList > fields;
	QDir dir;

};

#endif
 
