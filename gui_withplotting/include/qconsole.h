#ifndef QCONSOLE_H
#define QCONSOLE_H
#include "ui_qconsole.h"
#include "myprocess.h"
#include <QProcess>
#include <QDir>



class QConsole : public QWidget, public Ui::QConsole
{
	Q_OBJECT
	
public:
	QConsole(QWidget* parent = 0);
	~QConsole();
	
public slots:
	void start();
	void stop();
	void sendCommand(const QString& command);
	void startDetached(const QString& program);
	
	void clear();
	void message(const QString& message);
	
private slots:
	void error(QProcess::ProcessError error);
	void finished(int exitCode);
	void readyReadStandardError();
	void readyReadStandardOutput();
	void started();
	void stateChanged(QProcess::ProcessState newState);
	
	void addText(const QString& text);
	
private:
	QProcess *m_process;
	MyProcess *m_myprocess;
	QString consoleName;
};

#endif 
