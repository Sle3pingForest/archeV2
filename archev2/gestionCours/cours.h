#ifndef COURS_H
#define COURS_H


#include "vector"
#include "string"



using namespace std;

class Cours
{
    public:
        Cours();
        string getNomCours();
        string getNomEnseignant();
        string getDetailsCour();
        int getNbPaceMax();
        bool verifierNbPlaceMax();
        bool verifierDateInscription();


    private:
        string nomDeCour;
        string nomEnseignant;
        string detailsDucours;
        int nbPlaceMax;
        //vector<Personne> listePrincipal;
        //vector<Personne> listeAttente;
        vector<int> dateDebut();//1->jj 2->mm 4->aaaa
        vector<int> dateFin();
        vector<int> dateFinInscription();
};

#endif // COURS_H
