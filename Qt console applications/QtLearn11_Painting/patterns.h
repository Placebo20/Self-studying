#ifndef PATTERNS_H
#define PATTERNS_H
#include <QWidget>
#include <QApplication>
#include <QPainter>

class Patterns : public QWidget
{
public:
    Patterns(QWidget *parent = 0);
protected:
    void paintEvent(QPaintEvent *e);
private:
    void doPainting();
};

#endif // PATTERNS_H
