#include "cmapa.h"
#include <iostream>

CMapa::CMapa(int szer,int wys):gmapa()
{
    szerokosc=szer;
    wysokosc=wys;

}

void CMapa::dodaj_obiekt(CObiekt *obiekt)
{
    PList.push_back(obiekt);
    //sprawdz co to za obiekt
    CObiekt* tmp_obj = obiekt;
    CPole* tmp_pole = dynamic_cast<CPole*>(tmp_obj);
    CCiagnik * tmp_ciagnik = dynamic_cast<CCiagnik*>(tmp_obj);


    if(tmp_pole)
    {

    }
    if(tmp_ciagnik)
    {   GCiagnik* wsk_ciagnik = new GCiagnik;//stworzenie obiektu gui
        wsk_ciagnik->ciagnik = tmp_ciagnik;//przywiazanie obiektu gui do logicznego
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


