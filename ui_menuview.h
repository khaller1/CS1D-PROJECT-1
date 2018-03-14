/********************************************************************************
** Form generated from reading UI file 'menuview.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUVIEW_H
#define UI_MENUVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MenuView
{
public:
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout;
    QComboBox *RestaurantCombo;
    QPushButton *ViewMenu;
    QPushButton *pushButton;
    QTableView *MenuTable;

    void setupUi(QDialog *MenuView)
    {
        if (MenuView->objectName().isEmpty())
            MenuView->setObjectName(QStringLiteral("MenuView"));
        MenuView->resize(400, 300);
        MenuView->setMinimumSize(QSize(400, 300));
        MenuView->setMaximumSize(QSize(400, 300));
        formLayout = new QFormLayout(MenuView);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        RestaurantCombo = new QComboBox(MenuView);
        RestaurantCombo->setObjectName(QStringLiteral("RestaurantCombo"));

        verticalLayout->addWidget(RestaurantCombo);

        ViewMenu = new QPushButton(MenuView);
        ViewMenu->setObjectName(QStringLiteral("ViewMenu"));

        verticalLayout->addWidget(ViewMenu);

        pushButton = new QPushButton(MenuView);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout);

        MenuTable = new QTableView(MenuView);
        MenuTable->setObjectName(QStringLiteral("MenuTable"));

        formLayout->setWidget(0, QFormLayout::FieldRole, MenuTable);


        retranslateUi(MenuView);

        QMetaObject::connectSlotsByName(MenuView);
    } // setupUi

    void retranslateUi(QDialog *MenuView)
    {
        MenuView->setWindowTitle(QApplication::translate("MenuView", "Dialog", nullptr));
        ViewMenu->setText(QApplication::translate("MenuView", "View Menu", nullptr));
        pushButton->setText(QApplication::translate("MenuView", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuView: public Ui_MenuView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUVIEW_H
