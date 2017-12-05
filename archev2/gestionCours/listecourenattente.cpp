#include "listecourenattente.h"

ListeCourEnAttente::ListeCourEnAttente(QWidget *parent) : QWidget(parent)
{
}

void ListeCourEnAttente:: proposerCours(string titre, string nom){
    Cours *cour = new Cours(titre, nom);
    ajouterCours(*cour);
}

void ListeCourEnAttente:: ajouterCours(Cours c){
    listCoursAttente.push_back(c);
    cout<<"hello nam "<<endl;
}

ListeCourEnAttente:: ~ListeCourEnAttente(){

}
