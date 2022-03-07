#include "addcakes.h"
#include "ui_addcakes.h"
#include "updateproducts.h"
#include "adminhome.h"
#include "addsuppliers.h"
#include "modifysuppliers.h"
#include "addreservations.h"
#include "notepad.h"
#include <QMessageBox>

AddCakes::AddCakes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddCakes)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Cakes");
    ui->comboBox->addItem("Cake Pieces");
    ui->comboBox->addItem("Beverages");
    login conn;

            if(!conn.connOpen())
                ui->label_6->setText("failed to connect");
            else
                ui->label_6->setText("connected to database");

}

AddCakes::~AddCakes()
{
    delete ui;
}

void AddCakes::on_pushButton_clicked()
{
    login conn;
    QString pid,pname,pdes,pprice,pcategory;

    pid=ui->lineEdit_pid->text();
    pname=ui->lineEdit_pname->text();
    pprice=ui->lineEdit_pprice->text();
    pcategory=ui->comboBox->currentText();
    pdes=ui->lineEdit_pdes->text();

    if(!conn.connOpen()){
            qDebug()<<"Failed to open the database";
            return;
}
            conn.connOpen();
            QSqlQuery qry;
            qry.prepare("insert into products (product_id,product_name,unit_price,category,description) values ('"+pid+"','"+pname+"','"+pprice+"','"+pcategory+"','"+pdes+"')");

            if(qry.exec()){
                   QMessageBox::critical(this,tr("save"),tr("saved"));
                   conn.connClose();

            }
            else{
                QMessageBox::critical(this,tr("error"),qry.lastError().text());
            }
}


void AddCakes::on_pushButton_10_clicked()
{

    this->hide();
    adminhome adhom;
    adhom.setModal(true);
    adhom.exec();
}


void AddCakes::on_pushButton_2_clicked()
{
    this->hide();
    AddCakes addcake;
    addcake.setModal(true);
    addcake.exec();
}


void AddCakes::on_pushButton_3_clicked()
{
    this->hide();
    updateproducts updateprod;
    updateprod.setModal(true);
    updateprod.exec();
}


void AddCakes::on_pushButton_4_clicked()
{
    this->hide();
    addsuppliers addsup;
    addsup.setModal(true);
    addsup.exec();
}


void AddCakes::on_pushButton_5_clicked()
{
    this->hide();
    modifysuppliers modsup;
    modsup.setModal(true);
    modsup.exec();
}


void AddCakes::on_pushButton_6_clicked()
{
    addreservations addreser;
    addreser.setModal(true);
    addreser.exec();
}


void AddCakes::on_pushButton_7_clicked()
{
    notepad *a = new notepad(this);
    a->show();
}


void AddCakes::on_pushButton_8_clicked()
{
    this->hide();
    login *a = new login(this);
    a->show();
}

