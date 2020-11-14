#include "click.h"
#include "keypress.h"
#include "move.h"
#include "disablingsignals.h"
#include "timer.h"

int main(int argc, char *argv[])
{
    QApplication a(argc,argv);
    Timer window;
    window.setWindowTitle("TImer");
    window.resize(300,300);
    window.show();
    return a.exec();
}
