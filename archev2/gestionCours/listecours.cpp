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

    listeCours.push_back(new Cours("Toucan", "teemo"));

    listeCours.push_back(new Cours("CPOA", "yasuo"));

    listeCours.push_back(new Cours("ALGO", "Master yi"));

    listeCours.push_back(new Cours("SYSTEM", "tryn"));

    listeCours.push_back(new Cours("LOGIQUE", "garen"));

}


ListeCours::~ListeCours() {

}

void ListeCours::handleButton() {
    emit askDisplayFen(0);
    estResterCo = false;
}

void ListeCours::ajouterCours(Cours& c) {
    listeCours.push_back(&c);
}

bool ListeCours::getEstResterCo(){
    return estResterCo;
}

bool ListeCours::MetsDansTonQ(int i) {

    if (listeCours.size() < i) return true;
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
