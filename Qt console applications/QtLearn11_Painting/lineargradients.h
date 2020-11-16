#ifndef LINEARGRADIENTS_H
#define LINEARGRADIENTS_H
#include <QWidget>
#include <QApplication>
#include <QPainter>

class LinearGradients : public QWidget {
  public:
    LinearGradients(QWidget *parent = 0);
  protected:
    void paintEvent(QPaintEvent *e);
  private:
    void doPainting();
};

#endif // LINEARGRADIENTS_H
