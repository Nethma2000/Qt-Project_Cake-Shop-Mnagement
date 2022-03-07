/********************************************************************************
** Form generated from reading UI file 'addreservations.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESERVATIONS_H
#define UI_ADDRESERVATIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_addreservations
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *lineEdit_resid;
    QLineEdit *lineEdit_payment;
    QComboBox *comboBox_fun;
    QComboBox *comboBox_hall;
    QDateEdit *dateEdit_pdate;
    QTimeEdit *timeEdit_start;
    QSpinBox *spinBox_duration;
    QSpinBox *spinBox_partci;
    QLineEdit *lineEdit_cname;
    QLineEdit *lineEdit_ccontact;
    QDateEdit *dateEdit_resdate;
    QPushButton *pushButton_reserve;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_3;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QGroupBox *groupBox_2;
    QTableView *tableView_res;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QDateEdit *dateEdit;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_20;
    QPushButton *pushButton_11;
    QLabel *label_22;
    QLabel *label_21;

    void setupUi(QDialog *addreservations)
    {
        if (addreservations->objectName().isEmpty())
            addreservations->setObjectName(QString::fromUtf8("addreservations"));
        addreservations->resize(1145, 564);
        groupBox = new QGroupBox(addreservations);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(190, 40, 491, 501));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 120, 121, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 170, 91, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 220, 101, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 270, 91, 16));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 320, 101, 16));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 365, 141, 31));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(270, 120, 91, 16));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(270, 170, 49, 16));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(270, 220, 49, 16));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(270, 270, 101, 16));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(270, 320, 49, 16));
        lineEdit_resid = new QLineEdit(groupBox);
        lineEdit_resid->setObjectName(QString::fromUtf8("lineEdit_resid"));
        lineEdit_resid->setGeometry(QRect(130, 120, 113, 24));
        lineEdit_payment = new QLineEdit(groupBox);
        lineEdit_payment->setObjectName(QString::fromUtf8("lineEdit_payment"));
        lineEdit_payment->setGeometry(QRect(380, 320, 91, 24));
        comboBox_fun = new QComboBox(groupBox);
        comboBox_fun->setObjectName(QString::fromUtf8("comboBox_fun"));
        comboBox_fun->setGeometry(QRect(130, 170, 111, 24));
        comboBox_hall = new QComboBox(groupBox);
        comboBox_hall->setObjectName(QString::fromUtf8("comboBox_hall"));
        comboBox_hall->setGeometry(QRect(130, 220, 111, 24));
        dateEdit_pdate = new QDateEdit(groupBox);
        dateEdit_pdate->setObjectName(QString::fromUtf8("dateEdit_pdate"));
        dateEdit_pdate->setGeometry(QRect(180, 370, 110, 25));
        timeEdit_start = new QTimeEdit(groupBox);
        timeEdit_start->setObjectName(QString::fromUtf8("timeEdit_start"));
        timeEdit_start->setGeometry(QRect(380, 170, 91, 25));
        spinBox_duration = new QSpinBox(groupBox);
        spinBox_duration->setObjectName(QString::fromUtf8("spinBox_duration"));
        spinBox_duration->setGeometry(QRect(380, 220, 91, 25));
        spinBox_partci = new QSpinBox(groupBox);
        spinBox_partci->setObjectName(QString::fromUtf8("spinBox_partci"));
        spinBox_partci->setGeometry(QRect(380, 270, 91, 21));
        lineEdit_cname = new QLineEdit(groupBox);
        lineEdit_cname->setObjectName(QString::fromUtf8("lineEdit_cname"));
        lineEdit_cname->setGeometry(QRect(130, 270, 113, 24));
        lineEdit_ccontact = new QLineEdit(groupBox);
        lineEdit_ccontact->setObjectName(QString::fromUtf8("lineEdit_ccontact"));
        lineEdit_ccontact->setGeometry(QRect(130, 320, 113, 24));
        dateEdit_resdate = new QDateEdit(groupBox);
        dateEdit_resdate->setObjectName(QString::fromUtf8("dateEdit_resdate"));
        dateEdit_resdate->setGeometry(QRect(380, 120, 91, 25));
        pushButton_reserve = new QPushButton(groupBox);
        pushButton_reserve->setObjectName(QString::fromUtf8("pushButton_reserve"));
        pushButton_reserve->setGeometry(QRect(340, 420, 121, 41));
        label_23 = new QLabel(groupBox);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(70, 60, 371, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_23->setFont(font);
        label_24 = new QLabel(groupBox);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(170, 20, 141, 21));
        QFont font1;
        font1.setPointSize(14);
        label_24->setFont(font1);
        label_3 = new QLabel(addreservations);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 450, 49, 16));
        label_13 = new QLabel(addreservations);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(0, 0, 191, 41));
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 38, 77);"));
        label_14 = new QLabel(addreservations);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(190, 0, 911, 41));
        label_15 = new QLabel(addreservations);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(-10, 40, 201, 531));
        label_15->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 63);"));
        groupBox_2 = new QGroupBox(addreservations);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(680, 40, 461, 501));
        tableView_res = new QTableView(groupBox_2);
        tableView_res->setObjectName(QString::fromUtf8("tableView_res"));
        tableView_res->setGeometry(QRect(10, 250, 421, 231));
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 40, 161, 16));
        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 80, 161, 16));
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(10, 120, 161, 16));
        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(10, 160, 161, 16));
        dateEdit = new QDateEdit(groupBox_2);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(160, 40, 81, 25));
        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(160, 80, 81, 24));
        comboBox_2 = new QComboBox(groupBox_2);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(160, 120, 81, 24));
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(160, 160, 81, 24));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 210, 80, 24));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 40, 80, 24));
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(250, 80, 80, 24));
        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(250, 120, 80, 24));
        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(250, 160, 80, 24));
        label_20 = new QLabel(addreservations);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(-10, 50, 211, 161));
        label_20->setStyleSheet(QString::fromUtf8("image: url(:/img/images/logo.png);"));
        pushButton_11 = new QPushButton(addreservations);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(30, 520, 121, 24));
        label_22 = new QLabel(addreservations);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(40, 10, 121, 20));
        label_21 = new QLabel(addreservations);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(200, 10, 291, 31));
        label_15->raise();
        groupBox->raise();
        label_3->raise();
        label_13->raise();
        label_14->raise();
        groupBox_2->raise();
        label_20->raise();
        pushButton_11->raise();
        label_22->raise();
        label_21->raise();

        retranslateUi(addreservations);

        QMetaObject::connectSlotsByName(addreservations);
    } // setupUi

    void retranslateUi(QDialog *addreservations)
    {
        addreservations->setWindowTitle(QCoreApplication::translate("addreservations", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("addreservations", "Reservation_ID", nullptr));
        label_2->setText(QCoreApplication::translate("addreservations", "Function Type", nullptr));
        label_4->setText(QCoreApplication::translate("addreservations", "Reserved hall", nullptr));
        label_5->setText(QCoreApplication::translate("addreservations", "Customer name", nullptr));
        label_6->setText(QCoreApplication::translate("addreservations", "Contact number", nullptr));
        label_7->setText(QCoreApplication::translate("addreservations", "Reservation placced date", nullptr));
        label_8->setText(QCoreApplication::translate("addreservations", "Function date", nullptr));
        label_9->setText(QCoreApplication::translate("addreservations", "Time", nullptr));
        label_10->setText(QCoreApplication::translate("addreservations", "Duration", nullptr));
        label_11->setText(QCoreApplication::translate("addreservations", "Participants", nullptr));
        label_12->setText(QCoreApplication::translate("addreservations", "Paymenrt", nullptr));
        pushButton_reserve->setText(QCoreApplication::translate("addreservations", "Reserve", nullptr));
        label_23->setText(QCoreApplication::translate("addreservations", "<html><head/><body><p><span style=\" color:#191970;\">Treats To Go Cake Shop Management</span></p></body></html>", nullptr));
        label_24->setText(QCoreApplication::translate("addreservations", "<html><head/><body><p><span style=\" color:#191970;\">Welcome To</span></p></body></html>", nullptr));
        label_3->setText(QString());
        label_13->setText(QString());
        label_14->setText(QString());
        label_15->setText(QString());
        groupBox_2->setTitle(QString());
        label_16->setText(QCoreApplication::translate("addreservations", "Search Reservation by date", nullptr));
        label_17->setText(QCoreApplication::translate("addreservations", "Search by Funcion type", nullptr));
        label_18->setText(QCoreApplication::translate("addreservations", "Search by hall", nullptr));
        label_19->setText(QCoreApplication::translate("addreservations", "Search by reservation_id", nullptr));
        pushButton->setText(QCoreApplication::translate("addreservations", "Load all data", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addreservations", "Search", nullptr));
        pushButton_3->setText(QCoreApplication::translate("addreservations", "Search", nullptr));
        pushButton_4->setText(QCoreApplication::translate("addreservations", "Search", nullptr));
        pushButton_5->setText(QCoreApplication::translate("addreservations", "Search", nullptr));
        label_20->setText(QString());
        pushButton_11->setText(QCoreApplication::translate("addreservations", "Logout", nullptr));
        label_22->setText(QCoreApplication::translate("addreservations", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; font-style:italic; color:#fff6fe;\">TREATS TO GO</span></p></body></html>", nullptr));
        label_21->setText(QCoreApplication::translate("addreservations", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; color:#191970;\">Add Reservations for Events</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addreservations: public Ui_addreservations {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESERVATIONS_H
