#ifndef LOGGER_H
#define LOGGER_H

#include <QString>
#include <QTextStream>
#include <QFile>
#include <QDebug>

class Logger
{
	public:
		Logger(void) ;
		Logger(QString filename);
		~Logger();
		bool createStream();
		void setWriteLog(bool mode);
		void logIt(const QString& msg);
		void logIt(const char *);
		
	private:
		QString m_filename;
		bool m_writelog;
		QFile m_file;
		QTextStream m_stream;
		static int m_file_opened;
}; 



		
#endif











