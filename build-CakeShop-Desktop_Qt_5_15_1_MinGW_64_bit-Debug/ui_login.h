/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QLabel *label_3;
    QLineEdit *lineEdit_username;
    QLabel *label;
    QLabel *label_4;
    QPushButton *pushButton;
    QLabel *label_2;
    QLineEdit *lineEdit_password;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QMenuBar *menubar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(654, 390);
        centralwidget = new QWidget(login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(260, 0, 461, 411));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 38, 77);"));
        lineEdit_username = new QLineEdit(centralwidget);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(40, 170, 171, 24));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 145, 91, 21));
        QFont font;
        font.setPointSize(13);
        label->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(290, 330, 281, 31));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(80, 310, 91, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 220, 111, 20));
        label_2->setFont(font);
        lineEdit_password = new QLineEdit(centralwidget);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(40, 250, 171, 24));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 0, 261, 41));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 38, 77);"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(-60, 70, 371, 61));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_6->setFont(font1);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(70, 60, 141, 21));
        QFont font2;
        font2.setPointSize(14);
        label_7->setFont(font2);
        login->setCentralWidget(centralwidget);
        label_4->raise();
        label_3->raise();
        lineEdit_username->raise();
        label->raise();
        pushButton->raise();
        label_2->raise();
        lineEdit_password->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        menubar = new QMenuBar(login);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 654, 21));
        login->setMenuBar(menubar);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "login", nullptr));
        label_3->setText(QString());
        label->setText(QCoreApplication::translate("login", "Username", nullptr));
        label_4->setText(QCoreApplication::translate("login", "satus", nullptr));
        pushButton->setText(QCoreApplication::translate("login", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("login", "Password", nullptr));
        label_5->setText(QString());
        label_6->setText(QCoreApplication::translate("login", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#191970;\">Cake Shop Management</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("login", "<html><head/><body><p><span style=\" font-size:12pt; color:#191970;\">Welcome To</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
