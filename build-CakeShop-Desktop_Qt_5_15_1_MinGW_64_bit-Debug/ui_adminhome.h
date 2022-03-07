/********************************************************************************
** Form generated from reading UI file 'adminhome.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINHOME_H
#define UI_ADMINHOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adminhome
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_addcake;
    QLabel *label_12;
    QPushButton *pushButton_updateproducts;
    QPushButton *pushButton_2;
    QLabel *label_7;
    QLabel *label_9;
    QPushButton *pushButton_addnotes;
    QLabel *label_10;
    QPushButton *pushButton_suppliers;
    QLabel *label_8;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLabel *label_16;
    QPushButton *pushButton_10;

    void setupUi(QDialog *adminhome)
    {
        if (adminhome->objectName().isEmpty())
            adminhome->setObjectName(QString::fromUtf8("adminhome"));
        adminhome->resize(771, 477);
        label = new QLabel(adminhome);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 0, 511, 41));
        label->setStyleSheet(QString::fromUtf8("border-color: rgb(25, 25, 112);"));
        label_2 = new QLabel(adminhome);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 30, 231, 451));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 63);"));
        label_3 = new QLabel(adminhome);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 231, 41));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 38, 77);"));
        label_4 = new QLabel(adminhome);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(230, 40, 541, 441));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 212, 255);"));
        label_5 = new QLabel(adminhome);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(430, 60, 141, 21));
        QFont font;
        font.setPointSize(14);
        label_5->setFont(font);
        label_6 = new QLabel(adminhome);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(330, 100, 371, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_6->setFont(font1);
        pushButton_addcake = new QPushButton(adminhome);
        pushButton_addcake->setObjectName(QString::fromUtf8("pushButton_addcake"));
        pushButton_addcake->setGeometry(QRect(260, 160, 151, 91));
        pushButton_addcake->setStyleSheet(QString::fromUtf8("\n"
"image: url(:/img/images/addprod.png);"));
        label_12 = new QLabel(adminhome);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(240, 460, 101, 16));
        pushButton_updateproducts = new QPushButton(adminhome);
        pushButton_updateproducts->setObjectName(QString::fromUtf8("pushButton_updateproducts"));
        pushButton_updateproducts->setGeometry(QRect(420, 160, 151, 91));
        pushButton_updateproducts->setStyleSheet(QString::fromUtf8("image: url(:/img/images/ediprod.png);"));
        pushButton_2 = new QPushButton(adminhome);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(580, 160, 151, 91));
        pushButton_2->setStyleSheet(QString::fromUtf8("image: url(:/img/images/icons8-pay-date-50.png);"));
        label_7 = new QLabel(adminhome);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(300, 230, 81, 16));
        label_9 = new QLabel(adminhome);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(450, 230, 91, 16));
        pushButton_addnotes = new QPushButton(adminhome);
        pushButton_addnotes->setObjectName(QString::fromUtf8("pushButton_addnotes"));
        pushButton_addnotes->setGeometry(QRect(450, 360, 151, 91));
        pushButton_addnotes->setStyleSheet(QString::fromUtf8("image: url(:/img/images/icons8-purchase-order-48.png);"));
        label_10 = new QLabel(adminhome);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(620, 230, 151, 16));
        pushButton_suppliers = new QPushButton(adminhome);
        pushButton_suppliers->setObjectName(QString::fromUtf8("pushButton_suppliers"));
        pushButton_suppliers->setGeometry(QRect(352, 260, 151, 91));
        pushButton_suppliers->setStyleSheet(QString::fromUtf8("image: url(:/img/images/user.png);"));
        label_8 = new QLabel(adminhome);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(500, 430, 81, 16));
        label_11 = new QLabel(adminhome);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(390, 330, 81, 20));
        label_13 = new QLabel(adminhome);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(40, 10, 121, 20));
        label_14 = new QLabel(adminhome);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 50, 211, 171));
        label_14->setStyleSheet(QString::fromUtf8("image: url(:/img/images/logo.png);"));
        label_15 = new QLabel(adminhome);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(240, 10, 171, 31));
        pushButton = new QPushButton(adminhome);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 240, 135, 24));
        pushButton_4 = new QPushButton(adminhome);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(40, 300, 135, 24));
        pushButton_6 = new QPushButton(adminhome);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(40, 360, 135, 24));
        pushButton_7 = new QPushButton(adminhome);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(40, 390, 135, 24));
        pushButton_3 = new QPushButton(adminhome);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 270, 135, 24));
        pushButton_5 = new QPushButton(adminhome);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(40, 330, 135, 24));
        pushButton_8 = new QPushButton(adminhome);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(40, 420, 135, 24));
        pushButton_9 = new QPushButton(adminhome);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(510, 260, 151, 91));
        pushButton_9->setStyleSheet(QString::fromUtf8("image: url(:/img/images/icons8-users-settings-48.png);"));
        label_16 = new QLabel(adminhome);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(560, 330, 71, 16));
        pushButton_10 = new QPushButton(adminhome);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(720, 0, 51, 41));
        pushButton_10->setStyleSheet(QString::fromUtf8("image: url(:/img/images/icons8-home-page-30(1).png);"));
        label_12->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        pushButton_addcake->raise();
        pushButton_updateproducts->raise();
        pushButton_2->raise();
        label_7->raise();
        label_9->raise();
        pushButton_addnotes->raise();
        label_10->raise();
        pushButton_suppliers->raise();
        label_8->raise();
        label_11->raise();
        label_13->raise();
        label_14->raise();
        label_15->raise();
        pushButton->raise();
        pushButton_4->raise();
        pushButton_6->raise();
        pushButton_7->raise();
        pushButton_3->raise();
        pushButton_5->raise();
        pushButton_8->raise();
        pushButton_9->raise();
        label_16->raise();
        pushButton_10->raise();

        retranslateUi(adminhome);

        QMetaObject::connectSlotsByName(adminhome);
    } // setupUi

    void retranslateUi(QDialog *adminhome)
    {
        adminhome->setWindowTitle(QCoreApplication::translate("adminhome", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QCoreApplication::translate("adminhome", "<html><head/><body><p><span style=\" color:#191970;\">Welcome To</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("adminhome", "<html><head/><body><p><span style=\" color:#191970;\">Treats To Go Cake Shop Management</span></p></body></html>", nullptr));
        pushButton_addcake->setText(QString());
        label_12->setText(QCoreApplication::translate("adminhome", "status", nullptr));
        pushButton_updateproducts->setText(QString());
        pushButton_2->setText(QString());
        label_7->setText(QCoreApplication::translate("adminhome", "<html><head/><body><p><span style=\" color:#191970;\">Add Products</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("adminhome", "<html><head/><body><p><span style=\" color:#191970;\">Product Details</span></p></body></html>", nullptr));
        pushButton_addnotes->setText(QString());
        label_10->setText(QCoreApplication::translate("adminhome", "<html><head/><body><p><span style=\" color:#191970;\">Reservations</span></p></body></html>", nullptr));
        pushButton_suppliers->setText(QString());
        label_8->setText(QCoreApplication::translate("adminhome", "<html><head/><body><p><span style=\" color:#191970;\">Notepad</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("adminhome", "<html><head/><body><p><span style=\" color:#191970;\">New Suppliers</span></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("adminhome", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; font-style:italic; color:#fff6fe;\">TREATS TO GO</span></p></body></html>", nullptr));
        label_14->setText(QString());
        label_15->setText(QCoreApplication::translate("adminhome", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; color:#191970;\">Admin&gt;&gt;Dashboard</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("adminhome", "Add Products", nullptr));
        pushButton_4->setText(QCoreApplication::translate("adminhome", "Add Suppliers", nullptr));
        pushButton_6->setText(QCoreApplication::translate("adminhome", "Reservations", nullptr));
        pushButton_7->setText(QCoreApplication::translate("adminhome", "Notepad", nullptr));
        pushButton_3->setText(QCoreApplication::translate("adminhome", "Manage Products", nullptr));
        pushButton_5->setText(QCoreApplication::translate("adminhome", "Supplier Details", nullptr));
        pushButton_8->setText(QCoreApplication::translate("adminhome", "Logout", nullptr));
        pushButton_9->setText(QString());
        label_16->setText(QCoreApplication::translate("adminhome", "<html><head/><body><p><span style=\" color:#191970;\">Supplier list</span></p></body></html>", nullptr));
        pushButton_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class adminhome: public Ui_adminhome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINHOME_H
