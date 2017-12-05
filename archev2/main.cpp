#include <QApplication>

#include "accueil.h"
#include "index/connexion.h"
#include "gestionWindow/fenetreprincipale.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

   FenetrePrincipale fp;

  /*fp.ajouterCoursListe( new Cours("Toucan", "teemo") );
   fp.ajouterCoursListe(new Cours("CPOA", "yasuo"));
   fp.ajouterCoursListe(new Cours("ALGO", "Master yi"));*/

    fp.show();

    return app.exec();
}

