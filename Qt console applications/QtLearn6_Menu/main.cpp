#include "simplemenu.h"
#include "anothermenu.h"
#include "toolbar.h"
#include "checkable.h"
#include "skeleton.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Skeleton window;
    window.resize(350,250);
    window.setWindowTitle("Simple Menu");
    window.show();

    return a.exec();
}
