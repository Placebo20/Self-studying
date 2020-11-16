#include "transparentrectangels.h"

TransparentRectangels::TransparentRectangels(QWidget *parent) : QWidget(parent){}

void TransparentRectangels::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e);
    doPainting();
}

void TransparentRectangels::doPainting()
{
    QPainter painter(this);
    for(int i = 0; i <= 11; i++){
        painter.setOpacity(i*0.1);
        painter.fillRect(50*i,20,40,40,Qt::darkGray);
    }
}
