#include "addbill.h"
#include "ui_addbill.h"

addBill::addBill(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addBill)
{
    ui->setupUi(this);
    ui->Who_ComboBox->setCurrentText("小高");
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
    readInfo();

}

addBill::~addBill()
{
    delete ui;
}

void addBill::readInfo()
{
    QSqlQuery query;
    bool ok=query.exec("select * from Diposit");
    if(!ok)
    {
        QMessageBox::critical(0,"警告","数据库信息读取失败",QMessageBox::Ok);
        return;
    }
    while(query.next())
    {
        WeChat=query.value(0).toDouble();
        Alipay=query.value(1).toDouble();
        NongShangBank=query.value(2).toDouble();
        JianSheBank=query.value(3).toDouble();
        Cash=query.value(4).toDouble();
        HuaBei=query.value(5).toDouble();
        Loans=query.value(6).toDouble();
    }
}

void addBill::clearFun()
{
    ui->Who_ComboBox->setCurrentIndex(1);
    ui->what_editLine->setText("");
    ui->how_editLine->setText("");

}


void addBill::on_Btn_sure_clicked()
{
    QSqlQuery query;
    QString Name=ui->Who_ComboBox->currentText();
    QString Goods=ui->what_editLine->text();
    QString Expense=ui->how_editLine->text();
    QString How_Way=ui->how_comboBox->currentText();
    QString Kind=ui->buttonGroup->checkedButton()->text();
    QString Sure=Name+"\n"+Goods+"\n"+Expense+"\n"+How_Way+"\n"+Kind;
    QString Time=QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss");
    if(QMessageBox::information(0,"信息确认",Sure,"确认","取消")==0)
    {

        //query.exec("create table if not exists histudent(id int primary key auto_increment,name varchar(256),age int,score int) engine=innoDB default charset=utf8;");
        //query.exec("create table  Bill(ID int primary key auto_increment,Name varchar(256),Goods varchar(256),Expense varchar(256),Way varchar(256),Kind varchar(256));");
        bool isok=query.prepare("insert into Bill(Name,Goods,Expense,Way,Kind,Time) values(:Name ,:Goods,:Expense,:Way,:Kind,:Time);");
        qDebug()<<isok;
        //2 准备数据

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
        QVariantList timeList;
        timeList<<Time;


        //3 绑定
        query.bindValue(":Name",nameList);
        query.bindValue(":Goods",goodList);
        query.bindValue(":Expense",expenseList);
        query.bindValue(":Way",wayList);
        query.bindValue(":Kind",kindList);
        query.bindValue(":Time",timeList);
        //4 插入
        bool ok=query.execBatch();
        qDebug()<<ok;

        int temp=ui->how_comboBox->currentIndex();
        switch(temp)
        {
        case 0:
        {
            int Mon=ui->how_editLine->text().toDouble();
            WeChat=WeChat-Mon;
            qDebug()<<WeChat;
            bool ok=query.exec(QString("update Diposit set WeChat_Gao=%1").arg(WeChat));
            qDebug()<<"修改存款："<<ok;
            break;
        }
        case 1:
        {
            int Mon=ui->how_editLine->text().toDouble();
            Alipay=Alipay-Mon;
            qDebug()<<Alipay;
            bool ok=query.exec(QString("update Diposit set Alipay_Gao=%1").arg(Alipay));
            break;
        }
        case 2:
        {
            int Mon=ui->how_editLine->text().toDouble();
            NongShangBank=NongShangBank-Mon;
            qDebug()<<NongShangBank;
            bool ok=query.exec(QString("update Diposit set NongShangBank_Gao=%1").arg(NongShangBank));
            break;
        }
        case 3:
        {
            int Mon=ui->how_editLine->text().toDouble();
            JianSheBank=JianSheBank-Mon;
            qDebug()<<JianSheBank;
            bool ok=query.exec(QString("update Diposit set JianSheBang_Gao=%1").arg(JianSheBank));
            break;
        }
        case 4:
        {
            int Mon=ui->how_editLine->text().toDouble();
            HuaBei=HuaBei+Mon;
            qDebug()<<HuaBei;
            bool ok=query.exec(QString("update Diposit set HuaBei_Gao=%1").arg(HuaBei));
            break;
        }
        case 5:
        {
            int Mon=ui->how_editLine->text().toDouble();
            Cash=Cash-Mon;
            qDebug()<<Cash;
            bool ok=query.exec(QString("update Diposit set Cash_Gao=%1").arg(Cash));
            break;
        }
        case 6:
        {
            int Mon=ui->how_editLine->text().toDouble();
            Loans=Loans-Mon;
            qDebug()<<Loans;
            bool ok=query.exec(QString("update Diposit set loans_Gao=%1").arg(Loans));
            break;
        }
        }
        clearFun();
    }

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
