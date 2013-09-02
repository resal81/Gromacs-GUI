#include "mainwindow.h"

#include <QDir>
#include <QApplication>
#include <QSplashScreen>







int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	//QString imagedir = QDir::homePath() + "/.config/GromacsGUI/images/";
	
	//QPixmap pixmap("/home/reza/GromacsGUI/GUI/splash.png");
	//QSplashScreen splash(pixmap);//QPixmap(":/splash.png"));//imagedir + "spalsh.png"));
	//splash.setFont( QFont("Helvetica", 10) );
	//splash.show();
	//splash.showMessage(QObject::tr("Loading:")+" "+QObject::tr("Interface translation"), Qt::AlignRight | Qt::AlignTop,  Qt::white);
    
		
    
	MainWindow win;
    win.show();
    app.connect(&app, SIGNAL(lastWindowClosed()), &app, SLOT(quit()));
	//splash.finish(&win);
	return app.exec();
}

