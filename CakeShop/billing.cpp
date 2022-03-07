#include "billing.h"
#include "ui_billing.h"
#include "addreservations.h"
#include "viewproducts.h"
#include "managereservations.h"
#include "notepad.h"
#include <QMessageBox>

billing::billing(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::billing)
{
    ui->setupUi(this);
}

billing::~billing()
{
    delete ui;
}

void billing::on_pushButton_clicked()
{
    login conn;
     QString pcatgory ;
    QSqlQueryModel *modal =new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry= new QSqlQuery(conn.cakeshopdb);
    qry->prepare("select * from products where category='Cakes'");
    qry->exec();

    modal->setQuery(*qry);
    ui->tableView->setModel(modal);

    conn.connClose();
    qDebug()<<(modal->rowCount());
}


void billing::on_pushButton_2_clicked()
{
    login conn;
     QString pcatgory ;
    QSqlQueryModel *modal =new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry= new QSqlQuery(conn.cakeshopdb);
    qry->prepare("select * from products where category='Cake Pieces'");
    qry->exec();

    modal->setQuery(*qry);
    ui->tableView->setModel(modal);

    conn.connClose();
    qDebug()<<(modal->rowCount());
}


void billing::on_pushButton_3_clicked()
{
    login conn;
     QString pcatgory ;
    QSqlQueryModel *modal =new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry= new QSqlQuery(conn.cakeshopdb);
    qry->prepare("select product_id,product_name,unit_price,description from products where category='Beverages'");
    qry->exec();

    modal->setQuery(*qry);
    ui->tableView->setModel(modal);

    conn.connClose();
    qDebug()<<(modal->rowCount());
}

int uprice;
int qty;
int tprice;

void billing::on_tableView_activated(const QModelIndex &index)
{
    QString val=ui->tableView->model()->data(index).toString();
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
                   ui->lineEdit_bid->setText(qry.value(0).toString());
                   ui->lineEdit_bname->setText(qry.value(1).toString());
                   ui->lineEdit_bprice->setText(qry.value(2).toString());

               }
               conn.connClose();

           }
           else{
                  QMessageBox::critical(this,tr("error"),qry.lastError().text());
           }
}

void billing::on_pushButton_4_clicked()
{

    int uprice=ui->lineEdit_bprice->text().toInt();
    int qty=ui->spinBox_qty->text().toInt();

    int tprice=uprice * qty;

      ui->lineEdit_tprice->setText(QString::number(tprice));




 int m= ui->tableWidget->rowCount() + 1;
 ui->tableWidget->setColumnCount(5);
 ui->tableWidget->setRowCount(m);
 ui->tableWidget->setItem(m-1, 0, new QTableWidgetItem(ui->lineEdit_bid->text()));
 ui->tableWidget->setItem(m-1, 1, new QTableWidgetItem(ui->lineEdit_bname->text()));
 ui->tableWidget->setItem(m-1, 2, new QTableWidgetItem(ui->lineEdit_bprice->text()));
ui->tableWidget->setItem(m-1, 3, new QTableWidgetItem(ui->spinBox_qty->text()));
ui->tableWidget->setItem(m-1, 4, new QTableWidgetItem(ui->lineEdit_tprice->text()));
 }
void billing::on_spinBox_qty_textChanged(const QString &arg1)
{
    int uprice=ui->lineEdit_bprice->text().toInt();
    int qty=ui->spinBox_qty->text().toInt();
    int tprice=uprice * qty;

      ui->lineEdit_tprice->setText(QString::number(tprice));
}

void billing::on_lineEdit_paid_textChanged(const QString &arg1)
{

}

void billing::on_pushButton_totget_clicked()
{

    int sum=0;

    for (int i=0;i< ui->tableWidget->rowCount();i++) {
     //  int j=ui->tableWidget->setColumnCount(5);
          for (int j=0;j< ui->tableWidget->columnCount();j++) {
             // ui->lineEdit_total->setText(QString::number(j));
              if(j==4){
                QTableWidgetItem *item =  ui->tableWidget->item(i,j);
                if ( ! item )  continue;
                int value = item->text().toInt(); // get its value
               sum+=value;
                         ui->lineEdit_total->setText(QString::number(sum));

                            //tsub=ui->lineEdit_total->setText(QString::number(sum));
}
            }


        }

}


void billing::on_pushButton_8_clicked()
{
    this->hide();
        login *a = new login(this);
        a->show();
}


void billing::on_pushButton_5_clicked()
{

    billing bil;
    bil.setModal(true);
    bil.exec();
}


void billing::on_pushButton_10_clicked()
{
    this->hide();
    viewproducts viewprod;
    viewprod.setModal(true);
    viewprod.exec();
}


void billing::on_pushButton_11_clicked()
{
this->hide();
    addreservations addres;
    addres.setModal(true);
    addres.exec();
}


void billing::on_pushButton_6_clicked()
{
    notepad *a = new notepad(this);
    a->show();
}

void billing::on_pushButton_13_clicked()
{
    this->hide();
    cashierhome cashhom;
    cashhom.setModal(true);
    cashhom.exec();
}

void billing::on_pushButton_7_clicked()
{
    QString paid,subtot,balance;
    paid=ui->lineEdit_paid->text();
    subtot=ui->lineEdit_total->text();

    int ret=paid.toInt() - subtot.toInt();
    ui->lineEdit_2_balance->setText(QString::number(ret));
}

void billing::on_pushButton_9_clicked()
{
    managereservations mngres;
    mngres.setModal(true);
    mngres.exec();
}

