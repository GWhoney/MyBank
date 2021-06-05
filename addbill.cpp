#include "addbill.h"
#include "ui_addbill.h"

addBill::addBill(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addBill)
{
    ui->setupUi(this);
    m_BaoXiao=false;
    ui->lineEdi_BaoXiao->setDisabled(true);
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
    QString BX("否");
    double BX_Mon=0;
    double Money=ui->how_editLine->text().toDouble();
    QString Name=ui->Who_ComboBox->currentText();
    QString Goods=ui->what_editLine->text();
    QString Expense=ui->how_editLine->text();
    QString How_Way=ui->how_comboBox->currentText();
    QString Kind=ui->buttonGroup->checkedButton()->text();
    QString Sure=Name+"\n"+Goods+"\n"+Expense+"\n"+How_Way+"\n"+Kind;
    QString Time=QDateTime::currentDateTime().toString("yyyy-MM-dd");
    if(m_BaoXiao)
    {
        BX="是";
        ui->lineEdi_BaoXiao->setDisabled(false);
        BX_Mon=ui->lineEdi_BaoXiao->text().toDouble();
    }
    if(QMessageBox::information(0,"信息确认",Sure,"确认","取消")==0)
    {

        //query.exec("create table if not exists histudent(id int primary key auto_increment,name varchar(256),age int,score int) engine=innoDB default charset=utf8;");
        //query.exec("create table  Bill(ID int primary key auto_increment,Name varchar(256),Goods varchar(256),Expense varchar(256),Way varchar(256),Kind varchar(256));");
        bool isok=query.prepare("insert into Bill(Name,Goods,Expense,Way,Kind,BaoXiao,Time,Mon_BaoXiao) values(:Name ,:Goods,:Expense,:Way,:Kind,:BaoXiao,:Time,:Mon_BaoXiao);");
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
        QVariantList BaoList;
        BaoList<<BX;
        QVariantList timeList;
        timeList<<Time;
        QVariantList Mon_BaoXiao;
        Mon_BaoXiao<<BX_Mon;


        //3 绑定
        query.bindValue(":Name",nameList);
        query.bindValue(":Goods",goodList);
        query.bindValue(":Expense",expenseList);
        query.bindValue(":Way",wayList);
        query.bindValue(":Kind",kindList);
        query.bindValue(":BaoXiao",BaoList);
        query.bindValue(":Time",timeList);
        query.bindValue(":Mon_BaoXiao",Mon_BaoXiao);
        //4 插入
        bool ok=query.execBatch();
        qDebug()<<ok;

        int temp=ui->how_comboBox->currentIndex();
        switch(temp)
        {
        case 0:
        {
            double Mon=ui->how_editLine->text().toDouble();
            WeChat=(WeChat-Mon)+BX_Mon;
            qDebug()<<WeChat;
            bool ok=query.exec(QString("update Diposit set WeChat_Gao=%1").arg(WeChat));
            qDebug()<<"修改存款："<<ok;
            break;
        }
        case 1:
        {
            double Mon=ui->how_editLine->text().toDouble();
            Alipay=(Alipay-Mon)+BX_Mon;
            qDebug()<<Alipay;
            bool ok=query.exec(QString("update Diposit set Alipay_Gao=%1").arg(Alipay));
            break;
        }
        case 2:
        {
            double Mon=ui->how_editLine->text().toDouble();
            NongShangBank=(NongShangBank-Mon)+BX_Mon;
            qDebug()<<NongShangBank;
            bool ok=query.exec(QString("update Diposit set NongShangBank_Gao=%1").arg(NongShangBank));
            break;
        }
        case 3:
        {
            double Mon=ui->how_editLine->text().toDouble();
            JianSheBank=(JianSheBank-Mon)+BX_Mon;
            qDebug()<<JianSheBank;
            bool ok=query.exec(QString("update Diposit set JianSheBang_Gao=%1").arg(JianSheBank));
            break;
        }
        case 4:
        {
            double Mon=ui->how_editLine->text().toDouble();
            HuaBei=HuaBei+Mon+BX_Mon;
            qDebug()<<HuaBei;
            bool ok=query.exec(QString("update Diposit set HuaBei_Gao=%1").arg(HuaBei));
            break;
        }
        case 5:
        {
            double Mon=ui->how_editLine->text().toDouble();
            Cash=Cash-Mon+BX_Mon;
            qDebug()<<Cash;
            bool ok=query.exec(QString("update Diposit set Cash_Gao=%1").arg(Cash));
            break;
        }
        case 6:
        {
            double Mon=ui->how_editLine->text().toDouble();
            Loans=Loans-Mon+BX_Mon;
            qDebug()<<Loans;
            bool ok=query.exec(QString("update Diposit set loans_Gao=%1").arg(Loans));
            break;
        }
        }

        clearFun();
    }

}

void addBill::on_CheckBox_BaoXiao_stateChanged(int arg1)
{
    if(arg1==0)
    {
        m_BaoXiao=false;
        ui->lineEdi_BaoXiao->setDisabled(true);
        qDebug()<<m_BaoXiao;
    }
    else
    {
        m_BaoXiao=true;
        ui->lineEdi_BaoXiao->setDisabled(false);
        qDebug()<<m_BaoXiao;
    }

}
