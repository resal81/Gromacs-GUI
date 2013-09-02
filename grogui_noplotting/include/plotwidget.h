#ifndef PLOTWIDGET_H
#define PLOTWIDGET_H

#include "ui_plotwidget.h" 
#include <QDir>
#include <QColor>
#include <qwt_plot_curve.h>
#include <qwt_plot_zoomer.h>
#include <qwt_plot_panner.h>
#include <qwt_text.h>
#include <qwt_plot_magnifier.h>
#include <qwt_plot_marker.h>
#include <qwt_plot_picker.h>
#include <qwt_legend.h>


class PlotWidget : public QWidget, public Ui::PlotWidgetClass
{
	Q_OBJECT
public:
	PlotWidget(QWidget *parent=0);
	~PlotWidget();
	
	
public slots:
	void updatePlotList( QDir &d);

private slots:
	void loadPlot(QListWidgetItem * item );
	void processPlotData();
	void digestHeader();
	void createPlots();
	void clearPlotArea();
	QColor getColor(int i);
	void reset();
	
	void toggleShowCurve(QListWidgetItem *);
	void toggleFitted(bool);
	void updateTitles(bool b);
	void toggleSymbols(bool b);
	void toggleLegend(bool b);
		
	void enablePicker(bool b);
	void enableZoom(bool b);
	void exportPDF();
	void printPlot();
	void valuesToParent(const QPoint &pos);
	
	void moveToSecondYAxis(int i);
	

signals:
	void plotPickerValues(double&,double&,double&);
	
private:
	QDir m_dir;
	QString      m_plot_name , m_plot_title ,m_plot_subtitle, m_plot_xlabel , m_plot_ylabel;
	QStringList  m_file_data , m_xvg_header, m_xvg_data , m_curve_names;
	QwtPlotCurve **m_qwtcurve_array;
	
	QwtLegend    *m_legend; 
	QwtPlotPicker *m_picker;
	QwtPlotPanner *m_panner;
	QwtPlotMagnifier *m_magnifier;
	double       **m_double_array ;
	int m_int_rows,	m_int_columns;
	
	bool m_second_y_enabled;
	int m_second_y_id;
	QString m_second_ylabel;
	

};



#endif
