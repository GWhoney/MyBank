/********************************************************************************
** Form generated from reading UI file 'income.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCOME_H
#define UI_INCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Income
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *Label_Income_Way;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QLabel *Label_Income;
    QLineEdit *lineEdit_Income;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QLabel *Label_Income_2;
    QRadioButton *RadioButton_Brush_Class;
    QRadioButton *RadioButton_TryPlay;
    QRadioButton *RadioButton_Coupon;
    QRadioButton *RadioButton_Baoxiao;
    QRadioButton *RadioButton_Alimony;
    QRadioButton *RadioButton_Wage;
    QRadioButton *RadioButton_Fund;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QButtonGroup *Button_Income;

    void setupUi(QWidget *Income)
    {
        if (Income->objectName().isEmpty())
            Income->setObjectName(QString::fromUtf8("Income"));
        Income->resize(400, 300);
        verticalLayout = new QVBoxLayout(Income);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        Label_Income_Way = new QLabel(Income);
        Label_Income_Way->setObjectName(QString::fromUtf8("Label_Income_Way"));
        QFont font;
        font.setPointSize(12);
        Label_Income_Way->setFont(font);

        horizontalLayout_3->addWidget(Label_Income_Way);

        comboBox = new QComboBox(Income);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setFont(font);

        horizontalLayout_3->addWidget(comboBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Label_Income = new QLabel(Income);
        Label_Income->setObjectName(QString::fromUtf8("Label_Income"));
        Label_Income->setFont(font);

        horizontalLayout->addWidget(Label_Income);

        lineEdit_Income = new QLineEdit(Income);
        lineEdit_Income->setObjectName(QString::fromUtf8("lineEdit_Income"));
        lineEdit_Income->setFont(font);

        horizontalLayout->addWidget(lineEdit_Income);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Label_Income_2 = new QLabel(Income);
        Label_Income_2->setObjectName(QString::fromUtf8("Label_Income_2"));
        Label_Income_2->setFont(font);

        gridLayout->addWidget(Label_Income_2, 0, 0, 1, 1);

        RadioButton_Brush_Class = new QRadioButton(Income);
        Button_Income = new QButtonGroup(Income);
        Button_Income->setObjectName(QString::fromUtf8("Button_Income"));
        Button_Income->addButton(RadioButton_Brush_Class);
        RadioButton_Brush_Class->setObjectName(QString::fromUtf8("RadioButton_Brush_Class"));
        RadioButton_Brush_Class->setFont(font);
        RadioButton_Brush_Class->setTabletTracking(false);
        RadioButton_Brush_Class->setAcceptDrops(false);
        RadioButton_Brush_Class->setAutoFillBackground(false);
        RadioButton_Brush_Class->setChecked(true);

        gridLayout->addWidget(RadioButton_Brush_Class, 0, 1, 1, 1);

        RadioButton_TryPlay = new QRadioButton(Income);
        Button_Income->addButton(RadioButton_TryPlay);
        RadioButton_TryPlay->setObjectName(QString::fromUtf8("RadioButton_TryPlay"));
        RadioButton_TryPlay->setFont(font);

        gridLayout->addWidget(RadioButton_TryPlay, 0, 2, 1, 2);

        RadioButton_Coupon = new QRadioButton(Income);
        Button_Income->addButton(RadioButton_Coupon);
        RadioButton_Coupon->setObjectName(QString::fromUtf8("RadioButton_Coupon"));
        RadioButton_Coupon->setFont(font);

        gridLayout->addWidget(RadioButton_Coupon, 0, 4, 1, 2);

        RadioButton_Baoxiao = new QRadioButton(Income);
        Button_Income->addButton(RadioButton_Baoxiao);
        RadioButton_Baoxiao->setObjectName(QString::fromUtf8("RadioButton_Baoxiao"));
        RadioButton_Baoxiao->setFont(font);

        gridLayout->addWidget(RadioButton_Baoxiao, 1, 0, 1, 1);

        RadioButton_Alimony = new QRadioButton(Income);
        Button_Income->addButton(RadioButton_Alimony);
        RadioButton_Alimony->setObjectName(QString::fromUtf8("RadioButton_Alimony"));
        RadioButton_Alimony->setFont(font);

        gridLayout->addWidget(RadioButton_Alimony, 1, 1, 1, 2);

        RadioButton_Wage = new QRadioButton(Income);
        Button_Income->addButton(RadioButton_Wage);
        RadioButton_Wage->setObjectName(QString::fromUtf8("RadioButton_Wage"));
        RadioButton_Wage->setFont(font);

        gridLayout->addWidget(RadioButton_Wage, 1, 3, 1, 2);

        RadioButton_Fund = new QRadioButton(Income);
        Button_Income->addButton(RadioButton_Fund);
        RadioButton_Fund->setObjectName(QString::fromUtf8("RadioButton_Fund"));
        RadioButton_Fund->setFont(font);

        gridLayout->addWidget(RadioButton_Fund, 1, 5, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_2 = new QPushButton(Income);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(Income);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Income);

        QMetaObject::connectSlotsByName(Income);
    } // setupUi

    void retranslateUi(QWidget *Income)
    {
        Income->setWindowTitle(QCoreApplication::translate("Income", "Form", nullptr));
        Label_Income_Way->setText(QCoreApplication::translate("Income", "\346\224\266\345\205\245\346\226\271\345\274\217:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Income", "\345\276\256\344\277\241", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Income", "\346\224\257\344\273\230\345\256\235", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Income", "\345\206\234\345\225\206\351\223\266\350\241\214", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Income", "\345\273\272\350\256\276\351\223\266\350\241\214", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("Income", "\347\216\260\351\207\221", nullptr));

        Label_Income->setText(QCoreApplication::translate("Income", "\346\224\266\345\205\245\351\207\221\351\242\235:", nullptr));
        Label_Income_2->setText(QCoreApplication::translate("Income", "\346\224\266\345\205\245\346\235\245\346\272\220\357\274\232", nullptr));
        RadioButton_Brush_Class->setText(QCoreApplication::translate("Income", "\345\210\267\350\257\276", nullptr));
        RadioButton_TryPlay->setText(QCoreApplication::translate("Income", "\350\257\225\347\216\251", nullptr));
        RadioButton_Coupon->setText(QCoreApplication::translate("Income", "\344\274\230\346\203\240\345\210\270", nullptr));
        RadioButton_Baoxiao->setText(QCoreApplication::translate("Income", "\346\212\245\351\224\200", nullptr));
        RadioButton_Alimony->setText(QCoreApplication::translate("Income", "\347\224\237\346\264\273\350\264\271", nullptr));
        RadioButton_Wage->setText(QCoreApplication::translate("Income", "\345\267\245\350\265\204", nullptr));
        RadioButton_Fund->setText(QCoreApplication::translate("Income", "\345\237\272\351\207\221", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Income", "\347\241\256\345\256\232", nullptr));
        pushButton->setText(QCoreApplication::translate("Income", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Income: public Ui_Income {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCOME_H
