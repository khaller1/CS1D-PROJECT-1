/********************************************************************************
** Form generated from reading UI file 'invoice.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVOICE_H
#define UI_INVOICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Invoice
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QTableView *Invoice_Table;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLabel *Total_Label;
    QLabel *Dist_Label;
    QPushButton *pushButton;

    void setupUi(QDialog *Invoice)
    {
        if (Invoice->objectName().isEmpty())
            Invoice->setObjectName(QStringLiteral("Invoice"));
        Invoice->resize(301, 306);
        gridLayout_2 = new QGridLayout(Invoice);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Invoice_Table = new QTableView(Invoice);
        Invoice_Table->setObjectName(QStringLiteral("Invoice_Table"));

        gridLayout->addWidget(Invoice_Table, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(Invoice);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        label = new QLabel(Invoice);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Total_Label = new QLabel(Invoice);
        Total_Label->setObjectName(QStringLiteral("Total_Label"));

        verticalLayout->addWidget(Total_Label);

        Dist_Label = new QLabel(Invoice);
        Dist_Label->setObjectName(QStringLiteral("Dist_Label"));

        verticalLayout->addWidget(Dist_Label);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_3);

        pushButton = new QPushButton(Invoice);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_3->addWidget(pushButton);


        gridLayout->addLayout(verticalLayout_3, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(Invoice);

        QMetaObject::connectSlotsByName(Invoice);
    } // setupUi

    void retranslateUi(QDialog *Invoice)
    {
        Invoice->setWindowTitle(QApplication::translate("Invoice", "Dialog", nullptr));
        label_3->setText(QApplication::translate("Invoice", "Total Spent:                      $", nullptr));
        label->setText(QApplication::translate("Invoice", "Distance Traveled:   (Miles)", nullptr));
        Total_Label->setText(QApplication::translate("Invoice", "TextLabel", nullptr));
        Dist_Label->setText(QApplication::translate("Invoice", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("Invoice", "Complete Trip", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Invoice: public Ui_Invoice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVOICE_H
