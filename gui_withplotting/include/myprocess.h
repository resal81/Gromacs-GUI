#ifndef MYPROCESS_H
#define MYPROCESS_H

#include <QProcess>


class MyProcess : public QProcess
{
    static int stdinClone;
public:
    MyProcess(QObject *parent = 0)
        : QProcess(parent)
    {
        if (stdinClone == -1)
            stdinClone = ::dup(fileno(stdin));
    }
//protected:
	void setupChildProcess()
	{
		::dup2(stdinClone, fileno(stdin));
	}
};




#endif

