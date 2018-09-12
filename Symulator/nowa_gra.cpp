#include "nowa_gra.h"
#include "ui_nowa_gra.h"

#include <iostream>
#include <stdlib.h>
using namespace std;


nowa_gra::nowa_gra(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nowa_gra)
{
    ui->setupUi(this);
    this->show();
}

nowa_gra::~nowa_gra()
{
    delete ui;
}



void nowa_gra::on_pushButton_clicked()
{   int wys = ui->comboBox->currentText().toInt();
    int szer = ui->comboBox_2->currentText().toInt();
    QString nazwa = ui->lineEdit->text();


    okno = new oknoGry(nazwa,wys,szer);


    okno->show();
    this->close();

}
void nowa_gra::on_comboBox_activated(const QString &arg1)
{

}

