#ifndef CMAPA_H
#define CMAPA_H

#include <list>
#include <iostream>

#include "cobiekt.h"
#include "GUI/gmapa.h"
#include "cpole.h"
#include "cciagnik.h"
#include "GUI/gciagnik.h"
#include "GUI/gpole.h"

using namespace std;

class CMapa
{

    int szerokosc;
    int wysokosc;

public:
    GMapa* gmapa;
    list<CObiekt*> PList;
    CMapa(int szer,int wys);
    void dodaj_obiekt(CObiekt *obiekt);
    void pokaz();
    void step();
};





#endif // CMAPA_H
