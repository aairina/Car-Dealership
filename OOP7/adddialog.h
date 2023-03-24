#ifndef ADDDIALOG_H
#define ADDDIALOG_H

#include <QDialog>
#include <QTableWidget>
#include <string>
#include <errordialog.h>
namespace Ui {
class AddDialog;
}

class AddDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddDialog(QTableWidget &table, QWidget *parent = nullptr);
    ~AddDialog();

private slots:
    void on_DoneButton_clicked();

private:
    QTableWidget *table;
    Ui::AddDialog *ui;
};

#endif // ADDDIALOG_H
