#ifndef FENETRE_PRINCIPALE
#define FENETRE_PRINCIPALE

#include <QApplication>
#include <QMainWindow>
#include <QtGui>
#include <QStackedWidget>
#include <QGridLayout>

#include "accueil.h"
#include "./index/connexion.h"
#include "./gestionCours/listecours.h"


class FenetrePrincipale : public QMainWindow
{
    Q_OBJECT

    public:
        FenetrePrincipale();
        ~FenetrePrincipale();
        bool getCo();
        void setCo(bool v);
        void ajouterCours(Cours *c);
        void ajouterCoursListe(Cours *c);

    public slots:
        void slotDisplayFen(int fenIndex);
        void connecter();
        void deconnecter();




    private:
        //QT
        QStackedWidget *stack;
        QPushButton *connexion, *logout;
        QGridLayout *layout;

        Accueil *accueil;
        ListeCours *listeCours;
        Connexion *co;
        bool estCo =false;
};


#endif
