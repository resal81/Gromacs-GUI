#include "plotwidget.h" 
#include <qwt_plot.h>
#include <qwt_plot_curve.h>
#include <qwt_text.h>
#include <qwt_symbol.h>
#include <qwt_legend_item.h>
#include <QList>
#include <QMessageBox>
#include <QDebug>
#include <QPrinter>
#include <QFileDialog>
#include <QPrintDialog>
#include <QPen>

PlotWidget::PlotWidget(QWidget *parent)
 	: QWidget(parent)
{
	setupUi(this);
	grpboxSecondY->setVisible(false);
	tlPrint->setVisible(false);
	
	m_int_columns = 2;
	m_int_rows=4;
	
	//qDebug()<<" PlotWidget 1 ";
	m_double_array=new double *[m_int_columns];
	for (int i = 0; i < m_int_columns; i++) 
	{	m_double_array[i] = new double[m_int_rows]; 	}
	
	m_qwtcurve_array= new QwtPlotCurve *[m_int_columns-1];
	for (int i = 0; i < (m_int_columns-1); i++) 
	{	m_qwtcurve_array[i]=new QwtPlotCurve();		}
	
	
	m_plot_name=("") ; 
	m_plot_title=("") ;
	m_plot_subtitle=("") ;
	m_plot_xlabel=("") ;
	m_plot_ylabel=("") ;
	m_second_y_enabled=false;	
	m_second_y_id=0;
	m_second_ylabel="";
	tlbxPlot->setItemEnabled(2,false);
	m_legend=0;
	m_picker=0;
	m_panner=0;
	m_magnifier=0;
	plotMain->setCanvasBackground(QColor(255,255,240));
	plotMain->canvas()->setFrameStyle(QFrame::StyledPanel);
	plotMain->setAxisAutoScale(QwtPlot::xBottom);
	plotMain->setAxisAutoScale(QwtPlot::yLeft);
	//plotMain->enableAxis(QwtPlot::yRight);
	
	//m_zoomer= new Zoomer(QwtPlot::xBottom, QwtPlot::yLeft, plotMain->canvas());
		
	//m_panner= new QwtPlotPanner(plotMain->canvas());
	//m_panner->setMouseButton(Qt::MidButton);
	
	connect(liwPlotList,SIGNAL(itemDoubleClicked(QListWidgetItem *)), this,SLOT(loadPlot(QListWidgetItem * )));
	connect(liwDataList,SIGNAL(itemClicked(QListWidgetItem *)), this, SLOT(toggleShowCurve(QListWidgetItem *)));
	connect(chFitted, SIGNAL(toggled(bool)), this, SLOT(toggleFitted(bool)));
	connect(cbSecondYAxis,SIGNAL(activated(int)),this,SLOT(moveToSecondYAxis(int)));
	connect(tlReset,SIGNAL(clicked()),this,SLOT(reset()));
	
	connect(chLegend, SIGNAL(toggled(bool)), this, SLOT(toggleLegend(bool)));
	connect(chSymbols, SIGNAL(toggled(bool)), this, SLOT(toggleSymbols(bool)));
	connect(chPlotTitle, SIGNAL(toggled(bool)), this, SLOT(updateTitles(bool)));
	connect(chXTitle, SIGNAL(toggled(bool)), this, SLOT(updateTitles(bool)));
	connect(chYTitle, SIGNAL(toggled(bool)), this, SLOT(updateTitles(bool)));
	connect(chY2Title, SIGNAL(toggled(bool)), this, SLOT(updateTitles(bool)));
	
	connect(tlPDF, SIGNAL(clicked()), this, SLOT(exportPDF()));
	connect(tlPrint, SIGNAL(clicked()), this, SLOT(printPlot()));
	connect(tlPicker, SIGNAL(toggled(bool)), this, SLOT(enablePicker(bool)));
	connect(tlZoom, SIGNAL(toggled(bool)), this, SLOT(enableZoom(bool)));
	
	//tlReset->setVisible(false);
	
}

PlotWidget::~PlotWidget()
{
	clearPlotArea();	
}

