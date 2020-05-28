#include "uarttest.h"
#include "ui_uarttest.h"
#include "Api_Drv.h"
#include <QDebug>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#ifdef Q_WS_QWS
#include <termios.h>
#endif
#include <fcntl.h>
#include <stdbool.h>



uartTest::uartTest(QWidget *parent) :
    QWidget(parent, Qt::FramelessWindowHint),
    ui(new Ui::uartTest)
{
    ui->setupUi(this);
    ui->Title->setAlignment(Qt::AlignCenter);
    pad = new keypad(this);
    pad->hide();
    count = 0;
    flag = 0;

    ui->lineEdit->setReadOnly(1);
    connect(pad->BG,SIGNAL(buttonClicked(int)),this,SLOT(buttonClicked(int)));

}

uartTest::~uartTest()
{
    delete ui;
}


void uartTest::on_Input_bt_clicked()
{
    if (flag == 0){
        pad->show();
        pad->setGeometry(460,120,251,291);
        ui->Input_bt->setText("Send");
        flag = 1;
        fd = uartInit(&fd);
    }
    else{
    ui->Input_bt->setText("INPUT");

    Port = ui->PORT_BOX->currentText();
    Brate = ui->BAUD_BOX->currentText().toInt();
    Msg = ui->lineEdit->text();
    qDebug() << "Port : " << Port;
    qDebug() << "Brate : " << Brate;
    qDebug() << "Msg : " << Msg;
    ui->lineEdit->clear();
    flag = 0;
#ifdef Q_WS_QWS

   i = write(fd, Msg.toStdString().c_str(), Msg.length());
   printf("write : %d\n", i);
   Msg.prepend("[Tx] : ");
   ui->OUTPUT->addItem(Msg);
   ui->OUTPUT->item(count)->setTextColor("RED");
   count++;

   sleep(2);

   Msg.clear();

   i= read(fd, buf, BUF_MAX);
   if(i < 0) printf("ERR : %d\n", i);
   else printf("READ : %d\n", i);

   buf[i] = '\0';
   Msg = QString::fromStdString(buf);


#endif
   Msg.prepend("[Rx] : ");
   ui->OUTPUT->addItem(Msg);
   ui->OUTPUT->item(count)->setTextColor("BLUE");
   count++;
    }

}

//void uartTest::on_lineEdit_returnPressed()
//{
//    Port = ui->PORT_BOX->currentText();
//    Brate = ui->BAUD_BOX->currentText().toInt();
//    Msg = ui->lineEdit->text();

//    qDebug() << "Port : " << Port;
//    qDebug() << "Brate : " << Brate;
//    qDebug() << "Msg : " << Msg;


//    ui->lineEdit->clear();
//}


void uartTest::on_exit_bt_clicked()
{
    close();
    pad->close();
}

void uartTest::buttonClicked(int input){
    if(input == 10) ui->lineEdit->clear();
    else if(input == 11) pad->close();
    else ui->lineEdit->insert(QString::number(input));

}

int uartTest::uartInit(int *fd){

#ifdef Q_WS_QWS

    switch(ui->PORT_BOX->currentIndex()){
    case 0 :  *fd = open(DRV_COM1, O_RDWR | O_NOCTTY ); break;
    case 1 :  *fd = open(DRV_COM2, O_RDWR | O_NOCTTY ); break;
    case 2 :  *fd = open(DRV_COM3, O_RDWR | O_NOCTTY ); break;
    case 3 :  *fd = open(DRV_COM4, O_RDWR | O_NOCTTY ); break;
    case 4 :  *fd = open(DRV_COM5, O_RDWR | O_NOCTTY ); break;
    case 5 :  *fd = open(DRV_COM6, O_RDWR | O_NOCTTY ); break;
    case 6 :  *fd = open(DRV_COM7, O_RDWR | O_NOCTTY ); break;
    case 7 :  *fd = open(DRV_COM8, O_RDWR | O_NOCTTY ); break;
    case 8 :  *fd = open(DRV_COM9, O_RDWR | O_NOCTTY ); break;
    case 9 :  *fd = open(DRV_COM10, O_RDWR | O_NOCTTY ); break;
    case 10 :  *fd = open(DRV_COM11, O_RDWR | O_NOCTTY ); break;
    case 11 :  *fd = open(DRV_COM12, O_RDWR | O_NOCTTY ); break;
    case 12 :  *fd = open(DRV_COM13, O_RDWR | O_NOCTTY ); break;
    case 13 :  *fd = open(DRV_COM14, O_RDWR | O_NOCTTY ); break;
    case 14 :  *fd = open(DRV_COM15, O_RDWR | O_NOCTTY ); break;
    }
    struct termios oldtio, newtio;

    //*fd = open(DRV_COM2, O_RDWR | O_NOCTTY );
    if(*fd == -1){
        printf("open_port : Unable to open %s\n", DRV_COM2);
        return -1;
    }

    printf("Fd : %d\n", *fd);

    tcgetattr(*fd,&oldtio);

    memset(&newtio, 0, sizeof(newtio));

    newtio.c_cflag = Brate | CS8 | CLOCAL | CREAD;
    newtio.c_iflag = IGNPAR;
    newtio.c_lflag &= ~(ICANON | ECHO | ECHOE | ISIG);
    newtio.c_oflag = 0;

    tcflush(*fd, TCIFLUSH);
    tcsetattr(*fd, TCSANOW, &newtio);

    return *fd;

#endif

}
