#ifndef CASHIERHOME_H
#define CASHIERHOME_H

#include <QDialog>

namespace Ui {
class cashierhome;
}

class cashierhome : public QDialog
{
    Q_OBJECT

public:
    explicit cashierhome(QWidget *parent = nullptr);
    ~cashierhome();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_reserve_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_calculator_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_addorder_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::cashierhome *ui;
};

#endif // CASHIERHOME_H
