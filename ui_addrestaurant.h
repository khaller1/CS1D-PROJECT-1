/********************************************************************************
** Form generated from reading UI file 'addrestaurant.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addRestaurant
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_id;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit_name;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_menu;
    QFormLayout *formLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_distance;
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
        addRestaurant->resize(385, 261);
        gridLayout = new QGridLayout(addRestaurant);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
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
        label_3 = new QLabel(addRestaurant);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        lineEdit_menu = new QLineEdit(addRestaurant);
        lineEdit_menu->setObjectName(QStringLiteral("lineEdit_menu"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineEdit_menu);


        verticalLayout->addLayout(formLayout_3);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_4 = new QLabel(addRestaurant);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_4);

        lineEdit_distance = new QLineEdit(addRestaurant);
        lineEdit_distance->setObjectName(QStringLiteral("lineEdit_distance"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, lineEdit_distance);


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
        addRestaurant->setWindowTitle(QApplication::translate("addRestaurant", "Dialog", 0));
        label_2->setText(QApplication::translate("addRestaurant", "Restaurant ID", 0));
        label->setText(QApplication::translate("addRestaurant", "Restaurant Name", 0));
        label_3->setText(QApplication::translate("addRestaurant", "Menu Size", 0));
        label_4->setText(QApplication::translate("addRestaurant", "Distance to Saddleback", 0));
        pushButton->setText(QApplication::translate("addRestaurant", "Add", 0));
        pushButton_edit->setText(QApplication::translate("addRestaurant", "Edit", 0));
        pushButton_delete->setText(QApplication::translate("addRestaurant", "Delete", 0));
        pushButton_exit->setText(QApplication::translate("addRestaurant", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class addRestaurant: public Ui_addRestaurant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESTAURANT_H
