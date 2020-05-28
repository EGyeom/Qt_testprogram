#include "ii2test.h"
#include "ui_ii2test.h"


#define address 0x20

ii2test::ii2test(QWidget *parent) :
    QWidget(parent, Qt::FramelessWindowHint),
    ui(new Ui::ii2test)
{
    ui->setupUi(this);
    ui->Title->setText("I2C I/O TEST");
    ui->Title->setAlignment(Qt::AlignCenter);
    ui->buttonGroup->setId(ui->PA0,7);
    ui->buttonGroup->setId(ui->PA1,6);
    ui->buttonGroup->setId(ui->PA2,5);
    ui->buttonGroup->setId(ui->PA3,4);
    ui->buttonGroup->setId(ui->PA4,3);
    ui->buttonGroup->setId(ui->PA5,2);
    ui->buttonGroup->setId(ui->PA6,1);
    ui->buttonGroup->setId(ui->PA7,0);

    ui->buttonGroup->addButton(ui->Ch0,10);
    ui->buttonGroup->addButton(ui->Ch1,11);
    ui->buttonGroup->addButton(ui->Ch2,12);

    ii2init();

    std::fill_n(flag,13,0);
    std::fill_n(flag_ch,3,0);
    led_state = 0x00;

}

ii2test::~ii2test()
{
    delete ui;
}

void ii2test::ii2init(){
    qDebug() << "IicInit << Start !";
#ifdef Q_WS_QWS

    if((fd[0] = open("/dev/i2c-4", O_RDWR))<0) printf("fd[0], Open Fail\n");

    if((fd[1] = open("/dev/i2c-5", O_RDWR))<0) printf("fd[1], Open Fail\n");

    if((fd[2] = open("/dev/i2c-6", O_RDWR))<0) printf("fd[2], Open Fail\n");

    if(ioctl(fd[0],I2C_SLAVE,address)<0) printf("Failed to acquire bus access and/or talk to slave.\n");

    if(ioctl(fd[1],I2C_SLAVE,address)<0) printf("Failed to acquire bus access and/or talk to slave.\n");

    if(ioctl(fd[2],I2C_SLAVE,address)<0) printf("Failed to acquire bus access and/or talk to slave.\n");


#endif

}

void ii2test::on_pushButton_clicked()
{
    close();
}

void ii2test::on_send_bt_clicked()
{
 #ifdef Q_WS_QWS
    for(int i = 0; i<3; i++)
    {
        if(flag[i+10]==1){

            buf[0] = 0x06;
            buf[1] = 0x00;

            if(!(write(fd[i],buf,2)))
                {
                    perror("Write Err : \n");
                }

            buf[0] = 0x02;
            buf[1] = led_state;

            if(!(write(fd[i],buf,2)))
                {
                    perror("Write Err : \n");
                }
        }
    }

#endif

    qDebug() <<"Send bt clicked";

}
void ii2test::on_read_bt_clicked()
{

}


void ii2test::on_buttonGroup_buttonClicked(int id)
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
    case 10:
    case 11:
    case 12:
        button_color(id);
        break;
   }
}


void ii2test::button_color(int id){


    if(flag[id]==1){
         ui->buttonGroup->button(id)->setStyleSheet("font-size : 25px");
         if(id < 10) led_state &= ~(0x01 << id);
         flag[id] = 0;
         qDebug() << "flag id : " << id << "flag : " << flag[id];

    }
    else {
        ui->buttonGroup->button(id)->setStyleSheet("background-color:rgb(255,255,123); font-size : 25px");
        if(id < 10) led_state |= (0x01 << id);
        flag[id] = 1;
        qDebug() << "flag id : " << id << "flag : " << flag[id];
    }

}
