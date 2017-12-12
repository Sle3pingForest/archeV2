#include "proposercours.h"

ProposerCours::ProposerCours(QWidget *parent) : QWidget(parent)
{

    lcea = new ListeCourEnAttente();
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
        lcea->proposerCours(nom,nomE);
        QMessageBox::information(this, tr("Valider"),
                                        tr("Validation en cours"),
                                        QMessageBox::Ok);
        valider->setEnabled(false);
        nomEns->setEnabled(false);
        nomCours->setEnabled(false);
        detailDuCours->setEnabled(false);

    }
    else{
        QMessageBox::warning(this, tr("Error formulaire"),
                                        tr("Nom du cour Ou nom enseignat est vide"),
                                        QMessageBox::Ok);
    }


}
