#include "checkbox.h"
#include "listwidget.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ListWidget window;
    window.resize(250,250);
    window.setWindowTitle("Fuck u");
    window.show();
    return a.exec();
}
