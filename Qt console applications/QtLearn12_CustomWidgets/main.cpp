#include <QApplication>
#include "burning.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Burning window;
    window.resize(300,250);
    window.setWindowTitle("Burning");
    window.show();

    return a.exec();
}
