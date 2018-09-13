#ifndef CCIAGNIK_H
#define CCIAGNIK_H

#include <iostream>
#include "cpojazd.h"
#include "cmaszyna.h"

class CPole;

/** \brief Klasa logiczna Ciągnika
 *
 * Klasa obiektu Ciągnik odpowiadająca za logikę symulacji
 */
class CCiagnik:public CPojazd
{friend class CPole;

public:
    ///Konstruktor klasy
    CCiagnik(std::string nazw,int szyb,int pos);
    ///Funkcja
    bool podczepMaszyne(CMaszyna *masz);
    ///Funkcja wirtualna aktualizująca stan symulacji
    void update();
    ///Destruktor
    ~CCiagnik();

};

#endif // CCIAGNIK_H
