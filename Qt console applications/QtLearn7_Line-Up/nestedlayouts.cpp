#include "nestedlayouts.h"


NestedLayouts::NestedLayouts(QWidget *parent) : QWidget(parent)
{
    QVBoxLayout *vbox = new QVBoxLayout();
    QHBoxLayout *hbox = new QHBoxLayout(this);

    QListWidget *lw = new QListWidget(this);
    lw->addItem("The Omen");
    lw->addItem("The Exorcist");
    lw->addItem("Notes on a scandal");
    lw->addItem("Fargo");
    lw->addItem("Capote");

    QPushButton *add = new QPushButton("Add",this);
    QPushButton *remove = new QPushButton("Remove",this);
    QPushButton *rename = new QPushButton("Rename",this);
    QPushButton *removeall = new QPushButton("Remove All", this);

    vbox->addSpacing(3);
    vbox->addStretch(1);
    vbox->addWidget(add);
    vbox->addWidget(remove);
    vbox->addWidget(rename);
    vbox->addWidget(removeall);

    hbox->addWidget(lw);
    hbox->addSpacing(15);
    hbox->addLayout(vbox);

    setLayout(hbox);
}
