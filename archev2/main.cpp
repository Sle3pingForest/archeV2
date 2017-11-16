#include <QApplication>

#include "accueil.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);


    Accueil acc;

    acc.show();

    return app.exec();
}
