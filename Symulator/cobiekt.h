#ifndef COBIEKT_H
#define COBIEKT_H

#include <iostream>

class CObiekt
{
public:
    std :: string nazwa;
    int x;
    int y;
    int szerokosc;
    int wysokosc;

    virtual void update(){};
};

#endif // COBIEKT_H
