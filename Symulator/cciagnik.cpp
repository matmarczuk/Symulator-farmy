#include "cciagnik.h"

using namespace std;
/** \brief Konstruktor klasy
 *
 * \param nazwa ciagnika
 * \param szybkosc ciagnika
 * \param pozycja poczatkowa
 */
CCiagnik::CCiagnik(string nazw="Ciagnik",int szyb=10,int pos=100)
{
    nazwa=nazw;
    szybkosc=szyb;
    x=pos;
    y=400;

}
/** \brief Funkcja podczepiająca maszynę
 *
 * \param wskaźnik na maszynę
 */
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
/** \brief funkcja zmieniająca położenie
 *
 * funkcja zmieniająca położenie w zależności od kiernku ruchu
 */
void CCiagnik::update()
{

       switch(kier_ruchu)
        {
            case GORA:
                this->y = y-1;
                break;
            case DOL:
                this->y = y+1;
                break;
            case PRAWO:
                this->x = x+1;
                break;
            case LEWO:
                this->x = x-1;
                break;
            case STOP:
                break;
        }

}
