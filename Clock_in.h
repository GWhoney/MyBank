#ifndef CLOCK_IN_H
#define CLOCK_IN_H

#include <QWidget>

namespace Ui {
class Clock_in;
}

class Clock_in : public QWidget
{
    Q_OBJECT

public:
    explicit Clock_in(QWidget *parent = nullptr);
    ~Clock_in();

private:
    Ui::Clock_in *ui;
};

#endif // CLOCK_IN_H
