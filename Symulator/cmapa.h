#ifndef CMAPA_H
#define CMAPA_H

#include <list>
#include <iostream>

#include "cobiekt.h"
#include "GUI/gmapa.h"

using namespace std;

class CMapa
{
    GMapa gmapa;
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
