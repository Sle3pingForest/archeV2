#include "cours.h"


Cours::Cours(){

}

Cours::Cours(string nomC, string NomEns)
{
    nomDeCour = nomC;
    nomEnseignant = NomEns;

}

string Cours:: getNomCours(){
    return nomDeCour;
}

string Cours:: getNomEnseignant(){
    return nomEnseignant;
}

string Cours:: getDetailsCour(){
    return detailsDucours;
}

int Cours:: getNbPaceMax(){
    return nbPlaceMax;
}
/*

void Cours:: ajoutListPrincial(Personne p){
    listePrincipal.push_back(p);
}

void Cours:: ajoutListAttente(Personne p){
    listeAttente.push_back(p);
}




bool Cours:: verifierNbPlaceMax(){
    return listePrincipal.size() < nbPlaceMax;
}


bool Cours:: verifierPersonneNbCourMax(Personne p){
    return p.getNbCoursMax < p.getCoursInscrit;
}
*/

/*
bool Cours:: verifierDateInscription(){
    time_t _time;
    struct tm timeInfo;
    time(&_time);
    localtime_s(&timeInfo, &_time);

    if(time_info->tm_year < dateFinInscription[2])
        if(time_info->tm_mon < dateFinInscription[1])
            if(time_info->tm_mday < dateFinInscription[0])
                return true;

    return false;
}
*/
