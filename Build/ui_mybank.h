/********************************************************************************
** Form generated from reading UI file 'mybank.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYBANK_H
#define UI_MYBANK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyBank
{
public:
    QAction *Addbill;
    QAction *Income;
    QAction *Check_YuE;
    QAction *Clock_in;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QMenu *menuremaining_sum;
    QMenu *menuEveryDay_Clock;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MyBank)
    {
        if (MyBank->objectName().isEmpty())
            MyBank->setObjectName(QString::fromUtf8("MyBank"));
        MyBank->resize(483, 407);
        MyBank->setStyleSheet(QString::fromUtf8(""));
        Addbill = new QAction(MyBank);
        Addbill->setObjectName(QString::fromUtf8("Addbill"));
        Income = new QAction(MyBank);
        Income->setObjectName(QString::fromUtf8("Income"));
        Check_YuE = new QAction(MyBank);
        Check_YuE->setObjectName(QString::fromUtf8("Check_YuE"));
        Clock_in = new QAction(MyBank);
        Clock_in->setObjectName(QString::fromUtf8("Clock_in"));
        centralwidget = new QWidget(MyBank);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MyBank->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MyBank);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 483, 26));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        menuremaining_sum = new QMenu(menubar);
        menuremaining_sum->setObjectName(QString::fromUtf8("menuremaining_sum"));
        menuEveryDay_Clock = new QMenu(menubar);
        menuEveryDay_Clock->setObjectName(QString::fromUtf8("menuEveryDay_Clock"));
        MyBank->setMenuBar(menubar);
        statusbar = new QStatusBar(MyBank);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MyBank->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menubar->addAction(menuremaining_sum->menuAction());
        menubar->addAction(menuEveryDay_Clock->menuAction());
        menuMenu->addAction(Addbill);
        menuMenu->addAction(Income);
        menuremaining_sum->addAction(Check_YuE);
        menuEveryDay_Clock->addAction(Clock_in);

        retranslateUi(MyBank);

        QMetaObject::connectSlotsByName(MyBank);
    } // setupUi

    void retranslateUi(QMainWindow *MyBank)
    {
        MyBank->setWindowTitle(QCoreApplication::translate("MyBank", "MyBank", nullptr));
        Addbill->setText(QCoreApplication::translate("MyBank", "AddBill", nullptr));
        Income->setText(QCoreApplication::translate("MyBank", "Income", nullptr));
        Check_YuE->setText(QCoreApplication::translate("MyBank", "Check", nullptr));
        Clock_in->setText(QCoreApplication::translate("MyBank", "Add Class", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MyBank", "Menu", nullptr));
        menuremaining_sum->setTitle(QCoreApplication::translate("MyBank", "remaining sum", nullptr));
        menuEveryDay_Clock->setTitle(QCoreApplication::translate("MyBank", "Brush Class", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyBank: public Ui_MyBank {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYBANK_H
