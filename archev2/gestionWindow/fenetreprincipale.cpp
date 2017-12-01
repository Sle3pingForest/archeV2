#include "fenetreprincipale.h"


FenetrePrincipale::FenetrePrincipale() : QMainWindow()
{
    resize(800, 380);
    setWindowTitle("FenPrin");


    layout = new QGridLayout();
    layout->setVerticalSpacing(0);

    stack = new QStackedWidget(this);


    accueil = new Accueil(this);
    listeCours = new ListeCours(this);
    co = new Connexion();

     logout = new QPushButton("Log out",this);
     logout->setMaximumWidth(80);
     logout->setMaximumHeight(30);
     connect(logout, SIGNAL (clicked()), this, SLOT (deconnecter()));


     connexion = new QPushButton("Connexion",this);
     connexion->setMaximumWidth(80);
     connexion->setMaximumHeight(30);
     connect(connexion, SIGNAL (clicked()), this, SLOT (connecter()));


    //fen3 = new Connexion();
    /*fen4 = new FenetreSecondaire4(this);*/


    stack->addWidget(accueil);
    stack->addWidget(listeCours);

    layout->addWidget(connexion,0,0);
    layout->addWidget(logout,1,0);

    setLayout(layout);

    this->setCentralWidget(stack);
    stack->setCurrentIndex(0); // on affiche la première fenêtre à l'ouverture du programme

    connect(accueil, SIGNAL(askDisplayFen(int)), this, SLOT(slotDisplayFen(int)));
    connect(listeCours, SIGNAL(askDisplayFen(int)), this, SLOT(slotDisplayFen(int)));
}


FenetrePrincipale::~FenetrePrincipale()
{        delete accueil;
         delete listeCours;
}

void FenetrePrincipale::connecter()
 {
    co->exec();
    if(co->getLogingOk()){
        accueil->setEstCo(true);
    }
}

void FenetrePrincipale::deconnecter()
 {
     accueil->setEstCo(false);

}


void FenetrePrincipale::slotDisplayFen(int fenIndex)
{
    if ((fenIndex < 0) || (fenIndex > 3)) {return;}
    stack->setCurrentIndex(fenIndex);
}

bool FenetrePrincipale::getCo() {
    return co;
}



void FenetrePrincipale::ajouterCours(Cours *c) {
    fen2->ajouterCours(c);
}
