#include "cczas.h"
#include <iostream>

using namespace std;
CCzas::CCzas(CMapa *map)
{
    gmapa = map->gmapa;
    czas = new QTimer(this);
    connect(czas,SIGNAL(timeout()),this,SLOT(krok()));
    mapa=map;
}

void CCzas::krok()
{
    mapa->step();//przejechanie po całej liscie el logicznych
    gmapa->step();//przejechanie po całej liscie gui

   // cout<<"Timer !"<<endl;
}
