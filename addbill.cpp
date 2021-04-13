#include "addbill.h"
#include "ui_addbill.h"

addBill::addBill(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addBill)
{
    ui->setupUi(this);
    db=QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("20200502");
    db.setDatabaseName("MyBank");
    if(!db.open())
    {
        QMessageBox::critical(0,"警告","打开数据库失败",QMessageBox::Ok);
        return;
    }
    QIcon ic(QString(":/iconfinder_love-notebook_2903202.png"));

}

addBill::~addBill()
{
    delete ui;
}


void addBill::on_Btn_sure_clicked()
{
    QSqlQuery query;
    //query.exec("create table if not exists histudent(id int primary key auto_increment,name varchar(256),age int,score int) engine=innoDB default charset=utf8;");
    query.exec("create table  Bill(ID int primary key auto_increment,Name varchar(256),Goods varchar(256),Expense varchar(256),Way varchar(256),Kind varchar(256));");
    bool isok=query.prepare("insert into Bill(Name,Goods,Expense,Way,Kind) values(:Name ,:Goods,:Expense,:Way,:Kind);");
    qDebug()<<isok;
    //2 准备数据
    QString Name=ui->Who_ComboBox->currentText();
    QString Goods=ui->what_editLine->text();
    QString Expense=ui->how_editLine->text();
    QString How_Way=ui->how_comboBox->currentText();
    QString Kind=ui->buttonGroup->checkedButton()->text();
    QVariantList nameList;
    nameList<<Name;
    QVariantList goodList;
    goodList<<Goods;
    QVariantList expenseList;
    expenseList<<Expense;
    QVariantList wayList;
    wayList<<How_Way;
    QVariantList kindList;
    kindList<<Kind;


    //3 绑定
    query.bindValue(":Name",nameList);
    query.bindValue(":Goods",goodList);
    query.bindValue(":Expense",expenseList);
    query.bindValue(":Way",wayList);
    query.bindValue(":Kind",kindList);
    //4 插入
    bool ok=query.execBatch();
    qDebug()<<ok;

}






















#if 0
{
    db=QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("20200502");
    db.setDatabaseName("MyBank");
    if(!db.open())
    {
        QMessageBox::critical(0,"警告","打开数据库失败",QMessageBox::Ok);
        return;
    }

    QSqlQuery query;
    query.exec("create table  Bill(ID int primary key auto_increment,Name varchar(256),Goods varchar(256));");
    bool isok=query.prepare("insert into Bill(Name,Goods) values(:Name ,:Goods);");
    qDebug()<<isok;
#if 0
    QString Who=ui->Who_ComboBox->currentText();
    QString What=ui->what_editLine->text();
    int How_Money=ui->how_editLine->text().toInt();
    QString How_Way=ui->how_comboBox->currentText();
    QString Kind=ui->buttonGroup->checkedButton()->text();
    //qDebug()<<How_Way;

    QVariantList VWho;
    QVariantList VWhat;
    QVariantList VHow_Money;
    QVariantList VHwo_Way;
    QVariantList VKind;
    VWho<<Who;
    VWhat<<What;
    VHow_Money<<How_Money;
    VHwo_Way<<How_Way;
    VKind<<Kind;
#endif
    QString str=ui->Who_ComboBox->currentText();
    QString str1="2";
    int str2=200;
    QVariantList nameList;
    nameList<<str;
    QVariantList ageList;
    ageList<<str1;
    QVariantList scoreList;
    scoreList<<str2;

    query.bindValue(":Name",nameList);
    query.bindValue(":Goods",ageList);
    //query.bindValue(":Expense",VHow_Money);
    //query.bindValue(":Way",VHwo_Way);
    //query.bindValue(":Kind",VKind);
    bool ok=query.execBatch();
    qDebug()<<ok;
}
#endif
