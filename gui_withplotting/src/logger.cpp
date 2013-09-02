#include "logger.h"
 
Logger::Logger(void)
{
	m_filename="";
	m_writelog = false;
	}

Logger::Logger(QString filename)
{
	m_filename=filename;
	m_writelog = false;
	createStream();	
}

Logger::~Logger()
{
	if(m_writelog)
		m_file.close();
		
}


bool Logger::createStream()
{
	QFile m_file(m_filename);
	if (! m_file.open(QIODevice::WriteOnly | QIODevice::Text))
	{
		m_writelog=false;
	}
	return true;
	
}

void Logger::setWriteLog(bool mode)
{
	m_writelog=mode;
}

void Logger::logIt(const QString& msg)
{
	if (m_writelog )
	{
		
		QFile m_file(m_filename);
		if (!m_file.isOpen())
		{
			//qDebug()<<" i am going to open the file... . in==> if (!m_file.isOpen()) ";
			if (! m_file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
			{
				m_writelog=false;
				qDebug()<<"unable to open log file ! in==> if (! m_file.open(QIODevice::WriteOnly | QIODevice::Text))";
				return;
			}
		
		}
		QTextStream m_stream(&m_file);
		m_stream<<msg;
		m_stream.flush();
		
	}
}

void Logger::logIt(const char *msg)

{
	QFile m_file(m_filename);
	if (!m_file.isOpen())
	{
		//qDebug()<<" i am going to open the file... . in==> if (!m_file.isOpen()) ";
		if (! m_file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
		{
			m_writelog=false;
			qDebug()<<"unable to open log file ! in==> if (! m_file.open(QIODevice::WriteOnly | QIODevice::Text))";
			return;
		}

	}
	QTextStream m_stream(&m_file);
	m_stream<<QString(msg);
	m_stream.flush();
}








