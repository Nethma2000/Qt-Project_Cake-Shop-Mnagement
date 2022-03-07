/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_calculator
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QPushButton *changesign;
    QPushButton *equal;
    QPushButton *memclear;
    QPushButton *pushButton_7;
    QPushButton *divide;
    QPushButton *pushButton_1;
    QPushButton *memget;
    QPushButton *pushButton_17;
    QPushButton *pushButton_6;
    QPushButton *pushButton_23;
    QPushButton *substract;
    QPushButton *clear;
    QPushButton *memadd;
    QPushButton *pushButton_2;
    QPushButton *pushButton_8;
    QPushButton *pushButton_21;
    QPushButton *add;
    QPushButton *multiply;
    QPushButton *pushButton_22;
    QLabel *label;
    QLineEdit *display;

    void setupUi(QDialog *calculator)
    {
        if (calculator->objectName().isEmpty())
            calculator->setObjectName(QString::fromUtf8("calculator"));
        calculator->resize(419, 325);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(calculator->sizePolicy().hasHeightForWidth());
        calculator->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(calculator);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_3 = new QPushButton(calculator);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"     background-color: #191970;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}\n"
"\n"
"QPushButtonOnPressed{\n"
"     background-color: #A9A9A9;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}"));

        gridLayout->addWidget(pushButton_3, 4, 2, 1, 1);

        changesign = new QPushButton(calculator);
        changesign->setObjectName(QString::fromUtf8("changesign"));
        sizePolicy1.setHeightForWidth(changesign->sizePolicy().hasHeightForWidth());
        changesign->setSizePolicy(sizePolicy1);
        changesign->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"     background-color: #191970;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}\n"
"\n"
"QPushButtonOnPressed{\n"
"     background-color: #A9A9A9;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}"));

        gridLayout->addWidget(changesign, 5, 2, 1, 1);

        equal = new QPushButton(calculator);
        equal->setObjectName(QString::fromUtf8("equal"));
        sizePolicy1.setHeightForWidth(equal->sizePolicy().hasHeightForWidth());
        equal->setSizePolicy(sizePolicy1);
        equal->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"     background-color: #191970;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}\n"
"\n"
"QPushButtonOnPressed{\n"
"     background-color: #A9A9A9;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}"));

        gridLayout->addWidget(equal, 5, 4, 1, 1);

        memclear = new QPushButton(calculator);
        memclear->setObjectName(QString::fromUtf8("memclear"));
        sizePolicy1.setHeightForWidth(memclear->sizePolicy().hasHeightForWidth());
        memclear->setSizePolicy(sizePolicy1);
        memclear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"     background-color: #191970;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}\n"
"\n"
"QPushButtonOnPressed{\n"
"     background-color: #A9A9A9;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}"));

        gridLayout->addWidget(memclear, 3, 4, 1, 1);

        pushButton_7 = new QPushButton(calculator);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"     background-color: #191970;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}\n"
"\n"
"QPushButtonOnPressed{\n"
"     background-color: #A9A9A9;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}"));

        gridLayout->addWidget(pushButton_7, 3, 1, 1, 1);

        divide = new QPushButton(calculator);
        divide->setObjectName(QString::fromUtf8("divide"));
        sizePolicy1.setHeightForWidth(divide->sizePolicy().hasHeightForWidth());
        divide->setSizePolicy(sizePolicy1);
        divide->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"     background-color: #191970;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}\n"
"\n"
"QPushButtonOnPressed{\n"
"     background-color: #A9A9A9;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}"));

        gridLayout->addWidget(divide, 2, 3, 1, 1);

        pushButton_1 = new QPushButton(calculator);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        sizePolicy1.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy1);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"     background-color: #191970;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}\n"
"\n"
"QPushButtonOnPressed{\n"
"     background-color: #A9A9A9;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}"));

        gridLayout->addWidget(pushButton_1, 4, 0, 1, 1);

        memget = new QPushButton(calculator);
        memget->setObjectName(QString::fromUtf8("memget"));
        sizePolicy1.setHeightForWidth(memget->sizePolicy().hasHeightForWidth());
        memget->setSizePolicy(sizePolicy1);
        memget->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"     background-color: #191970;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}\n"
