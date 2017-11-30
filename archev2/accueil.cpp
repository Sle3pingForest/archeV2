#include "accueil.h"


Accueil::Accueil(QWidget *parent) : QWidget(parent)
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


    connexion = new QPushButton("Connexion",this);
    connexion->setMaximumWidth(80);
    connexion->setMaximumHeight(30);
    gridLayout->addWidget(connexion,0,5);

    listeCours = new QPushButton("Liste cours",this);
    listeCours->setMaximumWidth(80);
    listeCours->setMaximumHeight(30);
    gridLayout->addWidget(listeCours,2,5);

    getC = new QPushButton("test",this);
    getC->setMaximumWidth(80);
    getC->setMaximumHeight(30);
    gridLayout->addWidget(getC,4,5);


    label2 = new QLabel(this);
    label2->setText("Footer");
    gridLayout->addWidget(label2,5,5);

     //horizontalLayout->addWidget(connexion,3,1);


    connect(connexion, SIGNAL (clicked()), this, SLOT (handleButton()));

    connect(listeCours, SIGNAL (clicked()), this, SLOT (on_listeCours_clicked()));

    connect(getC, SIGNAL (clicked()), this, SLOT (getCo()));


    setLayout(gridLayout);


}

Accueil::~Accueil() {
    delete this;
}

void Accueil::on_listeCours_clicked() {
    emit askDisplayFen(1);
}

void Accueil::handleButton()
 {
    co = new Connexion();
    co->exec();
    cout<< "loginn est ok ? "<<co->getLogingOk()<<endl;
}

void Accueil::getCo() {
    if (FenetrePincipale::getCo()) {
    }
}


