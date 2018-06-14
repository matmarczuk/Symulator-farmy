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
    mapa->step();
    gmapa->step();

    cout<<"Timer !"<<endl;
}
