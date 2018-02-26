#ifndef TRIPVIEW_H
#define TRIPVIEW_H

#include <QMainWindow>

namespace Ui {
class TripView;
}

class TripView : public QMainWindow
{
    Q_OBJECT

public:
    explicit TripView(QWidget *parent = 0);
    ~TripView();

private:
    Ui::TripView *ui;
};

#endif // TRIPVIEW_H
