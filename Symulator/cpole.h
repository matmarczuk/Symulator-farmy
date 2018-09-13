#ifndef CPOLE_H
#define CPOLE_H

#include "cobiekt.h"
#include "cciagnik.h"
#include "csiewnik.h"
#include "cplug.h"
#include "cmapa.h"
#include "cgaraz.h"

#define ZAORANE 0
#define POSIANE 1
#define DO_ZBIORU 2
#define ZAJETE 3
#define DO_ORANIA 4
/** \brief Klasa logiczna pola
 *
 * Operuje logiką gry
 */
class CPole : public CObiekt
{
public:
    ///pomocniczny licznik symulacji
    int licznik = 0;
    ///szerokosc pola
    int szerokosc;
    ///dlugosc pola
    int dlugosc;
    ///wskaznik ciagnika który obsluguje pole
    CCiagnik* FCiagnik = NULL;
    ///wskaznik garazu który obsługuje pole
    CGaraz * FGaraz = NULL;
    ///wskaźnik postępu
    int postep = 0;
    ///status pola
    int status;
    ///rodzaj uprawy
    enum rodzaj_uprawy{
        PRZENICA=0,
        TRAWA,
        ZYTO,
        KUKURYDZA
    }rodzaj;

    ///konstruktor
    CPole(int szer,int dlu,int pocz_x,int pocz_y,int stat=1);
    ///funkcja wirtualna do symulacji
    void update();
    ///funkcja obslugująca pole
    bool obsluz_pole(CCiagnik *trak);
    ///funkcja przywołująca ciągnik
    void przywolaj_traktor();
    ///funkcja sprawdzająca obecność ciągnika na polu
    bool czy_traktor_na_polu();
    ///funkcja znajdująca wolny traktor
    bool znajdz_traktor();
    ///funkcja odsyłająca traktor do garazu
    void odeslij_traktor();
    ///funkcja sprawdzająca obecność traktora w garażu
    bool czy_traktor_w_garazu();

};

#endif // CPOLE_H
