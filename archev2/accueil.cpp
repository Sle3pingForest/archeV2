#include "accueil.h"

#include <QPushButton>


Accueil::Accueil()
{
    //On donne une taille par défaut à la fenêtre
    resize(1000, 600);
    setWindowTitle("Accueil");

    //On définit les layouts
    //verticalLayout = new QVBoxLayout(this);
    //horizontalLayout = new QHBoxLayout();
    gridLayout = new QGridLayout(3,3);

    label = new QLabel(this);
    label->setText("Accueil Arche du turfu");
    label->setAlignment(Qt::AlignHCenter);
    gridLayout->addWidget(label,1,1);


    connexion = new QPushButton("Connexion");
    connexion->setMinimumWidth(8);
    connexion->setMinimumHeight(6);
    //gridLayout->addWidget(connexion);
     //horizontalLayout->addWidget(connexion,3,1);


    setLayout(horizontalLayout);


}

