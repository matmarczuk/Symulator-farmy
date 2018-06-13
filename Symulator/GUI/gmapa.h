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
{   list<GObiekt*> GList;
public:
    GMapa();
};

#endif // GMAPA_H
