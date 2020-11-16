#include "checkbox.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CheckBox window;
    window.resize(250,250);
    window.setWindowTitle("Fuck u");
    window.show();
    return a.exec();
}
