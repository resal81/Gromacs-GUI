#ifndef ADDPOPUPITEM_H
#define ADDPOPUPITEM_H

#include "ui_addpopupitem.h"
#include <QDialog>


class AddPopupItem : public QDialog, public Ui::AddPopupItemClass
{
	Q_OBJECT
	
public:
	AddPopupItem(QWidget *parent=0);
	
public slots:
	void addItemToParrent();
	
signals:
	void itemsToBeInserted(QString, QString);
	
private:
	
};

#endif
