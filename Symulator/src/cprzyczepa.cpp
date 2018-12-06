#include "cprzyczepa.h"

CPrzyczepa::CPrzyczepa(string nazw)
{
    nazwa=nazw;
}

void CPrzyczepa::zadanie(CPojazd *poj)
{
cout<<"To ja przyczepa "<<nazwa<<"- oram na polu"<<endl;
}
