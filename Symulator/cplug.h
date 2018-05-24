#ifndef CPLUG_H
#define CPLUG_H

#include "cmaszyna.h"
#include "cciagnik.h"

using namespace std;

class CPlug : public CMaszyna
{
    CCiagnik *FCiagnik;
public:
    CPlug(string nazwa);
    void zadanie(CPojazd *poj);

};

#endif // CPLUG_H
