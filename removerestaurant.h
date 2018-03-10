#ifndef REMOVERESTAURANT_H
#define REMOVERESTAURANT_H

#include <QDialog>

namespace Ui {
class removeRestaurant;
}

class removeRestaurant : public QDialog
{
    Q_OBJECT

public:
    explicit removeRestaurant(QWidget *parent = 0);
    ~removeRestaurant();

private:
    Ui::removeRestaurant *ui;
};

#endif // REMOVERESTAURANT_H
