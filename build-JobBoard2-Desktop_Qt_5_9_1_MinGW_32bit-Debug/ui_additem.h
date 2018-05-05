/********************************************************************************
** Form generated from reading UI file 'additem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITEM_H
#define UI_ADDITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_additem
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_Company;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_Position;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_Link;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_Comments;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *comboBox_Initial;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_Add;
    QPushButton *pushButton_Cancel;

    void setupUi(QDialog *additem)
    {
        if (additem->objectName().isEmpty())
            additem->setObjectName(QStringLiteral("additem"));
        additem->resize(980, 533);
        layoutWidget = new QWidget(additem);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 951, 511));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_Company = new QLineEdit(layoutWidget);
        lineEdit_Company->setObjectName(QStringLiteral("lineEdit_Company"));

        horizontalLayout->addWidget(lineEdit_Company);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_Position = new QLineEdit(layoutWidget);
        lineEdit_Position->setObjectName(QStringLiteral("lineEdit_Position"));

        horizontalLayout_2->addWidget(lineEdit_Position);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_Link = new QLineEdit(layoutWidget);
        lineEdit_Link->setObjectName(QStringLiteral("lineEdit_Link"));

        horizontalLayout_3->addWidget(lineEdit_Link);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_Comments = new QLineEdit(layoutWidget);
        lineEdit_Comments->setObjectName(QStringLiteral("lineEdit_Comments"));

        horizontalLayout_4->addWidget(lineEdit_Comments);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        comboBox_Initial = new QComboBox(layoutWidget);
        comboBox_Initial->setObjectName(QStringLiteral("comboBox_Initial"));

        horizontalLayout_6->addWidget(comboBox_Initial);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_Add = new QPushButton(layoutWidget);
        pushButton_Add->setObjectName(QStringLiteral("pushButton_Add"));

        horizontalLayout_5->addWidget(pushButton_Add);

        pushButton_Cancel = new QPushButton(layoutWidget);
        pushButton_Cancel->setObjectName(QStringLiteral("pushButton_Cancel"));

        horizontalLayout_5->addWidget(pushButton_Cancel);


        horizontalLayout_7->addLayout(horizontalLayout_5);


        verticalLayout->addLayout(horizontalLayout_7);


        retranslateUi(additem);

        QMetaObject::connectSlotsByName(additem);
    } // setupUi

    void retranslateUi(QDialog *additem)
    {
        additem->setWindowTitle(QApplication::translate("additem", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("additem", "Company", Q_NULLPTR));
        label_2->setText(QApplication::translate("additem", "Position", Q_NULLPTR));
        label_3->setText(QApplication::translate("additem", "Link", Q_NULLPTR));
        label_4->setText(QApplication::translate("additem", "Comments", Q_NULLPTR));
        comboBox_Initial->clear();
        comboBox_Initial->insertItems(0, QStringList()
         << QApplication::translate("additem", "To Apply", Q_NULLPTR)
         << QApplication::translate("additem", "Applied", Q_NULLPTR)
         << QApplication::translate("additem", "Rejected", Q_NULLPTR)
         << QApplication::translate("additem", "Follow Up", Q_NULLPTR)
         << QApplication::translate("additem", "In Progress", Q_NULLPTR)
         << QApplication::translate("additem", "Offer", Q_NULLPTR)
         << QApplication::translate("additem", "Rejected", Q_NULLPTR)
         << QApplication::translate("additem", "No Response", Q_NULLPTR)
        );
        pushButton_Add->setText(QApplication::translate("additem", "Add", Q_NULLPTR));
        pushButton_Cancel->setText(QApplication::translate("additem", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class additem: public Ui_additem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEM_H
