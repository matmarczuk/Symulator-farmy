#include "oknogry.h"
#include "ui_oknogry.h"

using namespace std;

oknoGry::oknoGry(QString nazwa,int wys,int szer,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::oknoGry)
{
    //oknoGry GObiekt::plansza = this;

    this->setFixedSize(wys,szer);
    ui->setupUi(this);
    this->setWindowTitle(nazwa);

    farma = new CMapa(wys,szer); //stworzenie mapy

    czas = new CCzas(farma);
}

oknoGry::~oknoGry()
{
    delete ui;
}

void oknoGry::paintEvent(QPaintEvent *)
{
    QImage backgroud(size(),QImage::Format_A2BGR30_Premultiplied);
    for(int i=0;i<width();i++)
    {   QRgb RGB = qRgb(139,69,19);
        for(int j=0;j<height();j++)
        {
              backgroud.setPixel(i,j,RGB);
        }

    }
    QPainter paint(this);
    paint.drawImage(0,0,backgroud);

    QImage pole(20,100,QImage::Format_A2BGR30_Premultiplied);
    QRgb RGB = qRgb(200,0,0);
    for(int i =0;i<20;i++)
    {
        for(int j=0;j<100;j++){
            pole.setPixel(i,j,RGB);
        }
    }
    QPainter repaint(this);
    repaint.drawImage(50,30,pole);

}

void oknoGry::on_actionStart_triggered()
{
    czas->czas->start(1000);
    cout<<"start symulacji"<<endl;
}

void oknoGry::on_actionStop_triggered()
{
    czas->czas->stop();
    cout<<"stop symulacji"<<endl;
}
