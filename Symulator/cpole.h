#ifndef CPOLE_H
#define CPOLE_H

#include "cobiekt.h"
#include "cciagnik.h"
#include "csiewnik.h"
#include "cplug.h"
#include "GUI/gpole.h"


class CPole : public CObiekt
{   GPole gpole;

    int szerokosc;
    int dlugosc;
    CCiagnik* FCiagnik;
    enum status_pola{
        ZAORANE=0,
        POSIANE,
        DO_ZBIORU,
        ZAJETE
    }status;

    enum rodzaj_uprawy{
        PRZENICA=0,
        TRAWA,
        ZYTO,
        KUKURYDZA
    }rodzaj;
public:
    CPole(int szer,int dlu,int pocz_x,int pocz_y);
    void update();
    bool obsluz_pole(CCiagnik *trak);
    void znajdz_traktor(CCiagnik *trak);



};

#endif // CPOLE_H
