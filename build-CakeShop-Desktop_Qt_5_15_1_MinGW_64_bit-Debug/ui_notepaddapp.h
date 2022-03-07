/********************************************************************************
** Form generated from reading UI file 'notepaddapp.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPADDAPP_H
#define UI_NOTEPADDAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_notepaddapp
{
public:

    void setupUi(QDialog *notepaddapp)
    {
        if (notepaddapp->objectName().isEmpty())
            notepaddapp->setObjectName(QString::fromUtf8("notepaddapp"));
        notepaddapp->resize(691, 327);

        retranslateUi(notepaddapp);

        QMetaObject::connectSlotsByName(notepaddapp);
    } // setupUi

    void retranslateUi(QDialog *notepaddapp)
    {
        notepaddapp->setWindowTitle(QCoreApplication::translate("notepaddapp", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class notepaddapp: public Ui_notepaddapp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPADDAPP_H
