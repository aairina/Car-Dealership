#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
#include <carviewdialog.h>
#include <clientviewdialog.h>
#include <errordialog.h>
#include <adddialog.h>
#include "Repository/carrepository.h"
#include "Controller/carcontroller.h"
#include "UI/carui.h"
#include "unittests.h"
#include <fstream>
#include <memory>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
friend class CarViewDialog;
public:
    MainWindow(bool manager,QWidget *parent = nullptr);
    void initialize_table(std::string file);
    ~MainWindow();

private slots:
    void on_PushButton_clicked();

    void on_tableWidget_cellDoubleClicked(int row, int column);

    void on_AddButton_clicked();

private:
    bool manager;
    shared_ptr<car_repo::CarRepository> repo_pointer;
    shared_ptr<car_repo::CarRepository> fav_pointer;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
