#ifndef MDPHIGHLIGHTER_H
#define MDPHIGHLIGHTER_H

#include <QSyntaxHighlighter>
#include <QTextCharFormat>

class QTextDocument;

class MDPHighlighter : public QSyntaxHighlighter
{
	Q_OBJECT

public:
	MDPHighlighter(QTextDocument *parent = 0);

protected:
	void highlightBlock(const QString &text);

private:
	QTextCharFormat commentFormat;
};


#endif 
