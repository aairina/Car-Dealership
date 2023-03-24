#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(bool manager, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->manager=manager;
    initialize_table("carList.csv");

}
void MainWindow::initialize_table(std::string file){
    ui->tableWidget->clear();
    ui->tableWidget->setRowCount(0);
    ui->sourceText->setText(QString::fromStdString(file));
    fav_pointer=make_shared<InFileRepo>("favList.csv");
    repo_pointer=make_shared<InFileRepo>(file);
    repo_pointer->initialize();
    QStringList l;
    l.append("ID");
    l.append("Manufacturer");
    l.append("Model");
    l.append("Year of Reg");
    l.append("Kilometerage");
    l.append("Price");
    l.append("Range");
    l.append("Load Time");
    ui->tableWidget->setHorizontalHeaderLabels(l);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    vector<ElectricCar> vec=repo_pointer->get_el_car_list();

    ui->tableWidget->setRowCount(vec.size());
    for(int i=0;i<vec.size();i++){
        QTableWidgetItem* id=new QTableWidgetItem();
        id->setData(Qt::EditRole,vec[i].get_id());
        ui->tableWidget->setItem(i,0,id);

        QString manufacturer= QString::fromStdString(vec[i].get_manufacturer());
        QTableWidgetItem* man=new QTableWidgetItem(manufacturer);
        ui->tableWidget->setItem(i,1,man);

        QString model= QString::fromStdString(vec[i].get_model());
        QTableWidgetItem* mod=new QTableWidgetItem(model);
        ui->tableWidget->setItem(i,2,mod);

        QTableWidgetItem* ye=new QTableWidgetItem();
        ye->setData(Qt::EditRole,vec[i].get_year_of_registration());
        ui->tableWidget->setItem(i,3,ye);

        QTableWidgetItem* kilo=new QTableWidgetItem();
        kilo->setData(Qt::EditRole,vec[i].get_kilometers());
        ui->tableWidget->setItem(i,4,kilo);

        QTableWidgetItem* money=new QTableWidgetItem();
        money->setData(Qt::EditRole,vec[i].get_price());
        ui->tableWidget->setItem(i,5,money);

        QTableWidgetItem* rang=new QTableWidgetItem();
        rang->setData(Qt::EditRole,vec[i].get_range());
        ui->tableWidget->setItem(i,6,rang);

        QTableWidgetItem* time=new QTableWidgetItem();
        time->setData(Qt::EditRole,vec[i].get_loading_time());
        ui->tableWidget->setItem(i,7,time);

    }
    if(!manager)
        ui->AddButton->hide();

}


MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_PushButton_clicked()
{
    QString file=ui->sourceText->text();
    string sFile=file.toStdString();

    initialize_table(sFile);
}

void MainWindow::on_tableWidget_cellDoubleClicked(int row, int column)
{

    if(manager){
        int id=ui->tableWidget->item(row,0)->text().toInt();
        CarViewDialog dialog(*ui->tableWidget,row);
        dialog.setModal(true);
        dialog.exec();

        int index=repo_pointer->search_el_car(id);

        bool wrong=false;

        if(QString::fromStdString(repo_pointer->get_el_car_list()[index].get_manufacturer())!=ui->tableWidget->item(row,1)->text())
            repo_pointer->modify_manufacturer(id,ui->tableWidget->item(row,1)->text().toStdString());

        if(QString::fromStdString(repo_pointer->get_el_car_list()[index].get_model())!=ui->tableWidget->item(row,2)->text())
            repo_pointer->modify_model(id,ui->tableWidget->item(row,2)->text().toStdString());

        if(QString::number(repo_pointer->get_el_car_list()[index].get_year_of_registration())!=ui->tableWidget->item(row,3)->text())
            try{
                repo_pointer->modify_year_of_registration(id,ui->tableWidget->item(row,3)->text().toInt());
            }
            catch(exception&){
                wrong=true;
            }

        if(QString::number(repo_pointer->get_el_car_list()[index].get_kilometers())!=ui->tableWidget->item(row,4)->text())
            try{
                repo_pointer->modify_kilometers(id,ui->tableWidget->item(row,4)->text().toInt());
            }
            catch(exception&){
                wrong=true;
            }

        if(QString::number(repo_pointer->get_el_car_list()[index].get_price())!=ui->tableWidget->item(row,5)->text())
            try{
                repo_pointer->modify_price(id,ui->tableWidget->item(row,5)->text().toInt());
            }
            catch(exception&){
                wrong=true;
            }

        if(QString::number(repo_pointer->get_el_car_list()[index].get_range())!=ui->tableWidget->item(row,6)->text())
            try{
                repo_pointer->modify_range(id,ui->tableWidget->item(row,6)->text().toInt());
            }
            catch(exception&){
                wrong=true;
            }

        if(QString::number(repo_pointer->get_el_car_list()[index].get_loading_time())!=ui->tableWidget->item(row,7)->text())
            try{
               repo_pointer->modify_load_time(id,ui->tableWidget->item(row,7)->text().toInt());
            }
            catch(exception&){
                wrong=true;
            }

        if(ui->tableWidget->item(row,0)->text().toInt()<0)
            repo_pointer->remove_el_car((ui->tableWidget->item(row,0)->text().toInt())*-1);

        if(wrong){
            errorDialog errDialog;
            errDialog.setModal(true);
            errDialog.exec();
        }

        initialize_table(ui->sourceText->text().toStdString());
    }
    else{
        ClientViewDialog dialog(*ui->tableWidget,row,ui->sourceText->text().toStdString());
        dialog.setModal(true);
        dialog.exec();
        if(ui->tableWidget->item(row,0)->text().toInt()<0){
            std::string man=ui->tableWidget->item(row,1)->text().toStdString();
            std::string mod=ui->tableWidget->item(row,2)->text().toStdString();
            int year=ui->tableWidget->item(row,3)->text().toInt();
            int kilo=ui->tableWidget->item(row,4)->text().toInt();
            int price=ui->tableWidget->item(row,5)->text().toInt();
            int range=ui->tableWidget->item(row,6)->text().toInt();
            int time=ui->tableWidget->item(row,7)->text().toInt();
            ElectricCar car(mod,man,year,kilo,price,time,range);
            ElectricCar::count--;
            int id=ui->tableWidget->item(row,0)->text().toInt();
            id*=-1;
            ui->tableWidget->item(row,0)->setText(QString::number(id));
            car.set_id(ui->tableWidget->item(row,0)->text().toInt());
            fav_pointer->add_el_car(car);
         }
    }
}



void MainWindow::on_AddButton_clicked()
{
    AddDialog dialog(*ui->tableWidget);
    dialog.setModal(true);
    dialog.exec();

    if(ui->tableWidget->rowCount()>repo_pointer->get_el_car_list().size()){
        std::string man=ui->tableWidget->item(0,1)->text().toStdString();
        std::string mod=ui->tableWidget->item(0,2)->text().toStdString();
        int year=ui->tableWidget->item(0,3)->text().toInt();
        int kilo=ui->tableWidget->item(0,4)->text().toInt();
        int price=ui->tableWidget->item(0,5)->text().toInt();
        int range=ui->tableWidget->item(0,6)->text().toInt();
        int time=ui->tableWidget->item(0,7)->text().toInt();
        ElectricCar car(mod,man,year,kilo,price,time,range);
        repo_pointer->add_el_car(car);
    }
    initialize_table(ui->sourceText->text().toStdString());
}

