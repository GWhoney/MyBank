#include "mybank.h"
#include "ui_mybank.h"


MyBank::MyBank(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyBank)
{
    ui->setupUi(this);
    initSlots();
    QIcon ic(QString(":/iconfinder_love-notebook_2903202.png"));
    this->setWindowIcon(ic);
}

MyBank::~MyBank()
{
    delete ui;
}

void MyBank::initSlots()
{
    connect(ui->Addbill,SIGNAL(triggered()),this,SLOT(initAddBill()));
    connect(ui->Check_YuE,SIGNAL(triggered()),this,SLOT(initYuE()));
    connect(ui->Clock_in,SIGNAL(triggered()),this,SLOT(initClock_in()));
}

void MyBank::initAddBill()
{

    addbill=new addBill;
    addbill->show();
}

void MyBank::initYuE()
{
    yue=new yu_e;
    yue->show();
}

void MyBank::initClock_in()
{
    clock_in=new Clock_in;
    clock_in->show();
}

void MyBank::paintEvent(QPaintEvent *event)
{
    QPixmap pix;
    pix.load(QString(":/bk.jpg"));
    QPainter paint(this);
    paint.drawPixmap(0,0,483,407,pix);
}
