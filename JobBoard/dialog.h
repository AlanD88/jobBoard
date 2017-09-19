#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT


public:
    /*
    QSqlDatabase mydb;
    void connClose()
    {
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }

    bool connOpen(){

        mydb =  QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("C:/Users/Rawr/Desktop/Documents/QT/JobBoard/jobBoard.sqlite");

        if(!mydb.open()){
            qDebug("Failed to open the database");
            return false;
        }
        else{
            qDebug("Connected...");
            return true;
        }
    }
    */
public:

    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:

    void on_pushButton_ok_clicked();
    void on_pushButton_cancel_clicked();
    void write();
    void on_pushButton_edit2_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
