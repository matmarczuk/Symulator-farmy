#include "oknogry.h"
#include "ui_oknogry.h"

using namespace std;
CMapa * oknoGry::farma = new CMapa(600,600); //stworzenie mapy - gui tworzy sie z automatu

/** \brief konstruktor okna gry
 * \param nazwa mapy
 * \param wysokość mapy
 * \param szerokość mapy
 * \param wskaźnik do widgetu
 *
 * Tworzy nowe okno gry i wszystkie obiekty w grze
 */
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

//    rect = new QGraphicsRectItem();
//    rect->setRect(50,50,200,200);
//    scene->addItem(rect);



    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setBackgroundBrush(QPixmap(":/images/tlo.jpg"));
    ui->graphicsView->setScene(scene);
    //ui->graphicsView->update();

    gmapa = farma->gmapa;//przekazanie wskaznika do gui dla okna

    czas = new CCzas(farma);    //stworzenie timera i przypisanie do mapy ~lista obiektow

    CObiekt*pole = new CPole(200,100,-50,100,DO_ZBIORU);
    farma->dodaj_obiekt(pole);
    scene->addItem(gmapa->GList.back()->item); //dodanie do sceny

    CObiekt*pole2 = new CPole(200,100,170,50,ZAORANE);
    farma->dodaj_obiekt(pole2);
    scene->addItem(gmapa->GList.back()->item); //dodanie do sceny

    CObiekt* traktor1 = new CCiagnik("henio",4,220);
    farma->dodaj_obiekt(traktor1);
    scene->addItem(gmapa->GList.back()->item); //dodanie do sceny

    CObiekt* traktor2 = new CCiagnik("czarek",4,250);
    farma->dodaj_obiekt(traktor2);
    scene->addItem(gmapa->GList.back()->item); //dodanie do sceny

    CObiekt *garaz = new CGaraz(200,400,4,5);
    farma->dodaj_obiekt(garaz);
    scene->addItem(gmapa->GList.back()->item);
}
/** \brief Destruktor okna gry
 *  usuwa interfejs
 */
oknoGry::~oknoGry()
{
    delete ui;
}

/** \brief Callback od przycisku startu symulacji
 * Startuje symulacjes
 */
void oknoGry::on_actionStart_triggered()
{
    czas->czas->start(20);

}
/** \brief Callback od przycisku zatrzymania symulacji
 * wstrzymuje symulacje
 */
void oknoGry::on_actionStop_triggered()
{

    czas->czas->stop();
    cout<<"stop symulacji"<<endl;


}
void oknoGry::update()
{

}

