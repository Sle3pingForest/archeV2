#include "checkauthentifiacation.h"

CheckAuthentifiacation::CheckAuthentifiacation(){
    addUsers();

}

void CheckAuthentifiacation::addUsers(){
    listUsers["sleeping"] = "123456";
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

map<string,string> CheckAuthentifiacation::GetlistUsers(){
    return listUsers;
}



