#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <datamanager.h>
#include <dbmanager.h>

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(DataManager* inDM, QWidget *parent = 0);
    ~login();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::login *ui;
    DataManager* DM;
    QVector<AdminData> A_Data;
    QWidget* prev;
    QSqlDatabase db;
};

#endif // LOGIN_H
