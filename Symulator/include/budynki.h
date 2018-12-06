#ifndef BUDYNKI_H
#define BUDYNKI_H


#include "cmapa.h"
/** \brief Klasa obiektu stodoly
 *
 * W stodole skladowane sa zboża
 */
class CStodola : public CObiekt
{   int pojemnosc;
public:
    CStodola(int pocz_x,int pocz_y,int poj);
};


class CZbiornik :public CObiekt
{
    int pojemnosc_max;
    int pojemnosc;
public:
    CZbiornik(int pocz_x,int pocz_y,int poj_max,int poj);
};


#endif // BUDYNKI_H