"\n"
"QPushButtonOnPressed{\n"
"     background-color: #A9A9A9;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}"));

        gridLayout->addWidget(memget, 4, 4, 1, 1);

        pushButton_17 = new QPushButton(calculator);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        sizePolicy1.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy1);
        pushButton_17->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"     background-color: #191970;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}\n"
"\n"
"QPushButtonOnPressed{\n"
"     background-color: #A9A9A9;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}"));

        gridLayout->addWidget(pushButton_17, 5, 1, 1, 1);

        pushButton_6 = new QPushButton(calculator);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"     background-color: #191970;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}\n"
"\n"
"QPushButtonOnPressed{\n"
"     background-color: #A9A9A9;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}"));

        gridLayout->addWidget(pushButton_6, 3, 0, 1, 1);

        pushButton_23 = new QPushButton(calculator);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));
        sizePolicy1.setHeightForWidth(pushButton_23->sizePolicy().hasHeightForWidth());
        pushButton_23->setSizePolicy(sizePolicy1);
        pushButton_23->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"     background-color: #191970;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}\n"
"\n"
"QPushButtonOnPressed{\n"
"     background-color: #A9A9A9;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}"));

        gridLayout->addWidget(pushButton_23, 2, 2, 1, 1);

        substract = new QPushButton(calculator);
        substract->setObjectName(QString::fromUtf8("substract"));
        sizePolicy1.setHeightForWidth(substract->sizePolicy().hasHeightForWidth());
        substract->setSizePolicy(sizePolicy1);
        substract->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"     background-color: #191970;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}\n"
"\n"
"QPushButtonOnPressed{\n"
"     background-color: #A9A9A9;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}"));

        gridLayout->addWidget(substract, 5, 3, 1, 1);

        clear = new QPushButton(calculator);
        clear->setObjectName(QString::fromUtf8("clear"));
        sizePolicy1.setHeightForWidth(clear->sizePolicy().hasHeightForWidth());
        clear->setSizePolicy(sizePolicy1);
        clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"     background-color: #191970;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}\n"
"\n"
"QPushButtonOnPressed{\n"
"     background-color: #A9A9A9;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}"));

        gridLayout->addWidget(clear, 5, 0, 1, 1);

        memadd = new QPushButton(calculator);
        memadd->setObjectName(QString::fromUtf8("memadd"));
        sizePolicy1.setHeightForWidth(memadd->sizePolicy().hasHeightForWidth());
        memadd->setSizePolicy(sizePolicy1);
        memadd->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"     background-color: #191970;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}\n"
"\n"
"QPushButtonOnPressed{\n"
"     background-color: #A9A9A9;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}"));

        gridLayout->addWidget(memadd, 2, 4, 1, 1);

        pushButton_2 = new QPushButton(calculator);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"     background-color: #191970;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}\n"
"\n"
"QPushButtonOnPressed{\n"
"     background-color: #A9A9A9;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}"));

        gridLayout->addWidget(pushButton_2, 4, 1, 1, 1);

        pushButton_8 = new QPushButton(calculator);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"     background-color: #191970;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}\n"
"\n"
"QPushButtonOnPressed{\n"
"     background-color: #A9A9A9;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}"));

        gridLayout->addWidget(pushButton_8, 3, 2, 1, 1);

        pushButton_21 = new QPushButton(calculator);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        sizePolicy1.setHeightForWidth(pushButton_21->sizePolicy().hasHeightForWidth());
        pushButton_21->setSizePolicy(sizePolicy1);
        pushButton_21->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"     background-color: #191970;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}\n"
"\n"
"QPushButtonOnPressed{\n"
"     background-color: #A9A9A9;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}"));

        gridLayout->addWidget(pushButton_21, 2, 0, 1, 1);

        add = new QPushButton(calculator);
        add->setObjectName(QString::fromUtf8("add"));
        sizePolicy1.setHeightForWidth(add->sizePolicy().hasHeightForWidth());
        add->setSizePolicy(sizePolicy1);
        add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"     background-color: #191970;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}\n"
