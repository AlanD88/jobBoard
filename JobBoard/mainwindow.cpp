#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "edit.h"
#include <QStandardItemModel>
#include <fstream>
#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    db =  QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/Rawr/Desktop/Documents/QT/JobBoard/jobBoard.sqlite");

    bool ok = db.open();
    if(!ok){
        qDebug("Failed to open the database");
    }
    else{
        qDebug("Connected...");
    }

    LoadTable();

}

MainWindow::~MainWindow()
{
    db.close();
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    /*Opening a new window for adding new jobs*/
    Dialog dialogWindow;
    dialogWindow.setModal(true);
    dialogWindow.exec();
}

void MainWindow::LoadTable()
{

    /*
    Loads the Filtered tables from the database into each respected tab in the main window UI
    */

    /*"All" Tab*/
    model = new QSqlTableModel(this);
    model->setTable("jobboard");
    model->select();
    ui->tableView->setModel(model);

    toApply = new QSqlTableModel(this);
    toApply->setTable("jobboard");
    toApply->setFilter("status='To Apply'");
    toApply->select();
    ui->tableView_toApply->setModel(toApply);

    inProgress = new QSqlTableModel(this);
    inProgress->setTable("jobboard");
    inProgress->setFilter("status='In Progress'");
    inProgress->select();
    ui->tableView_InProgress->setModel(inProgress);

    applied = new QSqlTableModel(this);
    applied->setTable("jobboard");
    applied->setFilter("status='Applied'");
    applied->select();
    ui->tableView_Applied->setModel(applied);

    followUp = new QSqlTableModel(this);
    followUp->setTable("jobboard");
    followUp->setFilter("status='Follow Up'");
    followUp->select();
    ui->tableView_FollowUp->setModel(followUp);

    offer = new QSqlTableModel(this);
    offer->setTable("jobboard");
    offer->setFilter("status='Offer'");
    offer->select();
    ui->tableView_Offer->setModel(offer);

    declined = new QSqlTableModel(this);
    declined->setTable("jobboard");
    declined->setFilter("status='Rejected'");
    declined->select();
    ui->tableView_Rejected->setModel(declined);

    noResponse = new QSqlTableModel(this);
    noResponse->setTable("jobboard");
    noResponse->setFilter("status='No Response'");
    noResponse->select();
    ui->tableView_NoResponse->setModel(noResponse);

}

void MainWindow::on_pushButton_refresh_clicked()
{
    LoadTable();
}

void MainWindow::on_pushButton_edit_clicked()
{

    Edit dialogWindow;
    dialogWindow.setModal(true);
    dialogWindow.exec();
}
