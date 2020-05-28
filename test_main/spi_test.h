#ifndef SPI_TEST_H
#define SPI_TEST_H

#include <QWidget>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdint.h>
#define ARRAY_SIZE(array) sizeof(array)/sizeof(array[0])

namespace Ui {
class spi_test;
}

class spi_test : public QWidget
{
    Q_OBJECT

public:
    explicit spi_test(QWidget *parent = 0);
    ~spi_test();
    char wr_buf[3];
    char rd_buf[3];
//    void spiInit();
    uint8_t led_state;
    uint8_t read_state;
    int fd;
//    void io_send();
private slots:
    void on_buttonGroup_buttonClicked(int id);

    void on_send_bt_clicked();

    void on_pushButton_clicked();

    void on_Port_currentIndexChanged(int index);

    void on_read_bt_clicked();

private:
    Ui::spi_test *ui;
    void button_color(int id);
    int flag[8];
};

#endif // SPI_TEST_H
