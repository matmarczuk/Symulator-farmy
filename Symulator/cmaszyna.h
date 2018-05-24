#ifndef CMASZYNA_H
#define CMASZYNA_H

#include "cpojazd.h"
#include "cciagnik.h"

class CMaszyna : public CObiekt
{
    friend class CCiagnik;
protected:
    bool zajeta = false;
public:

    virtual void zadanie(CPojazd *poj)=0;
};

#endif // CMASZYNA_H
