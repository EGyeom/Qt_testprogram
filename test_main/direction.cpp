#include "direction.h"
#include "ui_direction.h"
#include <QDebug>
#include <QKeyEvent>

Direction::Direction(QWidget *parent) :
    QWidget(parent, Qt::FramelessWindowHint),
    ui(new Ui::Direction)
{
    ui->setupUi(this);

}

Direction::~Direction()
{
    delete ui;
}


void Direction::on_HIGH_clicked()
{
    data(1);
    close();
}

void Direction::on_LOW_clicked()
{
    data(0);
    close();
}

void Direction::keyPressEvent(QKeyEvent *event){

    if(event->key() == Qt::Key_Escape) close();

}
