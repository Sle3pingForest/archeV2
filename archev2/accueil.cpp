#include "accueil.h"

#include <QPushButton>


Accueil::Accueil()
{
    //On donne une taille par défaut à la fenêtre
    resize(700, 600);
    setWindowTitle("Accueil");

    //On définit les layouts
    //verticalLayout = new QVBoxLayout(this);
    //horizontalLayout = new QHBoxLayout();
    gridLayout = new QGridLayout();
    gridLayout->setVerticalSpacing(0);

    label = new QLabel(this);
    label->setText("Accueil Arche du turfu");
    label->setAlignment(Qt::AlignHCenter);
    gridLayout->addWidget(label,0,0,0,4);


    connexion = new QPushButton("Connexion");
    connexion->setMaximumWidth(80);
    connexion->setMaximumHeight(30);
    gridLayout->addWidget(connexion,0,5);

    label2 = new QLabel(this);
    label2->setText("Footer");
    gridLayout->addWidget(label2,5,5);

     //horizontalLayout->addWidget(connexion,3,1);


    setLayout(gridLayout);


}

