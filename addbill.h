#ifndef ADDBILL_H
#define ADDBILL_H

#include <QWidget>
#include <QString>
#include <QMessageBox>
#include <QFile>
#include <QIODevice>
#include <QTextStream>
#include <QList>
#include <QStringList>
#include <QDebug>
#include <QIcon>
#include <QAbstractItemModel>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariantList>
#include <QDateTime>


namespace Ui {
class addBill;
}

class addBill : public QWidget
{
    Q_OBJECT

public:
    explicit addBill(QWidget *parent = nullptr);
    ~addBill();
    void readInfo();
    void clearFun();

private slots:


    void on_Btn_sure_clicked();

    void on_CheckBox_BaoXiao_stateChanged(int arg1);

private:
    Ui::addBill *ui;
    QSqlDatabase db;
    double WeChat;
    double Alipay;
    double NongShangBank;
    double JianSheBank;
    double Cash;
    double HuaBei;
    double Loans;
    bool m_BaoXiao;
};

#if 0
create table Bill(
    -> num int not null auto_increment,
    -> ID varchar(10) not null,
    -> Goods varchar(50) not null,
    -> Expense double not null,
    -> Way varchar(20) not null,
    -> Kind varchar(20) not null,
    -> primary key (num)
    -> )engine=innoDB default charset=utf8;
#endif
#endif // ADDBILL_H
