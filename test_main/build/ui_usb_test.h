/********************************************************************************
** Form generated from reading UI file 'usb_test.ui'
**
** Created: Thu Apr 16 18:57:12 2020
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USB_TEST_H
#define UI_USB_TEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QTreeView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_usb_test
{
public:
    QGroupBox *groupBox;
    QTreeView *tree;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QComboBox *comboBox;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QListWidget *listWidget;

    void setupUi(QWidget *usb_test)
    {
        if (usb_test->objectName().isEmpty())
            usb_test->setObjectName(QString::fromUtf8("usb_test"));
        usb_test->resize(800, 480);
        usb_test->setStyleSheet(QString::fromUtf8("\n"
"background-color: white;"));
        groupBox = new QGroupBox(usb_test);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 800, 480));
        tree = new QTreeView(groupBox);
        tree->setObjectName(QString::fromUtf8("tree"));
        tree->setGeometry(QRect(30, 120, 591, 341));
        tree->setMinimumSize(QSize(591, 0));
        tree->setMaximumSize(QSize(591, 341));
        tree->setStyleSheet(QString::fromUtf8("QTreeView{\n"
" border : 2px solid;\n"
" border-radius: 10px;\n"
"}\n"
"\n"
"QHeaderView{\n"
"\n"
"	border : 1px solid;\n"
"	border-radius: 8px;\n"
"\n"
"}"));
        tree->setLineWidth(1);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(240, 0, 300, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(36);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("border : 2px solid; background-color: white;"));
        label_2->setAlignment(Qt::AlignCenter);
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(50, 30, 121, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agency FB"));
        font1.setPointSize(20);
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color : white;\n"
"	border : 1px solid;\n"
"	\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"	background-color : rgb(211,211,100);\n"
"\n"
"}"));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(650, 120, 131, 31));
        comboBox->setFont(font1);
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"\n"
"	height : 10px;\n"
"	background-color: white;\n"
"	border : 1px solid;\n"
"\n"
"}"));
        comboBox->setModelColumn(0);
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(650, 60, 131, 41));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color : white;\n"
"	border : 1px solid;\n"
"	\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"	background-color : rgb(211,211,100);\n"
"\n"
"}"));
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(650, 10, 131, 41));
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color : white;\n"
"	border : 1px solid;\n"
"	\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"	background-color : rgb(211,211,100);\n"
"\n"
"}"));
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(650, 160, 131, 41));
        pushButton_6->setFont(font1);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	background-color : white;\n"
"	border : 1px solid;\n"
"	\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"	background-color : rgb(211,211,100);\n"
"\n"
"}"));
        listWidget = new QListWidget(groupBox);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(630, 210, 161, 251));

        retranslateUi(usb_test);

        QMetaObject::connectSlotsByName(usb_test);
    } // setupUi

    void retranslateUi(QWidget *usb_test)
    {
        usb_test->setWindowTitle(QApplication::translate("usb_test", "usb_test", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        label_2->setText(QApplication::translate("usb_test", "USB_TEST", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("usb_test", "BACK", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("usb_test", "sda1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("usb_test", "sdb1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("usb_test", "sdc1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("usb_test", "sdd1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("usb_test", "sde1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("usb_test", "sdf1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("usb_test", "sdg1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("usb_test", "sdh1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("usb_test", "sdi1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("usb_test", "sdj1", 0, QApplication::UnicodeUTF8)
        );
        pushButton_4->setText(QApplication::translate("usb_test", "DEL", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("usb_test", "WRITE", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("usb_test", "READ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class usb_test: public Ui_usb_test {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USB_TEST_H
