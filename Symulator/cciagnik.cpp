#include "cciagnik.h"

using namespace std;

CCiagnik::CCiagnik(string nazw="Ciagnik",int szyb=10,int pos=100)
{
    nazwa=nazw;
    szybkosc=szyb;
    x=pos;
    y=400;

}

bool CCiagnik::podczepMaszyne(CMaszyna* masz)
{
    if(masz->zajeta){
       cout<<"maszyna jest w użyciu" <<endl;
       return false;
    }
    else{
        FMaszyna=masz;
        cout<<" Podczepiono "<<masz->nazwa<<endl;
        return true;
    }
}

void CCiagnik::update()
{   if(zajety)
    {   switch(kier_ruchu)
        {
        case GORA:
            this->y = y-10;
            break;
        case DOL:
            this->y = y+10;
            break;
        case PRAWO:
            this->x = x+10;
            break;
        case LEWO:
            this->x = x-10;
            break;
        }
    }
}
