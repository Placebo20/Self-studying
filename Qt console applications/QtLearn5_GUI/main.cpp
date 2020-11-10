#include <QApplication>
#include <QWidget>
#include <QIcon>
#include "cursor.h"
#include "mybutton.h"
#include "plusminus.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    PlusMinus window;
    window.resize(300,190);
    window.setWindowTitle("Plus minus");
    window.show();
    return a.exec();
}
