/********************************************************************************
** Form generated from reading UI file 'viewproducts.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWPRODUCTS_H
#define UI_VIEWPRODUCTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_viewproducts
{
public:
    QTableView *tableView;
    QPushButton *pushButton_loadall;
    QPushButton *pushButton_searchbycat;
    QComboBox *comboBox_2;
    QLabel *label;
    QLabel *label_14;
    QPushButton *pushButton;
    QLabel *label_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_8;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_5;
    QLabel *label_13;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_18;
    QPushButton *pushButton_10;

    void setupUi(QDialog *viewproducts)
    {
        if (viewproducts->objectName().isEmpty())
            viewproducts->setObjectName(QString::fromUtf8("viewproducts"));
        viewproducts->resize(814, 474);
        tableView = new QTableView(viewproducts);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(250, 170, 541, 271));
        pushButton_loadall = new QPushButton(viewproducts);
        pushButton_loadall->setObjectName(QString::fromUtf8("pushButton_loadall"));
        pushButton_loadall->setGeometry(QRect(660, 140, 80, 24));
        pushButton_searchbycat = new QPushButton(viewproducts);
        pushButton_searchbycat->setObjectName(QString::fromUtf8("pushButton_searchbycat"));
        pushButton_searchbycat->setGeometry(QRect(470, 140, 80, 24));
        comboBox_2 = new QComboBox(viewproducts);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(360, 140, 101, 24));
        label = new QLabel(viewproducts);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 140, 101, 20));
        label_14 = new QLabel(viewproducts);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(0, 50, 231, 191));
        label_14->setStyleSheet(QString::fromUtf8("image: url(:/img/images/logo.png);"));
        pushButton = new QPushButton(viewproducts);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 260, 161, 24));
        label_3 = new QLabel(viewproducts);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 231, 41));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 38, 77);"));
        pushButton_4 = new QPushButton(viewproducts);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(40, 320, 161, 24));
        pushButton_8 = new QPushButton(viewproducts);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(40, 410, 161, 24));
        label_2 = new QLabel(viewproducts);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 30, 231, 451));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 63);"));
        pushButton_3 = new QPushButton(viewproducts);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 290, 161, 24));
        pushButton_7 = new QPushButton(viewproducts);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(40, 380, 161, 24));
        pushButton_5 = new QPushButton(viewproducts);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(40, 350, 161, 24));
        label_13 = new QLabel(viewproducts);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(40, 10, 121, 20));
        label_5 = new QLabel(viewproducts);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(430, 60, 141, 21));
        QFont font;
        font.setPointSize(14);
        label_5->setFont(font);
        label_6 = new QLabel(viewproducts);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(320, 90, 371, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_6->setFont(font1);
        label_4 = new QLabel(viewproducts);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(230, 0, 511, 41));
        label_4->setStyleSheet(QString::fromUtf8("border-color: rgb(25, 25, 112);"));
        label_7 = new QLabel(viewproducts);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(160, 40, 651, 441));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 212, 255);"));
        label_18 = new QLabel(viewproducts);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(240, 0, 201, 41));
        pushButton_10 = new QPushButton(viewproducts);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(760, 0, 51, 41));
        pushButton_10->setStyleSheet(QString::fromUtf8("image: url(:/img/images/icons8-home-page-30(1).png);"));
        label_7->raise();
        label_2->raise();
        tableView->raise();
        pushButton_loadall->raise();
        pushButton_searchbycat->raise();
        comboBox_2->raise();
        label->raise();
        label_14->raise();
        pushButton->raise();
        label_3->raise();
        pushButton_4->raise();
        pushButton_8->raise();
        pushButton_3->raise();
        pushButton_7->raise();
        pushButton_5->raise();
        label_13->raise();
        label_5->raise();
        label_6->raise();
        label_4->raise();
        label_18->raise();
        pushButton_10->raise();

        retranslateUi(viewproducts);

        QMetaObject::connectSlotsByName(viewproducts);
    } // setupUi

    void retranslateUi(QDialog *viewproducts)
    {
        viewproducts->setWindowTitle(QCoreApplication::translate("viewproducts", "Dialog", nullptr));
        pushButton_loadall->setText(QCoreApplication::translate("viewproducts", "Fetch All", nullptr));
        pushButton_searchbycat->setText(QCoreApplication::translate("viewproducts", "Search", nullptr));
        label->setText(QCoreApplication::translate("viewproducts", "Search by category", nullptr));
        label_14->setText(QString());
        pushButton->setText(QCoreApplication::translate("viewproducts", "Billing", nullptr));
        label_3->setText(QString());
        pushButton_4->setText(QCoreApplication::translate("viewproducts", "Add/View Reservations", nullptr));
        pushButton_8->setText(QCoreApplication::translate("viewproducts", "Logout", nullptr));
        label_2->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("viewproducts", "Product Search", nullptr));
        pushButton_7->setText(QCoreApplication::translate("viewproducts", "Notepad", nullptr));
        pushButton_5->setText(QCoreApplication::translate("viewproducts", "Remove Reservations", nullptr));
        label_13->setText(QCoreApplication::translate("viewproducts", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; font-style:italic; color:#fff6fe;\">TREATS TO GO</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("viewproducts", "<html><head/><body><p><span style=\" color:#191970;\">Welcome To</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("viewproducts", "<html><head/><body><p><span style=\" color:#191970;\">Treats To Go Cake Shop Management</span></p></body></html>", nullptr));
        label_4->setText(QString());
        label_7->setText(QString());
        label_18->setText(QCoreApplication::translate("viewproducts", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700; color:#191970;\">Cashier&gt;&gt;Search Products</span></p></body></html>", nullptr));
        pushButton_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class viewproducts: public Ui_viewproducts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPRODUCTS_H
