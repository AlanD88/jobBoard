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
    void LoadTable();
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_refresh_clicked();

    void on_pushButton_edit_clicked();

private:
    Ui::MainWindow *ui;

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
