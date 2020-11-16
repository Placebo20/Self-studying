#ifndef LISTWIDGET_H
#define LISTWIDGET_H
#include <QWidget>
#include <QPushButton>
#include <QListWidget>
#include <QVBoxLayout>
#include <QInputDialog>

class ListWidget : public QWidget
{
public:
    ListWidget(QWidget *parent = 0);
private slots:
    void addItem();
    void renameItem();
    void removeItem();
    void clearItems();
private:
    QListWidget *lw;
    QPushButton *add;
    QPushButton *rename;
    QPushButton *remove;
    QPushButton *clear;
};

#endif // LISTWIDGET_H