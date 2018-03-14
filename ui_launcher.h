/********************************************************************************
** Form generated from reading UI file 'launcher.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAUNCHER_H
#define UI_LAUNCHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Launcher
{
public:
    QWidget *TopLayout;
    QFormLayout *formLayout;
    QWidget *Launcher_2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *userButtons;
    QPushButton *ViewRestaurant_Button;
    QPushButton *ViewMenu_Button;
    QPushButton *QuickTrip_Button;
    QPushButton *CustomTrip_Button;
    QSpacerItem *Spacer;
    QVBoxLayout *AdminTools;
    QPushButton *AdminLogin_Button;
    QPushButton *Exit_Button;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Launcher)
    {
        if (Launcher->objectName().isEmpty())
            Launcher->setObjectName(QStringLiteral("Launcher"));
        Launcher->resize(202, 430);
        Launcher->setMinimumSize(QSize(202, 430));
        Launcher->setMaximumSize(QSize(202, 430));
        TopLayout = new QWidget(Launcher);
        TopLayout->setObjectName(QStringLiteral("TopLayout"));
        TopLayout->setMinimumSize(QSize(0, 0));
        TopLayout->setMaximumSize(QSize(16777215, 16777215));
        formLayout = new QFormLayout(TopLayout);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        Launcher_2 = new QWidget(TopLayout);
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
        verticalLayout_5 = new QVBoxLayout(Launcher_2);
        verticalLayout_5->setSpacing(9);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_5->setContentsMargins(0, 5, 0, 3);
        userButtons = new QVBoxLayout();
        userButtons->setSpacing(16);
        userButtons->setObjectName(QStringLiteral("userButtons"));
        userButtons->setSizeConstraint(QLayout::SetFixedSize);
        ViewRestaurant_Button = new QPushButton(Launcher_2);
        ViewRestaurant_Button->setObjectName(QStringLiteral("ViewRestaurant_Button"));
        ViewRestaurant_Button->setEnabled(true);
        sizePolicy.setHeightForWidth(ViewRestaurant_Button->sizePolicy().hasHeightForWidth());
        ViewRestaurant_Button->setSizePolicy(sizePolicy);
        ViewRestaurant_Button->setMinimumSize(QSize(0, 0));
        ViewRestaurant_Button->setMaximumSize(QSize(16777215, 16777215));

        userButtons->addWidget(ViewRestaurant_Button);

        ViewMenu_Button = new QPushButton(Launcher_2);
        ViewMenu_Button->setObjectName(QStringLiteral("ViewMenu_Button"));
        ViewMenu_Button->setEnabled(true);
        sizePolicy.setHeightForWidth(ViewMenu_Button->sizePolicy().hasHeightForWidth());
        ViewMenu_Button->setSizePolicy(sizePolicy);
        ViewMenu_Button->setMinimumSize(QSize(0, 0));
        ViewMenu_Button->setMaximumSize(QSize(16777215, 16777215));

        userButtons->addWidget(ViewMenu_Button);

        QuickTrip_Button = new QPushButton(Launcher_2);
        QuickTrip_Button->setObjectName(QStringLiteral("QuickTrip_Button"));
        QuickTrip_Button->setEnabled(true);
        sizePolicy.setHeightForWidth(QuickTrip_Button->sizePolicy().hasHeightForWidth());
        QuickTrip_Button->setSizePolicy(sizePolicy);
        QuickTrip_Button->setMinimumSize(QSize(0, 0));
        QuickTrip_Button->setMaximumSize(QSize(16777215, 16777215));

        userButtons->addWidget(QuickTrip_Button);

        CustomTrip_Button = new QPushButton(Launcher_2);
        CustomTrip_Button->setObjectName(QStringLiteral("CustomTrip_Button"));
        CustomTrip_Button->setEnabled(true);
        sizePolicy.setHeightForWidth(CustomTrip_Button->sizePolicy().hasHeightForWidth());
        CustomTrip_Button->setSizePolicy(sizePolicy);
        CustomTrip_Button->setMinimumSize(QSize(0, 0));
        CustomTrip_Button->setMaximumSize(QSize(16777215, 16777215));

        userButtons->addWidget(CustomTrip_Button);


        verticalLayout_5->addLayout(userButtons);

        Spacer = new QSpacerItem(178, 137, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(Spacer);

        AdminTools = new QVBoxLayout();
        AdminTools->setSpacing(6);
        AdminTools->setObjectName(QStringLiteral("AdminTools"));
        AdminLogin_Button = new QPushButton(Launcher_2);
        AdminLogin_Button->setObjectName(QStringLiteral("AdminLogin_Button"));
        AdminLogin_Button->setEnabled(true);
        sizePolicy.setHeightForWidth(AdminLogin_Button->sizePolicy().hasHeightForWidth());
        AdminLogin_Button->setSizePolicy(sizePolicy);
        AdminLogin_Button->setMinimumSize(QSize(0, 0));
        AdminLogin_Button->setMaximumSize(QSize(16777215, 16777215));

        AdminTools->addWidget(AdminLogin_Button);

        Exit_Button = new QPushButton(Launcher_2);
        Exit_Button->setObjectName(QStringLiteral("Exit_Button"));
        Exit_Button->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Exit_Button->sizePolicy().hasHeightForWidth());
        Exit_Button->setSizePolicy(sizePolicy1);

        AdminTools->addWidget(Exit_Button);


        verticalLayout_5->addLayout(AdminTools);


        formLayout->setWidget(0, QFormLayout::LabelRole, Launcher_2);

        Launcher->setCentralWidget(TopLayout);
        menuBar = new QMenuBar(Launcher);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 202, 21));
        Launcher->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Launcher);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Launcher->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Launcher);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Launcher->setStatusBar(statusBar);

        retranslateUi(Launcher);

        QMetaObject::connectSlotsByName(Launcher);
    } // setupUi

    void retranslateUi(QMainWindow *Launcher)
    {
        Launcher->setWindowTitle(QApplication::translate("Launcher", "Launcher", nullptr));
        ViewRestaurant_Button->setText(QApplication::translate("Launcher", "View Restaurant's", nullptr));
        ViewMenu_Button->setText(QApplication::translate("Launcher", "View Menu's", nullptr));
        QuickTrip_Button->setText(QApplication::translate("Launcher", "Quick Trip", nullptr));
        CustomTrip_Button->setText(QApplication::translate("Launcher", "Custom Trip", nullptr));
        AdminLogin_Button->setText(QApplication::translate("Launcher", "Admin Login", nullptr));
        Exit_Button->setText(QApplication::translate("Launcher", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Launcher: public Ui_Launcher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAUNCHER_H
