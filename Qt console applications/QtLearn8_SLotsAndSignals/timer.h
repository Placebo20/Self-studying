#ifndef TIMER_H
#define TIMER_H
#include <QWidget>
#include <QLabel>
#include <QHBoxLayout>
#include <QTime>

class Timer : public QWidget
{
public:
    Timer(QWidget *parent = 0);
protected:
    void timerEvent(QTimerEvent *e);
private:
        QLabel *label;
};

#endif // TIMER_H
