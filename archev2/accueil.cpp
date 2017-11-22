#include "accueil.h"


Accueil::Accueil(QWidget *parent) : QWidget(parent)
{
    //On donne une taille par défaut à la fenêtre
    setWindowTitle("Accueil");

    gridLayout = new QGridLayout();
    gridLayout->setVerticalSpacing(0);





    labelimgAccueil = new QLabel(this);
    labelimgAccueil->setPixmap(QPixmap("../archev2/img/imgApplication/accueil.jpg"));
    labelimgAccueil->show();

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


    connect(connexion, SIGNAL (clicked()), this, SLOT (handleButton()));

    connect(listeCours, SIGNAL (clicked()), this, SLOT (on_listeCours_clicked()));

    setLayout(gridLayout);


}

Accueil::~Accueil() {
    delete this;
}

void Accueil::on_listeCours_clicked() {
    if(estCo){
        emit askDisplayFen(1);
    }
}

void Accueil::handleButton()
 {
    co = new Connexion();
    co->exec();
    cout<< "loginn est ok ? "<<co->getLogingOk()<<endl;
    if(co->getLogingOk()){
        estCo = true;
    }
}


bool Accueil:: getEstCo(){
    return estCo;
}


