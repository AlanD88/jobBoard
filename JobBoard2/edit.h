#ifndef EDIT_H
#define EDIT_H

#include <QDialog>

namespace Ui {
class edit;
}

class edit : public QDialog
{
    Q_OBJECT

public:
    explicit edit(QWidget *parent = 0);
    ~edit();

private slots:
    void on_pushButton_Update_clicked();

    void on_pushButton_Cancel_clicked();

private:
    Ui::edit *ui;
};

#endif // EDIT_H
