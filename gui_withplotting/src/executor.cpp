
#include "executor.h"
#include <QDir>
#include <QDebug>
#include <QMovie>
#include <QScrollBar>


Executor::Executor(QWidget *parent,const QString &progname ,const QString &workdirpath ,Logger *log)
: QDialog(parent)
{
	setupUi(this);
	grpDetails->hide();
	layout()->setSizeConstraint(QLayout::SetFixedSize);
	
	m_process = new QProcess(this);
	//m_process->setStandardErrorFile("stderr");
	//m_process->setStandardOutputFile("stdout");
	
	m_progname=progname;
	m_workdirpath=workdirpath;
	m_isReady = true;
	m_string_stderr="";
	m_string_stdout="";
	
	m_log = new Logger();
	m_log = log;
	m_witherror=false;
	
	connect(m_process, SIGNAL(finished(int)), this, SLOT(finished(int)));
	connect(m_process, SIGNAL(readyReadStandardError()), this, SLOT(readStandardError()));
	connect(m_process, SIGNAL(readyReadStandardOutput()), this, SLOT(readStandardOutput()));
	connect(m_process, SIGNAL(started()), this, SLOT(started()));
	connect(m_process, SIGNAL(error ( QProcess::ProcessError)), this , SLOT(errorReport()));
		
	if (!m_progname.isEmpty())
	{
		if (!m_workdirpath.isEmpty())
			m_process->setWorkingDirectory(m_workdirpath);
		startProcess(m_progname);
	}

}

Executor::~Executor()
{
	}

void Executor::startProcess(const QString &program)
{
	m_log->logIt(QString("\n executor.cpp | startProcess() | the program which is going to be executed is {%1}").arg(program));
	
	m_process->start(program);
	m_timer.start();
//	if(!m_process->start(program))
//	{
//		
//	}
}

		
void Executor::readStandardError()		
{
	m_log->logIt ("\n executor.cpp | readStandardError() | reading stderr...");
	
	setLogo(QString("warning"));
	m_process->closeWriteChannel();
	readOutput();
}
		
void Executor::	readStandardOutput()	
{
	m_log->logIt ("\n executor.cpp | readStandardOutput() | reading stdout...");

	setLogo(QString("info"));
	m_process->closeWriteChannel();
	readOutput();

}
		
void Executor::setLogo(const QString logo)
{
	QString imagedir = QDir::homePath() + "/.config/GromacsGUI/images/";
	
	if (logo==QString("error"))
	{
		lbLogo3->setPixmap(QPixmap(imagedir + "error.png"));
		return;
	}
	else if (logo==QString("info"))
	{
		lbLogo2->setPixmap(QPixmap(imagedir+"info.png"));
		return;
	}
	else if (logo==QString("warning"))
	{
		lbLogo3->setPixmap(QPixmap(imagedir+"warning.png"));
		return;
	}
	
}		
		
void Executor::started()
{
	QString imagedir = QDir::homePath() + "/.config/GromacsGUI/images/";
	movie = new QMovie(imagedir+"wait.gif");
	lbLogo1->setMovie(movie);
	movie->start();	
}

void Executor::errorReport()
{
	m_log->logIt(QString("\n executor.cpp | startProcess() | the program {%1} failed to start.").arg(m_progname));
	setLogo("error");
	teSummary->setText(QString("\n\n <b> Program '%1' failed to start.</b>").arg(m_progname));
	teSummary->append(QString("either the name of program is incorrect or it is not in your PATH."));
	m_witherror=true;
	
	return;
	
}


void Executor::finished(int exitCode)
{
	lbLogo1->setHidden(true);
	
	if (exitCode!=0)
	{
		m_witherror=true;
		setLogo("error");
	}
	if (!m_witherror)
	{
		lbMsg->setText(QString("execution finished in %1 seconds (%2 ms).").arg((m_timer.elapsed()/1000)).arg((m_timer.elapsed())));
	}
	m_log->logIt(QString("\n executor.cpp | finished() | process exited. {exitcode: %1}").arg(exitCode));
	
}

void Executor::readOutput()
{
	
	if (m_process->waitForFinished(500))
	{
		if (!m_isReady)
			return;
		m_log->logIt ("\n executor.cpp | raedOutput() | now going to read output, once every half second");
		m_string_stderr = QString(m_process->readAllStandardError());
		m_string_stdout = QString(m_process->readAllStandardOutput());
		m_string_output =m_string_stderr + m_string_stdout ;
		
		summarizeOutput();
	}
	
}

void Executor::summarizeOutput()
{
	m_log->logIt ("\n executor.cpp | summarizeOutput() | going to summarize output");
	if (m_string_output.isEmpty())
		return;
	m_isReady=false;
	
	m_list_output= m_string_output.split("\n");	
	while (m_list_output.value(0).simplified().isEmpty())
	{
		m_list_output.removeFirst();
	}
	
	if(!m_list_output.isEmpty())
		removeHelpBlock();
	if(!m_list_output.isEmpty())
		digestOutput();
		
	
	m_isReady=true;
}

		
void Executor::removeHelpBlock()
{
	m_log->logIt ("\n executor.cpp | removeHelpBlock() | going to remove help block");
				
	//tries to remove program help if -noh option doesn't work
	if (m_list_output.value(0).simplified()==":-) G R O M A C S (-:" )
	{
		QList<QString>::const_iterator it;
		it=m_list_output.constBegin();
		
		
		bool truncated_help=true;
		if (m_list_output.value(18).contains("option", Qt::CaseInsensitive)
				|| m_list_output.value(19).contains("option", Qt::CaseInsensitive)
				|| m_list_output.value(20).contains("option", Qt::CaseInsensitive) )
			truncated_help=false;
		int j=0;
		while(j!=9 && it!=m_list_output.constEnd())
		{
			if (it->isEmpty() )
				++j;
			//qDebug()<<"j="<<j<<"  it="<<*it;
			
			if (j==7)
			{
			   if (truncated_help)
				 break;
			}
			
			m_list_output.removeFirst();
			
			++it;
			
			
			
		}
	}
}
		
		
void Executor::digestOutput()
{
	m_log->logIt ("\n executor.cpp | digesOutput() | going to digest output.");
	
	//digest the output
	QString summary_text("");
	QList<QString>::const_iterator it;

	for (it=m_list_output.constBegin(); it!=m_list_output.constEnd(); ++it)
	{
		if (it->contains("error", Qt::CaseInsensitive) 
				||it->contains("invalid", Qt::CaseInsensitive) 
				||it->contains("can not", Qt::CaseInsensitive))
		{
			lbMsg->setText("An error has occured.");
			setLogo("error");
			summary_text="\n"+ *it +"\n"+ *(it+1);
			teSummary->setPlainText(summary_text);
		}
	}

	QString s(m_list_output.join("\n"));
	teDetails->setPlainText(teDetails->toPlainText() + s);
	teDetails->verticalScrollBar()->setValue(teDetails->verticalScrollBar()->maximum());


	
	
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
