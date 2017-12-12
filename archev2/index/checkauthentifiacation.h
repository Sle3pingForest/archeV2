#ifndef CHECKAUTHENTIFIACATION_H
#define CHECKAUTHENTIFIACATION_H
#include <iostream>
#include <string>
#include <map>
#include "../personne/personne.h"
#include <QList>

using namespace std;

class CheckAuthentifiacation
{
    public:
        CheckAuthentifiacation();
        bool checkUser(string id, string ps);
        void addPersonne(Personne p);
        map<string,string> GetlistUsers();
        QList<Personne*> getPersonne();
        ~CheckAuthentifiacation();

    private:
        map<string,string> listUsers;
        QList<Personne*> personne;
        void addUsers();
};

#endif // CHECKAUTHENTIFIACATION_H
