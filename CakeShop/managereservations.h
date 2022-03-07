#ifndef MANAGERESERVATIONS_H
#define MANAGERESERVATIONS_H

#include <QDialog>
#include "login.h"
namespace Ui {
class managereservations;
}

class managereservations : public QDialog
{
    Q_OBJECT

public:
    explicit managereservations(QWidget *parent = nullptr);
    ~managereservations();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::managereservations *ui;
};

#endif // MANAGERESERVATIONS_H
