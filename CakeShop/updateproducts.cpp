#include "updateproducts.h"
#include "ui_updateproducts.h"
#include "adminhome.h"
#include "addcakes.h"
#include "addsuppliers.h"
#include "modifysuppliers.h"
#include "addreservations.h"
#include "notepad.h"
#include <QMessageBox>

updateproducts::updateproducts(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::updateproducts)
{
    ui->setupUi(this);
    ui->comboBox_upp->addItem("Cakes");
    ui->comboBox_upp->addItem("Cake Pieces");
    ui->comboBox_upp->addItem("Beverages");
    ui->comboBox->addItem("Cakes");
    ui->comboBox->addItem("Cake Pieces");
    ui->comboBox->addItem("Beverages");
}

updateproducts::~updateproducts()
{
    delete ui;
}

void updateproducts::on_tableView_up_activated(const QModelIndex &index)
{
   QString val=ui->tableView_up->model()->data(index).toString();
   login conn;
   if(!conn.connOpen()){
       qDebug()<< "failed to open database";
       return;
   }
          conn.connOpen();
          QSqlQuery qry;
          qry.prepare("select * from products where product_id='"+val+"' or product_name='"+val+"' or unit_price='"+val+"' or category='"+val+"' or description='"+val+"'");

          if(qry.exec()){
              while(qry.next()){
                  ui->lineEdit_upid->setText(qry.value(0).toString());
                  ui->lineEdit_upname->setText(qry.value(1).toString());
                  ui->lineEdit_upprice->setText(qry.value(2).toString());

                     ui->comboBox_upp->setCurrentText(qry.value(3).toString());
                  ui->lineEdit_updes->setText(qry.value(4).toString());
              }
              conn.connClose();

          }
          else{
                 QMessageBox::critical(this,tr("error"),qry.lastError().text());
          }
}




void updateproducts::on_pushButton_uload_clicked()
{
    login conn;
    QSqlQueryModel *modal =new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry= new QSqlQuery(conn.cakeshopdb);
    qry->prepare("select * from products ");
    qry->exec();

    modal->setQuery(*qry);
    ui->tableView_up->setModel(modal);

    conn.connClose();
    qDebug()<<(modal->rowCount());
}


void updateproducts::on_pushButton_update_clicked()
{
    login conn;
    QString pid,pname,pdes,pprice,pcategory;

    pid=ui->lineEdit_upid->text();
    pname=ui->lineEdit_upname->text();
    pprice=ui->lineEdit_upprice->text();
//    pcategory=ui->lineEdit_upcat->text();
    pcategory=ui->comboBox_upp->currentText();
    pdes=ui->lineEdit_updes->text();

    if(!conn.connOpen()){
            qDebug()<<"Failed to open the database";
            return;
}
            conn.connOpen();
            QSqlQuery qry;
            qry.prepare("update products set product_name = '"+pname+"',unit_price='"+pprice+"',category='"+pcategory+"',description='"+pdes+"' where product_id='"+pid+"'");

            if(qry.exec()){
                   QMessageBox::critical(this,tr("update"),tr("updated"));
                   conn.connClose();

            }
            else{
                QMessageBox::critical(this,tr("error"),qry.lastError().text());
            }
}


void updateproducts::on_pushButton_delete_clicked()
{
    login conn;
    QString pid,pname,pdes,pprice,pcategory;

    pid=ui->lineEdit_upid->text();
//    pname=ui->lineEdit_upname->text();
//    pprice=ui->lineEdit_upprice->text();

//    pcategory=ui->comboBox_upp->currentText();
//    pdes=ui->lineEdit_updes->text();

    if(!conn.connOpen()){
            qDebug()<<"Failed to open the database";
            return;
}
            conn.connOpen();
            QSqlQuery qry;
            qry.prepare("Delete from products where product_id ='"+pid+"'");

            if(qry.exec()){
                   QMessageBox::critical(this,tr("delete"),tr("deleted"));
                   conn.connClose();

            }
            else{
                QMessageBox::critical(this,tr("error"),qry.lastError().text());
            }
}


void updateproducts::on_pushButton_clicked()
{
    login conn;
     QString pcatgory ;
    QSqlQueryModel *modal =new QSqlQueryModel();
 pcatgory=ui->comboBox->currentText();
    conn.connOpen();
    QSqlQuery* qry= new QSqlQuery(conn.cakeshopdb);
    qry->prepare("select * from products where category= '"+pcatgory+"'");
    qry->exec();

    modal->setQuery(*qry);
    ui->tableView_up->setModel(modal);

    conn.connClose();
    qDebug()<<(modal->rowCount());
}


void updateproducts::on_pushButton_10_clicked()
{
    this->hide();
    adminhome adhom;
    adhom.setModal(true);
    adhom.exec();
}


void updateproducts::on_pushButton_2_clicked()
{
    this->hide();
    AddCakes addcake;
    addcake.setModal(true);
    addcake.exec();
}


void updateproducts::on_pushButton_3_clicked()
{

    updateproducts updateprod;
    updateprod.setModal(true);
    updateprod.exec();
}


void updateproducts::on_pushButton_4_clicked()
{
    this->hide();
    addsuppliers addsup;
    addsup.setModal(true);
    addsup.exec();
}


void updateproducts::on_pushButton_5_clicked()
{
    this->hide();
    modifysuppliers modsup;
    modsup.setModal(true);
    modsup.exec();
}


void updateproducts::on_pushButton_6_clicked()
{
    addreservations addreser;
    addreser.setModal(true);
    addreser.exec();
}


void updateproducts::on_pushButton_7_clicked()
{
    notepad *a = new notepad(this);
    a->show();
}


void updateproducts::on_pushButton_8_clicked()
{
    this->hide();
    login *a = new login(this);
    a->show();
}

