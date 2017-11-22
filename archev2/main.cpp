#include <QApplication>

#include "accueil.h"
#include "index/connexion.h"
#include "fenetreprincipale.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);


  /* Accueil acc;

    acc.show();*/

   FenetrePrincipale fp;

    fp.show();

    return app.exec();
}
