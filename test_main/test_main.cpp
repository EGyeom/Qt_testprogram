#include "test_main.h"
#include "ui_test_main.h"

test_main::test_main(QWidget *parent) :
    QMainWindow(parent, Qt::FramelessWindowHint),
    ui(new Ui::test_main)
{
    ui->setupUi(this);
    gpio = new gpiotest();
    eth = new Eth_test();
    iic = new ii2test();
    spi = new spi_test();
    uart = new uartTest();
    usb = new usb_test();
}

test_main::~test_main()
{
    delete ui;
}

void test_main::on_gpio_clicked()
{
    gpio->show();
}

void test_main::on_pushButton_9_clicked()
{
    close();
}

void test_main::on_ethernet_clicked()
{
    eth->show();
}

void test_main::on_iic_clicked()
{
    iic->show();
}

void test_main::on_spi_clicked()
{
    spi->show();
}

void test_main::on_uart_clicked()
{
    uart->show();
}

void test_main::on_usb_clicked()
{
    usb->show();
}
