#include "oknogry.h"
#include "ui_oknogry.h"

using namespace std;

oknoGry::oknoGry(QString nazwa,int wys,int szer,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::oknoGry)
{
    //oknoGry GObiekt::plansza = this;

    this->setFixedSize(wys,szer);
    ui->setupUi(this);
    this->setWindowTitle(nazwa);


    scene = new QGraphicsScene;
    scene->setSceneRect(0,0, 600, 600);
    scene->setItemIndexMethod(QGraphicsScene::NoIndex);

    rect = new QGraphicsRectItem();
    rect->setRect(50,300,100,100);
    scene->addItem(rect);



    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setBackgroundBrush(QPixmap(":/images/tlo.jpg"));
    ui->graphicsView->setScene(scene);
    //ui->graphicsView->update();

    farma = new CMapa(wys,szer); //stworzenie mapy - gui tworzy sie z automatu
    gmapa = farma->gmapa;//przekazanie wskaznika do gui dla okna

    czas = new CCzas(farma);    //stworzenie timera i przypisanie do mapy ~lista obiektow


}

oknoGry::~oknoGry()
{
    delete ui;
}


void oknoGry::on_actionStart_triggered()
{
    czas->czas->start(1000);
    cout<<"start symulacji"<<endl;
    item->setPos(counter++,counter++);

}

void oknoGry::on_actionStop_triggered()
{

    czas->czas->stop();
    cout<<"stop symulacji"<<endl;

    QImage image(":/images/traktor.png");
    item =  new QGraphicsPixmapItem( QPixmap::fromImage(image));
    item->setPos(200,50);

    scene->addItem(item);


}
void oknoGry::update()
{

}

