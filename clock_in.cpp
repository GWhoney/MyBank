#include "clock_in.h"
#include "ui_clock_in.h"

Clock_in::Clock_in(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Clock_in)
{
    ui->setupUi(this);
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");

    //连接mySql数据库
    db.setHostName("127.0.0.1");    //ip地址
    db.setUserName("root");
    db.setPassword("20200502");
    db.setDatabaseName("MyBank");//数据库名

    if(!db.open()){
        QMessageBox::warning(this,"错误","连接数据库失败");
        return;
    }
    qDebug()  << "连接数据库成功!";
}

Clock_in::~Clock_in()
{
    delete ui;
}

void Clock_in::on_pushButton_clicked()
{
    QString Website=ui->comboBox_Website->currentText();
    QString Class_Name=ui->lineEdit_ClassName->text();
    QString Account=ui->lineEdit_Account->text();
    QString Password=ui->lineEdit_Password->text();
    QString Money=ui->lineEdit_Money->text();
    QSqlQuery query;
    bool ok=query.exec("  create table if not exists Brush_Class(ID int primary key auto_increment, Website varchar(256) ,Class_Name varchar(256) ,Vedio varchar(256),HomeWork varchar(256),Test varchar(256),Account varchar(256), Password varchar(256), Money double)engine=innoDB default charset=utf8;");
    qDebug()<<"创建数据表："<<ok;

    ok=query.exec(QString("insert into Brush_Class(Website,Class_Name,Account,Password,Money) values('%1','%2','%3','%4',%5);").arg(Website).arg(Class_Name).arg(Account).arg(Password).arg(Money));
    qDebug()<<"插入数据："<<ok;
}
