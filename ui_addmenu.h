/********************************************************************************
** Form generated from reading UI file 'addmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMENU_H
#define UI_ADDMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addMenu
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QComboBox *RestaurantCombo;
    QPushButton *ViewMenu;
    QTableView *MenuTable;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_name;
    QFormLayout *formLayout_3;
    QLabel *label;
    QLineEdit *lineEdit_id;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_cost;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_add;
    QPushButton *pushButton_edit;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_exit;

    void setupUi(QDialog *addMenu)
    {
        if (addMenu->objectName().isEmpty())
            addMenu->setObjectName(QStringLiteral("addMenu"));
        addMenu->resize(544, 325);
        verticalLayout_4 = new QVBoxLayout(addMenu);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        RestaurantCombo = new QComboBox(addMenu);
        RestaurantCombo->setObjectName(QStringLiteral("RestaurantCombo"));

        verticalLayout_2->addWidget(RestaurantCombo);

        ViewMenu = new QPushButton(addMenu);
        ViewMenu->setObjectName(QStringLiteral("ViewMenu"));

        verticalLayout_2->addWidget(ViewMenu);


        horizontalLayout_2->addLayout(verticalLayout_2);

        MenuTable = new QTableView(addMenu);
        MenuTable->setObjectName(QStringLiteral("MenuTable"));

        horizontalLayout_2->addWidget(MenuTable);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_3 = new QLabel(addMenu);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        lineEdit_name = new QLineEdit(addMenu);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_name);


        verticalLayout_3->addLayout(formLayout);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label = new QLabel(addMenu);
        label->setObjectName(QStringLiteral("label"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit_id = new QLineEdit(addMenu);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineEdit_id);


        verticalLayout_3->addLayout(formLayout_3);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_4 = new QLabel(addMenu);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        lineEdit_cost = new QLineEdit(addMenu);
        lineEdit_cost->setObjectName(QStringLiteral("lineEdit_cost"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_cost);


        verticalLayout_3->addLayout(formLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
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

        pushButton_exit = new QPushButton(addMenu);
        pushButton_exit->setObjectName(QStringLiteral("pushButton_exit"));

        verticalLayout->addWidget(pushButton_exit);


        verticalLayout_4->addLayout(verticalLayout);

        MenuTable->raise();
        RestaurantCombo->raise();
        ViewMenu->raise();
        MenuTable->raise();
        lineEdit_cost->raise();
        lineEdit_id->raise();
        label->raise();

        retranslateUi(addMenu);

        QMetaObject::connectSlotsByName(addMenu);
    } // setupUi

    void retranslateUi(QDialog *addMenu)
    {
        addMenu->setWindowTitle(QApplication::translate("addMenu", "Dialog", nullptr));
        ViewMenu->setText(QApplication::translate("addMenu", "View Menu", nullptr));
        label_3->setText(QApplication::translate("addMenu", "Item Name", nullptr));
        label->setText(QApplication::translate("addMenu", "Restaurant ID", nullptr));
        label_4->setText(QApplication::translate("addMenu", "Item Cost", nullptr));
        pushButton_add->setText(QApplication::translate("addMenu", "Add", nullptr));
        pushButton_edit->setText(QApplication::translate("addMenu", "Edit", nullptr));
        pushButton_delete->setText(QApplication::translate("addMenu", "Delete", nullptr));
        pushButton_exit->setText(QApplication::translate("addMenu", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addMenu: public Ui_addMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMENU_H
