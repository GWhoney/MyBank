#ifndef MYBANK_H
#define MYBANK_H

#include <QMainWindow>
#include <QIcon>
#include <QPixmap>
#include <QPainter>
#include <QPaintEvent>
#include <QSqlQuery>
#include <QVariantList>
#include "addbill.h"
#include "yu_e.h"
#include "clock_in.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MyBank; }
QT_END_NAMESPACE

class MyBank : public QMainWindow
{
    Q_OBJECT

public:
    MyBank(QWidget *parent = nullptr);
    ~MyBank();
    void initSlots();

private slots:
    void initAddBill();
    void initYuE();
    void initClock_in();


private:
    Ui::MyBank *ui;
    addBill* addbill=nullptr;
    yu_e* yue=nullptr;
    Clock_in* clock_in=nullptr;

protected:
    void paintEvent(QPaintEvent *event);

};
#endif // MYBANK_H
