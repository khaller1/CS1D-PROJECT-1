/********************************************************************************
** Form generated from reading UI file 'viewrest.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWREST_H
#define UI_VIEWREST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_viewRest
{
public:
    QGridLayout *gridLayout;
    QTableView *Restaurant_Table;
    QPushButton *Exit_Button;

    void setupUi(QDialog *viewRest)
    {
        if (viewRest->objectName().isEmpty())
            viewRest->setObjectName(QStringLiteral("viewRest"));
        viewRest->resize(553, 362);
        viewRest->setMinimumSize(QSize(553, 362));
        viewRest->setMaximumSize(QSize(553, 362));
        gridLayout = new QGridLayout(viewRest);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Restaurant_Table = new QTableView(viewRest);
        Restaurant_Table->setObjectName(QStringLiteral("Restaurant_Table"));

        gridLayout->addWidget(Restaurant_Table, 0, 0, 1, 1);

        Exit_Button = new QPushButton(viewRest);
        Exit_Button->setObjectName(QStringLiteral("Exit_Button"));

        gridLayout->addWidget(Exit_Button, 1, 0, 1, 1);


        retranslateUi(viewRest);

        QMetaObject::connectSlotsByName(viewRest);
    } // setupUi

    void retranslateUi(QDialog *viewRest)
    {
        viewRest->setWindowTitle(QApplication::translate("viewRest", "Dialog", nullptr));
        Exit_Button->setText(QApplication::translate("viewRest", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewRest: public Ui_viewRest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWREST_H
