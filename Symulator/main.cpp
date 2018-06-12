#include "mainwindow.h"
#include "nowa_gra.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QTimer>

#include "cpojazd.h"
#include "cmapa.h"
#include"ckombajn.h"
#include "cciagnik.h"
#include "cplug.h"
#include "cprzyczepa.h"
#include "csiewnik.h"
#include "cpole.h"
#include "cczas.h"

#include "budynki.h"

#include <iostream>
#include <stdlib.h>
using namespace std;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;



    // create a scene
    /*
        QGraphicsScene * scene = new QGraphicsScene();

        // create an item to put into the scene
        QGraphicsRectItem * rect = new QGraphicsRectItem();
        rect->setRect(50,300,100,100);

        // add the item to the scene
        scene->addItem(rect);

        // add a view to visualize the scene
        QGraphicsView * view = new QGraphicsView(scene);

        view->show();
*/




/*
        CPole* kapusta = new CPole(20,30,100,200);
        farma->dodaj_obiekt(kapusta);

        CCiagnik* traktor1 = new CCiagnik("henio",3);
        CSiewnik* siewnik1 = new CSiewnik("siem");
        CPlug *plug1 = new CPlug("plug");


        traktor1->podczepMaszyne(plug1);
        kapusta->znajdz_traktor(traktor1);




        //sprawdzenie czy element listy jest czymś
        /*
        CObiekt* obj = farma.PList.front();
        CPole* tra = dynamic_cast<CPole*>(obj);

        if (tra)
        {
            cout<<"to jest pole"<<endl;
        }
        */






    return a.exec();
}
