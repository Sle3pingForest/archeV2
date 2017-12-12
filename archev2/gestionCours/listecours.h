#ifndef LISTECOURS_H
#define LISTECOURS_H

#include <QLabel>
#include <QGridLayout>
#include <QPushButton>
#include <list>
#include <vector>
#include "cours.h"
#include "../personne/personne.h"
#include <QTableView>
#include <QTableWidget>
#include <iostream>
#include <QStringList>
#include <QMessageBox>
#include <QStandardItemModel>
#include <QGraphicsScene>
#include <QSignalMapper>
#include <QTableWidgetItem>



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
    void ajouterCoursListe(Cours *c);
    QList<Personne*> getPersonList();
    void setPersonCo(std::string i);
    Personne* getPersonCo();
    void supprimerCoursListe(Cours *c);
    void supprimerCours(Cours *c);

private slots:
     void handleButton();

public slots:
     void inscription(QString s);
     void desinscription(QString s);

signals:
    void askDisplayFen(int fenInd);

private:

    //QT Class
     QLabel *label, *label2;
     QGridLayout *gridLayout;
     QTableView *vueliste;
     QTableWidget *listevue;
     QList<Cours*> coursList;
     QList<Personne*> personlist;
     QList<QPushButton*> buttons, desinscription_boutons, resources_boutons;
     int personCo;

     // Dev Clas & Attributs

    std::vector <Cours*> listeCours;
    /*string listNomDeCours[5] =  {"Toucan", "CPOA","ALGO","SYSTEM","LOGIQUE"};
    string listNomEns[5] =   {"teemo", "yasuo","yi","trym","garen"};*/


protected:

    string getNomDeCours(int i);
    string getNomDeEns(int i);


};

#endif // LISTECOURS_H
