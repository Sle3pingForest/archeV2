#ifndef ETUDIANT_H
#define ETUDIANT_H

#include "string"
#include "../gestionCours/listecours.h"

class Etudiant
{

public:
    Etudiant();
    int getNbCoursMax();
    int consulterNote();
    //void inscrireCours(Cours& c);
    //Cours selectCours();
    std::string getNom();
    std::string getPrenom();

private:
    std::string login;
    std::string nom;
    std::string prenom;
    int nbCoursMax;
    ListeCours listeDesCours;

};

#endif // ETUDIANT_H
