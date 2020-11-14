#include "absolute.h"

Absolute::Absolute(QWidget *parent) : QWidget(parent)
{
    QTextEdit *ledit = new QTextEdit(this);
    ledit->setGeometry(5,5,200,150);
}
