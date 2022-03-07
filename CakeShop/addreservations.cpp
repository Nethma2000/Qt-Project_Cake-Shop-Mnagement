#include "addreservations.h"
#include "ui_addreservations.h"
#include "adminhome.h"
#include "cashierhome.h"

#include <QMessageBox>

addreservations::addreservations(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addreservations)
{
    ui->setupUi(this);
    ui->comboBox_fun->addItem("Birthday Party");
    ui->comboBox_fun->addItem("Anniversarys");
    ui->comboBox_fun->addItem("Casual Treats");
    ui->comboBox_fun->addItem("Bachelor Party");
     ui->comboBox_fun->addItem("Get Together");
      ui->comboBox_fun->addItem("Other");

       ui->comboBox_hall->addItem("1");
        ui->comboBox_hall->addItem("2");
        ui->comboBox_hall->addItem("3");
         ui->comboBox_hall->addItem("4");
          ui->comboBox_hall->addItem("5");

          ui->comboBox->addItem("Birthday Party");
          ui->comboBox->addItem("Anniversarys");
          ui->comboBox->addItem("Casual Treats");
          ui->comboBox->addItem("Bachelor Party");
           ui->comboBox->addItem("Get Together");
            ui->comboBox->addItem("Other");


            ui->comboBox_2->addItem("1");
             ui->comboBox_2->addItem("2");
             ui->comboBox_2->addItem("3");
              ui->comboBox_2->addItem("4");
               ui->comboBox_2->addItem("5");
    login conn;

            if(!conn.connOpen())
                ui->label_3->setText("failed to connect");
            else
                ui->label_3->setText("connected to database");
}
addreservations::~addreservations()
{
    delete ui;
}

 int duration,participants,pay;

void addreservations::on_pushButton_reserve_clicked()
{
    login conn;
    QString resid,fun,hall,name,mobile,currentday,neededday,start;
    QString duration,participants;

    resid=ui->lineEdit_resid->text();
    fun=ui->comboBox_fun->currentText();
    hall=ui->comboBox_hall->currentText();
    name=ui->lineEdit_cname->text();
    mobile=ui->lineEdit_ccontact->text();
    currentday=ui->dateEdit_pdate->text();
    neededday=ui->dateEdit_resdate->text();
    start=ui->timeEdit_start->text();
     duration=ui->spinBox_duration->text();
    participants=ui->spinBox_partci->text();

//    refresh=ui->checkBox_refesh->text();
//    deco=ui->checkBox_deco->text();
      int pay = participants.toInt()*300 + duration.toInt()*500;

//   ui->lineEdit_payment->setText(QString::number(pay));
//      ui->lineEdit_payment->setText(pay);
          ui->lineEdit_payment->setText(QString::number(pay));


    if(!conn.connOpen()){
            qDebug()<<"Failed to open the database";
            return;
}
            conn.connOpen();
            QSqlQuery qry;
           qry.prepare("insert into reservations (res_id,funcion_type,customer_name,customer_contact,reservation_placed_date,reserved_date,reserved_time,duration,participants,price,hall_id) values ('"+resid+"','"+fun+"','"+name+"','"+mobile+"','"+currentday+"','"+neededday+"','"+start+"','"+duration+"','"+participants+"','"+pay+"','"+hall+"')");

            if(qry.exec()){
                   QMessageBox::critical(this,tr("save"),tr("Reserved"));
                   conn.connClose();


            }
            else{
                QMessageBox::critical(this,tr("error"),qry.lastError().text());
            }
}


void addreservations::on_spinBox_partci_textChanged(const QString &arg1)
{
    QString duration,participants;

    duration=ui->spinBox_duration->text();
   participants=ui->spinBox_partci->text();

  int  pay = participants.toInt()*300 + duration.toInt()*500;

      ui->lineEdit_payment->setText(QString::number(pay));
}
void addreservations::on_pushButton_2_clicked()
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
    ui->tableView_res->setModel(modal);

    conn.connClose();
    qDebug()<<(modal->rowCount());
}


