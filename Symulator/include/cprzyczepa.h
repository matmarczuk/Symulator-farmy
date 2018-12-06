#ifndef CPRZYCZEPA_H
#define CPRZYCZEPA_H

#include "cmaszyna.h"

using namespace std;
/** \brief Klasa logiczna przyczepy
 *
 *
 */
class CPrzyczepa : public CMaszyna
{

public:
    CPrzyczepa(string nazw);
    void zadanie(CPojazd *poj);
};

#endif // CPRZYCZEPA_H
