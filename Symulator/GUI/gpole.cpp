#include "gpole.h"
#include <iostream>


using namespace std;

GPole::GPole(int szerokosc,int dlugosc) : obraz(szerokosc,dlugosc,QImage::Format_A2BGR30_Premultiplied)
{
    //QPainter paint(this);
    //paint.drawImage(x,y,obraz);
    ustawKolor(200,15,0);

}

void GPole::ustawKolor(int r,int g,int b)
{
    for(int i=0;i<this->log_pole->szerokosc;i++)
    {   QRgb RGB = qRgb(r,g,b);
        for(int j=0;j<this->log_pole->dlugosc;j++)
        {
              obraz.setPixel(i,j,RGB);
        }
    }
}

void GPole::update()
{

    if(this->log_pole->status == 1)
    {
       //zmien kolor na


    }
    else if(this->log_pole->status ==2)
    {

    }
    else if(this->log_pole->status ==3)
    {

    }


}
