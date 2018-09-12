#ifndef OKNOGRY_H
#define OKNOGRY_H

#include <QMainWindow>
#include <QPainter>
#include <QImage>
#include <iostream>
#include <QtWidgets>
#include "cczas.h"

class GObiekt;

namespace Ui {
class oknoGry;
}

class oknoGry : public QMainWindow
{
    Q_OBJECT

public:
    explicit oknoGry(QString nazwa,int wys,int szer,QWidget *parent = 0) ;
    ~oknoGry();
    //void paintEvent(QPaintEvent *);
    void rysuj();
    void update();

private slots:
    void on_actionStart_triggered();

    void on_actionStop_triggered();

public:
    static CMapa* farma;
private:
    Ui::oknoGry *ui;
    CCzas* czas;

    QGraphicsScene* scene;
    QGraphicsRectItem * rect;
    QGraphicsItem * item;
    GMapa* gmapa;
    int counter = 20;
};


#endif // OKNOGRY_H
