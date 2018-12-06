#include "cpole.h"
#include <iostream>
#include "oknogry.h"

using namespace std;
/** \brief Konstruktor klasy CPole
 *
 * \param szerokosc pola
 * \param dlugosc pola
 * \param pozycja poczatkowa x
 * \param pozycja poczatkowa y
 * \param początkowy status
 */
CPole::CPole(int szer=100,int dlu=100,int pocz_x=0,int pocz_y=0,int stat)
{
    szerokosc=szer;
    dlugosc=dlu;
    x=pocz_x;
    y=pocz_y;
    status = stat;
}

/** \brief Funkcja aktualizująca status pola
 * Główna funkcja odpowiadająca za mechanikę gry
 */
void CPole::update()
{
    if(status == ZAORANE)
    {    znajdz_traktor();
        //odeslij po siewnik
        bool tmp = czy_traktor_w_garazu();
        if((postep == 0) && (tmp == false))
        {

                odeslij_traktor();
                postep ++;
        }
        else
        {   postep ++;
            if(znajdz_traktor())
            {
                przywolaj_traktor();
            }

            if(czy_traktor_na_polu())
            {
                status = POSIANE;
            }
        }



        //jedzie

    }
    else if(status == POSIANE)
    {   odeslij_traktor();
        postep++;
        if(postep == 1000) //czas wzrastania
        {
          status = DO_ZBIORU;
          postep = 0;
        }

    }
    else if(status == DO_ZBIORU)
    {   //przywolaj_traktor();
        if(znajdz_traktor())
        {
            przywolaj_traktor();
        }


        if(czy_traktor_na_polu())
        {   //FCiagnik->kier_ruchu = STOP;
            status = DO_ORANIA;
        }
    }
    else if(status == DO_ORANIA)
    {

            postep++;
            if(postep < 700) //czas wzrastania
            {
                odeslij_traktor();
            }
            else
            {
                 if(!czy_traktor_na_polu())
                 {
                     przywolaj_traktor();

                 }
                 else
                 {
                     status = ZAORANE;
                     postep = 0;
                 }

            }
    }

}

bool CPole::obsluz_pole(CCiagnik *trak)
{
    FCiagnik = trak;
    status=ZAJETE;

    return true;
}
/** \brief Funkcja do znajdowania wolnego ciągnika
 *
 */
bool CPole::znajdz_traktor()
{

            if(FCiagnik == NULL)
            {//znajdz wolny traktor
                list<CObiekt*>::iterator i;
                for (i = oknoGry::farma->PList.begin(); i !=oknoGry::farma->PList.end(); ++i)
                {
                    CCiagnik * tmp_ciagnik = dynamic_cast<CCiagnik*>(*i);
                    if(tmp_ciagnik)
                    {
                        if(tmp_ciagnik->zajety == false)
                        {
                            tmp_ciagnik->zajety=true;
                            FCiagnik=tmp_ciagnik;
                            cout<<tmp_ciagnik->nazwa<<endl;
                            return true;
                        }
                    }
                }
                return false;
            }
            else
                return true;

}
/** \brief Funkcja przywołująca traktor
 *
* wymusza ruch traktora na odpowiednie pole
 */
void CPole::przywolaj_traktor()
{
        FCiagnik->jedz(this->x,this->y);
}
/** \brief Funkcja odsyłająca traktor
 * Odsyła traktor z powrotem do garażu
 */
void CPole::odeslij_traktor()
{
    if(FGaraz == NULL)
    {
        list<CObiekt*>::iterator i;
        for (i = oknoGry::farma->PList.begin(); i !=oknoGry::farma->PList.end(); ++i)
        {
            CGaraz * tmp_garaz = dynamic_cast<CGaraz*>(*i);
            if(tmp_garaz)
            {
                FGaraz = tmp_garaz;
             }
          }
    }
    else
    {
        FCiagnik->jedz(FGaraz->x+30,FGaraz->y+40);
    }
}

/** \brief Funkcja sprawdzająca obecność traktora
 * Funkcja sprawdzająca obecność traktora na polu
 */

bool CPole::czy_traktor_na_polu()
{
    if(FCiagnik!=NULL)
    {
        if(this->FCiagnik->y <= this->y+dlugosc-20)
        {   //zmien kierunek
            return true;
         }
        return false;
    }
    return false;

}
/** \brief Funkcja sprawdzająca obecność traktora
 * Funkcja sprawdzająca obecność traktora w garażu
 */
bool CPole::czy_traktor_w_garazu()
{

    if(FGaraz!=NULL)
    {
        if(this->FGaraz->y <= this->y+dlugosc-20)
        {   //zmien kierunek
            return true;
         }
        return false;
    }
    else
    {
            list<CObiekt*>::iterator i;
            for (i = oknoGry::farma->PList.begin(); i !=oknoGry::farma->PList.end(); ++i)
            {
                CGaraz * tmp_garaz = dynamic_cast<CGaraz*>(*i);
                if(tmp_garaz)
                {
                    FGaraz = tmp_garaz;
                 }
              }
            return false;
    }


}

