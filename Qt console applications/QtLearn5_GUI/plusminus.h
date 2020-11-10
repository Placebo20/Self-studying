#ifndef PLUSMINUS_H
#define PLUSMINUS_H
#include <QWidget>
#include <QLabel>
#include <QApplication>
#include <QPushButton>
#include <QGridLayout>

class PlusMinus : public QWidget
{
    Q_OBJECT //this macro must be included in classes that declare their own signals and slots
public:
    PlusMinus(QWidget* parent = 0);
private slots:
    void OnPlus();
    void OnMinus();
private:
    QLabel *lbl;
};

#endif // PLUSMINUS_H
