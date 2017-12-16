#include "checkauthentifiacation.h"


/**
 * @brief CheckAuthentifiacation::CheckAuthentifiacation Constructeur
 * ajoute des utilisateurs dans la base via la fonction addUsers
 */
CheckAuthentifiacation::CheckAuthentifiacation(){
    addUsers();
    /*personne.append(new Personne("a", "z", 1));
    personne.append(new Personne("allen", "fresh", 3));
    personne.append(new Personne("lea", "boire", 3));
    personne.append(new Personne("sleeping", "123456", 3));*/
}

/**
 * @brief CheckAuthentifiacation::addUsers
 * ajoute à la liste les utilisateurs de base
 */
void CheckAuthentifiacation::addUsers(){
    listUsers["sleeping"] = "123456";
    listUsers["lea"] = "boire";
    listUsers["allen"] = "fresh";
    listUsers["a"] = "z";
}

/**
 * @brief CheckAuthentifiacation::addPersonne ajoute une personne à la liste
 * @param p Personne
 */
void CheckAuthentifiacation::addPersonne(Personne p) {
    personne.append(&p);
}

/**
 * @brief CheckAuthentifiacation::checkUser verifie si l'association id/mdp existe
 * @param id identifiant
 * @param ps mot de passe
 * @return bool
 */
bool CheckAuthentifiacation::checkUser(string id, string ps){
    map<string,string>::iterator trouve= listUsers.find(id);
    if(trouve == listUsers.end()){
        cout << "users inconnue " << id << endl;
    }
    else{
        if(trouve->second == ps){
            return true;
        }
        else{

            cout << "error pass" << endl;
        }
    }
    return false;
}


CheckAuthentifiacation::~CheckAuthentifiacation() {
}

/**
 * @brief CheckAuthentifiacation::GetlistUsers
 * @return map<string,string>
 */
map<string,string> CheckAuthentifiacation::GetlistUsers(){
    return listUsers;
}

/**
 * @brief CheckAuthentifiacation::getPersonne
 * @return QList<Personne*>
 */
QList<Personne*> CheckAuthentifiacation::getPersonne(){
    return personne;
}





