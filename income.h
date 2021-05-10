#ifndef INCOME_H
#define INCOME_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>
#include <QDateTime>

namespace Ui {
class Income;
}

class Income : public QWidget
{
    Q_OBJECT

public:
    explicit Income(QWidget *parent = nullptr);
    ~Income();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Income *ui;
    double WeChat;
    double Alipay;
    double NongShangBank;
    double JianSheBank;
    double Cash;
    double HuaBei;
    double Loans;

private:
    void readInfo();
};

#endif // INCOME_H
