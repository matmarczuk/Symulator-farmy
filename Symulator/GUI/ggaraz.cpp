#include "ggaraz.h"
#include <iostream>
using namespace std;

GGaraz::GGaraz(CGaraz *gar)
{
        this->l_garaz = gar;
        QImage image(":/images/garaz.png");
        //image = image.scaled(50,50,Qt::KeepAspectRatio);
        this->item =  new QGraphicsPixmapItem( QPixmap::fromImage(image));
        this->item->setPos(l_garaz->x,l_garaz->y);

}
void GGaraz::update_g()
{
    this->x = l_garaz->x;
    this->y = l_garaz->y;
}
