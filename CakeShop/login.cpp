#include "login.h"
#include "ui_login.h"
#include <QPixmap>

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
    QPixmap pix(":/img/images/logo.png");
    int w= ui->label_3->width();
    int h= ui->label_3->height();
    ui->label_3->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));


//    QSqlDatabase cakeshopdb=QSqlDatabase::addDatabase("QSQLITE");
//    cakeshopdb.setDatabaseName("C:/Users/Admin/OneDrive - National School of Busness Management/Desktop/10707176-Coursework/database/cakeshopdb.db");
//    if(!cakeshopdb.open())
//        ui->label_4->setText("failed to connect");
//    else
//        ui->label_4->setText("connected to database");



    if(!connOpen())
        ui->label_4->setText("failed to connect");
    else
        ui->label_4->setText("connected to database");

}

login::~login()
{
    delete ui;
}


void login::on_pushButton_clicked()
{
    QString username,password;
    username=ui->lineEdit_username->text();
    password=ui->lineEdit_password->text();

    if(!connOpen()){
            qDebug()<<"Failed to open the database";
            return;
}
            connOpen();
            QSqlQuery qry;
            qry.prepare("Select uname,password from users where uname='"+username+"' and password='"+password+"' ");

//            if(qry.exec("Select uname,password from users where uname='"+username+"' and password='"+password+"' ")){
//
//                    ui->label_4->setText("Username and password are correct");
            if(username=="admin" && password=="admin123" ){
                connClose();

                    this->hide();
                    adminhome adminhome;
                    adminhome.setModal(true);
                    adminhome.exec();

                }
             else if(username=="cashier" && password=="cashier456" ){
                    this->hide();
                    cashierhome cashierhome;
                    cashierhome.setModal(true);
                    cashierhome.exec();

                }


            else{
                ui->label_4->setText("Username and password are incorrect");
//                    this->hide();
//                    cashierhome cashierhome;
//                    cashierhome.setModal(true);
//                    cashierhome.exec();

            }

//           else if(qry.exec("Select * from users where uname='"+username+"' and password='"+password+"' ")){
//               if(username!="admin" and password!="admin123" ){
////                    ui->label_4->setText("Username and password are correct");
//                    this->hide();
//                    cashierhome cashierhome;
//                    cashierhome.setModal(true);
//                    cashierhome.exec();







//             if(count<1)
//                      ui->label_4->setText("Username and password are incorrect");







}
