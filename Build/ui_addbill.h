/********************************************************************************
** Form generated from reading UI file 'addbill.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBILL_H
#define UI_ADDBILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addBill
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_10;
    QLabel *Who_Label;
    QComboBox *Who_ComboBox;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *what_editLine;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QLineEdit *how_editLine;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *how_comboBox;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_9;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_11;
    QRadioButton *radioButton_12;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *Btn_sure;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *Btn_cencel;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *addBill)
    {
        if (addBill->objectName().isEmpty())
            addBill->setObjectName(QString::fromUtf8("addBill"));
        addBill->resize(355, 442);
        verticalLayout_2 = new QVBoxLayout(addBill);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(addBill);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(25);
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        Who_Label = new QLabel(addBill);
        Who_Label->setObjectName(QString::fromUtf8("Who_Label"));
        QFont font1;
        font1.setPointSize(12);
        Who_Label->setFont(font1);

        horizontalLayout_10->addWidget(Who_Label);

        Who_ComboBox = new QComboBox(addBill);
        Who_ComboBox->addItem(QString());
        Who_ComboBox->addItem(QString());
        Who_ComboBox->setObjectName(QString::fromUtf8("Who_ComboBox"));

        horizontalLayout_10->addWidget(Who_ComboBox);

        horizontalSpacer_5 = new QSpacerItem(36, 24, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(addBill);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        horizontalLayout->addWidget(label_3);

        what_editLine = new QLineEdit(addBill);
        what_editLine->setObjectName(QString::fromUtf8("what_editLine"));
        what_editLine->setFont(font1);

        horizontalLayout->addWidget(what_editLine);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_5 = new QLabel(addBill);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        horizontalLayout_9->addWidget(label_5);

        how_editLine = new QLineEdit(addBill);
        how_editLine->setObjectName(QString::fromUtf8("how_editLine"));
        how_editLine->setFont(font1);

        horizontalLayout_9->addWidget(how_editLine);

        horizontalSpacer_4 = new QSpacerItem(36, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(addBill);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        how_comboBox = new QComboBox(addBill);
        how_comboBox->addItem(QString());
        how_comboBox->addItem(QString());
        how_comboBox->addItem(QString());
        how_comboBox->addItem(QString());
        how_comboBox->addItem(QString());
        how_comboBox->setObjectName(QString::fromUtf8("how_comboBox"));

        horizontalLayout_2->addWidget(how_comboBox);

        horizontalSpacer = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout_2->setStretch(1, 5);

        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(addBill);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        horizontalLayout_4->addWidget(label_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        radioButton = new QRadioButton(addBill);
        buttonGroup = new QButtonGroup(addBill);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(radioButton);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setFont(font1);
        radioButton->setTabletTracking(false);
        radioButton->setChecked(true);

        horizontalLayout_3->addWidget(radioButton);

        radioButton_2 = new QRadioButton(addBill);
        buttonGroup->addButton(radioButton_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setFont(font1);

        horizontalLayout_3->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(addBill);
        buttonGroup->addButton(radioButton_3);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setFont(font1);

        horizontalLayout_3->addWidget(radioButton_3);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        radioButton_4 = new QRadioButton(addBill);
        buttonGroup->addButton(radioButton_4);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setFont(font1);

        horizontalLayout_5->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(addBill);
        buttonGroup->addButton(radioButton_5);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setFont(font1);

        horizontalLayout_5->addWidget(radioButton_5);

        radioButton_6 = new QRadioButton(addBill);
        buttonGroup->addButton(radioButton_6);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setFont(font1);

        horizontalLayout_5->addWidget(radioButton_6);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        radioButton_7 = new QRadioButton(addBill);
        buttonGroup->addButton(radioButton_7);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        radioButton_7->setFont(font1);

        horizontalLayout_6->addWidget(radioButton_7);

        radioButton_8 = new QRadioButton(addBill);
        buttonGroup->addButton(radioButton_8);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));
        radioButton_8->setFont(font1);

        horizontalLayout_6->addWidget(radioButton_8);

        radioButton_9 = new QRadioButton(addBill);
        buttonGroup->addButton(radioButton_9);
        radioButton_9->setObjectName(QString::fromUtf8("radioButton_9"));
        radioButton_9->setFont(font1);

        horizontalLayout_6->addWidget(radioButton_9);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        radioButton_10 = new QRadioButton(addBill);
        buttonGroup->addButton(radioButton_10);
        radioButton_10->setObjectName(QString::fromUtf8("radioButton_10"));
        radioButton_10->setFont(font1);

        horizontalLayout_7->addWidget(radioButton_10);

        radioButton_11 = new QRadioButton(addBill);
        buttonGroup->addButton(radioButton_11);
        radioButton_11->setObjectName(QString::fromUtf8("radioButton_11"));
        radioButton_11->setFont(font1);

        horizontalLayout_7->addWidget(radioButton_11);

        radioButton_12 = new QRadioButton(addBill);
        buttonGroup->addButton(radioButton_12);
        radioButton_12->setObjectName(QString::fromUtf8("radioButton_12"));
        radioButton_12->setFont(font1);

        horizontalLayout_7->addWidget(radioButton_12);


        verticalLayout->addLayout(horizontalLayout_7);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        Btn_sure = new QPushButton(addBill);
        Btn_sure->setObjectName(QString::fromUtf8("Btn_sure"));

        horizontalLayout_8->addWidget(Btn_sure);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);

        Btn_cencel = new QPushButton(addBill);
        Btn_cencel->setObjectName(QString::fromUtf8("Btn_cencel"));

        horizontalLayout_8->addWidget(Btn_cencel);


        verticalLayout_2->addLayout(horizontalLayout_8);


        retranslateUi(addBill);

        QMetaObject::connectSlotsByName(addBill);
    } // setupUi

    void retranslateUi(QWidget *addBill)
    {
        addBill->setWindowTitle(QCoreApplication::translate("addBill", "Form", nullptr));
        label->setText(QCoreApplication::translate("addBill", "AddBill", nullptr));
        Who_Label->setText(QCoreApplication::translate("addBill", "\350\260\201\350\212\261\344\272\206\351\222\261\351\222\261\357\274\232", nullptr));
        Who_ComboBox->setItemText(0, QCoreApplication::translate("addBill", "\345\260\217\345\215\253", nullptr));
        Who_ComboBox->setItemText(1, QCoreApplication::translate("addBill", "\345\260\217\351\253\230", nullptr));

        label_3->setText(QCoreApplication::translate("addBill", "\344\271\260\344\272\206\345\225\245\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("addBill", "\350\212\261\344\272\206\345\244\232\345\260\221\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("addBill", "\347\224\250\344\273\200\344\271\210\344\271\260\347\232\204\357\274\232", nullptr));
        how_comboBox->setItemText(0, QCoreApplication::translate("addBill", "\345\276\256\344\277\241", nullptr));
        how_comboBox->setItemText(1, QCoreApplication::translate("addBill", "\346\224\257\344\273\230\345\256\235", nullptr));
        how_comboBox->setItemText(2, QCoreApplication::translate("addBill", "\351\223\266\350\241\214\345\215\241", nullptr));
        how_comboBox->setItemText(3, QCoreApplication::translate("addBill", "\350\212\261\345\221\227", nullptr));
        how_comboBox->setItemText(4, QCoreApplication::translate("addBill", "\347\216\260\351\207\221", nullptr));

        label_4->setText(QCoreApplication::translate("addBill", "\345\210\206\347\261\273\357\274\232", nullptr));
        radioButton->setText(QCoreApplication::translate("addBill", "\351\233\266\351\243\237", nullptr));
        radioButton_2->setText(QCoreApplication::translate("addBill", "\350\241\243\346\234\215", nullptr));
        radioButton_3->setText(QCoreApplication::translate("addBill", "\350\243\244\350\243\244", nullptr));
        radioButton_4->setText(QCoreApplication::translate("addBill", "\351\236\213\351\236\213", nullptr));
        radioButton_5->setText(QCoreApplication::translate("addBill", "\347\276\216\345\246\206", nullptr));
        radioButton_6->setText(QCoreApplication::translate("addBill", "\346\260\264\347\224\265", nullptr));
        radioButton_7->setText(QCoreApplication::translate("addBill", "\344\272\244\351\200\232", nullptr));
        radioButton_8->setText(QCoreApplication::translate("addBill", "\345\255\246\344\271\240", nullptr));
        radioButton_9->setText(QCoreApplication::translate("addBill", "\345\250\261\344\271\220", nullptr));
        radioButton_10->setText(QCoreApplication::translate("addBill", "\351\245\255\351\245\255", nullptr));
        radioButton_11->setText(QCoreApplication::translate("addBill", "\345\226\235\347\232\204", nullptr));
        radioButton_12->setText(QCoreApplication::translate("addBill", "\343\200\202\343\200\202", nullptr));
        Btn_sure->setText(QCoreApplication::translate("addBill", "\347\241\256\350\256\244", nullptr));
        Btn_cencel->setText(QCoreApplication::translate("addBill", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addBill: public Ui_addBill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBILL_H
