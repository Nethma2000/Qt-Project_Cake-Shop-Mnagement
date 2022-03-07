#ifndef LOGIN_H
#define LOGIN_H


#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include "adminhome.h"
#include "cashierhome.h"


QT_BEGIN_NAMESPACE
namespace Ui { class login; }
QT_END_NAMESPACE

class login : public QMainWindow
{
    Q_OBJECT

 public:
     QSqlDatabase cakeshopdb;
     void connClose(){
         cakeshopdb.close();
         cakeshopdb.removeDatabase(QSqlDatabase::defaultConnection);
     }
    bool connOpen(){
        cakeshopdb=QSqlDatabase::addDatabase("QSQLITE");
       cakeshopdb.setDatabaseName("C:/Users/Admin/OneDrive - National School of Busness Management/Desktop/10707176-Coursework/database/cakeshopdb.db");
       if(!cakeshopdb.open()){
           qDebug()<<("failed to connect");
           return false;
       }
       else{
            qDebug()<<("connected to database");
            return true;
        }
    }


public:
    login(QWidget *parent = nullptr);
    ~login();



private slots:
    void on_pushButton_clicked();


private:
    Ui::login *ui;
//private slots:
//    void NumPressed();
//    void MathButtonPressed();
//    void EqualButton();
//  void ChangeNumberSign();


};
#endif // LOGIN_H