void PlotWidget::updatePlotList(QDir &d)
{
	m_dir=d;
	liwPlotList->clear();
	foreach(QFileInfo f_info, m_dir.entryInfoList((QDir::Files | QDir::NoSymLinks) , QDir::Name) )
	{
		if( f_info.fileName().endsWith(".xvg", Qt::CaseInsensitive) )
			new QListWidgetItem (f_info.fileName(),liwPlotList,0);
			
	}
	//clearPlotArea();
	tlbxPlot->setCurrentIndex(0);
	
	//bgrpbTools->setEnabled(false);
}

void PlotWidget::loadPlot(QListWidgetItem * item )
{	
	//qDebug()<<" loadPlot 1 ";
	clearPlotArea();
	reset();

	m_plot_name=item->text();

	QString s("");
	s= m_dir.path()+QString("/")+m_plot_name;
	QFile file(s);
	if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
	{
		QMessageBox::critical(this, "Plot", "Plot loading faild.",QMessageBox::Ok);
		tlbxPlot->setItemEnabled(2,false);
		return;
	}	


	while (!file.atEnd()) 	{m_file_data<<QString(file.readLine()); 	}

	//qDebug()<<" loadPlot 2 ";
	foreach(QString line, m_file_data)
	{
		line=line.simplified();
		if (line.startsWith("#"))
			continue;
		else if (line.startsWith("@"))
		{
			line.remove(0,1);
			m_xvg_header<<line.simplified();
			continue;
		}
		else if(! line.isEmpty())
			m_xvg_data<<line;
		}
	
	if (m_xvg_data.isEmpty())
	{
		QMessageBox::critical(this,"Error","This file contains no data.");
		return;
	}

	tlbxPlot->setItemEnabled(2,true);

	m_file_data.clear();


	m_int_columns = m_xvg_data.value(0).split(" ", QString::SkipEmptyParts).size();
	m_int_rows = m_xvg_data.size();

	digestHeader();
	processPlotData();
	
}

void PlotWidget::processPlotData()
{
	//qDebug()<<" processPlotData 1";
	m_double_array=new double *[m_int_columns];
	for (int i = 0; i < m_int_columns; i++) 
	{	m_double_array[i] = new double[m_int_rows]; 	}
	
	//qDebug()<<" processPlotData 2 ";
	QStringList l;
	bool error=false;
	bool success;
	double k;
	for (int i=0; i<m_int_rows; ++i )
	{
		l=m_xvg_data.value(i).split(" ", QString::SkipEmptyParts);
		for(int j=0; j<m_int_columns; ++j)
		{
			//qDebug()<<"row="<<i<<"column="<<j;
			k=l.value(j).toDouble(&success);
			if(!success)	
				{ error=true;qDebug()<<"problem number:"<<i<<" "<<j<<" "<<k; break;}
			m_double_array[j][i]=k;
		}
		if(error)	{ break;}
		l.clear();
	}
	
	//qDebug()<<" processPlotData 3 ";
	if(error)
	{	QMessageBox::critical(this, "Plot Import", "An error occured while trying to import data of this plot.\n"
									"Either this is not a usual 2D plot or this file has problems.",QMessageBox::Ok);
		clearPlotArea();
		return;
	}
	
	//qDebug()<<" processPlotData 4 ";
	m_xvg_data.clear();
	
	//qDebug()<<" processPlotData 5 ";
	createPlots();
	
}

