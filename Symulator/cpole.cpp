#include "cpole.h"
#include <iostream>
#include "oknogry.h"

using namespace std;

CPole::CPole(int szer=100,int dlu=100,int pocz_x=0,int pocz_y=0,int stat)
{
    szerokosc=szer;
    dlugosc=dlu;
    x=pocz_x;
    y=pocz_y;
    status = stat;
}


void CPole::update()
{
    if(status == ZAORANE)
    {
        if(this->FCiagnik == NULL)
            przywolaj_traktor();

        if(czy_traktor_na_polu())
        {   cout<<"traktor na polu"<<endl;
            this->FCiagnik->kier_ruchu = DOL;
            status= POSIANE;
        }
        //jedzie

    }
    else if(status == POSIANE)
    {
//        postep++;
//        if(postep == 10) //czas wzrastania
//        {
//          status = DO_ZBIORU;
//          postep = 0;
//        }

    }
    else if(status == DO_ZBIORU)
    {
        status=ZAJETE;
    }
    else if(status == ZAJETE)//pracuje na nim traktor
    {
//        if(obsluz_pole(FCiagnik))
//        {   CMaszyna* masz = FCiagnik->FMaszyna;
//             if(dynamic_cast<CSiewnik*>(masz))
//                 cout<<"Podczepipona maszyna to siewnik"<<endl;
//             else if(dynamic_cast<CPlug*>(masz))
//                 cout<<"Podczepiona maszyna to plug"<<endl;
//        }
        status = ZAORANE;
    }

}

bool CPole::obsluz_pole(CCiagnik *trak)
{
    FCiagnik = trak;
    status=ZAJETE;

    return true;
}

bool CPole::przywolaj_traktor()
{   if(FCiagnik == NULL)
    {
        //znajdz wolny traktor
        list<CObiekt*>::iterator i;
        for (i = oknoGry::farma->PList.begin(); i !=oknoGry::farma->PList.end(); ++i)
        {
            CCiagnik * tmp_ciagnik = dynamic_cast<CCiagnik*>(*i);
            if(tmp_ciagnik)
            {
                if(tmp_ciagnik->zajety == false)
                {
                    tmp_ciagnik->zajety=true;
                    FCiagnik=tmp_ciagnik;
                    cout<<tmp_ciagnik->nazwa<<endl;
                    return true;
                }
            }
        }
        return false;
    }
}

bool CPole::czy_traktor_na_polu()
{
    if(this->FCiagnik->y <= this->y+dlugosc-20)
    {   //zmien kierunek
        //this->FCiagnik->zajety = 0;
        return true;
     }
    return false;

}


