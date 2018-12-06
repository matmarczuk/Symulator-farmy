#ifndef CSIEWNIK_H
#define CSIEWNIK_H

#include "cmaszyna.h"
#include "cciagnik.h"

using namespace std;

class CSiewnik :public CMaszyna
{   int pojemnosc;
    CCiagnik *FCiagnik;
public:
    CSiewnik(string name);
    void zadanie(CPojazd *poj);
    void napelnij();
};

#endif // CSIEWNIK_H