void PlotWidget::createPlots()
{
	//qDebug()<<" createPlots 1 ";
	//qDebug()<<"m_int_rows="<<m_int_rows<<" m_int_columns="<<m_int_columns;
	m_qwtcurve_array= new QwtPlotCurve *[m_int_columns-1];
	
	//qDebug()<<" createPlots 1.5 ";
	for (int i = 0; i < (m_int_columns-1); ++i) 
	{
		m_qwtcurve_array[i]=new QwtPlotCurve(m_curve_names[i]) ;
		//QMessageBox::critical(this,"Error","An error encountered in createPlots()");
	}
	
	//qDebug()<<" createPlots 2 ";
	for (int i=0; i<(m_int_columns-1); ++i)
	{
		m_qwtcurve_array[i]->setData(m_double_array[0],m_double_array[i+1], m_int_rows);
		m_qwtcurve_array[i]->setPen(QPen( QBrush(getColor(i)) , 2, Qt::SolidLine, Qt::RoundCap ));
		m_qwtcurve_array[i]->setRenderHint(QwtPlotItem::RenderAntialiased);
		m_qwtcurve_array[i]->attach(plotMain);
		liwDataList->item(i)->setForeground(QBrush(getColor(i)));
	}
	
	//qDebug()<<" createPlots 3 ";
		
	plotMain->setAxisLabelRotation(QwtPlot::xBottom,0);
	plotMain->setAxisLabelAlignment(QwtPlot::xBottom, Qt::AlignHCenter);
	
	
	plotMain->setAxisLabelRotation(QwtPlot::yLeft,-20);
	plotMain->setAxisLabelAlignment(QwtPlot::yLeft, Qt::AlignLeft);
	
	plotMain->replot();	
	
	chFitted->setChecked(false);
	tlbxPlot->setCurrentIndex(1);
	
	chPlotTitle->setChecked(true);
	chXTitle->setChecked(true);
	chYTitle->setChecked(true);
	
}
	


void PlotWidget::digestHeader()
{
	//qDebug()<<" digestHeader 1  ";
	foreach(QString line, m_xvg_header)
	{
		if(line.startsWith("legend", Qt::CaseInsensitive )) 	
		{	continue;	}
		else if(line.contains(QRegExp("\\btitle\\b")) )
		{	m_plot_title=line.remove("title", Qt::CaseInsensitive ).simplified().remove("\"");
			continue;	}
		else if(line.contains(QRegExp("\\bsubtitle\\b")) )
		{	m_plot_subtitle=line.remove("subtitle", Qt::CaseInsensitive ).simplified().remove("\"");
		    continue;	}
		else if(line.contains("xaxis label", Qt::CaseInsensitive ))
		{	m_plot_xlabel=line.remove("xaxis label", Qt::CaseInsensitive ).simplified().remove("\"");
			continue;	}
		else if(line.contains("yaxis label", Qt::CaseInsensitive ))
		{	m_plot_ylabel=line.remove("yaxis label", Qt::CaseInsensitive ).simplified().remove("\"");
			continue;	}
		else if(line.indexOf(QRegExp("s\\d\\s"))==0 )
		{	m_curve_names<<line.remove(0,10).simplified().remove("\"");
			continue;	}
	}
	
	//qDebug()<<" digestHeader 2 ";
	if (m_curve_names.size() < (m_int_columns-1) )
	{
		for(int i=m_curve_names.size(); i < m_int_columns; ++i)
			m_curve_names<<QString("Curve(%1)").arg(i+1);
	}


	for (int i=0; i< (m_int_columns-1); ++i)
	{
		new QListWidgetItem (m_curve_names[i] , liwDataList,0);
		cbSecondYAxis->addItem(m_curve_names[i]);
	}
	
}

void PlotWidget::toggleShowCurve(QListWidgetItem *item)
{
	int index= m_curve_names.indexOf(item->text());
	if (! (index < (m_int_columns-1)))
	{	QMessageBox::warning(this, "Plot", "This variable has no associated data.",QMessageBox::Ok);
		return;
	}
		
	if (item->isSelected())
	{	m_qwtcurve_array[index]->setVisible(false);
		plotMain->replot();
	}
	else
	{	m_qwtcurve_array[index]->setVisible(true);
		plotMain->replot();
	}
}

void PlotWidget::toggleFitted(bool b)
{
	for (int i=0; i< (m_int_columns-1) ; ++i)
		{
			m_qwtcurve_array[i]->setCurveAttribute(QwtPlotCurve::Fitted, b);
		}
		plotMain->replot();
}

