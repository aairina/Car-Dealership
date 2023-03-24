#include "adddialog.h"
#include "ui_adddialog.h"

AddDialog::AddDialog(QTableWidget &table, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddDialog)
{
    ui->setupUi(this);
    this->table=&table;
}

AddDialog::~AddDialog()
{
    delete ui;
}

void AddDialog::on_DoneButton_clicked()
{
    bool wrong=false;
    if(ui->KiloLine->text()=="" || ui->YearLine->text()=="" || ui->PriceLine->text()=="" || ui->RangeLine->text()=="" || ui->TimeLine->text()=="")
        wrong=true;
    std::string man=ui->ManLine->text().toStdString();
    std::string mod=ui->ModLine->text().toStdString();
    int year=ui->YearLine->text().toInt();
    int kilo=ui->KiloLine->text().toInt();
    int price=ui->PriceLine->text().toInt();
    int range=ui->RangeLine->text().toInt();
    int time=ui->TimeLine->text().toInt();

    if(year<1886)
        wrong=true;
    if(kilo<0)
        wrong=true;
    if(price<0)
        wrong=true;
    if(range<0)
        wrong=true;
    if(time<0)
        wrong=true;
    if(!wrong){
        table->insertRow(0);
        QTableWidgetItem* manufacturer=new QTableWidgetItem(QString::fromStdString(man));
        table->setItem(0,1,manufacturer);

        QTableWidgetItem* model=new QTableWidgetItem(QString::fromStdString(mod));
        table->setItem(0,2,model);

        QTableWidgetItem* ye=new QTableWidgetItem();
        ye->setData(Qt::EditRole,year);
        table->setItem(0,3,ye);

        QTableWidgetItem* kilometers=new QTableWidgetItem();
        kilometers->setData(Qt::EditRole,kilo);
        table->setItem(0,4,kilometers);

        QTableWidgetItem* money=new QTableWidgetItem();
        money->setData(Qt::EditRole,price);
        table->setItem(0,5,money);

        QTableWidgetItem* rang=new QTableWidgetItem();
        rang->setData(Qt::EditRole,range);
        table->setItem(0,6,rang);

        QTableWidgetItem* load=new QTableWidgetItem();
        load->setData(Qt::EditRole,time);
        table->setItem(0,7,load);
        AddDialog::close();
    }
    else{
        errorDialog d;
        d.setModal(true);
        d.exec();
    }
}

