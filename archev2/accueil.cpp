#include "accueil.h"


Accueil::Accueil(QWidget *parent) : QWidget(parent)
{
    //On donne un titre par défaut à la fenêtre
    setWindowTitle("Accueil");

    gridLayout = new QGridLayout();
    gridLayout->setVerticalSpacing(0);


    // déclaration des widgets de la fenetre

    labelimgAccueil = new QLabel(this);
    labelimgAccueil->setPixmap(QPixmap("../archev2/img/imgApplication/accueil.jpg"));
    labelimgAccueil->show();

    label = new QLabel(this);
    label->setText("Accueil Arche du turfu");
    label->setAlignment(Qt::AlignHCenter);
    gridLayout->addWidget(label,0,0,0,4);

    attente = new QPushButton("Cours En Attente",this);
    attente->setMaximumWidth(150);
    attente->setMaximumHeight(30);
    gridLayout->addWidget(attente,1,5);


    listeCours = new QPushButton("Liste cours",this);
    listeCours->setMaximumWidth(150);
    listeCours->setMaximumHeight(30);
    gridLayout->addWidget(listeCours,2,5);


    proposer = new QPushButton("Proposer cours",this);
    proposer->setMaximumWidth(150);
    proposer->setMaximumHeight(30);
    gridLayout->addWidget(proposer,3,5);


    listeCours->setVisible(false);
    proposer->setVisible(false);
    attente->setVisible(false);

    // lien entre les boutons et les fonctions

    connect(attente, SIGNAL (clicked()), this, SLOT (on_Atttente_clicked()));
    connect(listeCours, SIGNAL (clicked()), this, SLOT (on_listeCours_clicked()));
    connect(proposer, SIGNAL (clicked()), this, SLOT (on_proposer_clicked()));




    setLayout(gridLayout);

}

Accueil::~Accueil() {
    delete listeCoursEnAttente;
    delete perso;
}


/**
 * @brief Accueil::on_proposer_clicked
 * slot qui récupère le signal d'un bouton
 * et qui redirige vers la page de proposition de cours
 * via l'appelle à la fonction de changement de page de la classe fenetreprincipale
 */
void Accueil::on_proposer_clicked() {
        emit askDisplayFen(2);
}

/**
 * @brief Accueil::on_proposer_clicked
 * slot qui récupère le signal d'un bouton
 * et qui redirige vers la page de liste de cours en attente
 * via l'appelle à la fonction de changement de page de la classe fenetreprincipale
 */
void Accueil::on_Atttente_clicked() {
        emit askDisplayFen(3);
}


/**
 * @brief Accueil::on_proposer_clicked
 * slot qui récupère le signal d'un bouton
 * et qui redirige vers la page de liste de cours
 * via l'appelle à la fonction de changement de page de la classe fenetreprincipale
 */
void Accueil::on_listeCours_clicked() {
     emit askDisplayFen(1);
}


/**
 * @brief Accueil::setEstCo
 * @param f bool
 */
void Accueil:: setEstCo(bool f){
    estCo = f;
}

/**
 * @brief Accueil::rafraichirBouton
 * fonction qui vérifie les droits de l'utilisateur connecté
 * et affiche les boutons selon ses droits
 */
void Accueil::rafraichirBouton() {
    if (estCo) {
        listeCours->setVisible(true);
        if (getPersonne()->getDroit() == "enseignant" || getPersonne()->getDroit() == "admin") {
            proposer->setVisible(true);
        }
        if (getPersonne()->getDroit() == "admin") {
            attente->setVisible(true);
        }

    } else {
        listeCours->setVisible(false);
        proposer->setVisible(false);
        attente->setVisible(false);
    }
}


/**
 * @brief Accueil::getEstCo
 * @return estCo bool
 */
bool Accueil:: getEstCo(){

    return estCo;
}

/**
 * @brief Accueil::setPersonne la personne connectée
 * @param p Personne
 */
void Accueil::setPersonne(Personne *p) {
    perso = p;
}

/**
 * @brief Accueil::getPersonne la personne connectée
 * @return Personne
 */
Personne* Accueil::getPersonne(){
    return perso;
}
