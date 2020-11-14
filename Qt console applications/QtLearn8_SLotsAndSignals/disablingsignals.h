#ifndef DISABLINGSIGNALS_H
#define DISABLINGSIGNALS_H
#include <QWidget>
#include <QPushButton>
#include <QTextStream>
#include <QCheckBox>
#include <QHBoxLayout>


class DisablingSignals : public QWidget
{
    Q_OBJECT
public:
    DisablingSignals(QWidget *parent = 0);
private slots:
    void onClick();
    void onCheck(int state);
private:
    QPushButton *clickBtn;
};

#endif // DISABLINGSIGNALS_H
