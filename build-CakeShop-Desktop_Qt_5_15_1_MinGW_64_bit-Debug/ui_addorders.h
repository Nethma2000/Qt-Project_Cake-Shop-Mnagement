/********************************************************************************
** Form generated from reading UI file 'addorders.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDORDERS_H
#define UI_ADDORDERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_addorders
{
public:
    QPushButton *pushButton_3;
    QLabel *label_3;
    QPushButton *pushButton_6;
    QLabel *label_15;
    QPushButton *pushButton_9;
    QLabel *label;
    QPushButton *pushButton_7;
    QLabel *label_2;
    QLabel *label_14;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QLabel *label_13;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_6;
    QGroupBox *groupBox;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QTableView *tableView;
    QGroupBox *groupBox_2;

    void setupUi(QDialog *addorders)
    {
        if (addorders->objectName().isEmpty())
            addorders->setObjectName(QString::fromUtf8("addorders"));
        addorders->resize(1000, 770);
        pushButton_3 = new QPushButton(addorders);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 230, 121, 24));
        label_3 = new QLabel(addorders);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 231, 41));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 38, 77);"));
        pushButton_6 = new QPushButton(addorders);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(30, 350, 121, 24));
        label_15 = new QLabel(addorders);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(250, 10, 141, 16));
        pushButton_9 = new QPushButton(addorders);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(30, 320, 121, 24));
        label = new QLabel(addorders);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 0, 511, 41));
        label->setStyleSheet(QString::fromUtf8("border-color: rgb(25, 25, 112);"));
        pushButton_7 = new QPushButton(addorders);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(30, 380, 121, 24));
        label_2 = new QLabel(addorders);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 30, 231, 451));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 63);"));
        label_14 = new QLabel(addorders);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 50, 211, 161));
        label_14->setStyleSheet(QString::fromUtf8("image: url(:/img/images/logo.png);"));
        pushButton_5 = new QPushButton(addorders);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(30, 260, 121, 24));
        pushButton_4 = new QPushButton(addorders);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 290, 121, 24));
        label_13 = new QLabel(addorders);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(40, 10, 121, 20));
        label_5 = new QLabel(addorders);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(480, 50, 141, 21));
        QFont font;
        font.setPointSize(14);
        label_5->setFont(font);
        label_4 = new QLabel(addorders);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(230, 40, 741, 441));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 212, 255);"));
        label_6 = new QLabel(addorders);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(370, 80, 371, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_6->setFont(font1);
        groupBox = new QGroupBox(addorders);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(240, 120, 231, 281));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(10, 30, 101, 24));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 30, 80, 24));
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 60, 211, 271));
        groupBox_2 = new QGroupBox(addorders);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(480, 130, 471, 80));
        label_4->raise();
        label_2->raise();
        pushButton_3->raise();
        label_3->raise();
        pushButton_6->raise();
        label_15->raise();
        pushButton_9->raise();
        label->raise();
        pushButton_7->raise();
        label_14->raise();
        pushButton_5->raise();
        pushButton_4->raise();
        label_13->raise();
        label_5->raise();
        label_6->raise();
        groupBox->raise();
        groupBox_2->raise();

        retranslateUi(addorders);

        QMetaObject::connectSlotsByName(addorders);
    } // setupUi

    void retranslateUi(QDialog *addorders)
    {
        addorders->setWindowTitle(QCoreApplication::translate("addorders", "Dialog", nullptr));
        pushButton_3->setText(QCoreApplication::translate("addorders", "Add Products", nullptr));
        label_3->setText(QString());
        pushButton_6->setText(QCoreApplication::translate("addorders", "Reservations", nullptr));
        label_15->setText(QCoreApplication::translate("addorders", "Cashier>>Dashboard", nullptr));
        pushButton_9->setText(QCoreApplication::translate("addorders", "Supplier Details", nullptr));
        label->setText(QString());
        pushButton_7->setText(QCoreApplication::translate("addorders", "Orders List", nullptr));
        label_2->setText(QString());
        label_14->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("addorders", "Manage Products", nullptr));
        pushButton_4->setText(QCoreApplication::translate("addorders", "Add Suppliers", nullptr));
        label_13->setText(QCoreApplication::translate("addorders", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; font-style:italic; color:#fff6fe;\">TREATS TO GO</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("addorders", "<html><head/><body><p><span style=\" color:#191970;\">Welcome To</span></p></body></html>", nullptr));
        label_4->setText(QString());
        label_6->setText(QCoreApplication::translate("addorders", "<html><head/><body><p><span style=\" color:#191970;\">Treats To Go Cake Shop Management</span></p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("addorders", "Category", nullptr));
        pushButton->setText(QCoreApplication::translate("addorders", "PushButton", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("addorders", "GroupBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addorders: public Ui_addorders {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDORDERS_H
