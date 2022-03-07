#ifndef ADMINHOME_H
#define ADMINHOME_H

#include <QDialog>

#include "login.h"
namespace Ui {
class adminhome;
}

class adminhome : public QDialog
{
    Q_OBJECT

public:
    explicit adminhome(QWidget *parent = nullptr);
    ~adminhome();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_addcake_clicked();

    void on_pushButton_viewproducts_clicked();

    void on_pushButton_updateproducts_clicked();

    void on_pushButton_suppliers_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_addnotes_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::adminhome *ui;
};

#endif // ADMINHOME_H
