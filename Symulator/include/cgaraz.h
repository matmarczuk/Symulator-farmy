#ifndef CGARAZ_H
#define CGARAZ_H

#include "cobiekt.h"
/** \brief Klasa logiczna garazu
 *
 * W garazu przechowywane sa maszyny
 */
class CGaraz :public CObiekt
{   ///pojemnosc pojazdow
    int l_pojazdow;
    ///pojemnosc maszyn
    int l_maszyn;
public:
    ///konstruktor
    CGaraz(int pocz_x,int pocz_y,int l_poj,int l_masz);
    ///destruktor
    ~CGaraz();

};
#endif // CGARAZ_H
