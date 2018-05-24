#include "cciagnik.h"

using namespace std;

CCiagnik::CCiagnik(string nazw="Ciagnik",int udzw = 2,int szyb=10)
{
    nazwa=nazw;
    udzwig=udzw;
    szybkosc=szyb;

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
    cout<<"ciagnik update"<<endl;
}
