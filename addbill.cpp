#include "addbill.h"
#include "ui_addbill.h"

addBill::addBill(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addBill)
{
    ui->setupUi(this);

    QIcon ic(QString(":/iconfinder_love-notebook_2903202.png"));

}

addBill::~addBill()
{
    delete ui;
}


void addBill::on_Btn_sure_clicked()
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE","wconntosqlite");

        db.setDatabaseName("MyBank.db");
        if(db.open())
        {
            QMessageBox::information(0,"ok","ok","ok");
        }
}

