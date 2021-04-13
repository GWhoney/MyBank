#ifndef CLOCK_IN_H
#define CLOCK_IN_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariantList>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class Clock_in;
}

class Clock_in : public QWidget
{
    Q_OBJECT

public:
    explicit Clock_in(QWidget *parent = nullptr);
    ~Clock_in();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Clock_in *ui;
};

#endif // CLOCK_IN_H