void addreservations::on_pushButton_5_clicked()
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
    ui->tableView_res->setModel(modal);
    conn.connClose();
    qDebug()<<(modal->rowCount());
}
void addreservations::on_pushButton_3_clicked()
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
    ui->tableView_res->setModel(modal);

    conn.connClose();
    qDebug()<<(modal->rowCount());
}


void addreservations::on_pushButton_4_clicked()
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
    ui->tableView_res->setModel(modal);

    conn.connClose();
    qDebug()<<(modal->rowCount());
}
void addreservations::on_pushButton_clicked()
{
    login conn;
    QSqlQueryModel *modal =new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery* qry= new QSqlQuery(conn.cakeshopdb);
    qry->prepare("select * from reservations ");
    qry->exec();

    modal->setQuery(*qry);
    ui->tableView_res->setModel(modal);

    conn.connClose();
    qDebug()<<(modal->rowCount());
}


void addreservations::on_pushButton_6_clicked()
{
//    login conn;
//    QString resid,fun,hall,name,mobile,currentday,neededday,start;
//    QString duration,participants;

//    resid=ui->lineEdit_resid->text();
//    fun=ui->comboBox_fun->currentText();
//    hall=ui->comboBox_hall->currentText();
//    name=ui->lineEdit_cname->text();
//    mobile=ui->lineEdit_ccontact->text();
//    currentday=ui->dateEdit_pdate->text();
//    neededday=ui->dateEdit_resdate->text();
//    start=ui->timeEdit_start->text();
//     duration=ui->spinBox_duration->text();
//    participants=ui->spinBox_partci->text();

//    if(!conn.connOpen()){
//            qDebug()<<"Failed to open the database";
//            return;
//}
//            conn.connOpen();
//            QSqlQuery qry;
//            qry.prepare("update products set funcion_type = '"+fun+"',customer_name='"+name+"',customer_contact='"+mobile+"',reservation_placed_date='"+currentday+"',reserved_date='"+neededday+"',,reserved_time='"+start+"',duration='"+duration+"',participants='"+participants+"',hall_id='"+hall+"' where res_id='"+resid+"'");

//            if(qry.exec()){
//                   QMessageBox::critical(this,tr("update"),tr("updated"));
//                   conn.connClose();

//            }
//            else{
//                QMessageBox::critical(this,tr("error"),qry.lastError().text());
//            }
}


void addreservations::on_tableView_activated(const QModelIndex &index)
{

}


void addreservations::on_tableView_res_activated(const QModelIndex &index)
{
    QString valu=ui->tableView_res->model()->data(index).toString();
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
                   ui->lineEdit_resid->setText(qry.value(0).toString());
                   ui->comboBox_fun->setCurrentText(qry.value(1).toString());
                   ui->lineEdit_cname->setText(qry.value(2).toString());
                   ui->lineEdit_ccontact->setText(qry.value(3).toString());
                   ui->dateEdit_pdate->setDate(qry.value(4).toDate());
                   ui->dateEdit_resdate->setDate(qry.value(5).toDate());
                   ui->timeEdit_start->setTime(qry.value(6).toTime());
                   ui->spinBox_duration->setValue(qry.value(7).toInt());
                   ui->spinBox_partci->setValue(qry.value(8).toInt());
                  ui->comboBox_hall->setCurrentText(qry.value(10).toString());

               }
               conn.connClose();

           }
           else{
                  QMessageBox::critical(this,tr("error"),qry.lastError().text());
           }
}


void addreservations::on_pushButton_7_clicked()
{
    login conn;
    QString resi;

    resi=ui->lineEdit_resid->text();
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


void addreservations::on_pushButton_11_clicked()
{
    this->hide();
    login *a = new login(this);
    a->show();
}

