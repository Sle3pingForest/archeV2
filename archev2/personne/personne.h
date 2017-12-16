#ifndef PERSONNE_H
#define PERSONNE_H


#include "string"
#include "./gestionCours/cours.h"
#include <QList>

class Personne
{
public:
    Personne(std::string s, std::string ss,int i);
    int getNbCoursMax();
    int consulterNote();
    std::string getNom();
    std::string getPrenom();
    std::string getDroit();
    QList<Cours*> getListeCours();
    QList<std::string> getListeDroit();
    void ajouterCours(Cours *c);
    void supprimerCours(Cours *c);


    ~Personne();


private:
    std::string login;
    std::string nom;
    std::string prenom;
    int nbCoursMax, personCo;
    QList<Cours*> coursInscrit;
    QList<std::string> listedroit;
};

#endif // PERSONNE_H
