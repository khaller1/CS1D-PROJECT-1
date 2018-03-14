/********************************************************************************
** Form generated from reading UI file 'adddistance.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDISTANCE_H
#define UI_ADDDISTANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_adddistance
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_source;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_miles;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_destination;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_add;
    QPushButton *pushButton_exit;

    void setupUi(QDialog *adddistance)
    {
        if (adddistance->objectName().isEmpty())
            adddistance->setObjectName(QStringLiteral("adddistance"));
        adddistance->resize(459, 137);
        gridLayout = new QGridLayout(adddistance);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(adddistance);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lineEdit_source = new QLineEdit(adddistance);
        lineEdit_source->setObjectName(QStringLiteral("lineEdit_source"));

        verticalLayout->addWidget(lineEdit_source);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(adddistance);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        lineEdit_miles = new QLineEdit(adddistance);
        lineEdit_miles->setObjectName(QStringLiteral("lineEdit_miles"));

        verticalLayout_2->addWidget(lineEdit_miles);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(adddistance);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        lineEdit_destination = new QLineEdit(adddistance);
        lineEdit_destination->setObjectName(QStringLiteral("lineEdit_destination"));

        verticalLayout_3->addWidget(lineEdit_destination);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        pushButton_add = new QPushButton(adddistance);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));

        verticalLayout_4->addWidget(pushButton_add);

        pushButton_exit = new QPushButton(adddistance);
        pushButton_exit->setObjectName(QStringLiteral("pushButton_exit"));

        verticalLayout_4->addWidget(pushButton_exit);


        verticalLayout_5->addLayout(verticalLayout_4);


        gridLayout->addLayout(verticalLayout_5, 0, 0, 1, 1);


        retranslateUi(adddistance);

        QMetaObject::connectSlotsByName(adddistance);
    } // setupUi

    void retranslateUi(QDialog *adddistance)
    {
        adddistance->setWindowTitle(QApplication::translate("adddistance", "Dialog", nullptr));
        label->setText(QApplication::translate("adddistance", "Source ID", nullptr));
        label_2->setText(QApplication::translate("adddistance", "Miles", nullptr));
        label_3->setText(QApplication::translate("adddistance", "Destination ID", nullptr));
        pushButton_add->setText(QApplication::translate("adddistance", "Add", nullptr));
        pushButton_exit->setText(QApplication::translate("adddistance", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adddistance: public Ui_adddistance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDISTANCE_H
