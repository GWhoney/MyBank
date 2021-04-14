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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Clock_in
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox_Website;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *lineEdit_ClassName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_Account;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_Password;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_Money;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Clock_in)
    {
        if (Clock_in->objectName().isEmpty())
            Clock_in->setObjectName(QString::fromUtf8("Clock_in"));
        Clock_in->resize(324, 323);
        verticalLayout = new QVBoxLayout(Clock_in);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Clock_in);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        comboBox_Website = new QComboBox(Clock_in);
        comboBox_Website->addItem(QString());
        comboBox_Website->addItem(QString());
        comboBox_Website->addItem(QString());
        comboBox_Website->addItem(QString());
        comboBox_Website->addItem(QString());
        comboBox_Website->addItem(QString());
        comboBox_Website->addItem(QString());
        comboBox_Website->addItem(QString());
        comboBox_Website->addItem(QString());
        comboBox_Website->addItem(QString());
        comboBox_Website->addItem(QString());
        comboBox_Website->addItem(QString());
        comboBox_Website->setObjectName(QString::fromUtf8("comboBox_Website"));
        comboBox_Website->setFont(font);

        horizontalLayout->addWidget(comboBox_Website);

        horizontalLayout->setStretch(1, 9);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(Clock_in);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        horizontalLayout_6->addWidget(label_5);

        lineEdit_ClassName = new QLineEdit(Clock_in);
        lineEdit_ClassName->setObjectName(QString::fromUtf8("lineEdit_ClassName"));
        lineEdit_ClassName->setFont(font);

        horizontalLayout_6->addWidget(lineEdit_ClassName);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(Clock_in);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        lineEdit_Account = new QLineEdit(Clock_in);
        lineEdit_Account->setObjectName(QString::fromUtf8("lineEdit_Account"));
        lineEdit_Account->setFont(font);

        horizontalLayout_2->addWidget(lineEdit_Account);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(Clock_in);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        lineEdit_Password = new QLineEdit(Clock_in);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));
        lineEdit_Password->setFont(font);

        horizontalLayout_3->addWidget(lineEdit_Password);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(Clock_in);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        lineEdit_Money = new QLineEdit(Clock_in);
        lineEdit_Money->setObjectName(QString::fromUtf8("lineEdit_Money"));
        lineEdit_Money->setFont(font);

        horizontalLayout_4->addWidget(lineEdit_Money);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton = new QPushButton(Clock_in);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        horizontalLayout_5->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(Clock_in);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font);

        horizontalLayout_5->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(Clock_in);

        QMetaObject::connectSlotsByName(Clock_in);
    } // setupUi

    void retranslateUi(QWidget *Clock_in)
    {
        Clock_in->setWindowTitle(QCoreApplication::translate("Clock_in", "Form", nullptr));
        label->setText(QCoreApplication::translate("Clock_in", "\351\200\211\346\213\251\345\271\263\345\217\260\357\274\232", nullptr));
        comboBox_Website->setItemText(0, QCoreApplication::translate("Clock_in", "\350\266\205\346\230\237\345\255\246\344\271\240\351\200\232", nullptr));
        comboBox_Website->setItemText(1, QCoreApplication::translate("Clock_in", "\346\231\272\346\205\247\346\240\221/\347\237\245\345\210\260", nullptr));
        comboBox_Website->setItemText(2, QCoreApplication::translate("Clock_in", "U\346\240\241\345\233\255", nullptr));
        comboBox_Website->setItemText(3, QCoreApplication::translate("Clock_in", "\344\272\221\350\257\276\345\240\202\346\231\272\346\205\247\350\201\214\346\225\231", nullptr));
        comboBox_Website->setItemText(4, QCoreApplication::translate("Clock_in", "WE Learn", nullptr));
        comboBox_Website->setItemText(5, QCoreApplication::translate("Clock_in", "\344\274\230\345\255\246\351\231\242", nullptr));
        comboBox_Website->setItemText(6, QCoreApplication::translate("Clock_in", "\345\255\246\344\271\240\345\274\272\345\233\275", nullptr));
        comboBox_Website->setItemText(7, QCoreApplication::translate("Clock_in", "\344\270\255\345\233\275\345\244\247\345\255\246", nullptr));
        comboBox_Website->setItemText(8, QCoreApplication::translate("Clock_in", "\345\233\275\345\274\200\345\234\250\347\272\277", nullptr));
        comboBox_Website->setItemText(9, QCoreApplication::translate("Clock_in", "iSmart", nullptr));
        comboBox_Website->setItemText(10, QCoreApplication::translate("Clock_in", "\345\255\246\345\240\202\345\234\250\347\272\277", nullptr));
        comboBox_Website->setItemText(11, QCoreApplication::translate("Clock_in", "\344\270\255\345\233\275\345\244\247\345\255\246\347\224\237\345\234\250\347\272\277", nullptr));

        label_5->setText(QCoreApplication::translate("Clock_in", "\350\257\276\347\250\213\345\220\215\347\247\260\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Clock_in", "\350\264\246\345\217\267\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Clock_in", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("Clock_in", "\351\207\221\351\242\235\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("Clock_in", "\347\241\256\350\256\244", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Clock_in", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Clock_in: public Ui_Clock_in {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOCK_IN_H
