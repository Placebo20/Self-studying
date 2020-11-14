#include "absolute.h"
#include "verticalbox.h"
#include "buttons.h"
#include "nestedlayouts.h"
#include "formex.h"
#include "calculator.h"
#include "review.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Review window;
    window.setWindowTitle("Review");
    window.show();
    return a.exec();
}
