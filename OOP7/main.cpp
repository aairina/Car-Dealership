#include "mainwindow.h"
#include "logindialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    bool manager=true;
    bool loginComplete=false;
    LoginDialog login(manager,loginComplete);
    login.exec();
    if(loginComplete ){
        MainWindow w(manager);
        w.show();
        return a.exec();
    }
    return 0;
}
