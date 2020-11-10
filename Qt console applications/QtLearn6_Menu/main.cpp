#include "simplemenu.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    SimpleMenu window;
    window.resize(250,150);
    window.setWindowTitle("Simple Menu");
    window.show();

    return a.exec();
}
