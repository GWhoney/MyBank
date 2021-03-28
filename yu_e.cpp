#include "yu_e.h"
#include "ui_yu_e.h"

yu_e::yu_e(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::yu_e)
{
    ui->setupUi(this);
    initBuddy();
    QIcon ic(QString(":/iconfinder_love-notebook_2903202.png"));
    this->setWindowIcon(ic);
    showYue();

}

yu_e::~yu_e()
{
    delete ui;
}

void yu_e::initBuddy()
{
    ui->WeChat->setBuddy(ui->WeChat_2);
    ui->Alipay->setBuddy(ui->Alipay_2);
    ui->NongShangBank->setBuddy(ui->NongShangBank_2);
    ui->JianSheBang->setBuddy(ui->JianSheBang_2);
    ui->Cash->setBuddy(ui->Cash_2);

    ui->Baby_WeChat->setBuddy(ui->Baby_WeChat_2);
    ui->Baby_Alipay->setBuddy(ui->Baby_Alipay_2);
    ui->label->setBuddy(ui->label_2);
    ui->label_6->setBuddy(ui->label_7);
    ui->Baby_Cash->setBuddy(ui->Baby_Cash_2);

    ui->HuaBei->setBuddy(ui->HuaBei_2);
    ui->loans->setBuddy(ui->loans_2);

    ui->label_13->setBuddy(ui->label_14);
}

void yu_e::showYue()
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE","rconntosqlite");
    db.setDatabaseName("MyBank.db");
    if(db.open())
    {
        QSqlQuery query(db);
        QString line="select * from Bill;";
        bool ok=query.exec(line);
        query.next();
        QString one=query.value(0).toString();
        QString two=query.value(1).toString();
        QString there=query.value(2).toString();
        QString four=query.value(3).toString();
        QString five=query.value(4).toString();
        if(ok)
        {
            ui->WeChat_2->setText(one);
            ui->Alipay_2->setText(two);
            ui->NongShangBank_2->setText(there);
            ui->JianSheBang_2->setText(four);
            ui->Cash_2->setText(five);
        }

    }
    db.close();
}