void PlotWidget::clearPlotArea()
{
	//qDebug()<<" clearPlotArea 1 ";
	m_file_data.clear();
	m_xvg_header.clear();
	m_xvg_data.clear();
	m_curve_names.clear();
	m_second_y_enabled=false;
	
	m_plot_xlabel="";
	m_plot_ylabel="";
	m_plot_subtitle="";
	m_plot_title="";

	liwDataList->clear();
	cbSecondYAxis->clear();
	cbSecondYAxis->addItem(QString("None"));
	
	if (! m_double_array==0)
	{
		for (int i = 0; i < m_int_columns ; ++i)
		{
			delete [] m_double_array[i];
			m_double_array[i]=0;
		}
		delete [] m_double_array;
		m_double_array=0;
	}
	
	//qDebug()<<" clearPlotArea 3 ";
	if (! m_qwtcurve_array==0)
	{
		for (int i = 0; i < (m_int_columns - 1) ; ++i)
		{
			delete m_qwtcurve_array[i];
			m_qwtcurve_array[i]=0;
		}
		delete [] m_qwtcurve_array;
		m_qwtcurve_array=0;
	}
	
	if(! m_legend==0)
	{
		delete m_legend;
		m_legend=0;
	}
	
	if(! m_picker==0)	
	{
		delete m_picker;
		m_picker=0;
	}
	
	if(! m_panner==0)	
		{
			delete m_panner;
			m_panner=0;
		}
	
	if(! m_magnifier==0)	
		{
			delete m_magnifier;
			m_magnifier=0;
		}
	
	m_int_columns=1;
	m_int_rows=0;
	
	//if(!plotMain->itemList().isEmpty())
	//	plotMain->clear();
	
	if (chFitted->isChecked()) chFitted->setChecked(false);
	if (chLegend->isChecked()) chLegend->setChecked(false);	
	if (chSymbols->isChecked()) chSymbols->setChecked(false);
	if (chPlotTitle->isChecked()) chPlotTitle->setChecked(false);
	if (chXTitle->isChecked()) chXTitle->setChecked(false);
	if (chYTitle->isChecked()) chYTitle->setChecked(false);
	if (chY2Title->isChecked()) chY2Title->setChecked(false);
	if (chY2Title->isEnabled()) chY2Title->setEnabled(false);
	//qDebug()<<" clearPlotArea 4 ";
		
}

QColor PlotWidget::getColor(int i)
{
	QColor c;
	if (i>10)
		i= i/10;
	switch (i)
	{
	case 0 : {c=QColor(Qt::red); break;}
	case 1 : {c=QColor(Qt::darkGreen); break;}
	case 2 : {c=QColor(Qt::blue); break;}
	case 3 : {c=QColor(Qt::gray); break;}
	case 4 : {c=QColor(Qt::magenta); break;}
	case 5 : {c=QColor(Qt::darkRed); break;}
	case 6 : {c=QColor(Qt::darkBlue); break;}
	case 7 : {c=QColor(Qt::darkMagenta); break;}
	case 8 : {c=QColor(Qt::black); break;}
	case 9 : {c=QColor(Qt::cyan); break;}
	case 10: {c=QColor(Qt::darkCyan); break;}
	default: {c=QColor(Qt::darkGray); break;}
	}
	return c;
}

void PlotWidget::enablePicker(bool b)
{
	if(b && m_picker==0)
	{
		tlZoom->setChecked(false);
		m_picker=new QwtPlotPicker(QwtPlot::xBottom, QwtPlot::yLeft,
				QwtPicker::PointSelection | QwtPicker::DragSelection, 
				QwtPlotPicker::CrossRubberBand, 
				QwtPicker::AlwaysOn, 
				plotMain->canvas());
		m_picker->setRubberBandPen(QColor(Qt::green));
		m_picker->setRubberBand(QwtPicker::CrossRubberBand);
		m_picker->setTrackerPen(QColor(Qt::black));
		connect(m_picker,SIGNAL(moved (const QPoint &)), this , SLOT(valuesToParent(const QPoint &)));
		
	}
	else if(!b && m_picker!=0)	
	{
		disconnect(m_picker,SIGNAL(moved (const QPoint &)), this , SLOT(valuesToParent(const QPoint &)));
		delete m_picker;
		m_picker=0;
	}
}

