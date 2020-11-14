#include "absolute.h"
#include "verticalbox.h"
#include "buttons.h"
#include "nestedlayouts.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NestedLayouts window;
    window.setWindowTitle("Nested Layouts");
    window.resize(500,500);
    window.show();
    return a.exec();
}
