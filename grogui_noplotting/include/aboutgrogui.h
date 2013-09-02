#ifndef ABOUTGROGUI_H
#define ABOUTGROGUI_H

#include "ui_aboutgrogui.h"


#include <QtGui/QDialog>

class AboutGroGui : public QDialog, public Ui::AboutGroGuiClass
{
	Q_OBJECT
	
public:
	AboutGroGui(QWidget *parent=0);
	
public slots:
	

private:
	

};

#endif
