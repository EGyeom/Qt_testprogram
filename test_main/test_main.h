#ifndef TEST_MAIN_H
#define TEST_MAIN_H

#include <QMainWindow>
#include "gpiotest.h"
#include "eth_test.h"
#include "ii2test.h"
#include "spi_test.h"
#include "uarttest.h"
#include "usb_test.h"

namespace Ui {
class test_main;
}

class test_main : public QMainWindow
{
    Q_OBJECT

public:
    explicit test_main(QWidget *parent = 0);
    ~test_main();

private slots:
    void on_gpio_clicked();

    void on_pushButton_9_clicked();

    void on_ethernet_clicked();

    void on_iic_clicked();

    void on_spi_clicked();

    void on_uart_clicked();

    void on_usb_clicked();

private:
    Ui::test_main *ui;
    gpiotest* gpio;
    Eth_test* eth;
    ii2test* iic;
    spi_test* spi;
    uartTest* uart;
    usb_test* usb;
};

#endif // TEST_MAIN_H
