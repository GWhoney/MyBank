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

    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("20200502");
    db.setDatabaseName("MyBank");
    if(!db.open())
    {
        QMessageBox::information(0,"错误","连接数据库失败",QMessageBox::Ok);
        return;
    }
    QSqlQuery query;
    query.exec("select * from Diposit;");
    while(query.next())
    {
        QString WeChat=query.value(0).toString();
        QString Alipay=query.value(1).toString();
        QString NongShang=query.value(2).toString();
        QString JianShe=query.value(3).toString();
        QString Cash=query.value(4).toString();
        QString HuaBei=query.value(5).toString();
        QString Loans=query.value(6).toString();

        ui->WeChat_2->setText(WeChat);
        ui->Alipay_2->setText(Alipay);
        ui->NongShangBank_2->setText(NongShang);
        ui->JianSheBang_2->setText(JianShe);
        ui->Cash_2->setText(Cash);
        ui->HuaBei_2->setText(HuaBei);
        ui->loans_2->setText(Loans);
    }
}

