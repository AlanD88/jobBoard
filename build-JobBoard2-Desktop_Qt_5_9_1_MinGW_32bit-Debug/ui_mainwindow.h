/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Add;
    QPushButton *pushButton_Refresh;
    QPushButton *pushButton_Edit;
    QPushButton *pushButton;
    QTabWidget *tabWidget;
    QWidget *All;
    QTableView *tableView;
    QWidget *ToApply;
    QTableView *tableView_toApply;
    QWidget *Applied;
    QTableView *tableView_Applied;
    QWidget *InProgress;
    QTableView *tableView_InProgress;
    QWidget *FollowUp;
    QTableView *tableView_FollowUp;
    QWidget *Offer;
    QTableView *tableView_Offer;
    QWidget *Rejected;
    QTableView *tableView_Rejected;
    QWidget *NoResponse;
    QTableView *tableView_NoResponse;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1024, 551);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 1031, 551));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget = new QWidget(frame);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 451, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Add = new QPushButton(horizontalLayoutWidget);
        pushButton_Add->setObjectName(QStringLiteral("pushButton_Add"));

        horizontalLayout->addWidget(pushButton_Add);

        pushButton_Refresh = new QPushButton(horizontalLayoutWidget);
        pushButton_Refresh->setObjectName(QStringLiteral("pushButton_Refresh"));

        horizontalLayout->addWidget(pushButton_Refresh);

        pushButton_Edit = new QPushButton(horizontalLayoutWidget);
        pushButton_Edit->setObjectName(QStringLiteral("pushButton_Edit"));

        horizontalLayout->addWidget(pushButton_Edit);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        tabWidget = new QTabWidget(frame);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 80, 1021, 471));
        All = new QWidget();
        All->setObjectName(QStringLiteral("All"));
        tableView = new QTableView(All);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 0, 1021, 441));
        tabWidget->addTab(All, QString());
        ToApply = new QWidget();
        ToApply->setObjectName(QStringLiteral("ToApply"));
        tableView_toApply = new QTableView(ToApply);
        tableView_toApply->setObjectName(QStringLiteral("tableView_toApply"));
        tableView_toApply->setGeometry(QRect(0, 0, 1021, 441));
        tabWidget->addTab(ToApply, QString());
        Applied = new QWidget();
        Applied->setObjectName(QStringLiteral("Applied"));
        tableView_Applied = new QTableView(Applied);
        tableView_Applied->setObjectName(QStringLiteral("tableView_Applied"));
        tableView_Applied->setGeometry(QRect(0, 0, 1021, 441));
        tabWidget->addTab(Applied, QString());
        InProgress = new QWidget();
        InProgress->setObjectName(QStringLiteral("InProgress"));
        tableView_InProgress = new QTableView(InProgress);
        tableView_InProgress->setObjectName(QStringLiteral("tableView_InProgress"));
        tableView_InProgress->setGeometry(QRect(0, 0, 1021, 441));
        tabWidget->addTab(InProgress, QString());
        FollowUp = new QWidget();
        FollowUp->setObjectName(QStringLiteral("FollowUp"));
        tableView_FollowUp = new QTableView(FollowUp);
        tableView_FollowUp->setObjectName(QStringLiteral("tableView_FollowUp"));
        tableView_FollowUp->setGeometry(QRect(0, 0, 1021, 441));
        tabWidget->addTab(FollowUp, QString());
        Offer = new QWidget();
        Offer->setObjectName(QStringLiteral("Offer"));
        tableView_Offer = new QTableView(Offer);
        tableView_Offer->setObjectName(QStringLiteral("tableView_Offer"));
        tableView_Offer->setGeometry(QRect(0, 0, 1021, 441));
        tabWidget->addTab(Offer, QString());
        Rejected = new QWidget();
        Rejected->setObjectName(QStringLiteral("Rejected"));
        tableView_Rejected = new QTableView(Rejected);
        tableView_Rejected->setObjectName(QStringLiteral("tableView_Rejected"));
        tableView_Rejected->setGeometry(QRect(0, 0, 1021, 441));
        tabWidget->addTab(Rejected, QString());
        NoResponse = new QWidget();
        NoResponse->setObjectName(QStringLiteral("NoResponse"));
        tableView_NoResponse = new QTableView(NoResponse);
        tableView_NoResponse->setObjectName(QStringLiteral("tableView_NoResponse"));
        tableView_NoResponse->setGeometry(QRect(0, 0, 1021, 441));
        tabWidget->addTab(NoResponse, QString());
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(7);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton_Add->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        pushButton_Refresh->setText(QApplication::translate("MainWindow", "Refresh", Q_NULLPTR));
        pushButton_Edit->setText(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Delete", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(All), QApplication::translate("MainWindow", "All", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(ToApply), QApplication::translate("MainWindow", "To Apply", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Applied), QApplication::translate("MainWindow", "Applied", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(InProgress), QApplication::translate("MainWindow", "In Progress", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(FollowUp), QApplication::translate("MainWindow", "Follow Up", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Offer), QApplication::translate("MainWindow", "Offer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Rejected), QApplication::translate("MainWindow", "Rejected", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(NoResponse), QApplication::translate("MainWindow", "No Response", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
