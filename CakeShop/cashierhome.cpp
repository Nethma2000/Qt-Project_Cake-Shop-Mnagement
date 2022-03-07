#include "cashierhome.h"
#include "ui_cashierhome.h"
#include "billing.h"
#include "viewproducts.h"
#include "addreservations.h"
#include "notepad.h"
#include "managereservations.h"

cashierhome::cashierhome(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cashierhome)
{
    ui->setupUi(this);
}

cashierhome::~cashierhome()
{
    delete ui;
}

void cashierhome::on_pushButton_clicked()
{
    this->hide();
    billing bil;
    bil.setModal(true);
    bil.exec();
}


void cashierhome::on_pushButton_reserve_clicked()
{

    addreservations addres;
    addres.setModal(true);
    addres.exec();
}


void cashierhome::on_pushButton_2_clicked()
{
    this->hide();
    viewproducts viewprod;
    viewprod.setModal(true);
    viewprod.exec();
}


void cashierhome::on_pushButton_calculator_clicked()
{

//    calculator cal;
//    cal.setModal(true);
//    cal.exec();
}


void cashierhome::on_pushButton_3_clicked()
{
    this->hide();
    billing bil;
    bil.setModal(true);
    bil.exec();
}


void cashierhome::on_pushButton_5_clicked()
{
    this->hide();
    viewproducts viewprod;
    viewprod.setModal(true);
    viewprod.exec();
}


void cashierhome::on_pushButton_4_clicked()
{
    addreservations addres;
    addres.setModal(true);
    addres.exec();
}


void cashierhome::on_pushButton_addorder_clicked()
{
    notepad *a = new notepad(this);
    a->show();
}


void cashierhome::on_pushButton_7_clicked()
{
    notepad *a = new notepad(this);
    a->show();
}


void cashierhome::on_pushButton_8_clicked()
{
    this->hide();
        login *a = new login(this);
        a->show();
}


void cashierhome::on_pushButton_6_clicked()
{
    managereservations mngres;
    mngres.setModal(true);
    mngres.exec();
}


void cashierhome::on_pushButton_9_clicked()
{
    managereservations mngres;
    mngres.setModal(true);
    mngres.exec();
}

