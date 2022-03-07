#ifndef BILLING_H
#define BILLING_H

#include <QDialog>
#include "login.h"
namespace Ui {
class billing;
}

class billing : public QDialog
{
    Q_OBJECT

public:
    explicit billing(QWidget *parent = nullptr);
    ~billing();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_pushButton_4_clicked();

    void on_spinBox_qty_textChanged(const QString &arg1);

    void on_lineEdit_paid_textChanged(const QString &arg1);

    void on_pushButton_totget_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::billing *ui;
};

#endif // BILLING_H
