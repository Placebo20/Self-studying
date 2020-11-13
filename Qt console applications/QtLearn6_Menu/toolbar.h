#ifndef TOOLBAR_H
#define TOOLBAR_H
#include <QMainWindow>
#include <QApplication>
#include <QToolBar>
#include <QIcon>
#include <QAction>

class Toolbar : public QMainWindow
{
    Q_OBJECT
public:
    Toolbar(QWidget* parent = 0);
};

#endif // TOOLBAR_H
