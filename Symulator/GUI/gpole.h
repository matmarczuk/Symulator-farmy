#ifndef GPOLE_H
#define GPOLE_H

#include <QPainter>
#include <QImage>
#include "gobiekt.h"
#include "cpole.h"

class GPole : public GObiekt
{   CPole* log_pole;
    QImage obraz;
public:
    GPole(int szerokosc,int dlugosc);
    void ustawKolor(int r,int g,int b);
    void update();
};

#endif // GPOLE_H
