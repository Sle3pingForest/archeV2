#include "listecourenattente.h"

listeCourEnAttente::listeCourEnAttente()
{
}

void listeCourEnAttente:: proposerCours(string titre, string nom){
    Cours *cour = new Cours(titre, nom);
    ajouterCours(*cour);
}

void listeCourEnAttente:: ajouterCours(Cours c){
    listCoursAttente.push_back(c);
}
