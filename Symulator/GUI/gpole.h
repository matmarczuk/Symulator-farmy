#ifndef GPOLE_H
#define GPOLE_H

#include <QPainter>
#include <QImage>
#include "gobiekt.h"
#include "cpole.h"

class GPole : public GObiekt
{
public:
    CPole* log_pole;
    QGraphicsRectItem* rect;
    GPole(int szerokosc,int dlugosc,int pocz_x,int pocz_y,CPole *l_pole);
    void ustawKolor(int r,int g,int b);
    void update_g();
};



#endif // GPOLE_H
