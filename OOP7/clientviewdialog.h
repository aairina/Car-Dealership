#ifndef CLIENTVIEWDIALOG_H
#define CLIENTVIEWDIALOG_H

#include <QDialog>
#include <QTableWidget>

namespace Ui {
class ClientViewDialog;
}

class ClientViewDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ClientViewDialog(QTableWidget &table,int row, std::string file, QWidget *parent = nullptr);
    ~ClientViewDialog();

private slots:
    void on_pushButton_clicked();

    void on_AddButton_clicked();

private:
    QTableWidget *table;
    int row;
    std::string file;
    Ui::ClientViewDialog *ui;
};

#endif // CLIENTVIEWDIALOG_H
