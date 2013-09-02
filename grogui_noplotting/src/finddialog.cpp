#include "finddialog.h"


FindDialog::FindDialog(QWidget *parent)
	:QDialog(parent)
{
	setupUi(this);
	setWindowFlags ( Qt::Tool );
	
	connect(pbFind,SIGNAL(clicked()),parent,SLOT(find()));
	connect(pbNext,SIGNAL(clicked()),parent,SLOT(findNext()));
	//connect(tlPrevious,SIGNAL(clicked()),parent,SLOT(findPrevious()));
	connect(pbReplace,SIGNAL(clicked()),parent,SLOT(replace()));
	connect(pbReplaceAll,SIGNAL(clicked()),parent,SLOT(replaceAll()));
		
}
	 
