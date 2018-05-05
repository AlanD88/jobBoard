#include "additem.h"
#include "ui_additem.h"
#include "mainwindow.h"
#include <QFile>
#include <QMessageBox>
#include <QDebug>

additem::additem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::additem)
{
    ui->setupUi(this);
}

additem::~additem()
{
    delete ui;
}

void additem::on_pushButton_Add_clicked()
{
    write();
    additem::close();
}

void additem::on_pushButton_Cancel_clicked()
{
    additem::close();
}

void additem::write()
{
    QString company = ui->lineEdit_Company->text();
    QString comments = ui->lineEdit_Comments->text();
    QString position = ui->lineEdit_Position->text();
    QString link = ui->lineEdit_Link->text();
    QString status = ui->comboBox_Initial->currentText();

    QSqlQuery qry;

    qry.prepare("INSERT INTO jobBoard(company, comments, position, link, status) VALUES(?, ?, ?, ?, ?)");

    qry.bindValue(0,company);
    qry.bindValue(1,comments);
    qry.bindValue(2,position);
    qry.bindValue(3, link);
    qry.bindValue(4, status);

    if(qry.exec())
    {
        QMessageBox::critical(this,tr("Save"),tr("Data successfully saved"));
    }
    else
    {
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());

    }
}
