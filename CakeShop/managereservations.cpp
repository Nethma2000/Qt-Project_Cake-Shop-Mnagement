#include "managereservations.h"
#include "ui_managereservations.h"
#include "cashierhome.h"
#include <QMessageBox>

managereservations::managereservations(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::managereservations)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Birthday Party");
    ui->comboBox->addItem("Anniversarys");
    ui->comboBox->addItem("Casual Treats");
    ui->comboBox->addItem("Bachelor Party");
     ui->comboBox->addItem("Get Together");
      ui->comboBox->addItem("Other");

      ui->comboBox_3->addItem("Birthday Party");
      ui->comboBox_3->addItem("Anniversarys");
      ui->comboBox_3->addItem("Casual Treats");
      ui->comboBox_3->addItem("Bachelor Party");
       ui->comboBox_3->addItem("Get Together");
        ui->comboBox_3->addItem("Other");

       ui->comboBox_2->addItem("1");
        ui->comboBox_2->addItem("2");
        ui->comboBox_2->addItem("3");
         ui->comboBox_2->addItem("4");
          ui->comboBox_2->addItem("5");


          ui->comboBox_4->addItem("1");
           ui->comboBox_4->addItem("2");
           ui->comboBox_4->addItem("3");
            ui->comboBox_4->addItem("4");
             ui->comboBox_4->addItem("5");
}

managereservations::~managereservations()
{
    delete ui;
}
void managereservations::on_pushButton_4_clicked()
{
    login conn;
     QString id ;
    QSqlQueryModel *modal =new QSqlQueryModel();
 id=ui->lineEdit->text();
    conn.connOpen();
    QSqlQuery* qry= new QSqlQuery(conn.cakeshopdb);
    qry->prepare("select * from reservations where res_id= '"+id+"'");
    qry->exec();

    modal->setQuery(*qry);
    ui->tableView->setModel(modal);

    conn.connClose();
    qDebug()<<(modal->rowCount());
}

void managereservations::on_pushButton_clicked()
{
    login conn;
     QString resdate ;
    QSqlQueryModel *modal =new QSqlQueryModel();
 resdate=ui->dateEdit->text();
    conn.connOpen();
    QSqlQuery* qry= new QSqlQuery(conn.cakeshopdb);
    qry->prepare("select * from reservations where reserved_date= '"+resdate+"'");
    qry->exec();

    modal->setQuery(*qry);
    ui->tableView->setModel(modal);

    conn.connClose();
    qDebug()<<(modal->rowCount());
}


void managereservations::on_pushButton_2_clicked()
{
    login conn;
     QString funt ;
    QSqlQueryModel *modal =new QSqlQueryModel();
 funt=ui->comboBox->currentText();
    conn.connOpen();
    QSqlQuery* qry= new QSqlQuery(conn.cakeshopdb);
    qry->prepare("select * from reservations where funcion_type= '"+funt+"'");
    qry->exec();

    modal->setQuery(*qry);
    ui->tableView->setModel(modal);

    conn.connClose();
    qDebug()<<(modal->rowCount());
}


void managereservations::on_pushButton_3_clicked()
{
    login conn;
     QString hl ;
    QSqlQueryModel *modal =new QSqlQueryModel();
 hl=ui->comboBox_2->currentText();
    conn.connOpen();
    QSqlQuery* qry= new QSqlQuery(conn.cakeshopdb);
    qry->prepare("select * from reservations where hall_id= '"+hl+"'");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    conn.connClose();
    qDebug()<<(modal->rowCount());
}

void managereservations::on_pushButton_5_clicked()
{
    login conn;
    QSqlQueryModel *modal =new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry= new QSqlQuery(conn.cakeshopdb);
    qry->prepare("select * from reservations ");
    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);
    conn.connClose();
    qDebug()<<(modal->rowCount());
}


void managereservations::on_tableView_activated(const QModelIndex &index)
{
    QString valu=ui->tableView->model()->data(index).toString();
    login conn;
    if(!conn.connOpen()){

        qDebug()<< "failed to open database";
        return;

    }
           conn.connOpen();
           QSqlQuery qry;
           qry.prepare("select * from reservations where res_id='"+valu+"' or funcion_type='"+valu+"' or customer_name='"+valu+"' or customer_contact='"+valu+"' /*or reservation_placed_date='"+valu+"' or reserved_date='"+valu+"' or reserved_time='"+valu+"' or duration='"+valu+"' or participants='"+valu+"' or hall_id='"+valu+"'");

           if(qry.exec()){
               while(qry.next()){
                   ui->lineEdit_2->setText(qry.value(0).toString());
                   ui->comboBox_3->setCurrentText(qry.value(1).toString());
                   ui->lineEdit_3->setText(qry.value(2).toString());
                   ui->lineEdit_4->setText(qry.value(3).toString());
                   ui->dateEdit_2->setDate(qry.value(4).toDate());
                   ui->dateEdit_3->setDate(qry.value(5).toDate());
                   ui->timeEdit->setTime(qry.value(6).toTime());
                   ui->spinBox->setValue(qry.value(7).toInt());
                   ui->spinBox_2->setValue(qry.value(8).toInt());
                  ui->comboBox_4->setCurrentText(qry.value(10).toString());

               }
               conn.connClose();

           }
           else{
                  QMessageBox::critical(this,tr("error"),qry.lastError().text());
           }
}


void managereservations::on_pushButton_6_clicked()
{
//        login conn;
//        QString resid,fun,hall,name,mobile,currentday,neededday,start;
//        QString duration,participants,price;

//        resid=ui->lineEdit->text();
//        fun=ui->comboBox_3->currentText();
//        hall=ui->comboBox_4->currentText();
//        name=ui->lineEdit_3->text();
//        mobile=ui->lineEdit_4->text();
//        currentday=ui->dateEdit_2->text();
//        neededday=ui->dateEdit_3->text();
//        start=ui->timeEdit->text();
//         duration=ui->spinBox->text();
//        participants=ui->spinBox_2->text();
//        price=ui->lineEdit_5->text();

//        if(!conn.connOpen()){
//                qDebug()<<"Failed to open the database";
//                return;
//    }
//                conn.connOpen();
//                QSqlQuery qry;
//                qry.prepare("update products set funcion_type = '"+fun+"',customer_name='"+name+"',customer_contact='"+mobile+"',reservation_placed_date='"+currentday+"',reserved_date='"+neededday+"',reserved_time='"+start+"',duration='"+duration+"',participants='"+participants+"',price='"+price+"',hall_id='"+hall+"' where res_id='"+resid+"'");

//                if(qry.exec()){
//                       QMessageBox::critical(this,tr("update"),tr("updated"));
//                       conn.connClose();

//                }
//                else{
//                    QMessageBox::critical(this,tr("error"),qry.lastError().text());
//                }
}


void managereservations::on_pushButton_7_clicked()
{
    login conn;
    QString resi;

    resi=ui->lineEdit_2->text();
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
            qry.prepare("Delete from reservations where res_id ='"+resi+"'");

            if(qry.exec()){
                   QMessageBox::critical(this,tr("delete"),tr("deleted"));
                   conn.connClose();

            }
            else{
                QMessageBox::critical(this,tr("error"),qry.lastError().text());
            }
}

