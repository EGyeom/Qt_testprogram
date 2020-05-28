#include "gpiotest.h"
#include "ui_gpiotest.h"
#include <QDebug>
#include <QLineEdit>
#include <QComboBox>
#include <QKeyEvent>
#define OUTPUT 0
#define INPUT 1

gpiotest::gpiotest(QWidget *parent) :
    QMainWindow(parent, Qt::FramelessWindowHint),
    ui(new Ui::gpiotest)
{
    ui->setupUi(this);
    //Gpio* gpio= new Gpio();
#ifdef Q_WS_QWS
    Gpioinit();
#endif
    ui->lineEdit->setReadOnly(1);
    ui->lineEdit->setText("GPIO TEST");
    ui->lineEdit->setAlignment(Qt::AlignCenter);
    dir = new Direction(this);
    dir->hide();
    connect(dir,SIGNAL(data(int)),this,SLOT(DataReceive(int)));
	short test;
test = 0x12;
test = (test <<8) | 0x34;
qDebug() << hex << test;
qDebug() << test;

}

gpiotest::~gpiotest()
{
    delete ui;
}
#ifdef Q_WS_QWS
void gpiotest::Gpioinit(){

    if(InitGpio() < 0 )
    {

        printf("Gpio Open fail\n");
    }
    else printf("GPIO Open Success\n");
    WriteGpio(4,20,1);

}
#endif
void gpiotest::on_Set_BT_clicked()
{

    PORT =(ui->Port_box->currentText()).toInt();
    PIN = (ui->Pin_box->currentText()).toInt();

    qDebug() << "PORT : " << PORT;
    qDebug() << "PIN : " << PIN;

}

void gpiotest::on_Output_BT_clicked()
{
    DIRECTION = OUTPUT;
    dir->show();
    dir->setGeometry(250,180,dir->width(),dir->height());
   // dir->setg;
}


void gpiotest::on_Input_BT_clicked()
{
    DIRECTION = INPUT;
    qDebug() << "PORT : " << PORT;
    qDebug() << "PIN : " << PIN;
    qDebug() << "DIRECTION : " << DIRECTION;
#ifdef Q_WS_QWS
    SetDirectionPortPin(PORT,PIN,DIRECTION);
    printf("-Read data- \n Port : %d \n PIN : %d \n DIR : INPUT\n", PORT, PIN);
    Data = ReadGpio(PORT,PIN);
    printf("Data = %d\n", Data);
#endif
}

void gpiotest::DataReceive(int data){

    Data = data;
    qDebug() << "PORT : " << PORT;
    qDebug() << "PIN : " << PIN;
    qDebug() << "DIRECTION : " << DIRECTION;
    qDebug() << "Data " << Data;
#ifdef Q_WS_QWS
    SetDirectionPortPin(PORT,PIN,DIRECTION);

    printf("-Write data- \n Port : %d \n PIN : %d \n DIR : OUTPUT\n", PORT, PIN);
    printf("Data = %d\n", Data);
    WriteGpio(PORT,PIN,Data);

#endif
}

void gpiotest::keyPressEvent(QKeyEvent *event){

    if(event->key() == Qt::Key_Escape)
    {
        close();
    }
}


void gpiotest::on_pushButton_clicked()
{
    close();
}
