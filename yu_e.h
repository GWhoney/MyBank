#ifndef YU_E_H
#define YU_E_H

#include <QWidget>
#include <QString>
#include <QStringList>
#include <QList>
#include <QFile>
#include <QTextStream>
#include <QIODevice>
#include <QMessageBox>
#include <QIcon>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

namespace Ui {
class yu_e;
}

class yu_e : public QWidget
{
    Q_OBJECT

public:
    explicit yu_e(QWidget *parent = nullptr);
    ~yu_e();
    void initBuddy();
    void showYue();

private:
    Ui::yu_e *ui;

};

#endif // YU_E_H
