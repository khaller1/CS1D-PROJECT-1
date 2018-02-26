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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFormLayout *formLayout;
    QWidget *SideBar;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *FeatureButtons;
    QPushButton *viewRestaurant;
    QPushButton *AdminLogin_Button_2;
    QPushButton *AdminLogin_Button_3;
    QPushButton *AdminLogin_Button_4;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *AdminLogin_Button;
    QPushButton *Exit_Button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(9999, 9999);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        formLayout = new QFormLayout(centralwidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        SideBar = new QWidget(centralwidget);
        SideBar->setObjectName(QStringLiteral("SideBar"));
        SideBar->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SideBar->sizePolicy().hasHeightForWidth());
        SideBar->setSizePolicy(sizePolicy);
        SideBar->setMinimumSize(QSize(0, 0));
        SideBar->setMaximumSize(QSize(16777215, 16777215));
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
        SideBar->setPalette(palette);
        SideBar->setAutoFillBackground(true);
        verticalLayout_5 = new QVBoxLayout(SideBar);
        verticalLayout_5->setSpacing(9);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_5->setContentsMargins(0, 5, 0, 3);
        FeatureButtons = new QVBoxLayout();
        FeatureButtons->setSpacing(16);
        FeatureButtons->setObjectName(QStringLiteral("FeatureButtons"));
        FeatureButtons->setSizeConstraint(QLayout::SetFixedSize);
        viewRestaurant = new QPushButton(SideBar);
        viewRestaurant->setObjectName(QStringLiteral("viewRestaurant"));
        viewRestaurant->setEnabled(true);
        sizePolicy.setHeightForWidth(viewRestaurant->sizePolicy().hasHeightForWidth());
        viewRestaurant->setSizePolicy(sizePolicy);
        viewRestaurant->setMinimumSize(QSize(0, 0));
        viewRestaurant->setMaximumSize(QSize(16777215, 16777215));

        FeatureButtons->addWidget(viewRestaurant);

        AdminLogin_Button_2 = new QPushButton(SideBar);
        AdminLogin_Button_2->setObjectName(QStringLiteral("AdminLogin_Button_2"));
        AdminLogin_Button_2->setEnabled(true);
        sizePolicy.setHeightForWidth(AdminLogin_Button_2->sizePolicy().hasHeightForWidth());
        AdminLogin_Button_2->setSizePolicy(sizePolicy);
        AdminLogin_Button_2->setMinimumSize(QSize(0, 0));
        AdminLogin_Button_2->setMaximumSize(QSize(16777215, 16777215));

        FeatureButtons->addWidget(AdminLogin_Button_2);

        AdminLogin_Button_3 = new QPushButton(SideBar);
        AdminLogin_Button_3->setObjectName(QStringLiteral("AdminLogin_Button_3"));
        AdminLogin_Button_3->setEnabled(true);
        sizePolicy.setHeightForWidth(AdminLogin_Button_3->sizePolicy().hasHeightForWidth());
        AdminLogin_Button_3->setSizePolicy(sizePolicy);
        AdminLogin_Button_3->setMinimumSize(QSize(0, 0));
        AdminLogin_Button_3->setMaximumSize(QSize(16777215, 16777215));

        FeatureButtons->addWidget(AdminLogin_Button_3);

        AdminLogin_Button_4 = new QPushButton(SideBar);
        AdminLogin_Button_4->setObjectName(QStringLiteral("AdminLogin_Button_4"));
        AdminLogin_Button_4->setEnabled(true);
        sizePolicy.setHeightForWidth(AdminLogin_Button_4->sizePolicy().hasHeightForWidth());
        AdminLogin_Button_4->setSizePolicy(sizePolicy);
        AdminLogin_Button_4->setMinimumSize(QSize(0, 0));
        AdminLogin_Button_4->setMaximumSize(QSize(16777215, 16777215));

        FeatureButtons->addWidget(AdminLogin_Button_4);


        verticalLayout_5->addLayout(FeatureButtons);

        verticalSpacer = new QSpacerItem(178, 137, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        AdminLogin_Button = new QPushButton(SideBar);
        AdminLogin_Button->setObjectName(QStringLiteral("AdminLogin_Button"));
        AdminLogin_Button->setEnabled(true);
        sizePolicy.setHeightForWidth(AdminLogin_Button->sizePolicy().hasHeightForWidth());
        AdminLogin_Button->setSizePolicy(sizePolicy);
        AdminLogin_Button->setMinimumSize(QSize(0, 0));
        AdminLogin_Button->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout->addWidget(AdminLogin_Button);

        Exit_Button = new QPushButton(SideBar);
        Exit_Button->setObjectName(QStringLiteral("Exit_Button"));
        Exit_Button->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Exit_Button->sizePolicy().hasHeightForWidth());
        Exit_Button->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(Exit_Button);


        verticalLayout_5->addLayout(verticalLayout);


        formLayout->setWidget(0, QFormLayout::LabelRole, SideBar);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 9999, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        viewRestaurant->setText(QApplication::translate("MainWindow", "View Restaurant's", Q_NULLPTR));
        AdminLogin_Button_2->setText(QApplication::translate("MainWindow", "View Menu's", Q_NULLPTR));
        AdminLogin_Button_3->setText(QApplication::translate("MainWindow", "Quick Trip", Q_NULLPTR));
        AdminLogin_Button_4->setText(QApplication::translate("MainWindow", "Custom Trip", Q_NULLPTR));
        AdminLogin_Button->setText(QApplication::translate("MainWindow", "Admin Login", Q_NULLPTR));
        Exit_Button->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
