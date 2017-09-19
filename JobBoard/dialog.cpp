#include "dialog.h"
#include "ui_dialog.h"
#include "mainwindow.h"
#include <iostream>
#include <QFile>
#include <QMessageBox>
#include <QDebug>


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_ok_clicked()
{
    write();
    Dialog::close();
}

void Dialog::on_pushButton_cancel_clicked()
{
    Dialog::close();
}

void Dialog::write()
{


    /*bool connection = connOpen();


    if(!connection)
    {
        qDebug("Failed to open data base on write.");

    }
    else
    {

*/
        QString company = ui->lineEdit_company->text();
        QString comments = ui->lineEdit_Comments->text();
        QString position = ui->lineEdit_Position->text();
        QString link = ui->lineEdit_link->text();
        QString status = ui->comboBox_initial->currentText();

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

    /*}*/

    /*connClose();*/

}

