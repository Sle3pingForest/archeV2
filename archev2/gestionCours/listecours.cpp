#include "listecours.h"
#include <iostream>
#include <QStringList>
#include <QStandardItemModel>
ListeCours::ListeCours(QWidget *parent) : QWidget(parent)
{
    // QT
    gridLayout = new QGridLayout();
    gridLayout->setVerticalSpacing(0);

    label = new QLabel(this);
    label->setText("LISTE COURS");
    label->setAlignment(Qt::AlignHCenter);
    gridLayout->addWidget(label,0,0,0,4);


    setLayout(gridLayout);


    //DEV

    /* (std::vector<int>::iterator it = myvector.begin() ; it != myvector.end(); ++it)
        std::cout << ' ' << *it;
      std::cout << '\n';*/


    QStringList entetes;
    entetes << "Nom du cours" << "Enseignant" << "Inscription";
    int i =0,j=0;
   // vueliste->setHorizontalHeaderLabels(entetes);*
   int column = listeCours.size();
    QStandardItemModel *model = new QStandardItemModel(3, column,this);
    model->setHorizontalHeaderItem(0, new QStandardItem("Nom cours"));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("Enseignant")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("Inscription")));

      for(std::vector<Cours*>::iterator it = listeCours.begin(); it != listeCours.end(); it++, i++)    {

                //QString q = new QString((*it)->getNomCours());
                model->setItem(i,0,new QStandardItem( QString( QString::fromStdString((*it)->getNomCours() ) ) ) );
                model->setItem(i,1,new QStandardItem( QString( QString::fromStdString((*it)->getNomEnseignant() ) ) ) );
                model->setItem(i,2,new QStandardItem( QString( QString::fromStdString((*it)->getNomCours() ) ) ) );
              std::cout<< *it << endl;  // prints d.
                std::cout<< (*it)->getNomCours() ;
              label->setText( QString::fromStdString((*it)->getNomCours() ) );
      }


     /* vueliste = new QTableView(this);
      vueliste->setModel(model);

      gridLayout->addWidget(vueliste,100,20);*/

}


ListeCours::~ListeCours() {

}

void ListeCours::handleButton() {
    emit askDisplayFen(0);
}

void ListeCours::ajouterCours(Cours *c) {
    listeCours.push_back(c);
}


string ListeCours::getNomDeCours(int i){

    return listeCours[i]->getNomCours();
}


string ListeCours::getNomDeEns(int i){

    /*for(list<int>::iterator it = listNomDeCours.begin(); it!=listNomDeCours.end(); ++it)
    {
        std::advance(it, i);
    }
*/
    return "ENS" ;
}


Cours* ListeCours::getCours(int i){
    return listeCours[i];
}
