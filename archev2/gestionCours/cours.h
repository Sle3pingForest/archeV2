#ifndef COURS_H
#define COURS_H


#include "vector"
#include "string"
#include <QList>
//#include "../personne/personne.h"


using namespace std;

class Cours
{
    public:
        Cours();
        Cours(string nomC, string NomEns);
        string getNomCours();
        string getNomEnseignant();
        string getDetailsCour();
        int getNbPlaceMax();
        bool verifierNbPlaceMax();
        bool verifierDateInscription();
        //void ajouterEtudiant(Personne *p);
        //QList<Personne*> getPersonList();

    private:
        string nomDeCour;
        string nomEnseignant;
        string detailsDucours;
        int nbPlace;
        int nbPlaceMax;
        //vector<Personne> listePrincipal;
        //vector<Personne> listeAttente;
        vector<int> dateDebut();//1->jj 2->mm 4->aaaa
        vector<int> dateFin();
        vector<int> dateFinInscription();
        //QList<Personne*> personlist;
};

#endif // COURS_H
