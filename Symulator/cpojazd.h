#ifndef CPOJAZD_H
#define CPOJAZD_H

#include <iostream>
#include "cobiekt.h"
class CMaszyna;


#define GORA 1
#define DOL 2
#define PRAWO 3
#define LEWO 4
#define STOP 5
/** \brief Klasa logiczna pojazdów
 *
 * Przechowuje wspolne atrybuty pojazdów
 */
class CPojazd : public CObiekt
{
protected:
    ///wskażnik podczepionej maszyny
    CMaszyna *FMaszyna;
    ///paliwo w pojeździe
    int paliwo;
    ///szybkosc pojazdu
    int szybkosc;

public:
    ///kierunek ruchu pojazdu
    int kier_ruchu = GORA;
    ///zajetosc pojazdu
    bool zajety = false;
    ///funkcja podczepiająca maszynę
    void podczep(CMaszyna *masz);
    ///funkcja poruszająca
    void jedz(int des_x,int des_y);

};

#endif // CPOJAZD_H
