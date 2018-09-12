#include "gpole.h"
#include <iostream>


using namespace std;

GPole::GPole(int szerokosc,int dlugosc,int pocz_x,int pocz_y,CPole *l_pole)
{
//    QPainter paint(this);
//    paint.drawImage(x,y,obraz);
    //ustawKolor(200,15,0);
    this->log_pole = l_pole;
    rect = new QGraphicsRectItem();
    rect->setRect(pocz_x,pocz_y,szerokosc,dlugosc);
    rect->setBrush(Qt::yellow);
    this->item =  rect;
}

void GPole::ustawKolor(int r,int g,int b)
{

}

void GPole::update_g()
{   //cout<<"GUI POLE UPDATE"<<log_pole->status<<endl;

    if(this->log_pole->status == ZAORANE)
    {
       //zmien kolor na
        rect->setBrush(QColor(102,51,0));

    }
    else if(this->log_pole->status == POSIANE)
    {
        rect->setBrush(QColor(10,200,10));
    }
    else if(this->log_pole->status == ZAJETE)
    {
        rect->setBrush(Qt::gray);
    }
    else if(this->log_pole->status == DO_ZBIORU)
    {
        rect->setBrush(Qt::yellow);
    }


}
