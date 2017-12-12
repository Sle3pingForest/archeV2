#include "personne.h"

Personne::Personne(std::string s, std::string ss,int i)
{
       nom = s;
       prenom = ss;
       switch (i) {
           case 1:
           listedroit.append("etudiant");
               break;
           case 2:
           listedroit.append("prof");
               break;
           case 3:
           listedroit.append("admin");
               break;
           default:
           listedroit.append("etudiant");
               break;
            }
    }
    int Personne::getNbCoursMax(){
        return nbCoursMax;
    }

    int Personne::consulterNote(){
        return 0;
    }

    std::string Personne::getNom(){
        return nom;
    }

    std::string Personne::getPrenom(){
        return prenom;
    }

    void Personne::ajouterCours(Cours *c){
        coursInscrit.append(c);
    }
    

    void Personne::supprimerCours(Cours *c){
        int i = coursInscrit.lastIndexOf(c);
        coursInscrit.takeAt(i);
    }


    QList<Cours*> Personne::getListeCours(){
        return coursInscrit;
    }

    QList<std::string> Personne::getListeDroit(){
        return listedroit;
    }
