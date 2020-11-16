#ifndef RADIALGRADIENTS_H
#define RADIALGRADIENTS_H
#include <QWidget>
#include <QApplication>
#include <QPainter>

class RadialGradients : public QWidget {
  public:
    RadialGradients(QWidget *parent = 0);
  protected:
    void paintEvent(QPaintEvent *e);
  private:
    void doPainting();
};

#endif // RADIALGRADIENTS_H
