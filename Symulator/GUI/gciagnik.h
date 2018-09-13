#ifndef GCIAGNIK_H
#define GCIAGNIK_H

#include "GUI/gobiekt.h"
#include "cciagnik.h"
/** \brief Klasa graficzna ciagnika
 *
 * Odpowiada za gradikę ciągnika
 */
class GCiagnik : public GObiekt
{
public:
    ///wskaznik na obiekt logiczny
    CCiagnik* ciagnik;
    ///konstruktor
    GCiagnik(CCiagnik* log_ciagnik);
    ///funkcja wirualna do symulacji
    void update_g();
};

#endif // GCIAGNIK_H
