#ifndef ADDSUPPLIERS_H
#define ADDSUPPLIERS_H
#include "login.h"
#include <QDialog>

namespace Ui {
class addsuppliers;
}

class addsuppliers : public QDialog
{
    Q_OBJECT

public:
    explicit addsuppliers(QWidget *parent = nullptr);
    ~addsuppliers();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::addsuppliers *ui;
};

#endif // ADDSUPPLIERS_H
