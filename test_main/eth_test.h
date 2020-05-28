#ifndef ETH_TEST_H
#define ETH_TEST_H

#include <QWidget>
#include <QProcess>

namespace Ui {
class Eth_test;
}

class Eth_test : public QWidget
{
    Q_OBJECT

public:
    explicit Eth_test(QWidget *parent = 0);
    ~Eth_test();

private slots:

//    void updateErrorTextEdit();
    void updateOutputTextEdit();
    void processFinished(int exitCode, QProcess::ExitStatus exitStatus);
//    void processError(QProcess::ProcessError error);

    void on_IP_Set_clicked();

    void on_NM_Set_clicked();

    void on_GW_Set_clicked();

   void on_buttonGroup_buttonPressed(int);

   void on_DA_Start_clicked();

   void on_DA_Stop_clicked();

   bool eventFilter(QObject* obj , QEvent* event);

   void processError(QProcess::ProcessError error);

   void updateErrorTextEdit();


   void on_pushButton_clicked();

private:
    Ui::Eth_test *ui;
    QString DA_IP;
    QString IP;
    QString NM;
    QString GW;
    QObject* last_Obj;
    QProcess* pProcess;
    QString Data;

};

#endif // ETH_TEST_H
