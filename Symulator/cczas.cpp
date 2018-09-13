#include "cczas.h"
#include <iostream>

using namespace std;
/** \brief Konstruktor klasy Cczas
 *\param wskaźnik do mapy
 */
CCzas::CCzas(CMapa *map)
{
    gmapa = map->gmapa;
    czas = new QTimer(this);
    connect(czas,SIGNAL(timeout()),this,SLOT(krok()));
    mapa=map;
}
/** \brief Pojedyńczy krok symulacji
 * Funkcja Callback od timera
 */
void CCzas::krok()
{
    mapa->step();//przejechanie po całej liscie el logicznych
    gmapa->step();//przejechanie po całej liscie gui

   // cout<<"Timer !"<<endl;
}
