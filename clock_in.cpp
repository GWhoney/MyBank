#include "clock_in.h"
#include "ui_clock_in.h"

Clock_in::Clock_in(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Clock_in)
{
    ui->setupUi(this);
}

Clock_in::~Clock_in()
{
    delete ui;
}

void Clock_in::on_pushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");

    //连接mySql数据库
    db.setHostName("127.0.0.1");    //ip地址
    db.setUserName("root");
    db.setPassword("20200502");
    db.setDatabaseName("Text");//数据库名

    if(!db.open()){
        QMessageBox::warning(this,"错误","连接数据库失败");
        return;
    }
    qDebug()  << "连接数据库成功!";
    QSqlQuery query;
    //query.exec("create table if not exists histudent(id int primary key auto_increment,name varchar(256),age int,score int) engine=innoDB default charset=utf8;");
    query.exec("create table  Bill(ID int primary key auto_increment,Name varchar(256),Goods varchar(256));");
    bool isok=query.prepare("insert into Bill(Name,Goods) values(:Name ,:Goods);");
    qDebug()<<isok;
    //2 准备数据
    QString str=ui->comboBox->currentText();
    int str1=ui->lineEdit->text().toInt();
    int str2=200;
    QVariantList nameList;
    nameList<<str;
    QVariantList ageList;
    ageList<<str1;
    QVariantList scoreList;
    scoreList<<str2;

    //3 绑定
    query.bindValue(":Name",nameList);
    query.bindValue(":Goods",ageList);
    //query.bindValue(":Expense",scoreList);
    //4 插入
    bool ok=query.execBatch();
    qDebug()<<ok;

}
