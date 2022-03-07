#ifndef MODIFYSUPPLIERS_H
#define MODIFYSUPPLIERS_H
#include "login.h"
#include <QDialog>

namespace Ui {
class modifysuppliers;
}

class modifysuppliers : public QDialog
{
    Q_OBJECT

public:
    explicit modifysuppliers(QWidget *parent = nullptr);
    ~modifysuppliers();

private slots:
    void on_pushButton_laodbysid_clicked();

    void on_pushButton_sloadall_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_pushButton_supup_clicked();

    void on_pushButton_supdel_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::modifysuppliers *ui;
};

#endif // MODIFYSUPPLIERS_H
