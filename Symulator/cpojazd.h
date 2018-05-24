#ifndef CPOJAZD_H
#define CPOJAZD_H

#include <iostream>
#include "cobiekt.h"
class CMaszyna;



class CPojazd : public CObiekt
{
protected:
    CMaszyna *FMaszyna;
    int paliwo;
    int szybkosc;
public:
    void podczep(CMaszyna *masz);

};

#endif // CPOJAZD_H
