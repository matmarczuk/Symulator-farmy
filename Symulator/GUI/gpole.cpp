#include "gpole.h"
#include <iostream>


using namespace std;

GPole::GPole(int szerokosc,int dlugosc) : obraz(szerokosc,dlugosc,QImage::Format_A2BGR30_Premultiplied)
{

}

void GPole::ustawKolor(int r,int g,int b,int szerokosc,int dlugosc)
{
    for(int i=0;i<szerokosc;i++)
    {   QRgb RGB = qRgb(r,g,b);
        for(int j=0;j<dlugosc;j++)
        {
              obraz.setPixel(i,j,RGB);
        }
    }
}

void GPole::rysuj(int x,int y)
{

        //QPainter paint(this);
        //paint.drawImage(x,y,obraz);


}
