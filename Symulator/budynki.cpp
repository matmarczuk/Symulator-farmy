#include "budynki.h"

CStodola::CStodola(int pocz_x,int pocz_y,int poj)
{
    x=pocz_x;
    y=pocz_y;
    pojemnosc = poj;
}

CGaraz::CGaraz(int pocz_x,int pocz_y,int l_poj,int l_masz)
{
    x=pocz_x;
    y=pocz_y;
    l_pojazdow=l_poj;
    l_maszyn=l_masz;

}

CZbiornik::CZbiornik(int pocz_x,int pocz_y,int poj_max,int poj)
{
    x=pocz_x;
    y=pocz_y;
    pojemnosc=poj;
    poj_max=poj_max;

}

