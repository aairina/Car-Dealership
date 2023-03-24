#include "carviewdialog.h"
#include "ui_carviewdialog.h"

CarViewDialog::CarViewDialog(QTableWidget &table, int row, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CarViewDialog)
{
    ui->setupUi(this);
    tab=&table;
    this->row=row;
    ui->IDDisplay->setText(tab->item(row,0)->text());
    ui->ManDisplay->setText(tab->item(row,1)->text());
    ui->ModDisplay->setText(tab->item(row,2)->text());
    ui->YearDisplay->setText(tab->item(row,3)->text());
    ui->KiloDisplay->setText(tab->item(row,4)->text());
    ui->PriceDisplay->setText(tab->item(row,5)->text());
    ui->RangeDisplay->setText(tab->item(row,6)->text());
    ui->TimeDisplay->setText(tab->item(row,7)->text());

}

CarViewDialog::~CarViewDialog()
{
    delete ui;
}



void CarViewDialog::on_BackButton_clicked()
{
    CarViewDialog::close();
}


void CarViewDialog::on_DeleteButton_clicked()
{
    int id=ui->IDDisplay->text().toInt();
    id*=-1;
    tab->item(row,0)->setText(QString::number(id));
    CarViewDialog::close();
}


void CarViewDialog::on_SaveButton_clicked()
{
    if(ui->ManDisplay->text()!=ui->ManEdit->text() && ui->ManEdit->text()!="")
        tab->item(row,1)->setText(ui->ManEdit->text());

    if(ui->ModDisplay->text()!=ui->ModEdit->text() && ui->ModEdit->text()!="")
        tab->item(row,2)->setText(ui->ModEdit->text());

    if(ui->YearDisplay->text()!=ui->YearEdit->text() && ui->YearEdit->text()!="")
        tab->item(row,3)->setText(ui->YearEdit->text());

    if(ui->KiloDisplay->text()!=ui->KiloEdit->text() && ui->KiloEdit->text()!="")
        tab->item(row,4)->setText(ui->KiloEdit->text());

    if(ui->PriceDisplay->text()!=ui->PriceEdit->text() && ui->PriceEdit->text()!="")
        tab->item(row,5)->setText(ui->PriceEdit->text());

    if(ui->RangeDisplay->text()!=ui->RangeEdit->text() && ui->RangeEdit->text()!="")
        tab->item(row,6)->setText(ui->RangeEdit->text());

    if(ui->TimeDisplay->text()!=ui->TimeEdit->text() && ui->TimeEdit->text()!="")
        tab->item(row,7)->setText(ui->TimeEdit->text());
    CarViewDialog::close();
}

