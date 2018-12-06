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
/** \brief Callback od przyciśniecia prycisku 1
 * Callback na przyciśnięcie przycisku - otwiera nowe okno
 */
void MainWindow::on_pushButton_clicked()
{
    openNewWindow();
}
/** \brief Callback od przyciśniecia przycisku 2
 * Callback na przyciśnięcie przycisku - zamyka okno
 */
void MainWindow::on_pushButton_2_clicked()
{
    this->close();
}
/** \brief Callback od otwarcia nowego okna
 * Callback na przyciśnięcie przycisku - otwiera nowe okno
 */
void MainWindow::openNewWindow()
{
    nowa_gra nowa;
    nowa.setModal(true);
    this->close();
    nowa.exec();

}
