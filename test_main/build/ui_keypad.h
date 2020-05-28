/********************************************************************************
** Form generated from reading UI file 'keypad.ui'
**
** Created: Thu Apr 16 18:57:12 2020
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYPAD_H
#define UI_KEYPAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_keypad
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *OK_pushButton;
    QPushButton *Clear_pushButton;
    QPushButton *pushButton;
    QPushButton *pushButton_0;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_2;

    void setupUi(QWidget *keypad)
    {
        if (keypad->objectName().isEmpty())
            keypad->setObjectName(QString::fromUtf8("keypad"));
        keypad->resize(256, 259);
        groupBox = new QGroupBox(keypad);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 261, 261));
        groupBox->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"\n"
"font: 75 16pt \"Agency FB\";"));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(170, 40, 75, 40));
        pushButton_8 = new QPushButton(groupBox);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(89, 148, 75, 40));
        pushButton_9 = new QPushButton(groupBox);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(170, 148, 75, 40));
        OK_pushButton = new QPushButton(groupBox);
        OK_pushButton->setObjectName(QString::fromUtf8("OK_pushButton"));
        OK_pushButton->setGeometry(QRect(8, 202, 75, 40));
        Clear_pushButton = new QPushButton(groupBox);
        Clear_pushButton->setObjectName(QString::fromUtf8("Clear_pushButton"));
        Clear_pushButton->setGeometry(QRect(170, 202, 75, 40));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(8, 40, 75, 40));
        pushButton_0 = new QPushButton(groupBox);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(89, 202, 75, 40));
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(89, 94, 75, 40));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(8, 94, 75, 40));
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(170, 94, 75, 40));
        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(8, 148, 75, 40));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(89, 40, 75, 40));

        retranslateUi(keypad);

        QMetaObject::connectSlotsByName(keypad);
    } // setupUi

    void retranslateUi(QWidget *keypad)
    {
        keypad->setWindowTitle(QApplication::translate("keypad", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("keypad", "Key Pad", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("keypad", "3", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("keypad", "8", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("keypad", "9", 0, QApplication::UnicodeUTF8));
        OK_pushButton->setText(QApplication::translate("keypad", "OK", 0, QApplication::UnicodeUTF8));
        Clear_pushButton->setText(QApplication::translate("keypad", "Clear", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("keypad", "1", 0, QApplication::UnicodeUTF8));
        pushButton_0->setText(QApplication::translate("keypad", "0", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("keypad", "5", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("keypad", "4", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("keypad", "6", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("keypad", "7", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("keypad", "2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class keypad: public Ui_keypad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYPAD_H
