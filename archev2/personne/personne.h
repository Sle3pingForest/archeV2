#ifndef PERSONNE_H
#define PERSONNE_H


#include "string"
#include "./gestionCours/cours.h"
#include <QList>

class Personne
{
public:
    Personne(std::string s, std::string ss,int i);
    //Etudiant();
    int getNbCoursMax();
    int consulterNote();
    //void inscrireCours(Cours& c);
    //Cours selectCours();
    std::string getNom();
    std::string getPrenom();
    QList<Cours*> getListeCours();
    QList<std::string> getListeDroit();
    void ajouterCours(Cours *c);



private:
    std::string login;
    std::string nom;
    std::string prenom;
    int nbCoursMax, personCo;
    QList<Cours*> coursInscrit;
    QList<std::string> listedroit;
};

#endif // PERSONNE_H
