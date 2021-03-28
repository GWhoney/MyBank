/********************************************************************************
** Form generated from reading UI file 'clock_in.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOCK_IN_H
#define UI_CLOCK_IN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Clock_in
{
public:

    void setupUi(QWidget *Clock_in)
    {
        if (Clock_in->objectName().isEmpty())
            Clock_in->setObjectName(QString::fromUtf8("Clock_in"));
        Clock_in->resize(400, 300);

        retranslateUi(Clock_in);

        QMetaObject::connectSlotsByName(Clock_in);
    } // setupUi

    void retranslateUi(QWidget *Clock_in)
    {
        Clock_in->setWindowTitle(QCoreApplication::translate("Clock_in", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Clock_in: public Ui_Clock_in {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOCK_IN_H
