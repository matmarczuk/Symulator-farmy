#ifndef GMAPA_H
#define GMAPA_H

#include <QMainWindow>
#include <QPainter>
#include <QImage>
#include <iostream>
#include <QtWidgets>
#include <list>
#include <GUI/gobiekt.h>

using namespace std;

class GMapa
{
public:

    list<GObiekt*> GList;
    GMapa();
    void step();
    void dodaj_obiekt(GObiekt *obiekt);
};

#endif // GMAPA_H
