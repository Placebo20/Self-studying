#ifndef BUTTONS_H
#define BUTTONS_H
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>

class Buttons : public QWidget
{
public:
    Buttons(QWidget *parent = 0);
private:
    QPushButton *okBtn;
    QPushButton *applyBtn;
};

#endif // BUTTONS_H
