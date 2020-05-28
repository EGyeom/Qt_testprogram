#ifndef II2TEST_H
#define II2TEST_H

#include <QWidget>
#include <QDebug>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#ifdef Q_WS_QWS
#include <sys/poll.h>
#include <termios.h>
#include <sys/ioctl.h>
#include <linux/i2c.h>
#include <linux/i2c-dev.h>
#endif
#include <sys/types.h>
#include <sys/stat.h>
#include <stdint.h>
namespace Ui {
class ii2test;
}

class ii2test : public QWidget
{
    Q_OBJECT

public:
    explicit ii2test(QWidget *parent = 0);
    ~ii2test();
    void button_color(int id);
    uint8_t led_state;
    void ii2init();
private slots:
    void on_pushButton_clicked();

    void on_send_bt_clicked();

    void on_read_bt_clicked();

    void on_buttonGroup_buttonClicked(int id);


private:
    Ui::ii2test *ui;
    int flag[13];
    int fd[3];
    int flag_ch[3];
    char buf[2];

};

#endif // II2TEST_H
