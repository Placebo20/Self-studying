#include "click.h"
#include "keypress.h"
#include "move.h"
#include "disablingsignals.h"

int main(int argc, char *argv[])
{
    QApplication a(argc,argv);
    DisablingSignals window;
    window.setWindowTitle("Move");
    window.resize(300,300);
    window.show();
    return a.exec();
}
