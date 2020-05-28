#ifndef USB_TEST_H
#define USB_TEST_H

#include <QWidget>
#include <QFileSystemModel>
#include <QDirModel>
#include <string>
#include <QProcess>

namespace Ui {
class usb_test;
}

class usb_test : public QWidget
{
    Q_OBJECT

public:
    explicit usb_test(QWidget *parent = 0);
    ~usb_test();

private slots:

    void on_tree_doubleClicked(const QModelIndex &index);

    void on_tree_expanded(const QModelIndex &index);

    void on_tree_collapsed(const QModelIndex &index);

    void on_pushButton_3_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void updateOutputTextEdit();

    void on_tree_clicked(const QModelIndex &index);

private:
    Ui::usb_test *ui;
    QFileSystemModel* model;
    QDirModel *dir;
    QString path;
    int usb_index;
    bool flag;
    QProcess *pProcess;
    QString current_sel;
};

#endif // USB_TEST_H
