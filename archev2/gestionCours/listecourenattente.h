#ifndef LISTECOURENATTENTE_H
#define LISTECOURENATTENTE_H

#include "string"
#include "cours.h"
#include "vector"

class listeCourEnAttente
{
public:
    listeCourEnAttente();
    void proposerCours(std::string titre, std::string nom);
    void ajouterCours(Cours c);

private:
    std::vector<Cours> listCoursAttente;
};

#endif // LISTECOURENATTENTE_H
