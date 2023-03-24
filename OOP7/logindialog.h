#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog( bool &manager,bool &loginComplete, QWidget *parent = nullptr);
    ~LoginDialog();

private slots:
    void on_CustomerButton_clicked();

    void on_ManagerButton_clicked();

private:
    Ui::LoginDialog *ui;
    bool *manager,*loginComplete;
};

#endif // LOGINDIALOG_H
