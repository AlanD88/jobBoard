#ifndef ADDITEM_H
#define ADDITEM_H

#include <QDialog>

namespace Ui {
class additem;
}

class additem : public QDialog
{
    Q_OBJECT

public:
    explicit additem(QWidget *parent = 0);
    ~additem();

private slots:
    void on_pushButton_Add_clicked();

    void on_pushButton_Cancel_clicked();


private:
    Ui::additem *ui;

    void write();
};

#endif // ADDITEM_H
