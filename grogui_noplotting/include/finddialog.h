#ifndef FINDDIALOG_H
#define FINDDIALOG_H

#include "ui_finddialog.h"


#include <QtGui/QDialog>

class FindDialog : public QDialog, public Ui::FindDialogClass
{
	Q_OBJECT
	
public:
	FindDialog(QWidget *parent=0);
	
public slots:
	

private:
	

};
 
#endif

