/********************************************************************************
** Form generated from reading UI file 'addrestaurant.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESTAURANT_H
#define UI_ADDRESTAURANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addRestaurant
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QTableView *tableView;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_id;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit_name;
    QFormLayout *formLayout_3;
    QFormLayout *formLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_edit;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_exit;

    void setupUi(QDialog *addRestaurant)
    {
        if (addRestaurant->objectName().isEmpty())
            addRestaurant->setObjectName(QStringLiteral("addRestaurant"));
        addRestaurant->resize(566, 380);
        gridLayout = new QGridLayout(addRestaurant);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tableView = new QTableView(addRestaurant);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_3->addWidget(tableView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_2 = new QLabel(addRestaurant);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit_id = new QLineEdit(addRestaurant);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_id);


        verticalLayout->addLayout(formLayout_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(addRestaurant);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit_name = new QLineEdit(addRestaurant);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_name);


        verticalLayout->addLayout(formLayout);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));

        verticalLayout->addLayout(formLayout_3);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));

        verticalLayout->addLayout(formLayout_4);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(addRestaurant);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_edit = new QPushButton(addRestaurant);
        pushButton_edit->setObjectName(QStringLiteral("pushButton_edit"));

        horizontalLayout->addWidget(pushButton_edit);

        pushButton_delete = new QPushButton(addRestaurant);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));

        horizontalLayout->addWidget(pushButton_delete);


        verticalLayout_2->addLayout(horizontalLayout);

        pushButton_exit = new QPushButton(addRestaurant);
        pushButton_exit->setObjectName(QStringLiteral("pushButton_exit"));

        verticalLayout_2->addWidget(pushButton_exit);


        verticalLayout_3->addLayout(verticalLayout_2);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);


        retranslateUi(addRestaurant);

        QMetaObject::connectSlotsByName(addRestaurant);
    } // setupUi

    void retranslateUi(QDialog *addRestaurant)
    {
        addRestaurant->setWindowTitle(QApplication::translate("addRestaurant", "Dialog", nullptr));
        label_2->setText(QApplication::translate("addRestaurant", "Restaurant ID", nullptr));
        label->setText(QApplication::translate("addRestaurant", "Restaurant Name", nullptr));
        pushButton->setText(QApplication::translate("addRestaurant", "Add", nullptr));
        pushButton_edit->setText(QApplication::translate("addRestaurant", "Edit", nullptr));
        pushButton_delete->setText(QApplication::translate("addRestaurant", "Delete", nullptr));
        pushButton_exit->setText(QApplication::translate("addRestaurant", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addRestaurant: public Ui_addRestaurant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESTAURANT_H
