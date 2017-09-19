#ifndef EDIT_H
#define EDIT_H

#include <QDialog>

namespace Ui {
class Edit;
}

class Edit : public QDialog
{
    Q_OBJECT

public:
    explicit Edit(QWidget *parent = 0);
    ~Edit();

private slots:
    void write();

    void on_pushButton_upgrade_clicked();

    void on_pushButton_cancel2_clicked();

private:
    Ui::Edit *ui;
};

#endif // EDIT_H
