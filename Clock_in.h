#ifndef CLOCK_IN_H
#define CLOCK_IN_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariantList>
#include <QDebug>
#include <QMessageBox>
#include <QDateTime>


namespace Ui {
class Clock_in;
}

class Clock_in : public QWidget
{
    Q_OBJECT

public:
    explicit Clock_in(QWidget *parent = nullptr);
    ~Clock_in();
    void readInfo();
    void clearFun();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Clock_in *ui;
    double WeChat;
    double Alipay;
    double NongShangBank;
    double JianSheBank;
    double Cash;
    double HuaBei;
    double Loans;
};

#endif // CLOCK_IN_H
