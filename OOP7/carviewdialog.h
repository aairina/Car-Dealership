#ifndef CARVIEWDIALOG_H
#define CARVIEWDIALOG_H

#include <QDialog>
#include <string>
#include <vector>
#include <mainwindow.h>
#include <QTableWidget>
//using namespace car_repo;
namespace Ui {
class CarViewDialog;
}

class CarViewDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CarViewDialog(QTableWidget &table,int row, QWidget *parent = nullptr);
    ~CarViewDialog();

private slots:

    void on_BackButton_clicked();

    void on_DeleteButton_clicked();

    void on_SaveButton_clicked();

private:
    QTableWidget *tab;
    int row;
    Ui::CarViewDialog *ui;
};

#endif // CARVIEWDIALOG_H
