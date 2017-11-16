#include <QApplication>
#include <QPushButton>


int main(int argc, char *argv[]){

    QApplication app(argc, argv);

    /*affichage un bouton */
    QPushButton bouton("Sle3ping Forest");
    bouton.show();


    return app.exec();

}
