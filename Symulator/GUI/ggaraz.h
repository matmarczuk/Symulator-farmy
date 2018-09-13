#ifndef GGARAZ_H
#define GGARAZ_H

#include "GUI/gobiekt.h"
#include "cgaraz.h"
/** \brief Klasa graficzna garazu
 *
 * Odpowiada za grafikę garazu
 */
class GGaraz : public GObiekt
{

public:
    ///wskaźnik na obiekt graficzny
    CGaraz *l_garaz;
    ///konstruktor
    GGaraz(CGaraz *gar);
    ///funkcja wiualna do symulacji
    void update_g();
};

#endif // GGARAZ_H
