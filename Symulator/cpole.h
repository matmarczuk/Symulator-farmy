#ifndef CPOLE_H
#define CPOLE_H

#include "cobiekt.h"
#include "cciagnik.h"
#include "csiewnik.h"
#include "cplug.h"
#include "cmapa.h"

#define ZAORANE 0
#define POSIANE 1
#define DO_ZBIORU 2
#define ZAJETE 3

class CPole : public CObiekt
{
public:

    int licznik = 0;
    int szerokosc;
    int dlugosc;
    CCiagnik* FCiagnik = NULL;
    int postep = 0;
    int status;

    enum rodzaj_uprawy{
        PRZENICA=0,
        TRAWA,
        ZYTO,
        KUKURYDZA
    }rodzaj;

    CPole(int szer,int dlu,int pocz_x,int pocz_y,int stat=1);
    void update();
    bool obsluz_pole(CCiagnik *trak);
    bool przywolaj_traktor();
    bool czy_traktor_na_polu();

};

#endif // CPOLE_H
