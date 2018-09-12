#include "cmapa.h"
#include <iostream>

CMapa::CMapa(int szer,int wys)
{
    szerokosc=szer;
    wysokosc=wys;
    gmapa = new GMapa;

}

void CMapa::dodaj_obiekt(CObiekt *obiekt)
{
    PList.push_back(obiekt);

    CObiekt* tmp_obj = obiekt;
    CPole* tmp_pole = dynamic_cast<CPole*>(tmp_obj);
    CCiagnik * tmp_ciagnik = dynamic_cast<CCiagnik*>(tmp_obj);


        if(tmp_pole)
        {
            GPole* wsk_pole = new GPole(tmp_pole->szerokosc,tmp_pole->dlugosc,tmp_pole->x,tmp_pole->y,tmp_pole);
            GObiekt* gobiekt = wsk_pole;
            gmapa->GList.push_back(gobiekt);
        }
        if(tmp_ciagnik)
        {   GCiagnik* wsk_ciagnik = new GCiagnik(tmp_ciagnik);//stworzenie obiektu gui
            //przywiazanie obiektu gui do logicznego
            GObiekt* gobiekt = wsk_ciagnik; //polimorfizm
            gmapa->GList.push_back(gobiekt);//obiekt na liscie
        }

}
void CMapa::pokaz()
{
    cout<<PList.size()<<endl;
}
void CMapa::step()
{
    list<CObiekt*>::iterator i;
    for (i = PList.begin(); i !=PList.end(); ++i){
        (*i)->update();
    }

}


