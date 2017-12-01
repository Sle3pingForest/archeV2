#include <QApplication>

#include "accueil.h"
#include "index/connexion.h"
#include "gestionWindow/fenetreprincipale.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

   FenetrePrincipale fp;

   fp.ajouterCours(new Cours("Toucan", "teemo"));
   fp.ajouterCours(new Cours("CPOA", "yasuo"));
   fp.ajouterCours(new Cours("ALGO", "Master yi"));

    fp.show();

    return app.exec();
}

