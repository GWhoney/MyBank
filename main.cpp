#include "mybank.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyBank* win=new MyBank;
    win->show();
    return a.exec();
}
