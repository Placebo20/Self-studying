#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDeclarativeView>

class MainWindow : public QDeclarativeView
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
};
#endif // MAINWINDOW_H
