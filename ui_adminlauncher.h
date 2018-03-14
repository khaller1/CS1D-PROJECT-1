/********************************************************************************
** Form generated from reading UI file 'adminlauncher.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLAUNCHER_H
#define UI_ADMINLAUNCHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminLauncher
{
public:
    QGridLayout *gridLayout;
    QWidget *Launcher_2;
    QVBoxLayout *verticalLayout;
    QPushButton *ViewRestaurant_Button;
    QPushButton *ViewMenu_Button;
    QPushButton *QuickTrip_Button;
    QPushButton *CustomTrip_Button;
    QPushButton *pushButton;
    QPushButton *pushButton_import;
    QPushButton *pushButton_addmenu;
    QPushButton *pushButton_3;
    QPushButton *Exit_Button;

    void setupUi(QDialog *adminLauncher)
    {
        if (adminLauncher->objectName().isEmpty())
            adminLauncher->setObjectName(QStringLiteral("adminLauncher"));
        adminLauncher->resize(196, 377);
        gridLayout = new QGridLayout(adminLauncher);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Launcher_2 = new QWidget(adminLauncher);
        Launcher_2->setObjectName(QStringLiteral("Launcher_2"));
        Launcher_2->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Launcher_2->sizePolicy().hasHeightForWidth());
        Launcher_2->setSizePolicy(sizePolicy);
        Launcher_2->setMinimumSize(QSize(178, 359));
        Launcher_2->setMaximumSize(QSize(178, 359));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(180, 180, 180, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        Launcher_2->setPalette(palette);
        Launcher_2->setAutoFillBackground(true);
        verticalLayout = new QVBoxLayout(Launcher_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        ViewRestaurant_Button = new QPushButton(Launcher_2);
        ViewRestaurant_Button->setObjectName(QStringLiteral("ViewRestaurant_Button"));
        ViewRestaurant_Button->setEnabled(true);
        sizePolicy.setHeightForWidth(ViewRestaurant_Button->sizePolicy().hasHeightForWidth());
        ViewRestaurant_Button->setSizePolicy(sizePolicy);
        ViewRestaurant_Button->setMinimumSize(QSize(0, 0));
        ViewRestaurant_Button->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout->addWidget(ViewRestaurant_Button);

        ViewMenu_Button = new QPushButton(Launcher_2);
        ViewMenu_Button->setObjectName(QStringLiteral("ViewMenu_Button"));
        ViewMenu_Button->setEnabled(true);
        sizePolicy.setHeightForWidth(ViewMenu_Button->sizePolicy().hasHeightForWidth());
        ViewMenu_Button->setSizePolicy(sizePolicy);
        ViewMenu_Button->setMinimumSize(QSize(0, 0));
        ViewMenu_Button->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout->addWidget(ViewMenu_Button);

        QuickTrip_Button = new QPushButton(Launcher_2);
        QuickTrip_Button->setObjectName(QStringLiteral("QuickTrip_Button"));
        QuickTrip_Button->setEnabled(true);
        sizePolicy.setHeightForWidth(QuickTrip_Button->sizePolicy().hasHeightForWidth());
        QuickTrip_Button->setSizePolicy(sizePolicy);
        QuickTrip_Button->setMinimumSize(QSize(0, 0));
        QuickTrip_Button->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout->addWidget(QuickTrip_Button);

        CustomTrip_Button = new QPushButton(Launcher_2);
        CustomTrip_Button->setObjectName(QStringLiteral("CustomTrip_Button"));
        CustomTrip_Button->setEnabled(true);
        sizePolicy.setHeightForWidth(CustomTrip_Button->sizePolicy().hasHeightForWidth());
        CustomTrip_Button->setSizePolicy(sizePolicy);
        CustomTrip_Button->setMinimumSize(QSize(0, 0));
        CustomTrip_Button->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout->addWidget(CustomTrip_Button);

        pushButton = new QPushButton(Launcher_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_import = new QPushButton(Launcher_2);
        pushButton_import->setObjectName(QStringLiteral("pushButton_import"));

        verticalLayout->addWidget(pushButton_import);

        pushButton_addmenu = new QPushButton(Launcher_2);
        pushButton_addmenu->setObjectName(QStringLiteral("pushButton_addmenu"));

        verticalLayout->addWidget(pushButton_addmenu);

        pushButton_3 = new QPushButton(Launcher_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        Exit_Button = new QPushButton(Launcher_2);
        Exit_Button->setObjectName(QStringLiteral("Exit_Button"));
        Exit_Button->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Exit_Button->sizePolicy().hasHeightForWidth());
        Exit_Button->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(Exit_Button);


        gridLayout->addWidget(Launcher_2, 0, 0, 1, 1);


        retranslateUi(adminLauncher);

        QMetaObject::connectSlotsByName(adminLauncher);
    } // setupUi

    void retranslateUi(QDialog *adminLauncher)
    {
        adminLauncher->setWindowTitle(QApplication::translate("adminLauncher", "Dialog", nullptr));
        ViewRestaurant_Button->setText(QApplication::translate("adminLauncher", "View Restaurant's", nullptr));
        ViewMenu_Button->setText(QApplication::translate("adminLauncher", "View Menu's", nullptr));
        QuickTrip_Button->setText(QApplication::translate("adminLauncher", "Quick Trip", nullptr));
        CustomTrip_Button->setText(QApplication::translate("adminLauncher", "Custom Trip", nullptr));
        pushButton->setText(QApplication::translate("adminLauncher", "Add Restaurant", nullptr));
        pushButton_import->setText(QApplication::translate("adminLauncher", "Import text", nullptr));
        pushButton_addmenu->setText(QApplication::translate("adminLauncher", "Add Menu Item", nullptr));
        pushButton_3->setText(QApplication::translate("adminLauncher", "Add Distance", nullptr));
        Exit_Button->setText(QApplication::translate("adminLauncher", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminLauncher: public Ui_adminLauncher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLAUNCHER_H
