#include "cpojazd.h"


void CPojazd::podczep(CMaszyna *masz)
{
    FMaszyna=masz;
}
/** \brief Funkcja poruszania się pojazdu
 *
 * \param destynacja x
 * \param destynacja y
 */
void CPojazd::jedz(int des_x,int des_y)
{
    if(des_x>this->x)
    {
        kier_ruchu = PRAWO;
    }
    else if(des_x<this->x)
    {
        kier_ruchu = LEWO;
    }
    else if(des_y>this->y)
    {
        kier_ruchu = DOL;
    }
    else if(des_y < this->y)
    {
        kier_ruchu = GORA;
    }
    else
        kier_ruchu = STOP;
}