void PlotWidget::enableZoom(bool b)
{
	if(b)
	{
		tlPicker->setChecked(false);
		m_panner=new QwtPlotPanner(plotMain->canvas());
		m_magnifier=new QwtPlotMagnifier(plotMain->canvas());
	}
	else
	{
		delete m_panner;
		delete m_magnifier;
		m_panner=0;
		m_magnifier=0;
		
	}
}

void PlotWidget::exportPDF()
{
	
	
	const QString fileName = QFileDialog::getSaveFileName( this, "Export File Name", m_dir.path(),	"PDF Documents (*.pdf)");
	if ( !fileName.isEmpty() )
	{
		QPrinter printer;
		printer.setOutputFormat(QPrinter::PdfFormat);
		printer.setOrientation(QPrinter::Landscape);
		printer.setOutputFileName(fileName);

		printer.setCreator("GromacsGUI Plot Widget");
		plotMain->print(printer);
	}
}

void PlotWidget::printPlot()
{

// 	QPrinter printer;
// 	QString docName = plotMain->title().text();
// 	if ( !docName.isEmpty() )
// 	{
// 		docName.replace (QRegExp (QString::fromLatin1 ("\n")), tr (" -- "));
// 		printer.setDocName (docName);
// 	}
// 
// 	printer.setCreator("GromacsGUI Plot Widget");
// 	printer.setOrientation(QPrinter::Landscape);
// 
// 
// 	QPrintDialog dialog(&printer);
// 	dialog.setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
// 	if ( dialog.exec() )
// 	{
// 		QwtPlotPrintFilter filter;
// 		if ( printer.colorMode() == QPrinter::GrayScale )
// 		{
// 			filter.setOptions(QwtPlotPrintFilter::PrintAll & ~QwtPlotPrintFilter::PrintCanvasBackground);
// 		}
// 		plotMain->print(printer, filter);
// 	}
}

void PlotWidget::toggleLegend(bool b)
{
	if (b && m_legend==0)
	{
		m_legend = new QwtLegend();
		m_legend->setDisplayPolicy(QwtLegend::FixedIdentifier, QwtLegendItem::ShowLine | QwtLegendItem::ShowText );
		//m_legend->setFrameStyle(QFrame::StyledPanel);
		plotMain->insertLegend(m_legend, QwtPlot:: RightLegend);
	}
	
	else if (!b && m_legend!=0)
	{
		plotMain->legend()->clear();
		delete m_legend;
		m_legend=0;
	}
}

void PlotWidget::toggleSymbols(bool b)
{
	if (b==true)
	{
		QwtSymbol sym;
		sym.setStyle(QwtSymbol::Cross);
		sym.setPen(QColor(Qt::black));
		sym.setSize(5);
		for (int i=0; i< (m_int_columns-1) ; ++i)
		{
			m_qwtcurve_array[i]->setSymbol(sym);
		}
		plotMain->replot();
	}
	else
	{
		QwtSymbol sym;
		sym.setStyle(QwtSymbol::NoSymbol);
		for (int i=0; i< (m_int_columns-1) ; ++i)
		{
			m_qwtcurve_array[i]->setSymbol(sym);
		}
		plotMain->replot();		
	}
}

void PlotWidget::valuesToParent(const QPoint &pos)
{
	double a,b,c;
	a=b=c=0;
	a=plotMain->invTransform(QwtPlot::xBottom, pos.x()) ;
	b=plotMain->invTransform(QwtPlot::yLeft  , pos.y()) ;
	if (m_second_y_enabled)
		c=plotMain->invTransform(QwtPlot::yRight , pos.y()) ;
	emit plotPickerValues(a,b,c);
}

