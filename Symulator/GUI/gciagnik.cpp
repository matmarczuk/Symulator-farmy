#include "gciagnik.h"

GCiagnik::GCiagnik()
{
    QImage image(":/images/traktor.png");
    this->item =  new QGraphicsPixmapItem( QPixmap::fromImage(image));

}

void GCiagnik::update_g()
{
   this->x = ciagnik->x;
   this->y = ciagnik->y;
}
