#ifndef CMAPA_H
#define CMAPA_H

#include <list>
#include <iostream>

#include "cobiekt.h"

using namespace std;

class CMapa
{
    int szerokosc;
    int wysokosc;

public:
    list<CObiekt*> PList;
    CMapa(int szer,int wys);
    void dodaj_obiekt(CObiekt *obiekt);
    void pokaz();
    void step();
};





#endif // CMAPA_H
