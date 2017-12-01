#ifndef LISTECOURS_H
#define LISTECOURS_H

#include <QLabel>
#include <QGridLayout>
#include <QPushButton>
#include <list>
#include <vector>
#include "cours.h"
#include <QTableView>


using namespace std;

class ListeCours : public QWidget
{
         Q_OBJECT
public:

    ListeCours(QWidget *parent = 0);
    Cours* getCours(int i);
    ~ListeCours();
    void ajouterCours(Cours *c);
    bool MetsDansTonQ(int i);


private slots:
     void handleButton();

signals:
    void askDisplayFen(int fenInd);

private:

    //QT Class
     QLabel *label, *label2;
     QGridLayout *gridLayout;
     QTableView *vueliste;


     // Dev Clas & Attributs

    std::vector <Cours*> listeCours;
    /*string listNomDeCours[5] =  {"Toucan", "CPOA","ALGO","SYSTEM","LOGIQUE"};
    string listNomEns[5] =   {"teemo", "yasuo","yi","trym","garen"};*/


protected:

    string getNomDeCours(int i);
    string getNomDeEns(int i);


};

#endif // LISTECOURS_H
