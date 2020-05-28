#ifndef UARTTEST_H
#define UARTTEST_H

#include <QWidget>
#include "keypad.h"
#include <QLineEdit>
#define BUF_MAX 512
#define RATE 115200

namespace Ui {
class uartTest;
}

class uartTest : public QWidget
{
    Q_OBJECT

public:
    explicit uartTest(QWidget *parent = 0);
    ~uartTest();
    int uartInit(int*);

signals:
    void focussed(bool hasFocus);

private slots:
    void on_Input_bt_clicked();
//    void SendMsg();
//    void BrateSelection();
//    void PortSelection();
//#ifdef Q_WS_WIN32
//    void on_lineEdit_returnPressed();
//#endif
    void on_exit_bt_clicked();
    void buttonClicked(int);
private:
    Ui::uartTest *ui;
    QString Port;
    int Brate;
    QString Msg;
    keypad *pad;
    int flag;
    int count;
    int fd, i;
    char buf[BUF_MAX];

};

#endif // UARTTEST_H
