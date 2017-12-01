#ifndef FENETRE_PRINCIPALE
#define FENETRE_PRINCIPALE

#include <QApplication>
#include <QMainWindow>
#include <QtGui>
#include <QStackedWidget>

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


    public slots:
        void slotDisplayFen(int fenIndex);



    private:
        QStackedWidget *stack;
        Accueil *fen1;
        ListeCours *fen2;
        Connexion *fen3;
        bool co=false;
       /* FenetreSecondaire4 *fen4;*/
};


#endif
