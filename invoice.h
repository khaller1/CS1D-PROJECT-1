#ifndef INVOICE_H
#define INVOICE_H

#include <QDialog>
#include <structs.h>
#include <main.h>
/** \class Invoice
 * Class for displaying the end result of a trip
 */
namespace Ui {
class Invoice;
}

class Invoice : public QDialog
{
    Q_OBJECT

public:
    explicit Invoice(DataManager *inDM, QVector<Purchase> &inCart, double TravelDist, QWidget *parent = 0); /// Constructor
    ~Invoice(); /// Destructor
    void genInvoice(); /// Generates invoice values

private slots:
    void on_pushButton_clicked(); /// Closes the invoice window

private:
    Ui::Invoice *ui; /// UI element
    DataManager* DM; /// Data Access
    QVector<Purchase> trip_Cart; /// Cart values
    cartTable* C_Table; /// Table displaying cart values
    double tSpent; /// Total value spent
    QWidget* prev; /// Previous menu
};

#endif // INVOICE_H
