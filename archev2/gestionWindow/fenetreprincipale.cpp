#include "fenetreprincipale.h"


FenetrePrincipale::FenetrePrincipale() : QMainWindow()
{
    resize(800, 380);
    setWindowTitle("FenPrin");

    stack = new QStackedWidget(this);
    fen1 = new Accueil(this);
    fen2 = new ListeCours(this);
    //fen3 = new Connexion();
    /*fen4 = new FenetreSecondaire4(this);*/

    stack->addWidget(fen1);
    stack->addWidget(fen2);
    //stack->addWidget(fen3);
    /*stack->addWidget(fen4);*/

    this->setCentralWidget(stack);
    stack->setCurrentIndex(0); // on affiche la première fenêtre à l'ouverture du programme

    connect(fen1, SIGNAL(askDisplayFen(int)), this, SLOT(slotDisplayFen(int)));
    connect(fen2, SIGNAL(askDisplayFen(int)), this, SLOT(slotDisplayFen(int)));
    //connect(fen3, SIGNAL(clicked(int)), this, SLOT(slotDisplayFen(int)));
    /*connect(fen4, SIGNAL(askDisplayFen(int)), this, SLOT(slotDisplayFen(int)));*/
}


FenetrePrincipale::~FenetrePrincipale()
{        delete fen1;
         delete fen2;
         delete fen3; ;
}


void FenetrePrincipale::slotDisplayFen(int fenIndex)
{
    if ((fenIndex < 0) || (fenIndex > 3)) {return;}
    stack->setCurrentIndex(fenIndex);
}

bool FenetrePrincipale::getCo() {
    return co;
}

void FenetrePrincipale::setCo(bool v) {
    co = v;
}

void FenetrePrincipale::ajouterCours(Cours *c) {
    fen2->ajouterCours(c);
}
