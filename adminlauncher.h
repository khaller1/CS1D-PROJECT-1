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
    void on_ViewRestaurant_Button_clicked();

    void on_ViewMenu_Button_clicked();

    void on_Exit_Button_clicked();

    void on_pushButton_clicked();


    void on_pushButton_addmenu_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_import_clicked();

    void on_QuickTrip_Button_clicked();

    void on_CustomTrip_Button_clicked();

private:
    Ui::adminLauncher *ui;
    DataManager* DM;
    QWidget* prev;
};

#endif // ADMINLAUNCHER_H
