#include "cours.h"
#include "vector"
#include "string"

cours::cours()
{

    std::String nomDeCour;
    std::String nomEnseignant;
    std::String detailsDuCours;
    int nbPlaceMax;
    std::vector<Personne> listePrincipal;
    std::vector<Personne> listeAttente;
    std::vector<int> dateDebut(3);//1->jj 2->mm 4->aaaa
    std::vector<int> dateFin(3);
    std::vector<int> dateFinInscription(3);
}

std::String cours:: getNomCours(){
    return nomDeCour;
}

std::String cours:: getNomEnseignant(){
    return nomEnseignant;
}

std::String cours:: getDetailsCour(){
    return detailsDucours;
}

int cours:: getNbPaceMax(){
    return nbPlaceMax;
}


void cours:: ajoutListPrincial(Personne p){
    listePrincipal.push_back(p);
}

void cours:: ajoutListAttente(Personne p){
    listeAttente.push_back(p);
}

bool cours:: verifierNbPlaceMax(){
    return listePrincipal.size() < nbPlaceMax;
}

bool cours:: verifierPersonneNbCourMax(Personne p){
    return p.getNbCoursMax < p.getCoursInscrit;
}

bool cours:: verifierDateInscription(){
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
