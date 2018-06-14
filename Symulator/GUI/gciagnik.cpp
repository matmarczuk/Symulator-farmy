#include "gciagnik.h"

GCiagnik::GCiagnik(CCiagnik* log_ciagnik)
{   this->ciagnik = log_ciagnik;
    QImage image(":/images/traktor.png");
    this->item =  new QGraphicsPixmapItem( QPixmap::fromImage(image));

}

void GCiagnik::update_g()
{
   this->x = ciagnik->x;
   this->y = ciagnik->y;
   this->item->setPos(x,y);

}
