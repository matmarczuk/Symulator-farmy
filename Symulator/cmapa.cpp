#include "cmapa.h"
#include <iostream>

CMapa::CMapa(int szer,int wys)
{
    szerokosc=szer;
    wysokosc=wys;
}

void CMapa::dodaj_obiekt(CObiekt *obiekt)
{
    PList.push_back(obiekt);
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


