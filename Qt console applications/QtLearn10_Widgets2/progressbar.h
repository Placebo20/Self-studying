#ifndef PROGRESSBAR_H
#define PROGRESSBAR_H
#include <QWidget>
#include <QProgressBar>
#include <QPushButton>
#include <QTimer>
#include <QGridLayout>

class ProgressBar : public QWidget
{
public:
    ProgressBar(QWidget *parent = 0);
private:
    int progress;
    QTimer *timer;
    QProgressBar *pbar;
    QPushButton *startBtn;
    QPushButton *stopBtn;
    static const int DELAY = 200;
    static const int MAX_VALUE = 100;

    void updateBar();
    void startTimer();
    void stopTimer();
};

#endif // PROGRESSBAR_H
