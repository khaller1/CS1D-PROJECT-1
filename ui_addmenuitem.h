/********************************************************************************
** Form generated from reading UI file 'addmenuitem.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMENUITEM_H
#define UI_ADDMENUITEM_H

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

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit_id;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_parent;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_name;
    QFormLayout *formLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_cost;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_exit;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(351, 227);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit_id = new QLineEdit(Dialog);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_id);


        verticalLayout->addLayout(formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit_parent = new QLineEdit(Dialog);
        lineEdit_parent->setObjectName(QStringLiteral("lineEdit_parent"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_parent);


        verticalLayout->addLayout(formLayout_2);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        lineEdit_name = new QLineEdit(Dialog);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineEdit_name);


        verticalLayout->addLayout(formLayout_3);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_4);

        lineEdit_cost = new QLineEdit(Dialog);
        lineEdit_cost->setObjectName(QStringLiteral("lineEdit_cost"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, lineEdit_cost);


        verticalLayout->addLayout(formLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        pushButton_exit = new QPushButton(Dialog);
        pushButton_exit->setObjectName(QStringLiteral("pushButton_exit"));

        verticalLayout_3->addWidget(pushButton_exit);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        label->setText(QApplication::translate("Dialog", "Item Id", 0));
        label_2->setText(QApplication::translate("Dialog", "Parent Id", 0));
        label_3->setText(QApplication::translate("Dialog", "Item Name", 0));
        label_4->setText(QApplication::translate("Dialog", "Item Cost", 0));
        pushButton->setText(QApplication::translate("Dialog", "Add", 0));
        pushButton_2->setText(QApplication::translate("Dialog", "Edit", 0));
        pushButton_3->setText(QApplication::translate("Dialog", "Delete", 0));
        pushButton_exit->setText(QApplication::translate("Dialog", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMENUITEM_H
