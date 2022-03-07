/********************************************************************************
** Form generated from reading UI file 'modifysuppliers.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYSUPPLIERS_H
#define UI_MODIFYSUPPLIERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_modifysuppliers
{
public:
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_4;
    QLabel *label_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_2;
    QLabel *label_8;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_12;
    QGroupBox *groupBox;
    QTableView *tableView;
    QLabel *label;
    QLineEdit *lineEdit_searchbysid;
    QPushButton *pushButton_laodbysid;
    QPushButton *pushButton_sloadall;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLineEdit *lineEdit_usid;
    QLineEdit *lineEdit_usname;
    QLineEdit *lineEdit_uscont;
    QLineEdit *lineEdit_usnic;
    QLineEdit *lineEdit_ussprod;
    QLineEdit *lineEdit_usemail;
    QLineEdit *lineEdit_uscomp;
    QLineEdit *lineEdit_usaddr;
    QPushButton *pushButton_supup;
    QPushButton *pushButton_supdel;
    QPushButton *pushButton_10;
    QLabel *label_19;

    void setupUi(QDialog *modifysuppliers)
    {
        if (modifysuppliers->objectName().isEmpty())
            modifysuppliers->setObjectName(QString::fromUtf8("modifysuppliers"));
        modifysuppliers->resize(1017, 604);
        pushButton_5 = new QPushButton(modifysuppliers);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(50, 400, 135, 24));
        pushButton_3 = new QPushButton(modifysuppliers);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(50, 340, 135, 24));
        pushButton_7 = new QPushButton(modifysuppliers);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(50, 460, 135, 24));
        pushButton_8 = new QPushButton(modifysuppliers);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(50, 490, 135, 24));
        pushButton_4 = new QPushButton(modifysuppliers);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(50, 370, 135, 24));
        label_7 = new QLabel(modifysuppliers);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 0, 231, 41));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 38, 77);"));
        pushButton_6 = new QPushButton(modifysuppliers);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(50, 430, 135, 24));
        pushButton_2 = new QPushButton(modifysuppliers);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(50, 310, 135, 24));
        label_8 = new QLabel(modifysuppliers);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 30, 231, 571));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 63);"));
        label_13 = new QLabel(modifysuppliers);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(50, 10, 121, 20));
        label_14 = new QLabel(modifysuppliers);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 80, 211, 191));
        label_14->setStyleSheet(QString::fromUtf8("image: url(:/img/images/logo.png);"));
        label_10 = new QLabel(modifysuppliers);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(350, 80, 371, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_10->setFont(font);
        label_9 = new QLabel(modifysuppliers);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(440, 50, 141, 21));
        QFont font1;
        font1.setPointSize(14);
        label_9->setFont(font1);
        label_12 = new QLabel(modifysuppliers);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(230, 40, 811, 561));
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 212, 255);"));
        groupBox = new QGroupBox(modifysuppliers);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(240, 140, 431, 451));
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 110, 421, 331));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 111, 21));
        lineEdit_searchbysid = new QLineEdit(groupBox);
        lineEdit_searchbysid->setObjectName(QString::fromUtf8("lineEdit_searchbysid"));
        lineEdit_searchbysid->setGeometry(QRect(140, 20, 121, 24));
        pushButton_laodbysid = new QPushButton(groupBox);
        pushButton_laodbysid->setObjectName(QString::fromUtf8("pushButton_laodbysid"));
        pushButton_laodbysid->setGeometry(QRect(280, 20, 80, 24));
        pushButton_sloadall = new QPushButton(groupBox);
        pushButton_sloadall->setObjectName(QString::fromUtf8("pushButton_sloadall"));
        pushButton_sloadall->setGeometry(QRect(100, 70, 211, 24));
        label_2 = new QLabel(modifysuppliers);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(690, 150, 71, 16));
        label_3 = new QLabel(modifysuppliers);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(690, 190, 91, 16));
        label_4 = new QLabel(modifysuppliers);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(690, 240, 101, 16));
        label_5 = new QLabel(modifysuppliers);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(690, 290, 49, 16));
        label_6 = new QLabel(modifysuppliers);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(690, 330, 49, 16));
        label_16 = new QLabel(modifysuppliers);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(690, 410, 49, 16));
        label_17 = new QLabel(modifysuppliers);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(690, 370, 61, 16));
        label_18 = new QLabel(modifysuppliers);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(690, 490, 121, 16));
        lineEdit_usid = new QLineEdit(modifysuppliers);
        lineEdit_usid->setObjectName(QString::fromUtf8("lineEdit_usid"));
        lineEdit_usid->setGeometry(QRect(810, 150, 171, 24));
        lineEdit_usname = new QLineEdit(modifysuppliers);
        lineEdit_usname->setObjectName(QString::fromUtf8("lineEdit_usname"));
        lineEdit_usname->setGeometry(QRect(810, 190, 171, 24));
        lineEdit_uscont = new QLineEdit(modifysuppliers);
        lineEdit_uscont->setObjectName(QString::fromUtf8("lineEdit_uscont"));
        lineEdit_uscont->setGeometry(QRect(810, 230, 171, 24));
        lineEdit_usnic = new QLineEdit(modifysuppliers);
        lineEdit_usnic->setObjectName(QString::fromUtf8("lineEdit_usnic"));
        lineEdit_usnic->setGeometry(QRect(810, 280, 171, 24));
        lineEdit_ussprod = new QLineEdit(modifysuppliers);
        lineEdit_ussprod->setObjectName(QString::fromUtf8("lineEdit_ussprod"));
        lineEdit_ussprod->setGeometry(QRect(810, 470, 181, 91));
        lineEdit_usemail = new QLineEdit(modifysuppliers);
        lineEdit_usemail->setObjectName(QString::fromUtf8("lineEdit_usemail"));
        lineEdit_usemail->setGeometry(QRect(810, 320, 161, 24));
        lineEdit_uscomp = new QLineEdit(modifysuppliers);
        lineEdit_uscomp->setObjectName(QString::fromUtf8("lineEdit_uscomp"));
        lineEdit_uscomp->setGeometry(QRect(810, 360, 171, 31));
        lineEdit_usaddr = new QLineEdit(modifysuppliers);
        lineEdit_usaddr->setObjectName(QString::fromUtf8("lineEdit_usaddr"));
        lineEdit_usaddr->setGeometry(QRect(810, 400, 181, 61));
        pushButton_supup = new QPushButton(modifysuppliers);
        pushButton_supup->setObjectName(QString::fromUtf8("pushButton_supup"));
        pushButton_supup->setGeometry(QRect(690, 570, 80, 24));
        pushButton_supdel = new QPushButton(modifysuppliers);
        pushButton_supdel->setObjectName(QString::fromUtf8("pushButton_supdel"));
        pushButton_supdel->setGeometry(QRect(920, 570, 80, 24));
        pushButton_10 = new QPushButton(modifysuppliers);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(960, 0, 61, 41));
        pushButton_10->setStyleSheet(QString::fromUtf8("image: url(:/img/images/icons8-home-page-30(1).png);"));
        label_19 = new QLabel(modifysuppliers);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(240, 0, 361, 41));
        label_12->raise();
        label_8->raise();
        pushButton_5->raise();
        pushButton_3->raise();
        pushButton_7->raise();
        pushButton_8->raise();
        pushButton_4->raise();
        label_7->raise();
        pushButton_6->raise();
        pushButton_2->raise();
        label_13->raise();
        label_14->raise();
        label_10->raise();
        label_9->raise();
        groupBox->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_16->raise();
        label_17->raise();
        label_18->raise();
        lineEdit_usid->raise();
        lineEdit_usname->raise();
        lineEdit_uscont->raise();
        lineEdit_usnic->raise();
        lineEdit_ussprod->raise();
        lineEdit_usemail->raise();
        lineEdit_uscomp->raise();
        lineEdit_usaddr->raise();
        pushButton_supup->raise();
        pushButton_supdel->raise();
        pushButton_10->raise();
        label_19->raise();

        retranslateUi(modifysuppliers);

        QMetaObject::connectSlotsByName(modifysuppliers);
    } // setupUi

    void retranslateUi(QDialog *modifysuppliers)
    {
        modifysuppliers->setWindowTitle(QCoreApplication::translate("modifysuppliers", "Dialog", nullptr));
        pushButton_5->setText(QCoreApplication::translate("modifysuppliers", "Supplier Details", nullptr));
        pushButton_3->setText(QCoreApplication::translate("modifysuppliers", "Manage Products", nullptr));
        pushButton_7->setText(QCoreApplication::translate("modifysuppliers", "Notepad", nullptr));
        pushButton_8->setText(QCoreApplication::translate("modifysuppliers", "Logout", nullptr));
        pushButton_4->setText(QCoreApplication::translate("modifysuppliers", "Add Suppliers", nullptr));
        label_7->setText(QString());
        pushButton_6->setText(QCoreApplication::translate("modifysuppliers", "Reservations", nullptr));
        pushButton_2->setText(QCoreApplication::translate("modifysuppliers", "Add Products", nullptr));
        label_8->setText(QString());
        label_13->setText(QCoreApplication::translate("modifysuppliers", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; font-style:italic; color:#fff6fe;\">TREATS TO GO</span></p></body></html>", nullptr));
        label_14->setText(QString());
        label_10->setText(QCoreApplication::translate("modifysuppliers", "<html><head/><body><p><span style=\" color:#191970;\">Treats To Go Cake Shop Management</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("modifysuppliers", "<html><head/><body><p><span style=\" color:#191970;\">Welcome To</span></p></body></html>", nullptr));
        label_12->setText(QString());
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("modifysuppliers", "Search by Supplier ID", nullptr));
        pushButton_laodbysid->setText(QCoreApplication::translate("modifysuppliers", "Search", nullptr));
        pushButton_sloadall->setText(QCoreApplication::translate("modifysuppliers", "Fetch All Supplier Details", nullptr));
        label_2->setText(QCoreApplication::translate("modifysuppliers", "Supplier ID", nullptr));
        label_3->setText(QCoreApplication::translate("modifysuppliers", "Supplier Name", nullptr));
        label_4->setText(QCoreApplication::translate("modifysuppliers", "Contact Number", nullptr));
        label_5->setText(QCoreApplication::translate("modifysuppliers", "NIC", nullptr));
        label_6->setText(QCoreApplication::translate("modifysuppliers", "Email", nullptr));
        label_16->setText(QCoreApplication::translate("modifysuppliers", "Address", nullptr));
        label_17->setText(QCoreApplication::translate("modifysuppliers", "Company", nullptr));
        label_18->setText(QCoreApplication::translate("modifysuppliers", "Supplying Products", nullptr));
        pushButton_supup->setText(QCoreApplication::translate("modifysuppliers", "Update", nullptr));
        pushButton_supdel->setText(QCoreApplication::translate("modifysuppliers", "Delete", nullptr));
        pushButton_10->setText(QString());
        label_19->setText(QCoreApplication::translate("modifysuppliers", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; color:#191970;\">Admin&gt;&gt;Search,Update and Delete Suppliers</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modifysuppliers: public Ui_modifysuppliers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYSUPPLIERS_H
