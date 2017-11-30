#ifndef CHECKAUTHENTIFIACATION_H
#define CHECKAUTHENTIFIACATION_H
#include <iostream>
#include <string>
#include <map>
using namespace std;

class CheckAuthentifiacation
{
    public:
        CheckAuthentifiacation();
        bool checkUser(string id, string ps);
        map<string,string> GetlistUsers();
        ~CheckAuthentifiacation();

    private:
        map<string,string> listUsers;
        void addUsers();
};

#endif // CHECKAUTHENTIFIACATION_H
