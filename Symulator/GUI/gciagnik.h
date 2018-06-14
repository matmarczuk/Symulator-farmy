#ifndef GCIAGNIK_H
#define GCIAGNIK_H

#include "GUI/gobiekt.h"
#include "cciagnik.h"

class GCiagnik : public GObiekt
{
public:
    CCiagnik* ciagnik;
    GCiagnik();
    void update_g();
};

#endif // GCIAGNIK_H
