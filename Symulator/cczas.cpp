#include "cczas.h"
#include <iostream>

using namespace std;
CCzas::CCzas(CMapa *map)
{
    czas = new QTimer(this);
    connect(czas,SIGNAL(timeout()),this,SLOT(krok()));
    czas->start(1000);
    mapa=map;
}

void CCzas::krok()
{   mapa->step();
    cout<<"Timer !"<<endl;
}
