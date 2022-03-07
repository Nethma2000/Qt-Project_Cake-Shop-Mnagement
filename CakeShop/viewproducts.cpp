#include "viewproducts.h"
#include "ui_viewproducts.h"
#include "addreservations.h"
#include "notepad.h"
#include "billing.h"
#include "managereservations.h"
#include <QMessageBox>

viewproducts::viewproducts(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewproducts)
{
    ui->setupUi(this);
    ui->comboBox_2->addItem("Cakes");
    ui->comboBox_2->addItem("Cake Pieces");
    ui->comboBox_2->addItem("Beverages");
}

viewproducts::~viewproducts()
{
    delete ui;
}

void viewproducts::on_pushButton_loadall_clicked()
{
    login conn;
    QSqlQueryModel *modal =new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry= new QSqlQuery(conn.cakeshopdb);
    qry->prepare("select * from products ");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
   conn.connClose();
    qDebug()<<(modal->rowCount());
}

void viewproducts::on_pushButton_searchbycat_clicked()
{
    login conn;
     QString pcatgory ;
    QSqlQueryModel *modal =new QSqlQueryModel();
 pcatgory=ui->comboBox_2->currentText();
    conn.connOpen();
    QSqlQuery* qry= new QSqlQuery(conn.cakeshopdb);
    qry->prepare("select * from products where category= '"+pcatgory+"'");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    conn.connClose();
    qDebug()<<(modal->rowCount());
}

void viewproducts::on_pushButton_delete_clicked()
{


}


void viewproducts::on_tableView_activated(const QModelIndex &index)
{

}


void viewproducts::on_pushButton_clicked()
{
    this->hide();
    billing bil;
    bil.setModal(true);
    bil.exec();
}


void viewproducts::on_pushButton_3_clicked()
{
    viewproducts viewprod;
    viewprod.setModal(true);
    viewprod.exec();
}
void viewproducts::on_pushButton_4_clicked()
{
    addreservations addres;
    addres.setModal(true);
    addres.exec();
}
void viewproducts::on_pushButton_7_clicked()
{
    notepad *a = new notepad(this);
    a->show();
}

void viewproducts::on_pushButton_8_clicked()
{
    this->hide();
        login *a = new login(this);
        a->show();
}

void viewproducts::on_pushButton_10_clicked()
{
    this->hide();
    cashierhome cashhom;
    cashhom.setModal(true);
    cashhom.exec();
}


void viewproducts::on_pushButton_5_clicked()
{

    managereservations mngres;
    mngres.setModal(true);
    mngres.exec();
}

