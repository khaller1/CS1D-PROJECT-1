#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <main.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(DataManager* inDM);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    DataManager* DM;
};

#endif // MAINWINDOW_H
