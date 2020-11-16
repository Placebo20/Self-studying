#ifndef TRANSPARENTRECTANGELS_H
#define TRANSPARENTRECTANGELS_H
#include <QWidget>
#include <QApplication>
#include <QPainter>

class TransparentRectangels : public QWidget
{
public:
    TransparentRectangels(QWidget *parent = 0);
protected:
    void paintEvent(QPaintEvent *e);
    void doPainting();
};

#endif // TRANSPARENTRECTANGELS_H
