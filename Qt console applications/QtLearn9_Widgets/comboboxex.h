#ifndef COMBOBOXEX_H
#define COMBOBOXEX_H
#include <QWidget>
#include <QComboBox>
#include <QLabel>
#include <QHBoxLayout>

class ComboBoxEx : public QWidget
{
    Q_OBJECT
public:
    ComboBoxEx(QWidget *parent = 0);
private:
    QComboBox *combo;
    QLabel *label;
};

#endif // COMBOBOXEX_H
