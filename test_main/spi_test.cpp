#include "spi_test.h"
#include "ui_spi_test.h"
#include <QPushButton>
#include <QButtonGroup>
#include <QDebug>
spi_test::spi_test(QWidget *parent) :
    QWidget(parent, Qt::FramelessWindowHint),
    ui(new Ui::spi_test)
{
    ui->setupUi(this);
    ui->Title->setText("SPI_I/O TEST");
    ui->Title->setAlignment(Qt::AlignCenter);
    ui->buttonGroup->setId(ui->PA0,0);
    ui->buttonGroup->setId(ui->PA1,1);
    ui->buttonGroup->setId(ui->PA2,2);
    ui->buttonGroup->setId(ui->PA3,3);
    ui->buttonGroup->setId(ui->PA4,4);
    ui->buttonGroup->setId(ui->PA5,5);
    ui->buttonGroup->setId(ui->PA6,6);
    ui->buttonGroup->setId(ui->PA7,7);
    std::fill_n(flag,8,0); // 배열 초기화
//    uint8_t test = 0x01;
//    test = test<<1;
//            qDebug() << test;
//    qDebug() << test;
//    test = ~(0x11);
//    qDebug() << test;
    led_state = 0x00;
#ifdef Q_WS_QWS
   fd = open("/dev/spidev0.0", O_RDWR);
#endif
}

spi_test::~spi_test()
{
    delete ui;
}

void spi_test::on_buttonGroup_buttonClicked(int id)
{
    switch(id)
    {
    case 0 :
    case 1 :
    case 2 :
    case 3 :
    case 4 :
    case 5 :
    case 6 :
    case 7 :
        button_color(id);
        break;
   }
}

void spi_test::button_color(int id){

    if(flag[id]==1){
       //  ui->buttonGroup->button(id)->setStyleSheet("background-color:rgb(211,211,211)");
         ui->buttonGroup->button(id)->setStyleSheet("font-size : 25px");
          led_state &= ~(0x01 << id);
          flag[id] = 0;
          switch(id)
          {
          case 0: ui->lineEdit_8->setStyleSheet(""); break;
          case 1: ui->lineEdit_7->setStyleSheet(""); break;
          case 2: ui->lineEdit_6->setStyleSheet(""); break;
          case 3: ui->lineEdit_5->setStyleSheet(""); break;
          case 4: ui->lineEdit_4->setStyleSheet(""); break;
          case 5: ui->lineEdit_3->setStyleSheet(""); break;
          case 6: ui->lineEdit_2->setStyleSheet(""); break;
          case 7: ui->lineEdit->setStyleSheet(""); break;
          }
    }
        else {
        ui->buttonGroup->button(id)->setStyleSheet("background-color:rgb(255,255,123); font-size : 25px");
     //   ui->buttonGroup->button(id)->setStyleSheet();
        led_state |= (0x01 << id);
        switch(id)
        {
        case 0: ui->lineEdit_8->setStyleSheet("background-color:rgb(255,255,123)"); break;
        case 1: ui->lineEdit_7->setStyleSheet("background-color:rgb(255,255,123)"); break;
        case 2: ui->lineEdit_6->setStyleSheet("background-color:rgb(255,255,123)"); break;
        case 3: ui->lineEdit_5->setStyleSheet("background-color:rgb(255,255,123)"); break;
        case 4: ui->lineEdit_4->setStyleSheet("background-color:rgb(255,255,123)"); break;
        case 5: ui->lineEdit_3->setStyleSheet("background-color:rgb(255,255,123)"); break;
        case 6: ui->lineEdit_2->setStyleSheet("background-color:rgb(255,255,123)"); break;
        case 7: ui->lineEdit->setStyleSheet("background-color:rgb(255,255,123)"); break;
        }
        flag[id] = 1;
    }
}

