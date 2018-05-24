#ifndef CPOLE_H
#define CPOLE_H

#include "cobiekt.h"
#include "cciagnik.h"
#include "csiewnik.h"

class CPole : public CObiekt
{
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
    void obsluz_pole(CCiagnik *trak);



};

#endif // CPOLE_H
