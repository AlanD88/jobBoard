#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QtSql>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_Add_clicked();

    void on_pushButton_Refresh_clicked();

    void on_pushButton_Edit_clicked();

private:
    Ui::MainWindow *ui;
    void LoadTable();

protected:
    QSqlDatabase db;
    QSqlTableModel *model;
    QSqlTableModel *toApply;
    QSqlTableModel *applied;
    QSqlTableModel *inProgress;
    QSqlTableModel *followUp;
    QSqlTableModel *offer;
    QSqlTableModel *declined;
QSqlTableModel *noResponse;
};

#endif // MAINWINDOW_H
