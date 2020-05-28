#ifndef KEYPAD_H
#define KEYPAD_H

#include <QWidget>
#include <QDebug>
#include <QButtonGroup>

namespace Ui {
class keypad;

}

class keypad : public QWidget
{
    Q_OBJECT

public:
    explicit keypad(QWidget *parent = 0);
    ~keypad();
    QButtonGroup *BG;
private slots:

private:
    Ui::keypad *ui;
};

#endif // KEYPAD_H
