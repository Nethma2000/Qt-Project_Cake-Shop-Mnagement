/********************************************************************************
** Form generated from reading UI file 'editorders.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORDERS_H
#define UI_EDITORDERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_editorders
{
public:

    void setupUi(QDialog *editorders)
    {
        if (editorders->objectName().isEmpty())
            editorders->setObjectName(QString::fromUtf8("editorders"));
        editorders->resize(764, 401);

        retranslateUi(editorders);

        QMetaObject::connectSlotsByName(editorders);
    } // setupUi

    void retranslateUi(QDialog *editorders)
    {
        editorders->setWindowTitle(QCoreApplication::translate("editorders", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editorders: public Ui_editorders {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORDERS_H
