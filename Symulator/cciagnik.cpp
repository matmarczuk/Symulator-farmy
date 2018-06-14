#include "cciagnik.h"

using namespace std;

CCiagnik::CCiagnik(string nazw="Ciagnik",int szyb=10)
{
    nazwa=nazw;
    szybkosc=szyb;
    x=100;
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
{
    this->y = y-5;
    cout<<"ciagnik update"<<endl;
}
