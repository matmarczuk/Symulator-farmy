#ifndef GPOLE_H
#define GPOLE_H

#include <QPainter>
#include <QImage>
#include "gobiekt.h"
#include "cpole.h"
/** \brief Klasa graficzna pola
 *
 * Obsluguje grafike pola
 */
class GPole : public GObiekt
{
public:
    ///wskaźnik na obiekt logiczny
    CPole* log_pole;
    ///obiekt prostokąt pola
    QGraphicsRectItem* rect;
    ///konstruktor
    GPole(int szerokosc,int dlugosc,int pocz_x,int pocz_y,CPole *l_pole);
    ///ustawienie koloru pola w zaleznosci od stanu
    void ustawKolor(int r,int g,int b);
    ///funkcja wirtualna - aktualizacja grafiki
    void update_g();
    ///desruktor
    ~GPole();
};



#endif // GPOLE_H
