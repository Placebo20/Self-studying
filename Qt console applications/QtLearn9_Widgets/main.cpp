#include "label.h"
#include "slider.h"
#include "comboboxex.h"
#include "spinbox.h"
#include "ledit.h"
#include "statusbar.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Statusbar window;
    window.setWindowTitle("Slider");
    window.show();
    return a.exec();
}
