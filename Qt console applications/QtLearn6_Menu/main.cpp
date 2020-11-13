#include "simplemenu.h"
#include "anothermenu.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    AnotherMenu window;
    window.resize(250,150);
    window.setWindowTitle("Simple Menu");
    window.show();

    return a.exec();
}
