#include "mdphighlighter.h"


MDPHighlighter::MDPHighlighter(QTextDocument *parent)
     : QSyntaxHighlighter(parent)
{
	commentFormat.setForeground(Qt::darkGray);
	commentFormat.setFontItalic(true);
}

void MDPHighlighter::highlightBlock(const QString &text)
{
	QRegExp expression(";[^\n]*");
	int index = text.indexOf(expression);
	while (index >= 0) 
	{
		int length = expression.matchedLength();
		setFormat(index, length, commentFormat);
		index = text.indexOf(expression, index + length);
	}
}
