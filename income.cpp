#include "income.h"
#include "ui_income.h"

Income::Income(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Income)
{
    ui->setupUi(this);
    setWindowTitle(QString("Income"));
    //setWindowIcon()
    QSqlDatabase db=QSqlDatabase::addDatabase(QString("QMYSQL"));
    db.setHostName(QString("127.0.0.1"));
    db.setPort(3306);
    db.setUserName(QString("root"));
    db.setPassword(QString("20200502"));
    db.setDatabaseName(QString("MyBank"));
    if(!db.open())
    {
        QMessageBox::warning(0,"警告","连接数据库失败","确认");
        return;
    }
    qDebug()<<"连接数据库成功"<<endl;
    readInfo();
}

Income::~Income()
{
    delete ui;
}

void Income::on_pushButton_2_clicked()
{
    QString time=QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss");
    int Way=ui->comboBox->currentIndex();
    QString Way_T=ui->comboBox->currentText();
    double Money=ui->lineEdit_Income->text().toDouble();
    QString Mon_T=ui->lineEdit_Income->text();
    QString Income=ui->Button_Income->checkedButton()->text();

    QSqlQuery query;
    switch(Way)
    {
    case 0:
        {
            double Mon=ui->lineEdit_Income->text().toDouble();
            WeChat=WeChat+Mon;
            qDebug()<<WeChat;
            bool ok=query.exec(QString("update Diposit set WeChat_Gao=%1").arg(WeChat));
            qDebug()<<"修改存款："<<ok;
            break;
        }
    case 1:
        {
            double Mon=ui->lineEdit_Income->text().toDouble();
            Alipay=Alipay+Mon;
            bool ok=query.exec(QString("update Diposit set Alipay_Gao=%1").arg(Alipay));
            break;
        }
    case 2:
        {
            double Mon=ui->lineEdit_Income->text().toDouble();
            NongShangBank=NongShangBank+Mon;
            bool ok=query.exec(QString("update Diposit set NongShangBank_Gao=%1").arg(NongShangBank));
            break;
        }
    case 3:
        {
            double Mon=ui->lineEdit_Income->text().toDouble();
            JianSheBank=JianSheBank+Mon;
            bool ok=query.exec(QString("update Diposit set JianSheBang_Gao=%1").arg(JianSheBank));
            break;
        }
    case 4:
        {
            double Mon=ui->lineEdit_Income->text().toDouble();
            Cash=Cash+Mon;
            bool ok=query.exec(QString("update Diposit set Cash_Gao=%1").arg(Cash));
            break;
        }
    }
    bool ok=query.exec(QString("insert into Income(Way,Money,Origin,Time) values('%1',%2,'%3','%4')")
               .arg(Way_T).arg(Money).arg(Income).arg(time));
    qDebug()<<ok<<endl;
}

void Income::readInfo()
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
