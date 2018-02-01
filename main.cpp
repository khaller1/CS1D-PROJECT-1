#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <dbmanager.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
  //  w.show();

    DbManager db("/Users/seanmitchell/Downloads/database.db");
    if (db.isOpen())
    {
        //db.createTable();   // Creates a table if it doens't exist. Otherwise, it will use existing table.
        db.addRestaurant(12, "bobs burgers", 24.2, 3);
        db.printAllRestaurants();

        db.removeRestaurant(12);
        db.setRestName("ayylmao", 11);
        db.printAllRestaurants();

        qDebug() << db.getRestName(11);

        db.addMenuItem(11,"lajvbdkvb", 3.99);
        db.removeMenuItem("lajvbdkvb");

        //db.addDistance(11,91.2,1);
        db.removeDistance(11,1);


//        db.removeAllPersons();
    }
    else
    {
        qDebug() << "Database is not open!";
    }

    return a.exec();
}
