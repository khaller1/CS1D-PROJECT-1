/********************************************************************************
** Form generated from reading UI file 'addmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMENU_H
#define UI_ADDMENU_H

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

class Ui_addMenu
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit_id;
    QLabel *label_2;
    QLineEdit *lineEdit_parent;
    QLabel *label_3;
    QLineEdit *lineEdit_name;
    QLabel *label_4;
    QLineEdit *lineEdit_cost;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_add;
    QPushButton *pushButton_edit;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_exit;

    void setupUi(QDialog *addMenu)
    {
        if (addMenu->objectName().isEmpty())
            addMenu->setObjectName(QStringLiteral("addMenu"));
        addMenu->resize(334, 223);
        gridLayout = new QGridLayout(addMenu);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(addMenu);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit_id = new QLineEdit(addMenu);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_id);

        label_2 = new QLabel(addMenu);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_parent = new QLineEdit(addMenu);
        lineEdit_parent->setObjectName(QStringLiteral("lineEdit_parent"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_parent);

        label_3 = new QLabel(addMenu);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_name = new QLineEdit(addMenu);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_name);

        label_4 = new QLabel(addMenu);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lineEdit_cost = new QLineEdit(addMenu);
        lineEdit_cost->setObjectName(QStringLiteral("lineEdit_cost"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_cost);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_add = new QPushButton(addMenu);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));

        horizontalLayout->addWidget(pushButton_add);

        pushButton_edit = new QPushButton(addMenu);
        pushButton_edit->setObjectName(QStringLiteral("pushButton_edit"));

        horizontalLayout->addWidget(pushButton_edit);

        pushButton_delete = new QPushButton(addMenu);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));

        horizontalLayout->addWidget(pushButton_delete);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton_exit = new QPushButton(addMenu);
        pushButton_exit->setObjectName(QStringLiteral("pushButton_exit"));

        verticalLayout_2->addWidget(pushButton_exit);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(addMenu);

        QMetaObject::connectSlotsByName(addMenu);
    } // setupUi

    void retranslateUi(QDialog *addMenu)
    {
        addMenu->setWindowTitle(QApplication::translate("addMenu", "Dialog", 0));
        label->setText(QApplication::translate("addMenu", "Item ID", 0));
        label_2->setText(QApplication::translate("addMenu", "Parent ID", 0));
        label_3->setText(QApplication::translate("addMenu", "Item Name", 0));
        label_4->setText(QApplication::translate("addMenu", "Item Cost", 0));
        pushButton_add->setText(QApplication::translate("addMenu", "Add", 0));
        pushButton_edit->setText(QApplication::translate("addMenu", "Edit", 0));
        pushButton_delete->setText(QApplication::translate("addMenu", "Delete", 0));
        pushButton_exit->setText(QApplication::translate("addMenu", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class addMenu: public Ui_addMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMENU_H
