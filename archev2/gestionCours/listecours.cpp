#include "listecours.h"

ListeCours::ListeCours(QWidget *parent) : QWidget(parent)
{
    // QT
    gridLayout = new QGridLayout();
    gridLayout->setVerticalSpacing(0);

    label = new QLabel(this);
    label->setText("LISTE COURS");
    label->setAlignment(Qt::AlignHCenter);
    gridLayout->addWidget(label,0,0,0,4);

    connexion = new QPushButton("log out",this);
    connexion->setMaximumWidth(80);
    connexion->setMaximumHeight(30);
    gridLayout->addWidget(connexion,0,5);

    connect(connexion, SIGNAL (clicked()), this, SLOT (handleButton()));

    setLayout(gridLayout);


    //DEV

    for (int i = 0; i < listdeCours.size() ; ++i){
        //cours = new Cours(listNomDeCours);
    }
}


ListeCours::~ListeCours() {

}

void ListeCours::handleButton() {
    emit askDisplayFen(0);
    estResterCo = false;
}

bool ListeCours::getEstResterCo(){
    return estResterCo;
}

string ListeCours::getNomDeCours(int i){

    string nomC;
    /*for(list<int>::iterator it = listNomDeCours.begin(); it!=listNomDeCours.end(); ++it)
    {
        std::advance(it, i);
    }
*/
    return "COURS" ;
}


string ListeCours::getNomDeEns(int i){

    /*for(list<int>::iterator it = listNomDeCours.begin(); it!=listNomDeCours.end(); ++it)
    {
        std::advance(it, i);
    }
*/
    return "ENS" ;
}
Cours ListeCours::getCours(int i){
    return cours;
}
