#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_nowa_gra.h"
#include "nowa_gra.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    openNewWindow();
}

void MainWindow::on_pushButton_2_clicked()
{
    this->close();
}
void MainWindow::openNewWindow()
{
    nowa_gra nowa;
    nowa.setModal(true);
    this->close();
    nowa.exec();

}
