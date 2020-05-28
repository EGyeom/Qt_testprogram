/********************************************************************************
** Form generated from reading UI file 'test_main.ui'
**
** Created: Thu Apr 16 18:57:12 2020
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_MAIN_H
#define UI_TEST_MAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test_main
{
public:
    QPushButton *pushButton_9;
    QLineEdit *lineEdit;
    QGroupBox *groupBox;
    QPushButton *ethernet;
    QPushButton *iic;
    QPushButton *spi;
    QPushButton *emmc;
    QPushButton *usb;
    QPushButton *uart;
    QPushButton *gpio;
    QPushButton *audio;

    void setupUi(QWidget *test_main)
    {
        if (test_main->objectName().isEmpty())
            test_main->setObjectName(QString::fromUtf8("test_main"));
        test_main->resize(800, 480);
        test_main->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"background-color : white;"));
        pushButton_9 = new QPushButton(test_main);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(580, 80, 181, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(20);
        pushButton_9->setFont(font);
        pushButton_9->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"\n"
"border:2px solid; border-radius:15px;\n"
"\n"
"}\n"
"QPushButton:pressed{\n"
"\n"
"\n"
"	background-color : rgb(211, 211, 211);\n"
"\n"
"}"));
        lineEdit = new QLineEdit(test_main);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(200, 30, 361, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agency FB"));
        font1.setPointSize(28);
        lineEdit->setFont(font1);
        lineEdit->setFocusPolicy(Qt::NoFocus);
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit#lineEdit{\n"
"\n"
"\n"
"	border-width : 3px;\n"
"	border-style : solid;\n"
"	border-color : rgb(0,0,0);\n"
"	border-radius : 10px;\n"
"\n"
"\n"
"\n"
"\n"
"}"));
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setDragEnabled(false);
        lineEdit->setReadOnly(true);
        groupBox = new QGroupBox(test_main);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 160, 731, 291));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox#groupBox{\n"
"\n"
"\n"
"	border-width: 5px;\n"
"	border-style: solid;\n"
"	border-radius: 15px;\n"
"	background-color : white;\n"
"\n"
"\n"
"}"));
        ethernet = new QPushButton(groupBox);
        ethernet->setObjectName(QString::fromUtf8("ethernet"));
        ethernet->setGeometry(QRect(570, 160, 120, 100));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Agency FB"));
        font2.setPointSize(24);
        ethernet->setFont(font2);
        ethernet->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"\n"
"border:2px solid; border-radius:25px;\n"
"\n"
"}\n"
"QPushButton:pressed{\n"
"\n"
"\n"
"	background-color : rgb(211, 211, 211);\n"
"\n"
"}"));
        iic = new QPushButton(groupBox);
        iic->setObjectName(QString::fromUtf8("iic"));
        iic->setGeometry(QRect(570, 30, 120, 100));
        iic->setFont(font2);
        iic->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"\n"
"border:2px solid; border-radius:25px;\n"
"\n"
"}\n"
"QPushButton:pressed{\n"
"\n"
"\n"
"	background-color : rgb(211, 211, 211);\n"
"\n"
"}"));
        spi = new QPushButton(groupBox);
        spi->setObjectName(QString::fromUtf8("spi"));
        spi->setGeometry(QRect(380, 30, 120, 100));
        spi->setFont(font2);
        spi->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"\n"
"border:2px solid; border-radius:25px;\n"
"\n"
"}\n"
"QPushButton:pressed{\n"
"\n"
"\n"
"	background-color : rgb(211, 211, 211);\n"
"\n"
"}"));
        emmc = new QPushButton(groupBox);
        emmc->setObjectName(QString::fromUtf8("emmc"));
        emmc->setGeometry(QRect(380, 160, 120, 100));
        emmc->setFont(font2);
        emmc->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"\n"
"border:2px solid; border-radius:25px;\n"
"\n"
"}\n"
"QPushButton:pressed{\n"
"\n"
"\n"
"	background-color : rgb(211, 211, 211);\n"
"\n"
"}"));
        usb = new QPushButton(groupBox);
        usb->setObjectName(QString::fromUtf8("usb"));
        usb->setGeometry(QRect(200, 160, 120, 100));
        usb->setFont(font2);
        usb->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"\n"
"border:2px solid; border-radius:25px;\n"
"\n"
"}\n"
"QPushButton:pressed{\n"
"\n"
"\n"
"	background-color : rgb(211, 211, 211);\n"
"\n"
"}"));
        uart = new QPushButton(groupBox);
        uart->setObjectName(QString::fromUtf8("uart"));
        uart->setGeometry(QRect(200, 30, 120, 100));
        uart->setFont(font2);
        uart->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"\n"
"border:2px solid; border-radius:25px;\n"
"\n"
"}\n"
"QPushButton:pressed{\n"
"\n"
"\n"
"	background-color : rgb(211, 211, 211);\n"
"\n"
"}"));
        gpio = new QPushButton(groupBox);
        gpio->setObjectName(QString::fromUtf8("gpio"));
        gpio->setGeometry(QRect(30, 30, 120, 100));
        gpio->setFont(font2);
        gpio->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"\n"
"border:2px solid; border-radius:25px;\n"
"\n"
"}\n"
"QPushButton:pressed{\n"
"\n"
"\n"
"	background-color : rgb(211, 211, 211);\n"
"\n"
"}"));
        audio = new QPushButton(groupBox);
        audio->setObjectName(QString::fromUtf8("audio"));
        audio->setGeometry(QRect(30, 160, 120, 100));
        audio->setFont(font2);
        audio->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"\n"
"border:2px solid; border-radius:25px;\n"
"\n"
"}\n"
"QPushButton:pressed{\n"
"\n"
"\n"
"	background-color : rgb(211, 211, 211);\n"
"\n"
"}"));

        retranslateUi(test_main);

        QMetaObject::connectSlotsByName(test_main);
    } // setupUi

    void retranslateUi(QWidget *test_main)
    {
        test_main->setWindowTitle(QApplication::translate("test_main", "test_app", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("test_main", "EXIT", 0, QApplication::UnicodeUTF8));
        lineEdit->setText(QApplication::translate("test_main", "I.MX6 TEST PROGRAM", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        ethernet->setText(QApplication::translate("test_main", "Ethernet", 0, QApplication::UnicodeUTF8));
        iic->setText(QApplication::translate("test_main", "I2C", 0, QApplication::UnicodeUTF8));
        spi->setText(QApplication::translate("test_main", "SPI", 0, QApplication::UnicodeUTF8));
        emmc->setText(QApplication::translate("test_main", "eMMC", 0, QApplication::UnicodeUTF8));
        usb->setText(QApplication::translate("test_main", "USB", 0, QApplication::UnicodeUTF8));
        uart->setText(QApplication::translate("test_main", "UART", 0, QApplication::UnicodeUTF8));
        gpio->setText(QApplication::translate("test_main", "GPIO", 0, QApplication::UnicodeUTF8));
        audio->setText(QApplication::translate("test_main", "AUDIO", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class test_main: public Ui_test_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_MAIN_H
