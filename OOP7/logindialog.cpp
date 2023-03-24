#include "logindialog.h"
#include "ui_logindialog.h"

LoginDialog::LoginDialog(bool &manager,bool &loginComplete, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    ui->wong->hide();
    this->manager=&manager;
    this->loginComplete=&loginComplete;
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_CustomerButton_clicked()
{
    if(ui->Username->text()=="kunde" && ui->Password->text()=="tr1ck"){
        *manager=false;
        *loginComplete=true;
        LoginDialog::close();
    }
    else
        ui->wong->show();
}


void LoginDialog::on_ManagerButton_clicked()
{
    if(ui->Username->text()=="manager" && ui->Password->text()=="s8cr8t"){
        *manager=true;
        *loginComplete=true;
        LoginDialog::close();
    }
    else
        ui->wong->show();
}

