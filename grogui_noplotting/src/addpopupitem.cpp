#include "addpopupitem.h"
#include <QMessageBox>
#include <QDebug>


AddPopupItem::AddPopupItem(QWidget *parent)
	:QDialog(parent)
{
	setupUi(this);
	connect(pbAdd,SIGNAL(clicked()),this,SLOT(addItemToParrent()));
}

void AddPopupItem::addItemToParrent()
{
	if (leName->text().isEmpty() || leCommand->text().isEmpty())
	{
		QMessageBox::critical(this, "Add Item","Both fields must be completed", QMessageBox::Ok);
		return;
	}
	emit itemsToBeInserted(leName->text(), leCommand->text());
	this->close();
}
