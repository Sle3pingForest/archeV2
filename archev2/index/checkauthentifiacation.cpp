#include "checkauthentifiacation.h"

CheckAuthentifiacation::CheckAuthentifiacation(){
    addUsers();
    /*personne.append(new Personne("a", "z", 1));
    personne.append(new Personne("allen", "fresh", 3));
    personne.append(new Personne("lea", "boire", 3));
    personne.append(new Personne("sleeping", "123456", 3));*/
}

void CheckAuthentifiacation::addUsers(){
    listUsers["sleeping"] = "123456";
    listUsers["lea"] = "boire";
    listUsers["allen"] = "fresh";
    listUsers["a"] = "z";
}

void CheckAuthentifiacation::addPersonne(Personne p) {
    personne.append(&p);
}


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
    delete this;
}
map<string,string> CheckAuthentifiacation::GetlistUsers(){
    return listUsers;
}

QList<Personne*> CheckAuthentifiacation::getPersonne(){
    return personne;
}





