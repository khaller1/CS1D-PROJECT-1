/********************************************************************************
** Form generated from reading UI file 'removerestaurant.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVERESTAURANT_H
#define UI_REMOVERESTAURANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_removeRestaurant
{
public:

    void setupUi(QDialog *removeRestaurant)
    {
        if (removeRestaurant->objectName().isEmpty())
            removeRestaurant->setObjectName(QStringLiteral("removeRestaurant"));
        removeRestaurant->resize(400, 300);

        retranslateUi(removeRestaurant);

        QMetaObject::connectSlotsByName(removeRestaurant);
    } // setupUi

    void retranslateUi(QDialog *removeRestaurant)
    {
        removeRestaurant->setWindowTitle(QApplication::translate("removeRestaurant", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class removeRestaurant: public Ui_removeRestaurant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVERESTAURANT_H
