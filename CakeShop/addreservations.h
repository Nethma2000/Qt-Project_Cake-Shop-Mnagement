#ifndef ADDRESERVATIONS_H
#define ADDRESERVATIONS_H

#include <QDialog>

#include "login.h"
namespace Ui {
class addreservations;
}

class addreservations : public QDialog
{
    Q_OBJECT

public:
    explicit addreservations(QWidget *parent = nullptr);
    ~addreservations();

private slots:
    void on_pushButton_reserve_clicked();

    void on_spinBox_partci_textChanged(const QString &arg1);

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_6_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_tableView_res_activated(const QModelIndex &index);

    void on_pushButton_7_clicked();

    void on_pushButton_11_clicked();

private:
    Ui::addreservations *ui;
};

#endif // ADDRESERVATIONS_H
