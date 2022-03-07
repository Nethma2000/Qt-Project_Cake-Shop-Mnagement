#include "adminhome.h"
#include "ui_adminhome.h"
#include <QPixmap>
#include "addcakes.h"
#include "viewproducts.h"
#include "updateproducts.h"
#include "addsuppliers.h"
#include "modifysuppliers.h"
#include "addreservations.h"
#include "notepad.h"
adminhome::adminhome(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminhome)
{
    ui->setupUi(this);

    login conn;

            if(!conn.connOpen())
                ui->label_12->setText("failed to connect");
            else
                ui->label_12->setText("connected to database");
}

adminhome::~adminhome()
{
    delete ui;
}

void adminhome::on_pushButton_clicked()
{
    this->hide();
    AddCakes addcake;
    addcake.setModal(true);
    addcake.exec();
}


void adminhome::on_pushButton_addcake_clicked()
{
    this->hide();
    AddCakes addcake;
    addcake.setModal(true);
    addcake.exec();
}


void adminhome::on_pushButton_viewproducts_clicked()
{
//    this->hide();
//    viewproducts viewprod;
//    viewprod.setModal(true);
//    viewprod.exec();
}


void adminhome::on_pushButton_updateproducts_clicked()
{
    this->hide();
    updateproducts updateprod;
    updateprod.setModal(true);
    updateprod.exec();
}


void adminhome::on_pushButton_suppliers_clicked()
{
    this->hide();
    addsuppliers addsup;
    addsup.setModal(true);
    addsup.exec();
}


void adminhome::on_pushButton_9_clicked()
{
    this->hide();
    modifysuppliers modsup;
    modsup.setModal(true);
    modsup.exec();
}


void adminhome::on_pushButton_addnotes_clicked()
{

notepad *a = new notepad(this);
a->show();
//    notepad note=new notepad(this);
//    note->show();

//    notepad modsup;
//modsup.show();
}


void adminhome::on_pushButton_3_clicked()
{
    this->hide();
    updateproducts updateprod;
    updateprod.setModal(true);
    updateprod.exec();
}


void adminhome::on_pushButton_4_clicked()
{
    this->hide();
    addsuppliers addsup;
    addsup.setModal(true);
    addsup.exec();
}


void adminhome::on_pushButton_5_clicked()
{
    this->hide();
    modifysuppliers modsup;
    modsup.setModal(true);
    modsup.exec();
}


void adminhome::on_pushButton_2_clicked()
{

    addreservations addreser;
    addreser.setModal(true);
    addreser.exec();
}


void adminhome::on_pushButton_6_clicked()
{
    addreservations addreser;
    addreser.setModal(true);
    addreser.exec();
}


void adminhome::on_pushButton_8_clicked()
{
this->hide();
    login *a = new login(this);
    a->show();
}


void adminhome::on_pushButton_7_clicked()
{
    notepad *a = new notepad(this);
    a->show();
}


void adminhome::on_pushButton_10_clicked()
{

}

