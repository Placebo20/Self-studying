#include "keypress.h"



KeyPress::KeyPress(QWidget *parent) : QWidget(parent)
{

}

void KeyPress::keyPressEvent(QKeyEvent *e)
{
    if(e->key() == Qt::Key_Escape){
        qApp->quit();
    }
}
