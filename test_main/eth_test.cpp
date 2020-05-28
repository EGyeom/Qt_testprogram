#include "eth_test.h"
#include "ui_eth_test.h"
#include <QDebug>
#include <QButtonGroup>

Eth_test::Eth_test(QWidget *parent) :
    QWidget(parent, Qt::FramelessWindowHint),
    ui(new Ui::Eth_test)
{
    ui->setupUi(this);
    ui->buttonGroup->setId(ui->key_0,0);
    ui->buttonGroup->setId(ui->key_1,1);
    ui->buttonGroup->setId(ui->key_2,2);
    ui->buttonGroup->setId(ui->key_3,3);
    ui->buttonGroup->setId(ui->key_4,4);
    ui->buttonGroup->setId(ui->key_5,5);
    ui->buttonGroup->setId(ui->key_6,6);
    ui->buttonGroup->setId(ui->key_7,7);
    ui->buttonGroup->setId(ui->key_8,8);
    ui->buttonGroup->setId(ui->key_9,9);
    ui->buttonGroup->setId(ui->key_back,11);
    ui->buttonGroup->setId(ui->key_point,12);



    ui->IP_LE->installEventFilter(this);

    ui->GW_LE->installEventFilter(this);

    ui->NM_LE->installEventFilter(this);

    ui->DA_lE->installEventFilter(this);

    Data = "";
    pProcess = new QProcess();
   connect( pProcess, SIGNAL(readyReadStandardError()), this, SLOT(updateErrorTextEdit()));
   connect( pProcess, SIGNAL(readyReadStandardOutput()), this, SLOT(updateOutputTextEdit()));
   connect( pProcess, SIGNAL(finished(int,QProcess::ExitStatus)), this, SLOT(processFinished(int,QProcess::ExitStatus)) );
   connect( pProcess, SIGNAL(error(QProcess::ProcessError)), this, SLOT(processError(QProcess::ProcessError)));

}

Eth_test::~Eth_test()
{
    delete ui;
}

void Eth_test::on_IP_Set_clicked()
{
    pProcess->waitForFinished(100);
    QStringList strlist;
    IP = ui->IP_LE->text();
    strlist << "eth0" << IP;
    qDebug() << "Set IP : " << IP;

    pProcess->start("ifconfig", strlist);
}

void Eth_test::on_NM_Set_clicked()
{

    pProcess->waitForFinished(100);
    QStringList strlist;
    NM = ui->NM_LE->text();
    strlist << "eth0" << "netmask" << NM;
    qDebug() <<"Set NetMask : " <<NM;

    pProcess->start("ifconfig", strlist);
}

void Eth_test::on_GW_Set_clicked()
{
    pProcess->waitForFinished(100);
    QStringList strlist;
    GW = ui->GW_LE->text();
    strlist << "add" << "route" << "gw" << GW;
    qDebug() << "Set Gateway : " <<GW;
    pProcess->start("route", strlist);
}

void Eth_test::on_buttonGroup_buttonPressed(int id){



    if(last_Obj == ui->IP_LE){
        if(id == 11) ui->IP_LE->backspace();
        else if(id == 12) ui->IP_LE->insert(".");
        else ui->IP_LE->insert(QString::number(id));

    }
    else if(last_Obj == ui->NM_LE){
        if(id == 11) ui->NM_LE->backspace();
        else if(id == 12) ui->NM_LE->insert(".");
        else ui->NM_LE->insert(QString::number(id));

    }
    else if(last_Obj == ui->GW_LE){
        if(id == 11) ui->GW_LE->backspace();
        else if(id == 12) ui->GW_LE->insert(".");
        else ui->GW_LE->insert(QString::number(id));

    }
    else if(last_Obj == ui->DA_lE){
        if(id == 11) ui->DA_lE->backspace();
        else if(id == 12) ui->DA_lE->insert(".");
        else ui->DA_lE->insert(QString::number(id));

    }
}


void Eth_test::on_DA_Start_clicked()
{

    DA_IP = ui->DA_lE->text();
    qDebug() << "Set Dest_IP : " << DA_IP;

    QStringList strlist;
    strlist << DA_IP;
    pProcess->start("ping", strlist);
}

void Eth_test::on_DA_Stop_clicked()
{
    processFinished(0,QProcess::NormalExit);
    pProcess->close();
}

bool Eth_test::eventFilter(QObject* obj , QEvent* event){
//    QLineEdit* LE;
    QEvent::Type type = event->type();
    if(event->type() == QEvent::FocusIn)
    {
        qDebug() << obj;
        last_Obj = obj;
    }
    return QWidget::eventFilter(obj, event);

}



void Eth_test::updateOutputTextEdit(){

    QByteArray newData = pProcess->readAllStandardOutput();
    QString text = QString::fromLocal8Bit(newData);

    ui->Output->addItem(text);
    ui->Output->scrollToBottom();
}



void Eth_test::processFinished(int exitCode, QProcess::ExitStatus exitStatus){

       if(exitStatus == QProcess::CrashExit)
       {
           ui->Output->addItem("Conversion program crashed");
           ui->Output->scrollToBottom();

       }
       else if(exitCode != 0) // 0이 아니면 실패
       {
           Data.append('\n');
           Data.append("Conversion failed");

           ui->Output->addItem(Data);
           ui->Output->scrollToBottom();

       }
       else // 0이면 성공
       {
           Data.append('\n');
           Data.append("File created");

           ui->Output->addItem(Data);
           Data.clear();
           ui->Output->scrollToBottom();

       }


}

void Eth_test::updateErrorTextEdit()
{
    //readAllStandardError() 표준에러의 내용이 기록된 QByteArray를 출력
    QByteArray newData = pProcess->readAllStandardError();
    QString text = QString::fromLocal8Bit(newData);

    Data.append("ERROR : ");
    Data.append(text);
    Data.append('\n');


}

void Eth_test::processError(QProcess::ProcessError error)
{
    /*
       QProcess::FailedToStart
       => 호출된 프로그램이 없거나 프로그램을 호출할 수 있는 권한이 없어 프로그램을 호출 할 수 없을 때
       QProcess::Crashed
       => 프로세스가 성공적으로 시작하여 몇시간이 지난 후 고장난 경우
       QProcess::WriteError
       => 프로세스를 쓸 때 오류가 발생 함. 예를 들어 프로세스 실행이 되지 않거나, 입력 채널이 닫혀 있을 때
       QProcess::ReadError
       => 프로세스를 읽을 때 오류가 발생 함. 예를 들어 프로세스 실행이 되지 않을 때
    */
    if(error == QProcess::FailedToStart)
    {
        pProcess->close();
    }
}

void Eth_test::on_pushButton_clicked()
{
    close();
}
