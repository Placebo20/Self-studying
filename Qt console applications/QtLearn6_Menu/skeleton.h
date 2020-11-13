#ifndef SKELETON_H
#define SKELETON_H
#include <QMainWindow>
#include <QApplication>
#include <QMenu>
#include <QMenuBar>
#include <QIcon>
#include <QAction>
#include <QStatusBar>
#include <QToolBar>
#include <QTextEdit>


class Skeleton : public QMainWindow
{
    Q_OBJECT
public:
    Skeleton(QWidget *parent = 0);
};

#endif // SKELETON_H
