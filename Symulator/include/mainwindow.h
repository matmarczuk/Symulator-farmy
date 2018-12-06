#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include "newwindow.h"
#include "nowa_gra.h"


namespace Ui {
class MainWindow;
}
/** \brief Klasa głównego okna
 *
 * Przechowuje dane okna, obsluguje callbacki od przyciskow
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void openNewWindow();
    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
