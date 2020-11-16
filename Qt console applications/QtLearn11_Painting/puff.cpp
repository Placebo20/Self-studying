#include "puff.h"



Puff::Puff(QWidget *parent) : QWidget(parent)
{
    x = 1;
    opacity = 1.0;
    timerId = startTimer(15);
}

void Puff::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    doPainting();
}

void Puff::timerEvent(QTimerEvent *event)
{
   Q_UNUSED(event);
    x+=1;
    repaint();
}

void Puff::doPainting()
{
    QPainter painter(this);
    QTextStream out(stdout);
    QString text = "соси";

    painter.setPen(QPen(QBrush("#575555"),1));
    QFont font("Courier", x, QFont::DemiBold);
    QFontMetrics fm(font);
    int textWidth = fm.width(text);
    painter.setFont(font);

    if(x>10){
        opacity -= 0.1;
        painter.setOpacity(opacity);
    }

    if(opacity <= 0) {
        killTimer(timerId);
        out << "timer stopped" << endl;
    }

    int h = height();
    int w = width();

    painter.translate(QPoint(w/2,h/2));
    painter.drawText(-textWidth/2,0,text);
}
