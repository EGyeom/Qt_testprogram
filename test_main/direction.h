#ifndef DIRECTION_H
#define DIRECTION_H

#include <QWidget>

namespace Ui {
class Direction;
}

class Direction : public QWidget
{
    Q_OBJECT

public:
    explicit Direction(QWidget *parent = 0);
    ~Direction();
signals:
    void data(int);
private slots:

    void on_HIGH_clicked();

    void on_LOW_clicked();

    void keyPressEvent(QKeyEvent*);
private:
    Ui::Direction *ui;
};

#endif // DIRECTION_H
