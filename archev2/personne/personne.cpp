#include "personne.h"


/**
 * @brief Personne::Personne Constructeur
 * @param s nom
 * @param ss prénom
 * @param i droit
 */
Personne::Personne(std::string s, std::string ss,int i)
{
       nom = s;
       prenom = ss;
       switch (i) {
           case 1:
           listedroit.append("etudiant");
               break;
           case 2:
           listedroit.append("enseignant");
               break;
           case 3:
           listedroit.append("admin");
               break;
           default:
           listedroit.append("etudiant");
               break;
            }
    }

Personne::~Personne() {
}

    /**
     * @brief Personne::getNbCoursMax
     * @return int
     */
    int Personne::getNbCoursMax(){
        return nbCoursMax;
    }

    /**
     * @brief Personne::consulterNote fonction pas encore faite
     * @return
     */
    int Personne::consulterNote(){
        return 0;
    }


    /**
     * @brief Personne::getNom
     * @return string
     */
    std::string Personne::getNom(){
        return nom;
    }

    /**
     * @brief Personne::getPrenom
     * @return string
     */
    std::string Personne::getPrenom(){
        return prenom;
    }

    /**
     * @brief Personne::ajouterCours ajoute un cours à la liste de la personne
     * @param c Cours
     */
    void Personne::ajouterCours(Cours *c){
        coursInscrit.append(c);
    }
    

    /**
     * @brief Personne::supprimerCours supprime un cours de la liste de la personne
     * @param c Cours
     */
    void Personne::supprimerCours(Cours *c){
        int i = coursInscrit.lastIndexOf(c);
        coursInscrit.takeAt(i);
    }

    /**
     * @brief Personne::getListeCours
     * @return QList<Cours*>
     */
    QList<Cours*> Personne::getListeCours(){
        return coursInscrit;
    }

    /**
     * @brief Personne::getListeDroit
     * @return QList<string>
     */
    QList<std::string> Personne::getListeDroit(){
        return listedroit;
    }

    /**
     * @brief Personne::getDroit
     * @return string
     */
    std::string Personne::getDroit(){
        return listedroit.at(0);
    }
