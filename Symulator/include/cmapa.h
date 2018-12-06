#ifndef CMAPA_H
#define CMAPA_H

#include <list>
#include <iostream>


#include "GUI/gmapa.h"
#include "cciagnik.h"

#include "cobiekt.h"
#include "GUI/gciagnik.h"
#include "GUI/gpole.h"
#include "GUI/ggaraz.h"

using namespace std;
/** \brief Klasa logiczna mapy gry
 *
 * Przechowuje listę obiektów i nimi manipuluje
 */
class CMapa
{   ///szerokosc mapy
    int szerokosc;
    ///wysokosc mapy
    int wysokosc;
public:
    ///wskaznik na obiekt gui
    GMapa* gmapa;
    ///lista obiektow logicznych na mapie
    list<CObiekt*> PList;
    ///konstruktor
    CMapa(int szer,int wys);
    ///funkcja dodająca obiekt do mapy
    void dodaj_obiekt(CObiekt *obiekt);
    ///
    void pokaz();
    ///funkcja aktualizująca do symulacji
    void step();
};





#endif // CMAPA_H
