#pragma once
#ifndef SIMPLEMENU_H
#define SIMPLEMENU_H
#include <QMainWindow>
#include <QApplication>
#include <QMenu>
#include <QMenuBar>

class SimpleMenu : public QMainWindow
{
    Q_OBJECT
public:
    SimpleMenu(QWidget* parent = 0);
};

#endif // SIMPLEMENU_H
