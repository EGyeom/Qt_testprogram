/********************************************************************************
** Form generated from reading UI file 'eth_test.ui'
**
** Created: Thu Apr 16 18:57:12 2020
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ETH_TEST_H
#define UI_ETH_TEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Eth_test
{
public:
    QGroupBox *groupBox;
    QLabel *Title;
    QGroupBox *Network_group;
    QGroupBox *IP_BOX;
    QLineEdit *IP_LE;
    QPushButton *IP_Set;
    QGroupBox *Net_Mask_Box;
    QPushButton *NM_Set;
    QLineEdit *NM_LE;
    QGroupBox *GW_Group;
    QPushButton *GW_Set;
    QLineEdit *GW_LE;
    QGroupBox *groupBox_3;
    QGroupBox *DT_Addr;
    QPushButton *DA_Start;
    QLineEdit *DA_lE;
    QPushButton *DA_Stop;
    QGroupBox *groupBox_8;
    QPushButton *key_back;
    QPushButton *key_9;
    QPushButton *key_1;
    QPushButton *key_2;
    QPushButton *key_3;
    QPushButton *key_7;
    QPushButton *key_8;
    QPushButton *key_4;
    QPushButton *key_5;
    QPushButton *key_6;
    QPushButton *key_0;
    QPushButton *key_point;
    QListWidget *Output;
    QPushButton *pushButton;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *Eth_test)
    {
        if (Eth_test->objectName().isEmpty())
            Eth_test->setObjectName(QString::fromUtf8("Eth_test"));
        Eth_test->resize(800, 480);
        groupBox = new QGroupBox(Eth_test);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 800, 480));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox#groupBox{\n"
"background-color : white;\n"
"}"));
        Title = new QLabel(groupBox);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setGeometry(QRect(250, 0, 300, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(28);
        Title->setFont(font);
        Title->setStyleSheet(QString::fromUtf8("\n"
"\n"
"border : 2px solid;\n"
"border-color : black;\n"
"background-color : white; border-radius: 20px"));
        Title->setAlignment(Qt::AlignCenter);
        Network_group = new QGroupBox(groupBox);
        Network_group->setObjectName(QString::fromUtf8("Network_group"));
        Network_group->setGeometry(QRect(30, 80, 221, 371));
        Network_group->setStyleSheet(QString::fromUtf8("font: 16pt \"Agency FB\";\n"
"\n"
"border : 2px solid;\n"
"border-radius : 25px;"));
        IP_BOX = new QGroupBox(Network_group);
        IP_BOX->setObjectName(QString::fromUtf8("IP_BOX"));
        IP_BOX->setGeometry(QRect(10, 40, 201, 81));
        IP_LE = new QLineEdit(IP_BOX);
        IP_LE->setObjectName(QString::fromUtf8("IP_LE"));
        IP_LE->setGeometry(QRect(10, 25, 131, 41));
        IP_Set = new QPushButton(IP_BOX);
        IP_Set->setObjectName(QString::fromUtf8("IP_Set"));
        IP_Set->setGeometry(QRect(150, 25, 41, 41));
        IP_Set->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"background-color: rgb(223, 223, 223);\n"
"}"));
        Net_Mask_Box = new QGroupBox(Network_group);
        Net_Mask_Box->setObjectName(QString::fromUtf8("Net_Mask_Box"));
        Net_Mask_Box->setGeometry(QRect(10, 140, 201, 91));
        NM_Set = new QPushButton(Net_Mask_Box);
        NM_Set->setObjectName(QString::fromUtf8("NM_Set"));
        NM_Set->setGeometry(QRect(150, 30, 41, 41));
        NM_Set->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"background-color: rgb(223, 223, 223);\n"
"}"));
        NM_LE = new QLineEdit(Net_Mask_Box);
        NM_LE->setObjectName(QString::fromUtf8("NM_LE"));
        NM_LE->setGeometry(QRect(10, 30, 131, 41));
        GW_Group = new QGroupBox(Network_group);
        GW_Group->setObjectName(QString::fromUtf8("GW_Group"));
        GW_Group->setGeometry(QRect(10, 250, 201, 91));
        GW_Set = new QPushButton(GW_Group);
        GW_Set->setObjectName(QString::fromUtf8("GW_Set"));
        GW_Set->setGeometry(QRect(150, 30, 41, 41));
        GW_Set->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"background-color: rgb(223, 223, 223);\n"
"}"));
        GW_LE = new QLineEdit(GW_Group);
        GW_LE->setObjectName(QString::fromUtf8("GW_LE"));
        GW_LE->setGeometry(QRect(10, 30, 131, 41));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(260, 80, 531, 371));
        groupBox_3->setStyleSheet(QString::fromUtf8("font: 16pt \"Agency FB\";\n"
"\n"
"border : 2px solid;\n"
"border-radius : 25px;"));
        DT_Addr = new QGroupBox(groupBox_3);
        DT_Addr->setObjectName(QString::fromUtf8("DT_Addr"));
        DT_Addr->setGeometry(QRect(20, 30, 481, 80));
        DA_Start = new QPushButton(DT_Addr);
        DA_Start->setObjectName(QString::fromUtf8("DA_Start"));
        DA_Start->setGeometry(QRect(340, 25, 51, 41));
        DA_Start->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"background-color: rgb(223, 223, 223);\n"
"}"));
        DA_lE = new QLineEdit(DT_Addr);
        DA_lE->setObjectName(QString::fromUtf8("DA_lE"));
        DA_lE->setGeometry(QRect(10, 25, 301, 41));
        DA_Stop = new QPushButton(DT_Addr);
        DA_Stop->setObjectName(QString::fromUtf8("DA_Stop"));
        DA_Stop->setGeometry(QRect(410, 25, 51, 41));
        DA_Stop->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"background-color: rgb(223, 223, 223);\n"
"}"));
        groupBox_8 = new QGroupBox(groupBox_3);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(350, 120, 161, 231));
        groupBox_8->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"background-color: rgb(223, 223, 223);\n"
"}"));
        key_back = new QPushButton(groupBox_8);
        buttonGroup = new QButtonGroup(Eth_test);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(key_back);
        key_back->setObjectName(QString::fromUtf8("key_back"));
        key_back->setGeometry(QRect(10, 180, 41, 40));
        key_back->setStyleSheet(QString::fromUtf8(""));
        key_9 = new QPushButton(groupBox_8);
        buttonGroup->addButton(key_9);
        key_9->setObjectName(QString::fromUtf8("key_9"));
        key_9->setGeometry(QRect(110, 130, 41, 40));
        key_9->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"background-color: rgb(223, 223, 223);\n"
"}"));
        key_1 = new QPushButton(groupBox_8);
        buttonGroup->addButton(key_1);
        key_1->setObjectName(QString::fromUtf8("key_1"));
        key_1->setGeometry(QRect(10, 30, 41, 40));
        key_1->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"background-color: rgb(223, 223, 223);\n"
"}"));
        key_2 = new QPushButton(groupBox_8);
        buttonGroup->addButton(key_2);
        key_2->setObjectName(QString::fromUtf8("key_2"));
        key_2->setGeometry(QRect(60, 30, 41, 40));
        key_2->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"background-color: rgb(223, 223, 223);\n"
"}"));
        key_3 = new QPushButton(groupBox_8);
        buttonGroup->addButton(key_3);
        key_3->setObjectName(QString::fromUtf8("key_3"));
        key_3->setGeometry(QRect(110, 30, 41, 40));
        key_3->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"background-color: rgb(223, 223, 223);\n"
"}"));
        key_7 = new QPushButton(groupBox_8);
        buttonGroup->addButton(key_7);
        key_7->setObjectName(QString::fromUtf8("key_7"));
        key_7->setGeometry(QRect(10, 130, 41, 41));
        key_7->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"background-color: rgb(223, 223, 223);\n"
"}"));
        key_8 = new QPushButton(groupBox_8);
        buttonGroup->addButton(key_8);
        key_8->setObjectName(QString::fromUtf8("key_8"));
        key_8->setGeometry(QRect(60, 130, 41, 41));
        key_8->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"background-color: rgb(223, 223, 223);\n"
"}"));
        key_4 = new QPushButton(groupBox_8);
        buttonGroup->addButton(key_4);
        key_4->setObjectName(QString::fromUtf8("key_4"));
        key_4->setGeometry(QRect(10, 80, 41, 41));
        key_4->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"background-color: rgb(223, 223, 223);\n"
"}"));
        key_5 = new QPushButton(groupBox_8);
        buttonGroup->addButton(key_5);
        key_5->setObjectName(QString::fromUtf8("key_5"));
        key_5->setGeometry(QRect(60, 80, 41, 41));
        key_5->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"background-color: rgb(223, 223, 223);\n"
"}"));
        key_6 = new QPushButton(groupBox_8);
        buttonGroup->addButton(key_6);
        key_6->setObjectName(QString::fromUtf8("key_6"));
        key_6->setGeometry(QRect(110, 80, 41, 41));
        key_6->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"background-color: rgb(223, 223, 223);\n"
"}"));
        key_0 = new QPushButton(groupBox_8);
        buttonGroup->addButton(key_0);
        key_0->setObjectName(QString::fromUtf8("key_0"));
        key_0->setGeometry(QRect(60, 180, 41, 41));
        key_0->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"background-color: rgb(223, 223, 223);\n"
"}"));
        key_point = new QPushButton(groupBox_8);
        buttonGroup->addButton(key_point);
        key_point->setObjectName(QString::fromUtf8("key_point"));
        key_point->setGeometry(QRect(110, 180, 41, 41));
        key_point->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"background-color: rgb(223, 223, 223);\n"
"}"));
        Output = new QListWidget(groupBox_3);
        Output->setObjectName(QString::fromUtf8("Output"));
        Output->setGeometry(QRect(10, 130, 331, 221));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agency FB"));
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        Output->setFont(font1);
        Output->setStyleSheet(QString::fromUtf8("\n"
"font-size : 12px;\n"
"background-color : white;"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 20, 141, 41));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 16pt \"Agency FB\";\n"
"border : 2px solid;\n"
"border-radius : 10;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"background-color: rgb(223, 223, 223);\n"
"\n"
"}"));
        Title->raise();
        Network_group->raise();
        groupBox_3->raise();
        IP_BOX->raise();
        pushButton->raise();

        retranslateUi(Eth_test);

        QMetaObject::connectSlotsByName(Eth_test);
    } // setupUi

    void retranslateUi(QWidget *Eth_test)
    {
        Eth_test->setWindowTitle(QApplication::translate("Eth_test", "Eth_test", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        Title->setText(QApplication::translate("Eth_test", "EtherNet_TEST", 0, QApplication::UnicodeUTF8));
        Network_group->setTitle(QApplication::translate("Eth_test", "Network Setting", 0, QApplication::UnicodeUTF8));
        IP_BOX->setTitle(QApplication::translate("Eth_test", "IP Address", 0, QApplication::UnicodeUTF8));
        IP_LE->setText(QApplication::translate("Eth_test", "192.168.10.123", 0, QApplication::UnicodeUTF8));
        IP_Set->setText(QApplication::translate("Eth_test", "Set", 0, QApplication::UnicodeUTF8));
        Net_Mask_Box->setTitle(QApplication::translate("Eth_test", "Net Mask", 0, QApplication::UnicodeUTF8));
        NM_Set->setText(QApplication::translate("Eth_test", "Set", 0, QApplication::UnicodeUTF8));
        NM_LE->setText(QApplication::translate("Eth_test", "255.255.255.0", 0, QApplication::UnicodeUTF8));
        GW_Group->setTitle(QApplication::translate("Eth_test", "Gateway", 0, QApplication::UnicodeUTF8));
        GW_Set->setText(QApplication::translate("Eth_test", "Set", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("Eth_test", "Network Test", 0, QApplication::UnicodeUTF8));
        DT_Addr->setTitle(QApplication::translate("Eth_test", "Destination Address", 0, QApplication::UnicodeUTF8));
        DA_Start->setText(QApplication::translate("Eth_test", "START", 0, QApplication::UnicodeUTF8));
        DA_Stop->setText(QApplication::translate("Eth_test", "STOP", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("Eth_test", "Keypad", 0, QApplication::UnicodeUTF8));
        key_back->setText(QApplication::translate("Eth_test", "\342\206\220", 0, QApplication::UnicodeUTF8));
        key_9->setText(QApplication::translate("Eth_test", "9", 0, QApplication::UnicodeUTF8));
        key_1->setText(QApplication::translate("Eth_test", "1", 0, QApplication::UnicodeUTF8));
        key_2->setText(QApplication::translate("Eth_test", "2", 0, QApplication::UnicodeUTF8));
        key_3->setText(QApplication::translate("Eth_test", "3", 0, QApplication::UnicodeUTF8));
        key_7->setText(QApplication::translate("Eth_test", "7", 0, QApplication::UnicodeUTF8));
        key_8->setText(QApplication::translate("Eth_test", "8", 0, QApplication::UnicodeUTF8));
        key_4->setText(QApplication::translate("Eth_test", "4", 0, QApplication::UnicodeUTF8));
        key_5->setText(QApplication::translate("Eth_test", "5", 0, QApplication::UnicodeUTF8));
        key_6->setText(QApplication::translate("Eth_test", "6", 0, QApplication::UnicodeUTF8));
        key_0->setText(QApplication::translate("Eth_test", "0", 0, QApplication::UnicodeUTF8));
        key_point->setText(QApplication::translate("Eth_test", ".", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Eth_test", "BACK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Eth_test: public Ui_Eth_test {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ETH_TEST_H
