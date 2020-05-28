#include "keypad.h"
#include "ui_keypad.h"

keypad::keypad(QWidget *parent) :
    QWidget(parent, Qt::FramelessWindowHint),
    ui(new Ui::keypad)
{
    ui->setupUi(this);
    BG = new QButtonGroup();

    BG->addButton(ui->pushButton_0,0);
    BG->addButton(ui->pushButton,1);
    BG->addButton(ui->pushButton_2,2);
    BG->addButton(ui->pushButton_3,3);
    BG->addButton(ui->pushButton_4,4);
    BG->addButton(ui->pushButton_5,5);
    BG->addButton(ui->pushButton_6,6);
    BG->addButton(ui->pushButton_7,7);
    BG->addButton(ui->pushButton_8,8);
    BG->addButton(ui->pushButton_9,9);
    BG->addButton(ui->Clear_pushButton,10);
    BG->addButton(ui->OK_pushButton,11);


}

keypad::~keypad()
{
    delete ui;
}

