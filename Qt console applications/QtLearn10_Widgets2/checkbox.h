#ifndef CHECKBOX_H
#define CHECKBOX_H
#include <QApplication>
#include <QWidget>
#include <QHBoxLayout>
#include <QCheckBox>

class CheckBox : public QWidget
{
    Q_OBJECT
public:
    CheckBox(QWidget *parent = 0);
private slots:
    void showTitle(int);
};

#endif // CHECKBOX_H
