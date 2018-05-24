#include "cplug.h"

CPlug::CPlug(string nazw)
{
    nazwa=nazw;
}
void CPlug::zadanie(CPojazd *poj)
{
    cout<<"jestem plug "<<nazwa<<" i oram pole"<<endl;
}
