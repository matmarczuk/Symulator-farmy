#include "gmapa.h"

GMapa::GMapa()
{

}

void GMapa::step()
{
    list<GObiekt*>::iterator i;
    for (i = GList.begin(); i !=GList.end(); ++i)
    {
        (*i)->update_g();
    }

}

void GMapa::dodaj_obiekt(GObiekt *obiekt)
{
    this->GList.push_back(obiekt);

}
