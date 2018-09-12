#ifndef CCZAS_H
#define CCZAS_H

#include <QtCore>
#include "cmapa.h"

class CCzas :public QObject
{   Q_OBJECT
    CMapa *mapa;
    GMapa *gmapa;
public:
    CCzas(CMapa *map);
    QTimer *czas;
public slots:
    void krok();
};

#endif // CCZAS_H