void PlotWidget::updateTitles(bool b)
{
	QString title;
	if (! m_plot_subtitle.isEmpty())
	{
		title=m_plot_title+"\n"+m_plot_subtitle;
	}
	else
		title=m_plot_title;
	
	if(b)
	{
		if(chPlotTitle->isChecked() && (!m_plot_title.isEmpty()))
			plotMain->setTitle(QwtText(title));
		if(chXTitle->isChecked() && (! m_plot_xlabel.isEmpty()) )  
			{
				QwtText w(m_plot_xlabel);
				w.setFont(QFont("Sans",12,QFont::Bold));
				plotMain->setAxisTitle(QwtPlot::xBottom,w);
			}
		if(chYTitle->isChecked() && (! m_plot_ylabel.isEmpty()) )   
			{
				QwtText w(m_plot_ylabel);
				w.setFont(QFont("Sans",12,QFont::Bold));
				plotMain->setAxisTitle(QwtPlot::yLeft,w);
			} 
			//plotMain->setAxisTitle(QwtPlot::yLeft, QwtText(m_plot_ylabel));
		if(chY2Title->isChecked() && (!m_second_ylabel.isEmpty()))
			{
				QwtText w(m_second_ylabel);
				w.setFont(QFont("Sans",12,QFont::Bold));
				plotMain->setAxisTitle(QwtPlot::yRight,w);
			}
			//plotMain->setAxisTitle(QwtPlot::yRight, QwtText(m_second_ylabel));
	}
	else
	{
		if(! chPlotTitle->isChecked()) 
			plotMain->titleLabel()->clear();
		if(! chXTitle->isChecked())    
			plotMain->setAxisTitle(QwtPlot::xBottom, "");
		if(! chYTitle->isChecked())    
			plotMain->setAxisTitle(QwtPlot::yLeft, "");
		if(! chY2Title->isChecked())    
			plotMain->setAxisTitle(QwtPlot::yRight, "");
	}
}

void PlotWidget::moveToSecondYAxis(int i)
{
	if (i==0 && (!m_second_y_enabled))
		return;
	
	if (i==0 && m_second_y_enabled) 
	{
		m_second_ylabel="";
		m_second_y_enabled=false;
		if (chY2Title->isChecked()) chY2Title->setChecked(false);
		if (chY2Title->isEnabled()) chY2Title->setEnabled(false);
		m_qwtcurve_array[m_second_y_id]->setYAxis(QwtPlot::yLeft);
		m_qwtcurve_array[m_second_y_id]->setPen(QPen( QBrush(getColor(m_second_y_id)) , 2, Qt::SolidLine, Qt::RoundCap ));
		plotMain->enableAxis(QwtPlot::yRight, false);
		plotMain->replot();
		return;
	}
	
	
	if (m_second_y_enabled)
	{
		m_qwtcurve_array[m_second_y_id]->setYAxis(QwtPlot::yLeft);
		m_qwtcurve_array[m_second_y_id]->setPen(QPen( QBrush(getColor(m_second_y_id)) , 2, Qt::SolidLine, Qt::RoundCap ));
	}
	
	if (!m_second_y_enabled)
	{
		plotMain->enableAxis(QwtPlot::yRight);
		plotMain->setAxisAutoScale(QwtPlot::yRight);
	}
	
	m_second_y_id = i-1;
	
	m_qwtcurve_array[m_second_y_id]->setYAxis(QwtPlot::yRight);
	m_qwtcurve_array[m_second_y_id]->setPen(QPen( QBrush(getColor(m_second_y_id)) , 1,Qt::DashLine , Qt::RoundCap ));
	plotMain->replot();
	
	m_second_ylabel=m_curve_names[m_second_y_id];
	m_second_y_enabled=true;
	if (! chY2Title->isEnabled()) chY2Title->setEnabled(true);
	if (  chY2Title->isChecked())    
				plotMain->setAxisTitle(QwtPlot::yRight, m_second_ylabel);
	
	//cbSecondYAxis->setForegroundRole(QPalette::Foreground);
}

void PlotWidget::reset()
{
	tlZoom->setChecked(false);
	tlPicker->setChecked(false);
	plotMain->setAxisAutoScale(QwtPlot::xBottom);
	plotMain->setAxisAutoScale(QwtPlot::yLeft);
	plotMain->replot();
}













