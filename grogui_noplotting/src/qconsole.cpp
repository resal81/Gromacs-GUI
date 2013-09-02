#include "qconsole.h"
#include <QScrollBar>


int MyProcess::stdinClone = -1;




QConsole::QConsole(QWidget* parent)
	: QWidget(parent)
{
	setupUi(this); 
	
#if defined Q_WS_WIN
	consoleName = "cmd";
#elif defined Q_WS_X11
	consoleName = "bash";
#else
	consoleName = "";
#endif
	
	pbSave->hide();
	pbStop->hide();
	
	m_process = new QProcess(this);
	//m_myprocess= new MyProcess(m_process);
	//m_myprocess->setupChildProcess();
	
	connect(m_process, SIGNAL(error(QProcess::ProcessError)), this, SLOT(error(QProcess::ProcessError)));
	//connect(m_process, SIGNAL(readyRead()), this, SLOT(finished(int)));
	connect(m_process, SIGNAL(readyReadStandardError()), this, SLOT(readyReadStandardError()));
	connect(m_process, SIGNAL(readyReadStandardOutput()), this, SLOT(readyReadStandardOutput()));
	connect(m_process, SIGNAL(started()), this, SLOT(started()));
	connect(m_process, SIGNAL(stateChanged(QProcess::ProcessState)), this, SLOT(stateChanged(QProcess::ProcessState)));
	connect(cbCommand, SIGNAL(activated(const QString&)), this, SLOT(sendCommand(const QString&)));
	connect(pbStop, SIGNAL(clicked()),this,SLOT(stop()));
	
	start();
}

QConsole::~QConsole()
{
	stop();
	m_process->close();
	
	disconnect(m_process, SIGNAL(error(QProcess::ProcessError)), this, SLOT(error(QProcess::ProcessError)));
	disconnect(m_process, SIGNAL(finished(int)), this, SLOT(finished(int)));
	disconnect(m_process, SIGNAL(readyReadStandardError()), this, SLOT(readyReadStandardError()));
	disconnect(m_process, SIGNAL(readyReadStandardOutput()), this, SLOT(readyReadStandardOutput()));
	disconnect(m_process, SIGNAL(started()), this, SLOT(started()));
	disconnect(m_process, SIGNAL(stateChanged(QProcess::ProcessState)), this, SLOT(stateChanged(QProcess::ProcessState)));
}

void QConsole::start()
{
	teConsole->clear();
	m_process->start(consoleName);
	
}

void QConsole::stop()
{
	teConsole->clear();
	if (m_process->state() == QProcess::Running)
	{
		m_process->terminate();
	}
}

void QConsole::sendCommand(const QString& command)
{
	if (command.toLower() == "cls" || command.toLower() == "clear")
		teConsole->clear();
	
	addText(">>> $: "+command+"\n");
	QString data = QString::QString("%1\n").arg(command);
	m_process->write(data.toAscii(), data.length());
	
	
	cbCommand->setEditText("");
}

void QConsole::startDetached(const QString& program)
{
	QProcess::startDetached(program);
}

void QConsole::error(QProcess::ProcessError error)
{
	switch(error)
	{
	case QProcess::FailedToStart:
		{
			//qWarning("Error: FailedToStart");
			break;
		}
	case QProcess::Crashed:
		{
			//qWarning("Error: Crashed");
			break;
		}
	case QProcess::Timedout:
		{
			//qWarning("Error: Timedout");
			break;
		}
	case QProcess::WriteError:
		{
			//qWarning("Error: WriteError");
			break;
		}
	case QProcess::ReadError:
		{
			//qWarning("Error: ReadError");
			break;
		}
	case QProcess::UnknownError:
		{
			//qWarning("Error: UnknownError");
			break;
		}
	}
}

void QConsole::finished(int exitCode)
{
	
}

void QConsole::readyReadStandardError()
{
	addText(m_process->readAllStandardError());
}

void QConsole::readyReadStandardOutput()
{
	addText(m_process->readAllStandardOutput());
}

void QConsole::started()
{

}

void QConsole::stateChanged(QProcess::ProcessState newState)
{
	switch(newState)
	{
	case QProcess::NotRunning: {break;}
	case QProcess::Starting:   {break;}
	case QProcess::Running:    {break;}
	}
}

void QConsole::clear()
{
	teConsole->clear();
	if (m_process->state() == QProcess::Running)
	{
		m_process->kill();
	}
	
}

void QConsole::message(const QString& message)
{
	teConsole->append(message);
}

void QConsole::addText(const QString& text)
{
	teConsole->setPlainText(teConsole->toPlainText() + text);
	teConsole->verticalScrollBar()->setValue(teConsole->verticalScrollBar()->maximum());
}


