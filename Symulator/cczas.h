#ifndef CCZAS_H
#define CCZAS_H

#include <QtCore>
#include "cmapa.h"

/** \brief Klasa czasu
 *
 * Klasa zarządzająca czasem symulacji
 */
class CCzas :public QObject
{   Q_OBJECT
    ///wskaźnik na logiczną mapę
    CMapa *mapa;
    ///wskaźnik na graficzną mapę
    GMapa *gmapa;
public:
    ///konstruktor
    CCzas(CMapa *map);
    ///wskażnik do obiektu QTimer
    QTimer *czas;
public slots:
    ///pojedyńczy krok symulacji
    void krok();
};

#endif // CCZAS_H
