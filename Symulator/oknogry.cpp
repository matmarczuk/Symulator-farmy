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
    rect->setRect(50,50,200,200);
    scene->addItem(rect);



    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setBackgroundBrush(QPixmap(":/images/tlo.jpg"));
    ui->graphicsView->setScene(scene);
    //ui->graphicsView->update();

    farma = new CMapa(wys,szer); //stworzenie mapy - gui tworzy sie z automatu
    gmapa = farma->gmapa;//przekazanie wskaznika do gui dla okna

    czas = new CCzas(farma);    //stworzenie timera i przypisanie do mapy ~lista obiektow

    CObiekt* traktor = new CCiagnik("henio",4);
    farma->dodaj_obiekt(traktor);
    //CObiekt*pole = new CPole(50,50,0,0);
    //farma->dodaj_obiekt(pole);

    scene->addItem(gmapa->GList.back()->item);

}

oknoGry::~oknoGry()
{
    delete ui;
}


void oknoGry::on_actionStart_triggered()
{
    czas->czas->start(1000);

}

void oknoGry::on_actionStop_triggered()
{

    czas->czas->stop();
    cout<<"stop symulacji"<<endl;


}
void oknoGry::update()
{

}

