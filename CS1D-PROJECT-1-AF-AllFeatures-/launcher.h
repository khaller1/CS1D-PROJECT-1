#ifndef LAUNCHER_H
#define LAUNCHER_H

#include <QMainWindow>
#include <main.h>

namespace Ui {
class Launcher;
}

class Launcher : public QMainWindow
{
    Q_OBJECT

public:
    explicit Launcher(DataManager* inDM, QWidget * parent=0);
    ~Launcher();

private slots:
    void on_ViewRestaurant_Button_clicked();

    void on_Exit_Button_clicked();

    void on_ViewMenu_Button_clicked();

    void on_AdminLogin_Button_clicked();

    void on_QuickTrip_Button_clicked();

    void on_CustomTrip_Button_clicked();

private:
    Ui::Launcher *ui;
    DataManager* DM;
};

#endif // LAUNCHER_H
