#include "fenetreprincipale.h"


FenetrePrincipale::FenetrePrincipale() : QMainWindow()
{
    resize(800, 380);
    setWindowTitle("FenPrin");


    stack = new QStackedWidget(this);
    qtool = new QToolBar();




    accueil = new Accueil(this);
    listeCours = new ListeCours(this);
    co = new Connexion();
    pc = new ProposerCours(this);
    listeAttente = new ListeCourEnAttente(this);


     logout = new QPushButton("Log out",this);
     logout->setMaximumWidth(80);
     logout->setMaximumHeight(30);
     connect(logout, SIGNAL (clicked()), this, SLOT (deconnecter()));


     connexion = new QPushButton("Connexion",this);
     connexion->setMaximumWidth(80);
     connexion->setMaximumHeight(30);
     connect(connexion, SIGNAL (clicked()), this, SLOT (connecter()));

    qtool->addWidget(connexion);
    qtool->addWidget(logout);

    logout->setEnabled(false);


    //fen3 = new Connexion();
    /*fen4 = new FenetreSecondaire4(this);*/


    stack->addWidget(accueil);
    stack->addWidget(listeCours);
    stack ->addWidget(pc);
    stack->addWidget(listeAttente);

    this->setCentralWidget(stack);
    this->addToolBar(qtool);
    //stack->setCurrentIndex(0); // on affiche la première fenêtre à l'ouverture du programme

    connect(accueil, SIGNAL(askDisplayFen(int)), this, SLOT(slotDisplayFen(int)));
    connect(listeCours, SIGNAL(askDisplayFen(int)), this, SLOT(slotDisplayFen(int)));
    connect(pc, SIGNAL(askDisplayFen(int)), this, SLOT(slotDisplayFen(int)));

    connect(co, SIGNAL(askPersonCo(std::string)), this, SLOT(slotPersonCo(std::string)));
}


FenetrePrincipale::~FenetrePrincipale()
{        delete accueil;
         delete listeCours;
}

void FenetrePrincipale::connecter()
 {
    if(!accueil->getEstCo()){
        co->exec();
        if(co->getLogingOk()){
            accueil->setEstCo(true);
            connexion->setEnabled(false);
            logout->setEnabled(true);
        }
    }
}

void FenetrePrincipale::deconnecter()
 {
     accueil->setEstCo(false);
     this->slotDisplayFen(0);
     connexion->setEnabled(true);
     logout->setEnabled(false);

}


void FenetrePrincipale::slotDisplayFen(int fenIndex)
{
    if ((fenIndex < 0) || (fenIndex > 4)) {return;}
    stack->setCurrentIndex(fenIndex);
}

void FenetrePrincipale::slotPersonCo(std::string s) {
    listeCours->setPersonCo(s);


}

bool FenetrePrincipale::getCo() {
    return co;
}

void FenetrePrincipale::ajouterCours(Cours *c) {
    listeCours->ajouterCours(c);
}

void FenetrePrincipale::ajouterCoursListe(Cours *c) {
    listeCours->ajouterCoursListe(c);
}
