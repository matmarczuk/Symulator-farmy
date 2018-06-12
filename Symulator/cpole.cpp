#include "cpole.h"
#include <iostream>


using namespace std;

CPole::CPole(int szer=100,int dlu=100,int pocz_x=0,int pocz_y=0) : gpole(szer,dlu)
{
    szerokosc=szer;
    dlugosc=dlu;
    x=pocz_x;
    y=pocz_y;
    status=ZAJETE;
}


void CPole::update()
{   if(status == ZAORANE)
    std::cout<<"pole rosnie"<<std::endl;
    else if(status == POSIANE)
    {

    }
    else if(status == DO_ZBIORU)
    {

    }
    else if(status == ZAJETE)//pracuje na nim traktor
    {
        if(obsluz_pole(FCiagnik))
        {   CMaszyna* masz = FCiagnik->FMaszyna;
             if(dynamic_cast<CSiewnik*>(masz))
                 cout<<"Podczepipona maszyna to siewnik"<<endl;
             else if(dynamic_cast<CPlug*>(masz))
                 cout<<"Podczepiona maszyna to plug"<<endl;
        }
    }


    gpole.ustawKolor(200,0,0,szerokosc,dlugosc);
    gpole.rysuj(x,y);

}

bool CPole::obsluz_pole(CCiagnik *trak)
{
    FCiagnik = trak;
    status=ZAJETE;
    cout<<" Obsluguje pole o nazwie "<<this->nazwa<<" przy pomocy "<<FCiagnik->nazwa<<
          endl;
    return true;
}

void CPole::znajdz_traktor(CCiagnik *trak)
{
    FCiagnik=trak;
}


