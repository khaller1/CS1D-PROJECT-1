#ifndef ADMINLAUNCHER_H
#define ADMINLAUNCHER_H

#include <QDialog>
#include <main.h>
namespace Ui {
class adminLauncher;
}

class adminLauncher : public QDialog
{
    Q_OBJECT

public:
    explicit adminLauncher(DataManager* inDM, QWidget *parent = 0);
    ~adminLauncher();

private slots:
    void on_ViewRestaurant_Button_clicked();        //pulls up restaurant list

    void on_ViewMenu_Button_clicked();              //outputs menu list

    void on_Exit_Button_clicked();                  //closes the program

    void on_pushButton_clicked();               //opens edit restaurant window


    void on_pushButton_addmenu_clicked();      //opens edit menu window

    void on_pushButton_3_clicked();             //opens add distance window - obselete

    void on_pushButton_import_clicked();        //imports restaurants from text file

    void on_QuickTrip_Button_clicked();         //calculates quick trip

    void on_CustomTrip_Button_clicked();        //calculates custom trip

private:
    Ui::adminLauncher *ui;
    DataManager* DM;
    QWidget* prev;
};

#endif // ADMINLAUNCHER_H
