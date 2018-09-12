#ifndef CPOJAZD_H
#define CPOJAZD_H

#include <iostream>
#include "cobiekt.h"
class CMaszyna;


#define GORA 1
#define DOL 2
#define PRAWO 3
#define LEWO 4
class CPojazd : public CObiekt
{
protected:

    CMaszyna *FMaszyna;
    int paliwo;
    int szybkosc;

public:
    int kier_ruchu = GORA;
    bool zajety = false;
    void podczep(CMaszyna *masz);

};

#endif // CPOJAZD_H
