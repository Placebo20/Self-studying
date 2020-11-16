#include "checkbox.h"
#include "listwidget.h"
#include "progressbar.h"
#include "pixmap.h"
#include "splitter.h"
#include "table.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Table window;
    window.resize(1000,1000);
    window.setWindowTitle("Table");
    window.show();
    return a.exec();
}
