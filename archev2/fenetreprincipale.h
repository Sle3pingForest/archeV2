#ifndef FENETRE_PRINCIPALE
#define FENETRE_PRINCIPALE

#include <QApplication>
#include <QMainWindow>
#include <QtGui>
#include <QStackedWidget>

#include "accueil.h"
#include "index/connexion.h"
#include "listecours.h"


class FenetrePrincipale : public QMainWindow
{
    Q_OBJECT

    public:
        FenetrePrincipale();
        ~FenetrePrincipale();


    public slots:
        void slotDisplayFen(int fenIndex);


    private:
        QStackedWidget *stack;
        Accueil *fen1;
        ListeCours *fen2;
        Connexion *fen3;
       /* FenetreSecondaire4 *fen4;*/
};


#endif
