#ifndef CCIAGNIK_H
#define CCIAGNIK_H

#include <iostream>
#include "cpojazd.h"
#include "cmaszyna.h"

class CPole;

class CCiagnik:public CPojazd
{friend class CPole;
public:
    CCiagnik(std::string nazw,int szyb);
    bool podczepMaszyne(CMaszyna *masz);
    void update();
};

#endif // CCIAGNIK_H
