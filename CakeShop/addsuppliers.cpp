#include "addsuppliers.h"
#include "ui_addsuppliers.h"
#include "adminhome.h"
#include "addcakes.h"
#include "viewproducts.h"
#include "updateproducts.h"
#include "notepad.h"
#include "modifysuppliers.h"
#include "addreservations.h"
#include <QMessageBox>

addsuppliers::addsuppliers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addsuppliers)
{
    ui->setupUi(this);
    login conn;

}

addsuppliers::~addsuppliers()
{
    delete ui;
}

void addsuppliers::on_pushButton_2_clicked()
{
    login conn;
    QString sid,sname,scont,snic,semail,scompany,saddr,prods;

    sid=ui->lineEdit_sid->text();
    sname=ui->lineEdit_sname->text();
    scont=ui->lineEdit_scontact->text();
    snic=ui->lineEdit_snic->text();
    semail=ui->lineEdit_smail->text();
    scompany=ui->lineEdit_scomp->text();
    saddr=ui->lineEdit_saddress->text();
    prods=ui->lineEdit_prod->text();

    if(!conn.connOpen()){
            qDebug()<<"Failed to open the database";
            return;
}
            conn.connOpen();
            QSqlQuery qry;
            qry.prepare("insert into suppliers (supplier_id,supplier_name,contact_number,nic,email,company,address,supplying_products) values ('"+sid+"','"+sname+"','"+scont+"','"+snic+"','"+semail+"','"+scompany+"','"+saddr+"','"+prods+"')");

            // qry.prepare("insert into products (product_id,product_name,unit_price,category,description) values ('"+pid+"','"+pname+"','"+pprice+"','"+pcategory+"','"+pdes+"')");
            if(qry.exec()){
                   QMessageBox::critical(this,tr("save"),tr("saved"));
                   conn.connClose();

            }
            else{
                QMessageBox::critical(this,tr("error"),qry.lastError().text());
            }
}


void addsuppliers::on_pushButton_10_clicked()
{
    this->hide();
    adminhome adhom;
    adhom.setModal(true);
    adhom.exec();
}
void addsuppliers::on_pushButton_clicked()
{
    this->hide();
    AddCakes addcake;
    addcake.setModal(true);
    addcake.exec();
}
void addsuppliers::on_pushButton_3_clicked()
{
    this->hide();
    updateproducts updateprod;
    updateprod.setModal(true);
    updateprod.exec();
}

void addsuppliers::on_pushButton_4_clicked()
{

    addsuppliers addsup;
    addsup.setModal(true);
    addsup.exec();
}
void addsuppliers::on_pushButton_5_clicked()
{

    this->hide();
    modifysuppliers modsup;
    modsup.setModal(true);
    modsup.exec();
}
void addsuppliers::on_pushButton_6_clicked()
{

    addreservations addreser;
    addreser.setModal(true);
    addreser.exec();
}
void addsuppliers::on_pushButton_7_clicked()
{
    notepad *a = new notepad(this);
    a->show();
}
void addsuppliers::on_pushButton_8_clicked()
{

    this->hide();
    login *a = new login(this);
    a->show();
}

