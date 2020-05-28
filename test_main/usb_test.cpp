#include "usb_test.h"
#include "ui_usb_test.h"
#include <QDebug>
#include <QFileDialog>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>

#define SDA1 "/sda1/"
#define SDB1 "/sdb1/"
#define SDC1 "/sdc1/"
#define SDD1 "/sdd1/"
#define SDE1 "/sde1/"
#define SDF1 "/sdf1/"
#define SDG1 "/sdg1/"
#define SDH1 "/sdh1/"
#define SDI1 "/sdi1/"
#define SDJ1 "/sdj1/"




usb_test::usb_test(QWidget *parent) :
    QWidget(parent, Qt::FramelessWindowHint),
    ui(new Ui::usb_test)
{
    ui->setupUi(this);
    model = new QFileSystemModel();
    dir = new QDirModel();
    path = "/mnt/sda1/";
    pProcess = new QProcess();
    ui->tree->setAnimated(false);
    ui->tree->setIndentation(20);
    ui->tree->setSortingEnabled(true);
    ui->tree->setWindowTitle(QObject::tr("Dir View"));
    ui->tree->showMaximized();
    usb_index = 0;
    ui->tree->setModel(model);
    ui->tree->setRootIndex(model->setRootPath(path));
    connect( pProcess, SIGNAL(readyReadStandardOutput()), this, SLOT(updateOutputTextEdit()));

}

usb_test::~usb_test()
{
    delete ui;
}


void usb_test::on_tree_doubleClicked(const QModelIndex &index)
{
    qDebug() << model->filePath(index);
    current_sel = model->filePath(index);
}

void usb_test::on_tree_expanded(const QModelIndex &index)
{

    qDebug() << model->filePath(index);

}

void usb_test::on_tree_collapsed(const QModelIndex &index)
{

    qDebug() << model->filePath(index);

}


void usb_test::on_tree_clicked(const QModelIndex &index)
{

    qDebug() << model->filePath(index);
    current_sel = model->filePath(index);

}


void usb_test::on_pushButton_3_clicked()
{
    close();
}



void usb_test::on_comboBox_currentIndexChanged(int index)
{
    usb_index = index;

    path.clear();

    path.append("/mnt");

    switch(usb_index){

    case 0 : path.append(SDA1); qDebug() << path; break;
    case 1 : path.append(SDB1); qDebug() << path; break;
    case 2 : path.append(SDC1); qDebug() << path; break;
    case 3 : path.append(SDD1); qDebug() << path; break;
    case 4 : path.append(SDE1); qDebug() << path; break;
    case 5 : path.append(SDF1); qDebug() << path; break;
    case 6 : path.append(SDG1); qDebug() << path; break;
    case 7 : path.append(SDH1); qDebug() << path; break;
    case 8 : path.append(SDI1); qDebug() << path; break;
    case 9 : path.append(SDJ1); qDebug() << path; break;
    }

    ui->tree->setModel(model);
    ui->tree->setRootIndex(model->setRootPath(path));

}

void usb_test::on_pushButton_4_clicked()
{
    pProcess->waitForFinished(100);

    QStringList str;
    QString TEST_FILE="USB_TEST.txt";
    QString tmp = QString("%1%2").arg(path, TEST_FILE);

    str << tmp ;

    qDebug() << str;
    pProcess->start("rm", str);
    tmp.clear();


}

void usb_test::on_pushButton_5_clicked()
{
     pProcess->waitForFinished(100);
     QStringList str;
    // str << QStringList(QString("%1 %2").arg(fileDir, path));
     QString fileDir = "/userfile/USB_TEST.txt";
     str << fileDir << path;
    qDebug() << str;
    pProcess->start("cp", str);

}

void usb_test::on_pushButton_6_clicked()
{
    pProcess->waitForFinished(100);

    QStringList str;

    str << current_sel;
    qDebug() << str;
    pProcess->start("cat", str);

    // tmp.clear();
}

void usb_test::updateOutputTextEdit(){

    QByteArray newData = pProcess->readAllStandardOutput();
    QString text = QString::fromLocal8Bit(newData);

    ui->listWidget->addItem(text);
    ui->listWidget->scrollToBottom();

}
