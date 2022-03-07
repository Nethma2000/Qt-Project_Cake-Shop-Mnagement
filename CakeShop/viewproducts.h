#ifndef VIEWPRODUCTS_H
#define VIEWPRODUCTS_H
#include "login.h"
#include <QDialog>

namespace Ui {
class viewproducts;
}

class viewproducts : public QDialog
{
    Q_OBJECT

public:
    explicit viewproducts(QWidget *parent = nullptr);
    ~viewproducts();

private slots:
    void on_pushButton_loadall_clicked();

    void on_pushButton_searchbycat_clicked();

    void on_pushButton_delete_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::viewproducts *ui;
};

#endif // VIEWPRODUCTS_H
