/********************************************************************************
** Form generated from reading UI file 'custom_trip.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOM_TRIP_H
#define UI_CUSTOM_TRIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Custom_Trip
{
public:
    QFormLayout *formLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QComboBox *cStart_Combo;
    QPushButton *cStart_Button;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout_2;
    QComboBox *cTrip_Box;
    QPushButton *Add_cTrip_Button;
    QTableView *cTrip_Table;
    QPushButton *cTrip_Start_Button;
    QPushButton *Back_Button;

    void setupUi(QDialog *Custom_Trip)
    {
        if (Custom_Trip->objectName().isEmpty())
            Custom_Trip->setObjectName(QStringLiteral("Custom_Trip"));
        Custom_Trip->resize(700, 303);
        Custom_Trip->setMinimumSize(QSize(700, 303));
        Custom_Trip->setMaximumSize(QSize(700, 400));
        formLayout_2 = new QFormLayout(Custom_Trip);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        groupBox = new QGroupBox(Custom_Trip);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        cStart_Combo = new QComboBox(groupBox);
        cStart_Combo->setObjectName(QStringLiteral("cStart_Combo"));

        verticalLayout->addWidget(cStart_Combo);

        cStart_Button = new QPushButton(groupBox);
        cStart_Button->setObjectName(QStringLiteral("cStart_Button"));

        verticalLayout->addWidget(cStart_Button);


        horizontalLayout->addLayout(verticalLayout);


        formLayout_2->setWidget(0, QFormLayout::LabelRole, groupBox);

        groupBox_2 = new QGroupBox(Custom_Trip);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        formLayout = new QFormLayout(groupBox_2);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        cTrip_Box = new QComboBox(groupBox_2);
        cTrip_Box->setObjectName(QStringLiteral("cTrip_Box"));

        verticalLayout_2->addWidget(cTrip_Box);

        Add_cTrip_Button = new QPushButton(groupBox_2);
        Add_cTrip_Button->setObjectName(QStringLiteral("Add_cTrip_Button"));

        verticalLayout_2->addWidget(Add_cTrip_Button);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout_2);

        cTrip_Table = new QTableView(groupBox_2);
        cTrip_Table->setObjectName(QStringLiteral("cTrip_Table"));

        formLayout->setWidget(0, QFormLayout::FieldRole, cTrip_Table);

        cTrip_Start_Button = new QPushButton(groupBox_2);
        cTrip_Start_Button->setObjectName(QStringLiteral("cTrip_Start_Button"));

        formLayout->setWidget(1, QFormLayout::FieldRole, cTrip_Start_Button);


        formLayout_2->setWidget(0, QFormLayout::FieldRole, groupBox_2);

        Back_Button = new QPushButton(Custom_Trip);
        Back_Button->setObjectName(QStringLiteral("Back_Button"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, Back_Button);


        retranslateUi(Custom_Trip);

        QMetaObject::connectSlotsByName(Custom_Trip);
    } // setupUi

    void retranslateUi(QDialog *Custom_Trip)
    {
        Custom_Trip->setWindowTitle(QApplication::translate("Custom_Trip", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("Custom_Trip", "Custom Start", nullptr));
        cStart_Button->setText(QApplication::translate("Custom_Trip", "Start Here!", nullptr));
        groupBox_2->setTitle(QApplication::translate("Custom_Trip", "Custom Trip", nullptr));
        Add_cTrip_Button->setText(QApplication::translate("Custom_Trip", "Add To Trip", nullptr));
        cTrip_Start_Button->setText(QApplication::translate("Custom_Trip", "Start Trip!", nullptr));
        Back_Button->setText(QApplication::translate("Custom_Trip", "Go Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Custom_Trip: public Ui_Custom_Trip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOM_TRIP_H
