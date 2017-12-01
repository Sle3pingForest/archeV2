#include "listecours.h"
#include <iostream>

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

       int i =2;
      for(std::vector<Cours*>::iterator it = listeCours.begin(); it != listeCours.end(); it++ ,i++)    {
          /*label = ;
          label->setText("LISTE COURS");
          label->setAlignment(Qt::AlignHCenter);
          gridLayout->addWidget(new QLabel(this)->setText(it),0,0,0,4);*/
              std::cout<< *it << endl;  // prints d.
      }



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