void spi_test::on_send_bt_clicked()
{
#ifdef Q_WS_QWS
//    switch(ui->Port->currentIndex()){
//    case 0 :  fd = open("/dev/spidev0.0", O_RDWR); break;
//    case 1 :  fd = open("/dev/spidev1.0", O_RDWR); break;
//    case 2 : fd = open("/dev/spidev2.0", O_RDWR); break;
//    case 3 : fd = open("/dev/spidev2.1", O_RDWR); break;
//    case 4 : fd = open("/dev/spidev2.2", O_RDWR); break;
//    case 5 : fd = open("/dev/spidev2.3", O_RDWR); break;
//    case 6 : fd = open("/dev/spidev3.0", O_RDWR); break;
//    case 7 : fd = open("/dev/spidev3.1", O_RDWR); break;
//    case 8 : fd = open("/dev/spidev3.2", O_RDWR); break;
//    case 9 : fd = open("/dev/spidev3.3", O_RDWR); break;
//    }
//------------------------------------- IOCON Interupt active

    wr_buf[0] = 0x40;
    wr_buf[1] = 0x0A;
    wr_buf[2] = 0x02;

    if(write(fd,wr_buf, ARRAY_SIZE(wr_buf)) != ARRAY_SIZE(wr_buf))
        printf("Write Err");

//------------------------------------------
    wr_buf[0] = 0x40; // SPI ADDRESSING rule 0x4@ , @ = 0(output) , 1 (input)
    wr_buf[1] = 0x00; // IODIRA register select
    wr_buf[2] = 0x00; // Pin Output setting

    if(write(fd,wr_buf, ARRAY_SIZE(wr_buf)) != ARRAY_SIZE(wr_buf))
        printf("Write Err");

 //-----------------------------------------
    wr_buf[0] = 0x40;
    wr_buf[1] = 0x12; // GPIOA register select
    wr_buf[2] = led_state;

    if(write(fd,wr_buf, ARRAY_SIZE(wr_buf)) != ARRAY_SIZE(wr_buf))
        printf("Write Err");
#endif
    qDebug() << fd;
}

//void spi_test::device_open(){




//}

void spi_test::on_pushButton_clicked()
{
    close();
}

void spi_test::on_Port_currentIndexChanged(int index)
{
#ifdef Q_WS_WIN32

    qDebug() << "Index changed";

#endif
#ifdef Q_WS_QWS
    switch(index){
    case 0 :  fd  = open("/dev/spidev0.0", O_RDWR); break;
    case 1 :  fd = open("/dev/spidev1.0", O_RDWR); break;
    case 2 :  fd = open("/dev/spidev2.0", O_RDWR); break;
    case 3 :  fd = open("/dev/spidev2.1", O_RDWR); break;
    case 4 :  fd = open("/dev/spidev2.2", O_RDWR); break;
    case 5 :  fd =open("/dev/spidev2.3", O_RDWR); break;
    case 6 :  fd =open("/dev/spidev3.0", O_RDWR); break;
    case 7 :  fd =open("/dev/spidev3.1", O_RDWR); break;
    case 8 :  fd =open("/dev/spidev3.2", O_RDWR); break;
    case 9 :  fd = open("/dev/spidev3.3", O_RDWR); break;


    }
#endif

}

void spi_test::on_read_bt_clicked()
{
    qDebug() << sizeof(wr_buf);
    qDebug() << sizeof(rd_buf);

#ifdef Q_WS_QWS
    wr_buf[0] = 0x41; // SPI ADDRESSING rule 0x4@ , @ = 0(output) , 1 (input)
    wr_buf[1] = 0x13; // GPIOB setting
    wr_buf[2] = 0x00;
    if(read(fd,rd_buf, ARRAY_SIZE(wr_buf)) != ARRAY_SIZE(wr_buf))
        printf("Read Err");

        for(int i= 0; i<8; i++)
        {
            if(wr_buf[2] && (1<<i))
            {
                switch(i)
                {
                case 0: ui->lineEdit_8->setStyleSheet("background-color:rgb(255,255,123)"); break;
                case 1: ui->lineEdit_7->setStyleSheet("background-color:rgb(255,255,123)"); break;
                case 2: ui->lineEdit_6->setStyleSheet("background-color:rgb(255,255,123)"); break;
                case 3: ui->lineEdit_5->setStyleSheet("background-color:rgb(255,255,123)"); break;
                case 4: ui->lineEdit_4->setStyleSheet("background-color:rgb(255,255,123)"); break;
                case 5: ui->lineEdit_3->setStyleSheet("background-color:rgb(255,255,123)"); break;
                case 6: ui->lineEdit_2->setStyleSheet("background-color:rgb(255,255,123)"); break;
                case 7: ui->lineEdit->setStyleSheet("background-color:rgb(255,255,123)"); break;
                }


            }
            else{

                switch(i)
                {
                case 0: ui->lineEdit_7->setStyleSheet(""); break;
                case 1: ui->lineEdit_7->setStyleSheet(""); break;
                case 2: ui->lineEdit_7->setStyleSheet(""); break;
                case 3: ui->lineEdit_7->setStyleSheet(""); break;
                case 4: ui->lineEdit_7->setStyleSheet(""); break;
                case 5: ui->lineEdit_7->setStyleSheet(""); break;
                case 6: ui->lineEdit_7->setStyleSheet(""); break;
                case 7: ui->lineEdit_7->setStyleSheet(""); break;
                }
            }

        }

#endif
}
