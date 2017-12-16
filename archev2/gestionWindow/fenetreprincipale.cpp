#include "fenetreprincipale.h"


FenetrePrincipale::FenetrePrincipale() : QMainWindow()
{
    // On donne une taille et un titre par défaut à la fenêtre
    resize(800, 380);
    setWindowTitle("FenPrin");


    stack = new QStackedWidget(this);
    qtool = new QToolBar();



    // initialisation des classes

    accueil = new Accueil(this);
    listeCours = new ListeCours(this);
    co = new Connexion();
    pc = new ProposerCours(this);
    listeAttente = new ListeCourEnAttente(this);


    // création des boutons
     logout = new QPushButton("Log out",this);
     logout->setMaximumWidth(80);
     logout->setMaximumHeight(30);
     connect(logout, SIGNAL (clicked()), this, SLOT (deconnecter()));


     connexion = new QPushButton("Connexion",this);
     connexion->setMaximumWidth(80);
     connexion->setMaximumHeight(30);
     connect(connexion, SIGNAL (clicked()), this, SLOT (connecter()));

     acc = new QPushButton("Accueil",this);
     acc->setMaximumWidth(80);
     acc->setMaximumHeight(30);
     connect(acc, SIGNAL (clicked()), this, SLOT ( accueilRedirect() ));

    qtool->addWidget(connexion);
    qtool->addWidget(logout);
    qtool->addWidget(acc);

    logout->setEnabled(false);


    // ajout des fenetres

    stack->addWidget(accueil);
    stack->addWidget(listeCours);
    stack ->addWidget(pc);
    stack->addWidget(listeAttente);

    this->setCentralWidget(stack);
    this->addToolBar(qtool);



    connect(accueil, SIGNAL(askDisplayFen(int)), this, SLOT(slotDisplayFen(int)));
    connect(listeCours, SIGNAL(askDisplayFen(int)), this, SLOT(slotDisplayFen(int)));
    connect(pc, SIGNAL(askDisplayFen(int)), this, SLOT(slotDisplayFen(int)));
    connect(co, SIGNAL(askPersonCo(std::string)), this, SLOT(slotPersonCo(std::string)));
    connect(listeAttente, SIGNAL(askCours(std::string, std::string)), this, SLOT(slotAddCours(std::string, std::string)));

}


FenetrePrincipale::~FenetrePrincipale()
{        delete accueil;
         delete listeCours;
         delete co;
         delete pc;
         delete listeAttente;
}

/**
 * @brief FenetrePrincipale::connecter
 * affiche la page de connexion
 */
void FenetrePrincipale::connecter()
 {
    if(!accueil->getEstCo()){
        co->exec();
        if(co->getLogingOk()){
            accueil->setEstCo(true);

            // desactive le bouton connexion
            connexion->setEnabled(false);

            // active le bouton deconnexion
            logout->setEnabled(true);
            accueil->setPersonne(listeCours->getPersonCo());

            // rafraichit l'accueil pour afficher les boutons par rapport aux droits de la personne connectée
            accueil->rafraichirBouton();
        }
    }
}


/**
 * @brief FenetrePrincipale::accueilRedirect
 * fonction de redirection vers l'accueil
 */
void FenetrePrincipale::accueilRedirect() {
    accueil->rafraichirBouton();
    slotDisplayFen(0);
}


/**
 * @brief FenetrePrincipale::deconnecter
 * déconnecte l'utilisateur
 * redirige et rafraichit l'accueil
 */
void FenetrePrincipale::deconnecter()
 {
     accueil->setEstCo(false);
     this->slotDisplayFen(0);
     connexion->setEnabled(true);
     logout->setEnabled(false);
     accueil->setPersonne(NULL);
     accueil->rafraichirBouton();
}

/**
 * @brief FenetrePrincipale::slotDisplayFen
 * méthode qui permet le changement de fenetre
 * @param fenIndex int page que l'on veut acceder
 */
void FenetrePrincipale::slotDisplayFen(int fenIndex)
{
    if ((fenIndex < 0) || (fenIndex > 4)) {return;}
    stack->setCurrentIndex(fenIndex);
}

/**
 * @brief FenetrePrincipale::slotPersonCo
 * set la personne connecté dans la liste de cours
 * @param s
 */
void FenetrePrincipale::slotPersonCo(std::string s) {
    listeCours->setPersonCo(s);
}

/**
 * @brief FenetrePrincipale::getCo
 * @return bool
 */
bool FenetrePrincipale::getCo() {
    return co;
}

/*
void FenetrePrincipale::ajouterCours(Cours *c) {
    listeCours->ajouterCours(c);
}*/

/**
 * @brief FenetrePrincipale::ajouterCoursListe ajoute un cours à la liste de cours
 * @param c
 */
void FenetrePrincipale::ajouterCoursListe(Cours *c) {
    listeCours->ajouterCoursListe(c);
}

/**
 * @brief FenetrePrincipale::slotAddCours récupère le signal de la liste cours en attente
 * créé un nouveau cours et l'ajoute à la liste cours
 * @param s nom du cours
 * @param ss  nom enseignant
 */
void FenetrePrincipale::slotAddCours(string s, string ss) {
    listeCours->ajouterCoursListe(new Cours(s,ss));
}
