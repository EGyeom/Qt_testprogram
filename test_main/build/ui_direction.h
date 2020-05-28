/********************************************************************************
** Form generated from reading UI file 'direction.ui'
**
** Created: Thu Apr 16 18:57:12 2020
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIRECTION_H
#define UI_DIRECTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Direction
{
public:
    QGroupBox *groupBox;
    QPushButton *HIGH;
    QPushButton *LOW;

    void setupUi(QWidget *Direction)
    {
        if (Direction->objectName().isEmpty())
            Direction->setObjectName(QString::fromUtf8("Direction"));
        Direction->resize(225, 115);
        groupBox = new QGroupBox(Direction);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(4, 2, 221, 111));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);\n"
"border : 2px solid"));
        HIGH = new QPushButton(groupBox);
        HIGH->setObjectName(QString::fromUtf8("HIGH"));
        HIGH->setGeometry(QRect(20, 20, 81, 71));
        LOW = new QPushButton(groupBox);
        LOW->setObjectName(QString::fromUtf8("LOW"));
        LOW->setGeometry(QRect(124, 20, 81, 71));
        LOW->raise();
        HIGH->raise();

        retranslateUi(Direction);

        QMetaObject::connectSlotsByName(Direction);
    } // setupUi

    void retranslateUi(QWidget *Direction)
    {
        Direction->setWindowTitle(QApplication::translate("Direction", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        HIGH->setText(QApplication::translate("Direction", "HIGH", 0, QApplication::UnicodeUTF8));
        LOW->setText(QApplication::translate("Direction", "LOW", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Direction: public Ui_Direction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIRECTION_H
