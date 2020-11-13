#include "anothermenu.h"

AnotherMenu::AnotherMenu(QWidget* parent) : QMainWindow(parent)
{
    QPixmap newpix("1.png");
    QPixmap openpix("2.png");
    QPixmap quitpix("3.png");

    QAction *newa = new QAction(newpix, "&New", this);
    QAction *open = new QAction(openpix, "&Open", this);
    QAction *quit = new QAction(quitpix, "&Quit", this);

    quit->setShortcut(tr("CTRL+Q"));

    QMenu *file;
    file = menuBar()->addMenu("&File");
    file->addAction(newa);
    file->addAction(open);
    file->addAction(quit);

    qApp->setAttribute(Qt::AA_DontShowIconsInMenus, false);

    connect(quit, &QAction::triggered, qApp, &QApplication::quit);
}
