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
        bool getCo();
        void setCo(bool v);


    private:
        QStackedWidget *stack;
        Accueil *fen1;
        ListeCours *fen2;
        Connexion *fen3;
        bool co=false;
       /* FenetreSecondaire4 *fen4;*/
};


#endif
