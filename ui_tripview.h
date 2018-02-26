/********************************************************************************
** Form generated from reading UI file 'tripview.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRIPVIEW_H
#define UI_TRIPVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TripView
{
public:
    QWidget *centralwidget;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QTableView *Trip_List;
    QTabWidget *tabWidget;
    QWidget *Menu_Tab;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QTableView *Menu_List;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *selector_box;
    QSpinBox *qty_box;
    QSpacerItem *verticalSpacer;
    QLabel *Total_Label;
    QPushButton *pushButton_2;
    QWidget *Cart_Tab;
    QGridLayout *gridLayout;
    QTableView *Cart_Table;

    void setupUi(QMainWindow *TripView)
    {
        if (TripView->objectName().isEmpty())
            TripView->setObjectName(QStringLiteral("TripView"));
        TripView->resize(740, 329);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(TripView->sizePolicy().hasHeightForWidth());
        TripView->setSizePolicy(sizePolicy);
        TripView->setMinimumSize(QSize(0, 0));
        centralwidget = new QWidget(TripView);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        formLayout = new QFormLayout(centralwidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 1);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        Trip_List = new QTableView(centralwidget);
        Trip_List->setObjectName(QStringLiteral("Trip_List"));

        verticalLayout->addWidget(Trip_List);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        Menu_Tab = new QWidget();
        Menu_Tab->setObjectName(QStringLiteral("Menu_Tab"));
        gridLayout_3 = new QGridLayout(Menu_Tab);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Menu_List = new QTableView(Menu_Tab);
        Menu_List->setObjectName(QStringLiteral("Menu_List"));

        horizontalLayout->addWidget(Menu_List);


        gridLayout_2->addLayout(horizontalLayout, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        selector_box = new QComboBox(Menu_Tab);
        selector_box->setObjectName(QStringLiteral("selector_box"));

        horizontalLayout_2->addWidget(selector_box);

        qty_box = new QSpinBox(Menu_Tab);
        qty_box->setObjectName(QStringLiteral("qty_box"));

        horizontalLayout_2->addWidget(qty_box);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(5, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        Total_Label = new QLabel(Menu_Tab);
        Total_Label->setObjectName(QStringLiteral("Total_Label"));

        verticalLayout_2->addWidget(Total_Label);

        pushButton_2 = new QPushButton(Menu_Tab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);


        gridLayout_3->addLayout(verticalLayout_2, 0, 1, 1, 1);

        tabWidget->addTab(Menu_Tab, QString());
        Cart_Tab = new QWidget();
        Cart_Tab->setObjectName(QStringLiteral("Cart_Tab"));
        gridLayout = new QGridLayout(Cart_Tab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Cart_Table = new QTableView(Cart_Tab);
        Cart_Table->setObjectName(QStringLiteral("Cart_Table"));

        gridLayout->addWidget(Cart_Table, 0, 0, 1, 1);

        tabWidget->addTab(Cart_Tab, QString());

        formLayout->setWidget(0, QFormLayout::FieldRole, tabWidget);

        TripView->setCentralWidget(centralwidget);

        retranslateUi(TripView);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TripView);
    } // setupUi

    void retranslateUi(QMainWindow *TripView)
    {
        TripView->setWindowTitle(QApplication::translate("TripView", "MainWindow", 0));
        pushButton->setText(QApplication::translate("TripView", "Next Restaurant", 0));
        Total_Label->setText(QApplication::translate("TripView", "Cost of item * qty goes here", 0));
        pushButton_2->setText(QApplication::translate("TripView", "Add To Cart", 0));
        tabWidget->setTabText(tabWidget->indexOf(Menu_Tab), QApplication::translate("TripView", "Menu", 0));
        tabWidget->setTabText(tabWidget->indexOf(Cart_Tab), QApplication::translate("TripView", "Cart", 0));
    } // retranslateUi

};

namespace Ui {
    class TripView: public Ui_TripView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRIPVIEW_H
