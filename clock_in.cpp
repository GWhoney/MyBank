#include "clock_in.h"
#include "ui_clock_in.h"

Clock_in::Clock_in(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Clock_in)
{
    ui->setupUi(this);
}

Clock_in::~Clock_in()
{
    delete ui;
}
