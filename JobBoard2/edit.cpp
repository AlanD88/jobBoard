#include "edit.h"
#include "ui_edit.h"

edit::edit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit)
{
    ui->setupUi(this);
}

edit::~edit()
{
    delete ui;
}

void edit::on_pushButton_Update_clicked()
{
    edit::close();
}

void edit::on_pushButton_Cancel_clicked()
{
    edit::close();
}
