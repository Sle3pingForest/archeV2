#include "accueil.h"


Accueil::Accueil(QWidget *parent) : QWidget(parent)
{
    //On donne une taille par défaut à la fenêtre
    setWindowTitle("Accueil");

    gridLayout = new QGridLayout();
    gridLayout->setVerticalSpacing(0);

    labelimgAccueil = new QLabel(this);
    labelimgAccueil->setPixmap(QPixmap("../archev2/img/imgApplication/accueil.jpg"));
    //labelimgAccueil->setPixmap(QPixmap("img/accueil.jpg"));
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

    //listeAttente = new ListeCourEnAttente(this);



    proposer = new QPushButton("Proposer cours",this);
    proposer->setMaximumWidth(150);
    proposer->setMaximumHeight(30);
    gridLayout->addWidget(proposer,3,5);



    connect(attente, SIGNAL (clicked()), this, SLOT (on_Atttente_clicked()));
    connect(listeCours, SIGNAL (clicked()), this, SLOT (on_listeCours_clicked()));

    connect(proposer, SIGNAL (clicked()), this, SLOT (on_proposer_clicked()));


    listeCours->setVisible(false);
    proposer->setVisible(false);
    attente->setVisible(false);

    setLayout(gridLayout);

}

Accueil::~Accueil() {
}

void Accueil::on_proposer_clicked() {
        emit askDisplayFen(2);

}


void Accueil::on_Atttente_clicked() {
        emit askDisplayFen(3);

}

void Accueil::on_listeCours_clicked() {
     emit askDisplayFen(1);
    /*if(estCo){
        emit askDisplayFen(1);
    }
    else{
        QMessageBox::warning(this, tr("Exces error"),
                                        tr("Identifiez-vous!!! "),
                                        QMessageBox::Ok);
    }*/
}

void Accueil:: setEstCo(bool f){
    estCo = f;

}

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

bool Accueil:: getEstCo(){

    return estCo;
}

void Accueil::setPersonne(Personne *p) {
    perso = p;
}

Personne* Accueil::getPersonne(){
    return perso;
}
