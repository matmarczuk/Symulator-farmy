#ifndef BUDYNKI_H
#define BUDYNKI_H


#include "cmapa.h"

class CStodola : public CObiekt
{   int pojemnosc;
public:
    CStodola(int pocz_x,int pocz_y,int poj);
};

class CGaraz :public CObiekt
{
    int l_pojazdow;
    int l_maszyn;
public:
    CGaraz(int pocz_x,int pocz_y,int l_poj,int l_masz);

};

class CZbiornik :public CObiekt
{
    int pojemnosc_max;
    int pojemnosc;
public:
    CZbiornik(int pocz_x,int pocz_y,int poj_max,int poj);
};


#endif // BUDYNKI_H
