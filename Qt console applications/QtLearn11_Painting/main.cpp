#include <QApplication>
#include "lines.h"
#include "colours.h"
#include "patterns.h"
#include "transparentrectangels.h"
#include "donut.h"
#include "shapes.h"
#include "lineargradients.h"
#include "radialgradients.h"
#include "puff.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Puff window;
    window.resize(630, 500);
    window.setWindowTitle("Colours");
    window.show();

    return a.exec();
}
