/********************************************************************************
** Form generated from reading UI file 'spi_test.ui'
**
** Created: Thu Apr 16 18:57:12 2020
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPI_TEST_H
#define UI_SPI_TEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_spi_test
{
public:
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QComboBox *Port;
    QLineEdit *Title;
    QGroupBox *groupBox_3;
    QPushButton *PA0;
    QPushButton *PA2;
    QPushButton *PA6;
    QPushButton *PA1;
    QPushButton *PA3;
    QPushButton *PA5;
    QPushButton *PA4;
    QPushButton *PA7;
    QPushButton *send_bt;
    QGroupBox *groupBox_4;
    QPushButton *read_bt;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_8;
    QPushButton *pushButton;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *spi_test)
    {
        if (spi_test->objectName().isEmpty())
            spi_test->setObjectName(QString::fromUtf8("spi_test"));
        spi_test->resize(800, 480);
        groupBox = new QGroupBox(spi_test);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 800, 480));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(14);
        groupBox->setFont(font);
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 100, 311, 111));
        Port = new QComboBox(groupBox_2);
        Port->setObjectName(QString::fromUtf8("Port"));
        Port->setGeometry(QRect(40, 40, 211, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agency FB"));
        font1.setPointSize(16);
        Port->setFont(font1);
        Title = new QLineEdit(groupBox);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setGeometry(QRect(250, 0, 291, 61));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Agency FB"));
        font2.setPointSize(24);
        Title->setFont(font2);
        Title->setCursor(QCursor(Qt::BlankCursor));
        Title->setFocusPolicy(Qt::NoFocus);
        Title->setReadOnly(true);
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 250, 781, 211));
        PA0 = new QPushButton(groupBox_3);
        buttonGroup = new QButtonGroup(spi_test);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(PA0);
        PA0->setObjectName(QString::fromUtf8("PA0"));
        PA0->setGeometry(QRect(11, 110, 90, 90));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Agency FB"));
        font3.setPointSize(18);
        PA0->setFont(font3);
        PA2 = new QPushButton(groupBox_3);
        buttonGroup->addButton(PA2);
        PA2->setObjectName(QString::fromUtf8("PA2"));
        PA2->setGeometry(QRect(200, 110, 90, 90));
        PA2->setFont(font3);
        PA6 = new QPushButton(groupBox_3);
        buttonGroup->addButton(PA6);
        PA6->setObjectName(QString::fromUtf8("PA6"));
        PA6->setGeometry(QRect(577, 110, 90, 90));
        PA6->setFont(font3);
        PA1 = new QPushButton(groupBox_3);
        buttonGroup->addButton(PA1);
        PA1->setObjectName(QString::fromUtf8("PA1"));
        PA1->setGeometry(QRect(105, 110, 90, 90));
        PA1->setFont(font3);
        PA3 = new QPushButton(groupBox_3);
        buttonGroup->addButton(PA3);
        PA3->setObjectName(QString::fromUtf8("PA3"));
        PA3->setGeometry(QRect(294, 110, 90, 90));
        PA3->setFont(font3);
        PA5 = new QPushButton(groupBox_3);
        buttonGroup->addButton(PA5);
        PA5->setObjectName(QString::fromUtf8("PA5"));
        PA5->setGeometry(QRect(483, 110, 90, 90));
        PA5->setFont(font3);
        PA4 = new QPushButton(groupBox_3);
        buttonGroup->addButton(PA4);
        PA4->setObjectName(QString::fromUtf8("PA4"));
        PA4->setGeometry(QRect(389, 110, 90, 90));
        PA4->setFont(font3);
        PA7 = new QPushButton(groupBox_3);
        buttonGroup->addButton(PA7);
        PA7->setObjectName(QString::fromUtf8("PA7"));
        PA7->setGeometry(QRect(672, 110, 90, 90));
        PA7->setFont(font3);
        send_bt = new QPushButton(groupBox_3);
        send_bt->setObjectName(QString::fromUtf8("send_bt"));
        send_bt->setGeometry(QRect(400, 30, 331, 41));
        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(380, 90, 411, 141));
        read_bt = new QPushButton(groupBox_4);
        read_bt->setObjectName(QString::fromUtf8("read_bt"));
        read_bt->setGeometry(QRect(190, 10, 181, 41));
        lineEdit = new QLineEdit(groupBox_4);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 100, 25, 25));
        lineEdit->setCursor(QCursor(Qt::BlankCursor));
        lineEdit->setFocusPolicy(Qt::NoFocus);
        lineEdit->setReadOnly(true);
        lineEdit_2 = new QLineEdit(groupBox_4);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(70, 100, 25, 25));
        lineEdit_2->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_2->setFocusPolicy(Qt::NoFocus);
        lineEdit_2->setReadOnly(true);
        lineEdit_3 = new QLineEdit(groupBox_4);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(120, 100, 25, 25));
        lineEdit_3->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_3->setFocusPolicy(Qt::NoFocus);
        lineEdit_3->setReadOnly(true);
        lineEdit_4 = new QLineEdit(groupBox_4);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(170, 100, 25, 25));
        lineEdit_4->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_4->setFocusPolicy(Qt::NoFocus);
        lineEdit_4->setReadOnly(true);
        lineEdit_5 = new QLineEdit(groupBox_4);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(220, 100, 25, 25));
        lineEdit_5->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_5->setFocusPolicy(Qt::NoFocus);
        lineEdit_5->setReadOnly(true);
        lineEdit_6 = new QLineEdit(groupBox_4);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(270, 100, 25, 25));
        lineEdit_6->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_6->setFocusPolicy(Qt::NoFocus);
        lineEdit_6->setReadOnly(true);
        lineEdit_7 = new QLineEdit(groupBox_4);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(320, 100, 25, 25));
        lineEdit_7->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_7->setFocusPolicy(Qt::NoFocus);
        lineEdit_7->setReadOnly(true);
        label = new QLabel(groupBox_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(320, 80, 31, 16));
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(270, 80, 31, 16));
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(220, 80, 31, 16));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(170, 80, 31, 16));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(120, 80, 31, 16));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, 80, 31, 16));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 80, 31, 16));
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(370, 80, 31, 16));
        lineEdit_8 = new QLineEdit(groupBox_4);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(370, 100, 25, 25));
        lineEdit_8->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_8->setFocusPolicy(Qt::NoFocus);
        lineEdit_8->setReadOnly(true);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(600, 10, 151, 51));

        retranslateUi(spi_test);

        QMetaObject::connectSlotsByName(spi_test);
    } // setupUi

    void retranslateUi(QWidget *spi_test)
    {
        spi_test->setWindowTitle(QApplication::translate("spi_test", "spi_test", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QApplication::translate("spi_test", "Port setting", 0, QApplication::UnicodeUTF8));
        Port->clear();
        Port->insertItems(0, QStringList()
         << QApplication::translate("spi_test", "SPI1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("spi_test", "SPI2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("spi_test", "SPI3_CH1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("spi_test", "SPI3_CH2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("spi_test", "SPI3_CH3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("spi_test", "SPI3_CH4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("spi_test", "SPI4_CH1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("spi_test", "SPI4_CH2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("spi_test", "SPI4_CH3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("spi_test", "SPI4_CH4", 0, QApplication::UnicodeUTF8)
        );
        groupBox_3->setTitle(QApplication::translate("spi_test", "LED Control", 0, QApplication::UnicodeUTF8));
        PA0->setText(QApplication::translate("spi_test", "PA0", 0, QApplication::UnicodeUTF8));
        PA2->setText(QApplication::translate("spi_test", "PA2", 0, QApplication::UnicodeUTF8));
        PA6->setText(QApplication::translate("spi_test", "PA6", 0, QApplication::UnicodeUTF8));
        PA1->setText(QApplication::translate("spi_test", "PA1", 0, QApplication::UnicodeUTF8));
        PA3->setText(QApplication::translate("spi_test", "PA3", 0, QApplication::UnicodeUTF8));
        PA5->setText(QApplication::translate("spi_test", "PA5", 0, QApplication::UnicodeUTF8));
        PA4->setText(QApplication::translate("spi_test", "PA4", 0, QApplication::UnicodeUTF8));
        PA7->setText(QApplication::translate("spi_test", "PA7", 0, QApplication::UnicodeUTF8));
        send_bt->setText(QApplication::translate("spi_test", "Send", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("spi_test", "SW Read", 0, QApplication::UnicodeUTF8));
        read_bt->setText(QApplication::translate("spi_test", "Read", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("spi_test", "PB.1", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("spi_test", "PB.2", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("spi_test", "PB.3", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("spi_test", "PB.4", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("spi_test", "PB.5", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("spi_test", "PB.6", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("spi_test", "PB.7", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("spi_test", "PB.0", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("spi_test", "EXIT", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class spi_test: public Ui_spi_test {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPI_TEST_H
