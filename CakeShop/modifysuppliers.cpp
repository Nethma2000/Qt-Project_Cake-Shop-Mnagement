#include "modifysuppliers.h"
#include "ui_modifysuppliers.h"
#include "adminhome.h"
#include "updateproducts.h"
#include "notepad.h"
#include "addsuppliers.h"
#include "addcakes.h"
#include "addreservations.h"
#include <QMessageBox>

modifysuppliers::modifysuppliers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modifysuppliers)
{
    ui->setupUi(this);
}

modifysuppliers::~modifysuppliers()
{
    delete ui;
}

void modifysuppliers::on_pushButton_laodbysid_clicked()
{
    login conn;
     QString usupid ;
    QSqlQueryModel *modal =new QSqlQueryModel();
 usupid=ui->lineEdit_searchbysid->text();
    conn.connOpen();
    QSqlQuery* qry= new QSqlQuery(conn.cakeshopdb);
    qry->prepare("select * from suppliers where supplier_id= '"+usupid+"'");
    qry->exec();

    modal->setQuery(*qry);
    ui->tableView->setModel(modal);

    conn.connClose();
    qDebug()<<(modal->rowCount());
}

void modifysuppliers::on_pushButton_sloadall_clicked()
{
    login conn;
    QSqlQueryModel *modal =new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry= new QSqlQuery(conn.cakeshopdb);
    qry->prepare("select * from suppliers ");
    qry->exec();

    modal->setQuery(*qry);
    ui->tableView->setModel(modal);

    conn.connClose();
    qDebug()<<(modal->rowCount());
}


void modifysuppliers::on_tableView_activated(const QModelIndex &index)
{
    QString val=ui->tableView->model()->data(index).toString();
    login conn;
    if(!conn.connOpen()){
        qDebug()<< "failed to open database";
        return;
    }
          conn.connOpen();
           QSqlQuery qry;
           qry.prepare("select * from suppliers where supplier_id='"+val+"' or supplier_name='"+val+"' or contact_number='"+val+"' or nic='"+val+"' or email='"+val+"'or company='"+val+"'or address='"+val+"'or supplying_products='"+val+"'");

           if(qry.exec()){
               while(qry.next()){
                   ui->lineEdit_usid->setText(qry.value(0).toString());
                   ui->lineEdit_usname->setText(qry.value(1).toString());
                   ui->lineEdit_uscont->setText(qry.value(2).toString());
                   ui->lineEdit_usnic->setText(qry.value(3).toString());
                   ui->lineEdit_usemail->setText(qry.value(4).toString());
                   ui->lineEdit_usaddr->setText(qry.value(6).toString());
                   ui->lineEdit_uscomp->setText(qry.value(5).toString());
                   ui->lineEdit_ussprod->setText(qry.value(7).toString());
               }
               conn.connClose();
           }
           else{
                  QMessageBox::critical(this,tr("error"),qry.lastError().text());
           }
}

void modifysuppliers::on_pushButton_supup_clicked()
{
    login conn;
    QString ussid,ussname,usscont,ussnic,ussmail,ussddre,usscompan,ussproducts;

    ussid=ui->lineEdit_usid->text();
    ussname=ui->lineEdit_usname->text();
    usscont=ui->lineEdit_uscont->text();
    ussnic=ui->lineEdit_usnic->text();
    ussmail=ui->lineEdit_usemail->text();
    ussddre=ui->lineEdit_usaddr->text();
    usscompan=ui->lineEdit_uscomp->text();
    ussproducts=ui->lineEdit_ussprod->text();

    if(!conn.connOpen()){
            qDebug()<<"Failed to open the database";
            return;
}
            conn.connOpen();
            QSqlQuery qry;
            qry.prepare("update suppliers set supplier_name = '"+ussname+"',contact_number='"+usscont+"',nic='"+ussnic+"',email='"+ussmail+"',company='"+usscompan+"',address='"+ussddre+"',supplying_products='"+ussproducts+"' where supplier_id='"+ussid+"'");

            if(qry.exec()){
                   QMessageBox::critical(this,tr("update"),tr("updated"));
                   conn.connClose();

            }
            else{
                QMessageBox::critical(this,tr("error"),qry.lastError().text());
            }
}


void modifysuppliers::on_pushButton_supdel_clicked()
{
    login conn;
     QString ussid,ussname,usscont,ussnic,ussmail,ussddre,usscompan,ussproducts;

    ussid=ui->lineEdit_usid->text();


    if(!conn.connOpen()){
            qDebug()<<"Failed to open the database";
            return;
}
            conn.connOpen();
            QSqlQuery qry;
            qry.prepare("Delete from suppliers where supplier_id ='"+ussid+"'");

            if(qry.exec()){
                   QMessageBox::critical(this,tr("delete"),tr("deleted"));
                   conn.connClose();

            }
            else{
                QMessageBox::critical(this,tr("error"),qry.lastError().text());
            }
}


void modifysuppliers::on_pushButton_10_clicked()
{
    this->hide();
    adminhome adhom;
    adhom.setModal(true);
    adhom.exec();
}
void modifysuppliers::on_pushButton_2_clicked()
{
    this->hide();
    AddCakes addcake;
    addcake.setModal(true);
    addcake.exec();
}
void modifysuppliers::on_pushButton_3_clicked()
{
    this->hide();
    updateproducts updateprod;
    updateprod.setModal(true);
    updateprod.exec();
}

void modifysuppliers::on_pushButton_4_clicked()
{
    this->hide();
    addsuppliers addsup;
    addsup.setModal(true);
    addsup.exec();
}
void modifysuppliers::on_pushButton_5_clicked()
{
    modifysuppliers modsup;
    modsup.setModal(true);
    modsup.exec();
}


void modifysuppliers::on_pushButton_6_clicked()
{
    addreservations addreser;
    addreser.setModal(true);
    addreser.exec();
}


void modifysuppliers::on_pushButton_7_clicked()
{
    notepad *a = new notepad(this);
    a->show();
}


void modifysuppliers::on_pushButton_8_clicked()
{

    this->hide();
    login *a = new login(this);
    a->show();
}

