#include "label.h"
#include "slider.h"
#include "comboboxex.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ComboBoxEx window;
    window.setWindowTitle("Slider");
    window.show();
    return a.exec();
}
