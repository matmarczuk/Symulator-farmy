#ifndef GPOLE_H
#define GPOLE_H

#include <QPainter>
#include <QImage>
#include "gobiekt.h"

class GPole : public GObiekt
{
    QImage obraz;
public:
    GPole(int szerokosc,int dlugosc);
    void ustawKolor(int r,int g,int b,int szerokosc,int dlugosc);
    void rysuj(int x,int y);
};

#endif // GPOLE_H
