#include "cpole.h"
#include <iostream>

using namespace std;

CPole::CPole(int szer=100,int dlu=100,int pocz_x=0,int pocz_y=0)
{
    szerokosc=szer;
    dlugosc=dlu;
    x=pocz_x;
    y=pocz_y;
    status=ZAORANE;
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
                 cout<<"no"<<endl;
        }
    }

}

void CPole::obsluz_pole(CCiagnik *trak)
{
    FCiagnik = trak;
    status = POSIANE;
    cout<<" Obsluguje pole o nazwie "<<this->nazwa<<" przy pomocy "<<FCiagnik->nazwa<<
          endl;
}
