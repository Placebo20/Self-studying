#include "disablingsignals.h"


DisablingSignals::DisablingSignals(QWidget *parent) : QWidget(parent)
{
    QHBoxLayout *hbox = new QHBoxLayout(this);
    hbox->setSpacing(5);

    clickBtn = new QPushButton("Click", this);
    hbox->addWidget(clickBtn,0,Qt::AlignLeft | Qt::AlignTop);

    QCheckBox *cb = new QCheckBox("Connect",this);
    cb->setCheckState(Qt::Checked);
    hbox->addWidget(cb,0,Qt::AlignLeft | Qt::AlignTop);

    connect(clickBtn, &QPushButton::clicked,this,&DisablingSignals::onClick);
    connect(cb,&QCheckBox::stateChanged, this, &DisablingSignals::onCheck);
}


void DisablingSignals::onClick()
{
    QTextStream out(stdout);
    out << "Button clicked" << Qt::endl;
}

void DisablingSignals::onCheck(int state)
{
    if(state == Qt::Checked)
        connect(clickBtn, &QPushButton::clicked, this, &DisablingSignals::onClick);
    else
        disconnect(clickBtn, &QPushButton::clicked,this,&DisablingSignals::onClick);
}
