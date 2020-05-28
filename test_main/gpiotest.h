#ifndef GPIOTEST_H
#define GPIOTEST_H

#include <QMainWindow>
extern "C" {
#include "Api_Defines.h"
#include "Api_Gpio.h"
}
#include "direction.h"

class Direction;

namespace Ui {
class gpiotest;
}

class gpiotest : public QMainWindow
{
    Q_OBJECT

public:
    explicit gpiotest(QWidget *parent = 0);
    ~gpiotest();
    void Gpioinit();
//    class Gpio{
//      public:
//        int PORT;
//        int PIN;
//        int DIRECTION;
//    };
    int PORT;
    int PIN;
    int DIRECTION;
    int Data;
private slots:
    void on_Set_BT_clicked();
    void on_Output_BT_clicked();
    void keyPressEvent(QKeyEvent *event);
    void DataReceive(int data);
    void on_Input_BT_clicked();

    void on_pushButton_clicked();
    

private:
    Ui::gpiotest *ui;
    Direction* dir;
};

#endif // GPIOTEST_H
