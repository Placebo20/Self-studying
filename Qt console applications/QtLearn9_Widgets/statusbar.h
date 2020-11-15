#ifndef STATUSBAR_H
#define STATUSBAR_H
#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QFrame>
#include <QStatusBar>
#include <QHBoxLayout>

class Statusbar : public QMainWindow
{
public:
    Statusbar(QWidget *parent = 0);
private slots:
    void OnOkPressed();
    void OnApplyPressed();
private:
    QPushButton *okBtn;
    QPushButton *applyBtn;
};

#endif // STATUSBAR_H
