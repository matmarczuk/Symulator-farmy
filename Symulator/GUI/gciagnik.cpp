#include "gciagnik.h"

GCiagnik::GCiagnik(CCiagnik* log_ciagnik)
{   this->ciagnik = log_ciagnik;
    QImage image(":/images/traktor.png");
    image = image.scaled(30,30,Qt::KeepAspectRatio);

    this->item =  new QGraphicsPixmapItem( QPixmap::fromImage(image));
    this->x = ciagnik->x;
    this->y = ciagnik->y;
    this->item->setPos(x,y);

}

void GCiagnik::update_g()
{
   this->x = ciagnik->x;
   this->y = ciagnik->y;
    switch (this->ciagnik->kier_ruchu) {
    case GORA:
        this->item->setRotation(0);
        break;
    case DOL:
        this->item->setRotation(180);
        break;
    case PRAWO:
        this->item->setRotation(90);
        break;
    case LEWO:
        this->item->setRotation(-90);
        break;
    default:
        break;
    }


   this->item->setPos(x,y);


}
