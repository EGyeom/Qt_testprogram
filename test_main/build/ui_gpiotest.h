/********************************************************************************
** Form generated from reading UI file 'gpiotest.ui'
**
** Created: Thu Apr 16 18:57:12 2020
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GPIOTEST_H
#define UI_GPIOTEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gpiotest
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QListWidget *listWidget;
    QGroupBox *groupBox;
    QComboBox *Port_box;
    QLabel *label;
    QComboBox *Pin_box;
    QLabel *label_2;
    QPushButton *Set_BT;
    QGroupBox *groupBox_2;
    QPushButton *Output_BT;
    QPushButton *Input_BT;
    QPushButton *pushButton;

    void setupUi(QMainWindow *gpiotest)
    {
        if (gpiotest->objectName().isEmpty())
            gpiotest->setObjectName(QString::fromUtf8("gpiotest"));
        gpiotest->resize(800, 480);
        centralWidget = new QWidget(gpiotest);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(220, 0, 341, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        lineEdit->setFont(font);
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(430, 190, 351, 231));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 60, 721, 121));
        QFont font1;
        groupBox->setFont(font1);
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox#groupBox{\n"
"\n"
"	font-size : 20px;\n"
"	border-color : rgb(255,255,255);\n"
"	border : 3px solid;\n"
"}"));
        Port_box = new QComboBox(groupBox);
        Port_box->setObjectName(QString::fromUtf8("Port_box"));
        Port_box->setGeometry(QRect(30, 60, 151, 31));
        Port_box->setStyleSheet(QString::fromUtf8("font: 15pt \"Agency FB\";"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 40, 56, 12));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Agency FB"));
        font2.setPointSize(12);
        label->setFont(font2);
        Pin_box = new QComboBox(groupBox);
        Pin_box->setObjectName(QString::fromUtf8("Pin_box"));
        Pin_box->setGeometry(QRect(270, 60, 161, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Agency FB"));
        font3.setPointSize(15);
        Pin_box->setFont(font3);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(270, 40, 56, 12));
        label_2->setFont(font2);
        Set_BT = new QPushButton(groupBox);
        Set_BT->setObjectName(QString::fromUtf8("Set_BT"));
        Set_BT->setGeometry(QRect(550, 60, 121, 31));
        Set_BT->setFont(font2);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(50, 200, 361, 80));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox#groupBox_2{\n"
"\n"
"\n"
"	font-size : 20px;\n"
"	border-color : white;\n"
"	border : 3px solid;\n"
"\n"
"\n"
"\n"
"}"));
        Output_BT = new QPushButton(groupBox_2);
        Output_BT->setObjectName(QString::fromUtf8("Output_BT"));
        Output_BT->setGeometry(QRect(20, 30, 151, 31));
        Input_BT = new QPushButton(groupBox_2);
        Input_BT->setObjectName(QString::fromUtf8("Input_BT"));
        Input_BT->setGeometry(QRect(200, 30, 151, 31));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 350, 151, 51));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Agency FB"));
        font4.setPointSize(30);
        pushButton->setFont(font4);
        gpiotest->setCentralWidget(centralWidget);

        retranslateUi(gpiotest);

        QMetaObject::connectSlotsByName(gpiotest);
    } // setupUi

    void retranslateUi(QMainWindow *gpiotest)
    {
        gpiotest->setWindowTitle(QApplication::translate("gpiotest", "gpiotest", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("gpiotest", "PIN SELECT", 0, QApplication::UnicodeUTF8));
        Port_box->clear();
        Port_box->insertItems(0, QStringList()
         << QApplication::translate("gpiotest", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "5", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("gpiotest", "PORT", 0, QApplication::UnicodeUTF8));
        Pin_box->clear();
        Pin_box->insertItems(0, QStringList()
         << QApplication::translate("gpiotest", "0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "13", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "14", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "15", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "17", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "18", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "19", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "20", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "21", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "22", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "23", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "24", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "25", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "26", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "27", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "28", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "29", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "30", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("gpiotest", "31", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("gpiotest", "PIN", 0, QApplication::UnicodeUTF8));
        Set_BT->setText(QApplication::translate("gpiotest", "SET", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("gpiotest", "GroupBox", 0, QApplication::UnicodeUTF8));
        Output_BT->setText(QApplication::translate("gpiotest", "OUTPUT", 0, QApplication::UnicodeUTF8));
        Input_BT->setText(QApplication::translate("gpiotest", "INPUT", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("gpiotest", "EXIT", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class gpiotest: public Ui_gpiotest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GPIOTEST_H
