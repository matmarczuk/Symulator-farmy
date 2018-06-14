#ifndef GCIAGNIK_H
#define GCIAGNIK_H

#include "GUI/gobiekt.h"
#include "cciagnik.h"

class GCiagnik : public GObiekt
{
public:
    CCiagnik* ciagnik;
    GCiagnik(CCiagnik* log_ciagnik);
    void update_g();
};

#endif // GCIAGNIK_H
