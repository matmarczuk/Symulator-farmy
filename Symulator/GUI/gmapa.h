#ifndef GMAPA_H
#define GMAPA_H

#include <QMainWindow>
#include <QPainter>
#include <QImage>
#include <iostream>
#include <QtWidgets>
#include <list>
#include <GUI/gobiekt.h>

using namespace std;
/** \brief Klasa graficzna mapy gry
 *
 * obsługuje grafikę mapy - dodaje obiekty i wykonuje krok symulacji
 */
class GMapa
{
public:
    ///lista obiektów graficznych
    list<GObiekt*> GList;
    ///konstruktor
    GMapa();
    ///krok symulacji
    void step();
    ///dodanie obiektu graficznego do listy
    void dodaj_obiekt(GObiekt *obiekt);
};

#endif // GMAPA_H
