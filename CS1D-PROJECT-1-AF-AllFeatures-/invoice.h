#ifndef INVOICE_H
#define INVOICE_H

#include <QDialog>
#include <structs.h>
#include <main.h>
namespace Ui {
class Invoice;
}

class Invoice : public QDialog
{
    Q_OBJECT

public:
    explicit Invoice(DataManager *inDM, QVector<Purchase> &inCart, double TravelDist, QWidget *parent = 0);
    ~Invoice();
    void genInvoice();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Invoice *ui;
    DataManager* DM;
    QVector<Purchase> trip_Cart;
    cartTable* C_Table;
    double tSpent;
    QWidget *prev;
};

#endif // INVOICE_H
