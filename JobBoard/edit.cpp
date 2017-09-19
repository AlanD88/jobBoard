#include "edit.h"
#include "ui_edit.h"
#include "dialog.h"

#include <QMessageBox>

Edit::Edit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Edit)
{
    ui->setupUi(this);
}

Edit::~Edit()
{
    delete ui;
}

void Edit::on_pushButton_upgrade_clicked()
{
    write();

    Edit::close();
}

void Edit::on_pushButton_cancel2_clicked()
{
    Edit::close();
}
void Edit::write()
{
    /*
    Dialog conn;
    bool connection = conn.connOpen();


    if(!connection)
    {
        qDebug("Failed to open data base on write.");

    }
    else
    {

        QString company = ui->lineEdit_company->text();
        QString comments = ui->lineEdit_Comments->text();
        QString position = ui->lineEdit_Position->text();
        QString link = ui->lineEdit_link->text();
        QString status = ui->comboBox_initial->currentText();

        QSqlQuery qry;

        qry.prepare("UPDATE jobBoard SET company='"+company+"', comments='"+comments+"', position='"+position+"', link='"+link+"', status='"+status+"' WHERE company='"+company+"'");
*/
        /*
        qry.bindValue(0,company);
        qry.bindValue(1,comments);
        qry.bindValue(2,position);
        qry.bindValue(3, link);
        qry.bindValue(4, status);
        */

/*
        QMessageBox msgBox;

        if(qry.exec())
        {
            msgBox.setText("Data successfully updated.");
            msgBox.exec();
        }
        else
        {
            QMessageBox::critical(this,tr("Error::"),qry.lastError().text());

        }

    }

    conn.connClose();*/
}
