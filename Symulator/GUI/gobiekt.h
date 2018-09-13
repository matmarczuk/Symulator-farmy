#ifndef GOBIEKT_H
#define GOBIEKT_H

#include <QMainWindow>
#include <QPainter>
#include <QImage>
#include <iostream>
#include <QtWidgets>
#include "cobiekt.h"

/** \brief Klasa graficzna obiektu
 *
 * zawiera informację o wyświetlanym itemie oraz funkcję wirtualną
 */
class GObiekt : public CObiekt
{
public:
    ///element graficzny
    QGraphicsItem* item;
    ///funkcja wirtualna do aktualizacji grafiki
    virtual void update_g(){};
};


#endif // GOBIEKT_H
