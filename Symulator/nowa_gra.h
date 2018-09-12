#ifndef NOWA_GRA_H
#define NOWA_GRA_H

#include <QDialog>
#include "oknogry.h"
#include "GUI/gobiekt.h"


static oknoGry *okno;

namespace Ui {
class nowa_gra;
}

class nowa_gra : public QDialog
{
    Q_OBJECT

public:
    explicit nowa_gra(QWidget *parent = 0);
    ~nowa_gra();

private slots:
    //void on_buttonBox_clicked(QAbstractButton *button);
    void on_pushButton_clicked();
    void on_comboBox_activated(const QString &arg1);

private:
    Ui::nowa_gra *ui;
};

#endif // NOWA_GRA_H
