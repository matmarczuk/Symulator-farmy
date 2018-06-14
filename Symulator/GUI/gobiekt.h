#ifndef GOBIEKT_H
#define GOBIEKT_H

#include <QMainWindow>
#include <QPainter>
#include <QImage>
#include <iostream>
#include <QtWidgets>
#include "cobiekt.h"


class GObiekt : public CObiekt
{
public:
    QGraphicsItem* item;
    virtual void update_g(){};
};


#endif // GOBIEKT_H
