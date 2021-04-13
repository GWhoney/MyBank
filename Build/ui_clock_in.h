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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Clock_in
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QComboBox *comboBox;

    void setupUi(QWidget *Clock_in)
    {
        if (Clock_in->objectName().isEmpty())
            Clock_in->setObjectName(QString::fromUtf8("Clock_in"));
        Clock_in->resize(400, 300);
        pushButton = new QPushButton(Clock_in);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 190, 93, 28));
        lineEdit = new QLineEdit(Clock_in);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 90, 113, 21));
        comboBox = new QComboBox(Clock_in);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(80, 40, 121, 22));

        retranslateUi(Clock_in);

        QMetaObject::connectSlotsByName(Clock_in);
    } // setupUi

    void retranslateUi(QWidget *Clock_in)
    {
        Clock_in->setWindowTitle(QCoreApplication::translate("Clock_in", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Clock_in", "PushButton", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Clock_in", "\345\276\256\344\277\241", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Clock_in", "QQ", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Clock_in: public Ui_Clock_in {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOCK_IN_H
