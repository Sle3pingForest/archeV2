#include <QApplication>

#include "accueil.h"
#include "index/connexion.h"
#include "gestionWindow/fenetreprincipale.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

   FenetrePrincipale fp;

   fp.ajouterCours(new Cours("Toucan", "teemo"));

   /*listeCours.push_back();

   listeCours.push_back(new Cours("CPOA", "yasuo"));

   listeCours.push_back(new Cours("ALGO", "Master yi"));

   listeCours.push_back(new Cours("SYSTEM", "tryn"));

   listeCours.push_back(new Cours("LOGIQUE", "garen"));*/

    fp.show();

    return app.exec();
}

