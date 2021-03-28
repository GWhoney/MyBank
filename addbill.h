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


namespace Ui {
class addBill;
}

class addBill : public QWidget
{
    Q_OBJECT

public:
    explicit addBill(QWidget *parent = nullptr);
    ~addBill();

    void sureClear();
    void writeInSql();
private slots:


    void on_Btn_sure_clicked();

private:
    Ui::addBill *ui;

};

#endif // ADDBILL_H
