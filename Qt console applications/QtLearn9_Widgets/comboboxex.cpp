#include "comboboxex.h"



ComboBoxEx::ComboBoxEx(QWidget *parent) : QWidget(parent)
{
    QStringList distros = {"Arch", "Xubuntu", "Redhat", "Debian", "Mandriva"};
    combo = new QComboBox();
    combo->addItems(distros);

    QHBoxLayout *hbox = new QHBoxLayout(this);
    hbox->addWidget(combo);
    hbox->addSpacing(15);

    label = new QLabel(distros[0], this);
    hbox->addWidget(label);

    connect(combo, static_cast<void(QComboBox::*)(const QString &)>(&QComboBox::activated), label, &QLabel::setText);

}
