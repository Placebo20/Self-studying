#ifndef CHECKABLE_H
#define CHECKABLE_H
#include <QMainWindow>
#include <QApplication>
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>


class Checkable : public QMainWindow
{
    Q_OBJECT
public:
    Checkable(QWidget *parent = 0);
private slots:
    void toggleStatusbar();
private:
    QAction *viewst;
};

#endif // CHECKABLE_H
