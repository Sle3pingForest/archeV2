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

   /* printf("%s", *argv);
    QLabel label;
      //on donne l'image au label
      label.setPixmap(QPixmap("../archev2/img/imgApplication/accueil.jpg"));
      label.show();*/

    return app.exec();
}
