#ifndef LABEL_H
#define LABEL_H
#include <QLabel>
#include <QWidget>
#include <QVBoxLayout>
#include <QApplication>

class Label : public QWidget
{
public:
    Label(QWidget *parent = 0);
private:
    QLabel *label;
};

#endif // LABEL_H
