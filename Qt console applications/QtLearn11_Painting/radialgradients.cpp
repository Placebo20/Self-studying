#include "radialgradients.h"

RadialGradients::RadialGradients(QWidget *parent) : QWidget(parent){}

void RadialGradients::paintEvent(QPaintEvent *e) {
  Q_UNUSED(e);
  doPainting();
}

void RadialGradients::doPainting() {
      QPainter painter(this);

      int h = height();
      int w = width();

      QRadialGradient grad1(w/2, h/2, 80);

      grad1.setColorAt(0, QColor("#032E91"));
      grad1.setColorAt(0.3, Qt::white);
      grad1.setColorAt(1, QColor("#032E91"));

      painter.fillRect(0, 0, w, h, grad1);
}
