#include "clientviewdialog.h"
#include "ui_clientviewdialog.h"

ClientViewDialog::ClientViewDialog(QTableWidget &table,int row, std::string file, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClientViewDialog)
{
    this->file=file;
    ui->setupUi(this);
    this->table=&table;
    this->row=row;
    ui->IDDisplay->setText(this->table->item(row,0)->text());
    ui->ManDisplay->setText(this->table->item(row,1)->text());
    ui->ModDisplay->setText(this->table->item(row,2)->text());
    ui->YearDisplay->setText(this->table->item(row,3)->text());
    ui->KiloDisplay->setText(this->table->item(row,4)->text());
    ui->PriceDisplay->setText(this->table->item(row,5)->text());
    ui->RangeDisplay->setText(this->table->item(row,6)->text());
    ui->TimeDisplay->setText(this->table->item(row,7)->text());
}

ClientViewDialog::~ClientViewDialog()
{
    delete ui;
}

void ClientViewDialog::on_pushButton_clicked()
{
    ClientViewDialog::close();
}


void ClientViewDialog::on_AddButton_clicked()
{
    if(file!="favList.csv"){
        int id=ui->IDDisplay->text().toInt();
        id*=-1;
        table->item(row,0)->setText(QString::number(id));
    }
    ClientViewDialog::close();
}

