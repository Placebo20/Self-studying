#include "toolbar.h"

Toolbar::Toolbar(QWidget* parent) : QMainWindow(parent)
{
    QPixmap newpix("1.png");
    QPixmap openmix("2.png");
    QPixmap quitmix("3.png");

    QToolBar* toolbar = addToolBar("main toolbar");

    toolbar->addAction(QIcon(newpix), "New File");
    toolbar->addAction(QIcon(openmix), "Open File");
    toolbar->addSeparator();

    QAction *quit = toolbar->addAction(QIcon(quitmix),"Quit Application");

    connect(quit, &QAction::triggered, qApp, &QApplication::quit);
}
