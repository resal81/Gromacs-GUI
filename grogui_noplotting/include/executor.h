#ifndef EXECUTOR_H
#define EXECUTOR_H

#include "ui_executor.h"
#include "logger.h"
#include <QString>
#include <QDir>
#include <QMovie>
#include <QProcess>
#include <QTime>

class Executor : public QDialog, public Ui::ExecutorClass
{
	Q_OBJECT
	
public:
	Executor(QWidget* parent = 0, const QString &progname="", const QString &workdirpath="", Logger *log=0);
	~Executor();
	
public slots:
	void startProcess(const QString &);

private slots:
	void readStandardError();
 	void readStandardOutput();
 	void readOutput();
 	
    void setLogo(const QString logo);
	void summarizeOutput();
	void removeHelpBlock();
	void digestOutput();
		
	void started();
	void finished(int exitCode);
	void errorReport();

private:
	QProcess*      m_process;
	QString 	   m_workdirpath;
	QString        m_string_stdout, m_string_stderr, m_string_output;
	QString        m_progname;
	QStringList    m_list_output;
	QTime 		   m_timer;
	QMovie *movie;
	Logger *m_log;
	bool			m_witherror;
	
	bool m_isReady;
};

#endif 
