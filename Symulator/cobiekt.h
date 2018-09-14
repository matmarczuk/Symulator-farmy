#ifndef COBIEKT_H
#define COBIEKT_H

#include <iostream>
/** \brief Klasa abstrakcyjna logiczna obiektu
 *
 * Definiuje nazwę i pozycje obiektu i posiada funkcje wirtualna update do symulacji
 */
class CObiekt
{
public:
    ///nazwa obiektu
    std :: string nazwa;
    ///pozycja x obiektu na mapie
    int x;
    ///pozycja y obiektu na mapie
    int y;
    ///szerokość obiektu
    int szerokosc;
    ///wysokość obiektu
    int wysokosc;

    ///funkcja wirtualna do symulacji
    virtual void update(){};
};

#endif // COBIEKT_H
