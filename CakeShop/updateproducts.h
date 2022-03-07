#ifndef UPDATEPRODUCTS_H
#define UPDATEPRODUCTS_H
#include "login.h"
#include <QDialog>
#include "login.h"
namespace Ui {
class updateproducts;
}

class updateproducts : public QDialog
{
    Q_OBJECT

public:
    explicit updateproducts(QWidget *parent = nullptr);
    ~updateproducts();

private slots:
    void on_tableView_up_activated(const QModelIndex &index);

    void on_pushButton_uload_clicked();

    void on_pushButton_update_clicked();

    void on_pushButton_delete_clicked();

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
    Ui::updateproducts *ui;
};

#endif // UPDATEPRODUCTS_H
