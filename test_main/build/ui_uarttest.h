/********************************************************************************
** Form generated from reading UI file 'uarttest.ui'
**
** Created: Thu Apr 16 18:57:12 2020
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UARTTEST_H
#define UI_UARTTEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_uartTest
{
public:
    QGroupBox *ALL;
    QGroupBox *PORT;
    QComboBox *PORT_BOX;
    QGroupBox *BAUDRATE;
    QComboBox *BAUD_BOX;
    QLineEdit *Title;
    QGroupBox *INPUT;
    QLineEdit *lineEdit;
    QPushButton *Input_bt;
    QGroupBox *groupBox;
    QListWidget *OUTPUT;
    QPushButton *exit_bt;

    void setupUi(QWidget *uartTest)
    {
        if (uartTest->objectName().isEmpty())
            uartTest->setObjectName(QString::fromUtf8("uartTest"));
        uartTest->resize(800, 480);
        ALL = new QGroupBox(uartTest);
        ALL->setObjectName(QString::fromUtf8("ALL"));
        ALL->setGeometry(QRect(0, 0, 801, 480));
        PORT = new QGroupBox(ALL);
        PORT->setObjectName(QString::fromUtf8("PORT"));
        PORT->setGeometry(QRect(30, 80, 331, 80));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(16);
        PORT->setFont(font);
        PORT_BOX = new QComboBox(PORT);
        PORT_BOX->setObjectName(QString::fromUtf8("PORT_BOX"));
        PORT_BOX->setGeometry(QRect(10, 30, 311, 31));
        PORT_BOX->setFont(font);
        BAUDRATE = new QGroupBox(ALL);
        BAUDRATE->setObjectName(QString::fromUtf8("BAUDRATE"));
        BAUDRATE->setGeometry(QRect(30, 180, 331, 80));
        BAUDRATE->setFont(font);
        BAUD_BOX = new QComboBox(BAUDRATE);
        BAUD_BOX->setObjectName(QString::fromUtf8("BAUD_BOX"));
        BAUD_BOX->setGeometry(QRect(10, 30, 311, 31));
        Title = new QLineEdit(ALL);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setGeometry(QRect(220, 0, 311, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agency FB"));
        font1.setPointSize(24);
        Title->setFont(font1);
        INPUT = new QGroupBox(ALL);
        INPUT->setObjectName(QString::fromUtf8("INPUT"));
        INPUT->setGeometry(QRect(30, 270, 331, 151));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Agency FB"));
        font2.setPointSize(16);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        INPUT->setFont(font2);
        INPUT->setStyleSheet(QString::fromUtf8("QGroupBox#groupBox_4{\n"
"\n"
"\n"
"	font: 75 16pt \"Agency FB\";\n"
"\n"
"\n"
"}"));
        lineEdit = new QLineEdit(INPUT);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 30, 311, 31));
        Input_bt = new QPushButton(INPUT);
        Input_bt->setObjectName(QString::fromUtf8("Input_bt"));
        Input_bt->setGeometry(QRect(130, 90, 75, 23));
        groupBox = new QGroupBox(ALL);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(440, 90, 301, 331));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Agency FB"));
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        groupBox->setFont(font3);
        OUTPUT = new QListWidget(groupBox);
        OUTPUT->setObjectName(QString::fromUtf8("OUTPUT"));
        OUTPUT->setGeometry(QRect(20, 30, 251, 291));
        exit_bt = new QPushButton(ALL);
        exit_bt->setObjectName(QString::fromUtf8("exit_bt"));
        exit_bt->setGeometry(QRect(600, 30, 111, 41));
        exit_bt->setFont(font);

        retranslateUi(uartTest);

        QMetaObject::connectSlotsByName(uartTest);
    } // setupUi

    void retranslateUi(QWidget *uartTest)
    {
        uartTest->setWindowTitle(QApplication::translate("uartTest", "uartTest", 0, QApplication::UnicodeUTF8));
        ALL->setTitle(QString());
        PORT->setTitle(QApplication::translate("uartTest", "PORT SELECT", 0, QApplication::UnicodeUTF8));
        PORT_BOX->clear();
        PORT_BOX->insertItems(0, QStringList()
         << QApplication::translate("uartTest", "COM 1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("uartTest", "COM 2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("uartTest", "COM 3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("uartTest", "COM 4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("uartTest", "COM 5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("uartTest", "COM 6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("uartTest", "COM 7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("uartTest", "COM 8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("uartTest", "COM 9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("uartTest", "COM 10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("uartTest", "COM 11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("uartTest", "COM 12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("uartTest", "COM 13", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("uartTest", "COM 14", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("uartTest", "COM 15", 0, QApplication::UnicodeUTF8)
        );
        BAUDRATE->setTitle(QApplication::translate("uartTest", "BAUDRATE", 0, QApplication::UnicodeUTF8));
        BAUD_BOX->clear();
        BAUD_BOX->insertItems(0, QStringList()
         << QApplication::translate("uartTest", "100", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("uartTest", "300", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("uartTest", "600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("uartTest", "1200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("uartTest", "2400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("uartTest", "4800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("uartTest", "9600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("uartTest", "14400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("uartTest", "19200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("uartTest", "38400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("uartTest", "57600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("uartTest", "115200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("uartTest", "230400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("uartTest", "460800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("uartTest", "921600", 0, QApplication::UnicodeUTF8)
        );
        Title->setText(QApplication::translate("uartTest", "UART TEST", 0, QApplication::UnicodeUTF8));
        INPUT->setTitle(QApplication::translate("uartTest", "INPUT", 0, QApplication::UnicodeUTF8));
        Input_bt->setText(QApplication::translate("uartTest", "INPUT", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("uartTest", "OUTPUT", 0, QApplication::UnicodeUTF8));
        exit_bt->setText(QApplication::translate("uartTest", "EXIT", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class uartTest: public Ui_uartTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UARTTEST_H
