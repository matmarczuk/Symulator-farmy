#include "cgaraz.h"
/** \brief Konstruktor klasy CGaraz
 * \param położenie x
 * \param położenie y
 * \param pojemnośc pojazdów
 * \param pojemność maszyn
 */
CGaraz::CGaraz(int pocz_x,int pocz_y,int l_poj,int l_masz)
{
   this->x = pocz_x;
    this->y = pocz_y;
    this->l_pojazdow = l_poj;
    this->l_maszyn = l_masz;
}
