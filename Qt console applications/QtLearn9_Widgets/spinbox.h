#ifndef SPINBOX_H
#define SPINBOX_H
#include <QWidget>
#include <QSpinBox>
#include <QHBoxLayout>
#include <QLabel>

class SpinBox : public QWidget
{
    Q_OBJECT
public:
    SpinBox(QWidget *parent = 0);
private:
    QSpinBox *spinbox;
};

#endif // SPINBOX_H
