#ifndef ADDDISTANCE_H
#define ADDDISTANCE_H

#include <QDialog>
#include <main.h>
namespace Ui {
class adddistance;
}

class adddistance : public QDialog
{
    Q_OBJECT

public:
    explicit adddistance(DataManager* inDM, QWidget *parent = 0);
    ~adddistance();

private slots:
    void on_pushButton_add_clicked();

    void on_pushButton_exit_clicked();

private:
    Ui::adddistance *ui;
    QWidget *prev;
    DataManager* DM;
};

#endif // ADDDISTANCE_H
