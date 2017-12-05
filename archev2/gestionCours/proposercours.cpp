#include "proposercours.h"

ProposerCours::ProposerCours(QWidget *parent) : QWidget(parent)
{

    gridLayout = new QGridLayout();

    nomCours = new QLineEdit("Enter nom du Cour",this);
    gridLayout->addWidget(nomCours,0,0);


    nomEns = new QLineEdit("Enseignant",this);
    gridLayout->addWidget(nomEns,0,1);

    valider =  new QPushButton("Valider");
    gridLayout->addWidget(valider,0,2);


    detailDuCours = new QTextEdit("Detail du Cours",this);
    gridLayout->addWidget(detailDuCours,1,0,50,50);



    connect(valider, SIGNAL (clicked()), this, SLOT (validerCours()));

    setLayout(gridLayout);
}


ProposerCours::~ProposerCours(){

}



void ProposerCours:: validerCours(){
    string nom = nomCours->text().toStdString();
    string nomE = nomEns->text().toStdString();
    if(nom != "" && nomE !=""){
        cours = new Cours(nom,nomE);
    }
    else{
        QMessageBox::warning(this, tr("wrong login"),
                                        tr("L'indentifiant ou le mot de passe \n"
                                           "est éronné "),
                                        QMessageBox::Ok);
    }

}
