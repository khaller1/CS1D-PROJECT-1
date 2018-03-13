#include <QApplication>
#include <QDebug>
#include <main.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DataManager* DM;
    DM = new DataManager("database.db");
    Launcher *launchWindow;
    launchWindow = new Launcher(DM);

    launchWindow->show();

    return a.exec();
}
