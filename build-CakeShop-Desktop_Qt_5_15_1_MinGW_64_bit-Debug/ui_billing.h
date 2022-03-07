/********************************************************************************
** Form generated from reading UI file 'billing.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BILLING_H
#define UI_BILLING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_billing
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTableView *tableView;
    QGroupBox *groupBox_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_bid;
    QLineEdit *lineEdit_bname;
    QLineEdit *lineEdit_bprice;
    QLabel *label_5;
    QSpinBox *spinBox_qty;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit_tprice;
    QLabel *label_4;
    QPushButton *pushButton_totget;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8;
    QLabel *label_9;
    QPushButton *pushButton_6;
    QPushButton *pushButton_9;
    QLabel *label_10;
    QLabel *label_14;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QLabel *label_13;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_15;
    QLabel *label_16;
    QGroupBox *groupBox_3;
    QTableWidget *tableWidget;
    QGroupBox *groupBox_4;
    QLineEdit *lineEdit_total;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_paid;
    QLineEdit *lineEdit_2_balance;
    QPushButton *pushButton_7;
    QPushButton *pushButton_12;
    QLabel *label_18;
    QPushButton *pushButton_13;

    void setupUi(QDialog *billing)
    {
        if (billing->objectName().isEmpty())
            billing->setObjectName(QString::fromUtf8("billing"));
        billing->resize(1245, 712);
        groupBox = new QGroupBox(billing);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(240, 150, 331, 231));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 40, 141, 71));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 40, 141, 71));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 120, 141, 71));
        tableView = new QTableView(billing);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(580, 170, 351, 211));
        groupBox_2 = new QGroupBox(billing);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(970, 140, 261, 281));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 49, 16));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 80, 49, 16));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 120, 49, 16));
        lineEdit_bid = new QLineEdit(groupBox_2);
        lineEdit_bid->setObjectName(QString::fromUtf8("lineEdit_bid"));
        lineEdit_bid->setGeometry(QRect(80, 40, 113, 24));
        lineEdit_bname = new QLineEdit(groupBox_2);
        lineEdit_bname->setObjectName(QString::fromUtf8("lineEdit_bname"));
        lineEdit_bname->setGeometry(QRect(80, 80, 113, 24));
        lineEdit_bprice = new QLineEdit(groupBox_2);
        lineEdit_bprice->setObjectName(QString::fromUtf8("lineEdit_bprice"));
        lineEdit_bprice->setGeometry(QRect(80, 120, 113, 24));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 160, 49, 16));
        spinBox_qty = new QSpinBox(groupBox_2);
        spinBox_qty->setObjectName(QString::fromUtf8("spinBox_qty"));
        spinBox_qty->setGeometry(QRect(80, 160, 111, 25));
        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(160, 250, 80, 24));
        lineEdit_tprice = new QLineEdit(groupBox_2);
        lineEdit_tprice->setObjectName(QString::fromUtf8("lineEdit_tprice"));
        lineEdit_tprice->setGeometry(QRect(80, 200, 113, 24));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 210, 49, 16));
        pushButton_totget = new QPushButton(billing);
        pushButton_totget->setObjectName(QString::fromUtf8("pushButton_totget"));
        pushButton_totget->setGeometry(QRect(870, 580, 80, 24));
        pushButton_5 = new QPushButton(billing);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(30, 230, 161, 24));
        pushButton_8 = new QPushButton(billing);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(30, 390, 161, 24));
        label_9 = new QLabel(billing);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(0, 0, 231, 41));
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 38, 77);"));
        pushButton_6 = new QPushButton(billing);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(30, 350, 161, 24));
        pushButton_9 = new QPushButton(billing);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(30, 320, 161, 24));
        label_10 = new QLabel(billing);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(0, 30, 231, 681));
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 63);"));
        label_14 = new QLabel(billing);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 50, 211, 161));
        label_14->setStyleSheet(QString::fromUtf8("image: url(:/img/images/logo.png);"));
        pushButton_10 = new QPushButton(billing);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(30, 260, 161, 24));
        pushButton_11 = new QPushButton(billing);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(30, 290, 161, 24));
        label_13 = new QLabel(billing);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(40, 10, 121, 20));
        label_11 = new QLabel(billing);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(660, 60, 141, 21));
        QFont font;
        font.setPointSize(14);
        label_11->setFont(font);
        label_12 = new QLabel(billing);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(230, 0, 511, 41));
        label_12->setStyleSheet(QString::fromUtf8("border-color: rgb(25, 25, 112);"));
        label_15 = new QLabel(billing);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(230, 40, 1011, 671));
        label_15->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 212, 255);"));
        label_16 = new QLabel(billing);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(540, 90, 371, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_16->setFont(font1);
        groupBox_3 = new QGroupBox(billing);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(250, 420, 601, 281));
        tableWidget = new QTableWidget(groupBox_3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 30, 571, 231));
        groupBox_4 = new QGroupBox(billing);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(980, 480, 241, 161));
        lineEdit_total = new QLineEdit(groupBox_4);
        lineEdit_total->setObjectName(QString::fromUtf8("lineEdit_total"));
        lineEdit_total->setGeometry(QRect(110, 30, 113, 24));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 30, 49, 16));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 70, 49, 16));
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 130, 49, 16));
        lineEdit_paid = new QLineEdit(groupBox_4);
        lineEdit_paid->setObjectName(QString::fromUtf8("lineEdit_paid"));
        lineEdit_paid->setGeometry(QRect(110, 60, 113, 24));
        lineEdit_2_balance = new QLineEdit(groupBox_4);
        lineEdit_2_balance->setObjectName(QString::fromUtf8("lineEdit_2_balance"));
        lineEdit_2_balance->setGeometry(QRect(110, 130, 113, 24));
        pushButton_7 = new QPushButton(groupBox_4);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(70, 90, 101, 24));
        pushButton_12 = new QPushButton(billing);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(1110, 670, 80, 24));
        label_18 = new QLabel(billing);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(240, 0, 201, 41));
        pushButton_13 = new QPushButton(billing);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(1190, 0, 51, 41));
        pushButton_13->setStyleSheet(QString::fromUtf8("image: url(:/img/images/icons8-home-page-30(1).png);"));
        label_15->raise();
        label_10->raise();
        groupBox->raise();
        tableView->raise();
        groupBox_2->raise();
        pushButton_totget->raise();
        pushButton_5->raise();
        pushButton_8->raise();
        label_9->raise();
        pushButton_6->raise();
        pushButton_9->raise();
        label_14->raise();
        pushButton_10->raise();
        pushButton_11->raise();
        label_13->raise();
        label_11->raise();
        label_12->raise();
        label_16->raise();
        groupBox_3->raise();
        groupBox_4->raise();
        pushButton_12->raise();
        label_18->raise();
        pushButton_13->raise();

        retranslateUi(billing);

        QMetaObject::connectSlotsByName(billing);
    } // setupUi

    void retranslateUi(QDialog *billing)
    {
        billing->setWindowTitle(QCoreApplication::translate("billing", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("billing", "Categories", nullptr));
        pushButton->setText(QCoreApplication::translate("billing", "cakes", nullptr));
        pushButton_2->setText(QCoreApplication::translate("billing", "pices", nullptr));
        pushButton_3->setText(QCoreApplication::translate("billing", "drinks", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("billing", "GroupBox", nullptr));
        label->setText(QCoreApplication::translate("billing", "id", nullptr));
        label_2->setText(QCoreApplication::translate("billing", "name", nullptr));
        label_3->setText(QCoreApplication::translate("billing", "unit price", nullptr));
        label_5->setText(QCoreApplication::translate("billing", "quantity", nullptr));
        pushButton_4->setText(QCoreApplication::translate("billing", "Add to bill", nullptr));
        label_4->setText(QCoreApplication::translate("billing", "total", nullptr));
        pushButton_totget->setText(QCoreApplication::translate("billing", "calculate bill", nullptr));
        pushButton_5->setText(QCoreApplication::translate("billing", "Biiling", nullptr));
        pushButton_8->setText(QCoreApplication::translate("billing", "Logout", nullptr));
        label_9->setText(QString());
        pushButton_6->setText(QCoreApplication::translate("billing", "Notepad", nullptr));
        pushButton_9->setText(QCoreApplication::translate("billing", "Remove Reservations", nullptr));
        label_10->setText(QString());
        label_14->setText(QString());
        pushButton_10->setText(QCoreApplication::translate("billing", "Product Search", nullptr));
        pushButton_11->setText(QCoreApplication::translate("billing", "Add /ViewReservations", nullptr));
        label_13->setText(QCoreApplication::translate("billing", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; font-style:italic; color:#fff6fe;\">TREATS TO GO</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("billing", "<html><head/><body><p><span style=\" color:#191970;\">Welcome To</span></p></body></html>", nullptr));
        label_12->setText(QString());
        label_15->setText(QString());
        label_16->setText(QCoreApplication::translate("billing", "<html><head/><body><p><span style=\" color:#191970;\">Treats To Go Cake Shop Management</span></p></body></html>", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("billing", "GroupBox", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("billing", "GroupBox", nullptr));
        label_6->setText(QCoreApplication::translate("billing", "Sub total", nullptr));
        label_7->setText(QCoreApplication::translate("billing", "Paid", nullptr));
        label_8->setText(QCoreApplication::translate("billing", "Balance", nullptr));
        pushButton_7->setText(QCoreApplication::translate("billing", "Calculate Balance", nullptr));
        pushButton_12->setText(QCoreApplication::translate("billing", "Print Bill", nullptr));
        label_18->setText(QCoreApplication::translate("billing", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; color:#191970;\">Cashier&gt;&gt;Billing</span></p></body></html>", nullptr));
        pushButton_13->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class billing: public Ui_billing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILLING_H
