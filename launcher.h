#ifndef LAUNCHER_H
#define LAUNCHER_H

#include <QMainWindow>
#include <main.h>
/** \class Launcher
 * Class to display a launch window to allow access to other features
 */
namespace Ui {
class Launcher;
}

class Launcher : public QMainWindow
{
    Q_OBJECT

public:
    explicit Launcher(DataManager* inDM, QWidget * parent=0); /// Constructor
    ~Launcher(); /// Destructor

private slots:
    void on_ViewRestaurant_Button_clicked(); /// Displays Restaurant Tables

    void on_Exit_Button_clicked(); /// Exits program

    void on_ViewMenu_Button_clicked(); /// Displays menu tables

    void on_AdminLogin_Button_clicked(); /// Allows admin login

    void on_QuickTrip_Button_clicked(); /// Generates quick trip and begins trip

    void on_CustomTrip_Button_clicked(); /// Allows user to generate custom trip

private:
    Ui::Launcher *ui; /// UI Element
    DataManager* DM; /// Data Access
};

#endif // LAUNCHER_H