"\n"
"QPushButtonOnPressed{\n"
"     background-color: #A9A9A9;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}"));

        gridLayout->addWidget(add, 4, 3, 1, 1);

        multiply = new QPushButton(calculator);
        multiply->setObjectName(QString::fromUtf8("multiply"));
        sizePolicy1.setHeightForWidth(multiply->sizePolicy().hasHeightForWidth());
        multiply->setSizePolicy(sizePolicy1);
        multiply->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"     background-color: #191970;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}\n"
"\n"
"QPushButtonOnPressed{\n"
"     background-color: #A9A9A9;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}"));

        gridLayout->addWidget(multiply, 3, 3, 1, 1);

        pushButton_22 = new QPushButton(calculator);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        sizePolicy1.setHeightForWidth(pushButton_22->sizePolicy().hasHeightForWidth());
        pushButton_22->setSizePolicy(sizePolicy1);
        pushButton_22->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"     background-color: #191970;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}\n"
"\n"
"QPushButtonOnPressed{\n"
"     background-color: #A9A9A9;\n"
"    border:1px solid gray;\n"
"     padding:5px;\n"
"}"));

        gridLayout->addWidget(pushButton_22, 2, 1, 1, 1);

        label = new QLabel(calculator);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        display = new QLineEdit(calculator);
        display->setObjectName(QString::fromUtf8("display"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(display->sizePolicy().hasHeightForWidth());
        display->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(18);
        font.setBold(true);
        display->setFont(font);
        display->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"     background-color: gray;\n"
"    border:1px solid gray;\n"
"    color:#ffffff;\n"
"}"));
        display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(display, 1, 0, 1, 5);


        retranslateUi(calculator);

        QMetaObject::connectSlotsByName(calculator);
    } // setupUi

    void retranslateUi(QDialog *calculator)
    {
        calculator->setWindowTitle(QCoreApplication::translate("calculator", "Dialog", nullptr));
        pushButton_3->setText(QCoreApplication::translate("calculator", "3", nullptr));
        changesign->setText(QCoreApplication::translate("calculator", "+/-", nullptr));
        equal->setText(QCoreApplication::translate("calculator", "=", nullptr));
        memclear->setText(QCoreApplication::translate("calculator", "M-", nullptr));
        pushButton_7->setText(QCoreApplication::translate("calculator", "5", nullptr));
        divide->setText(QCoreApplication::translate("calculator", "/", nullptr));
        pushButton_1->setText(QCoreApplication::translate("calculator", "1", nullptr));
        memget->setText(QCoreApplication::translate("calculator", "M", nullptr));
        pushButton_17->setText(QCoreApplication::translate("calculator", "0", nullptr));
        pushButton_6->setText(QCoreApplication::translate("calculator", "4", nullptr));
        pushButton_23->setText(QCoreApplication::translate("calculator", "9", nullptr));
        substract->setText(QCoreApplication::translate("calculator", "-", nullptr));
        clear->setText(QCoreApplication::translate("calculator", "AC", nullptr));
        memadd->setText(QCoreApplication::translate("calculator", "M+", nullptr));
        pushButton_2->setText(QCoreApplication::translate("calculator", "2", nullptr));
        pushButton_8->setText(QCoreApplication::translate("calculator", "6", nullptr));
        pushButton_21->setText(QCoreApplication::translate("calculator", "7", nullptr));
        add->setText(QCoreApplication::translate("calculator", "+", nullptr));
        multiply->setText(QCoreApplication::translate("calculator", "*", nullptr));
        pushButton_22->setText(QCoreApplication::translate("calculator", "8", nullptr));
        label->setText(QCoreApplication::translate("calculator", "TextLabel", nullptr));
        display->setText(QCoreApplication::translate("calculator", "0.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculator: public Ui_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
