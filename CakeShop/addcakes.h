#ifndef ADDCAKES_H
#define ADDCAKES_H

#include <QDialog>
#include "login.h"
namespace Ui {
class AddCakes;
}

class AddCakes : public QDialog
{
    Q_OBJECT

public:
    explicit AddCakes(QWidget *parent = nullptr);
    ~AddCakes();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::AddCakes *ui;
};

#endif // ADDCAKES_H
