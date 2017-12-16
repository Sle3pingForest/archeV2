#ifndef FENETRE_PRINCIPALE
#define FENETRE_PRINCIPALE

#include <QApplication>
#include <QMainWindow>
#include <QtGui>
#include <QStackedWidget>
#include <QToolBar>
#include <QLabel>
#include "accueil.h"
#include "./index/connexion.h"
#include "./gestionCours/listecours.h"
#include "./gestionCours/proposercours.h"
#include "./gestionCours/listecourenattente.h"


class FenetrePrincipale : public QMainWindow
{
    Q_OBJECT

    public:
        FenetrePrincipale();
        ~FenetrePrincipale();
        bool getCo();
        void setCo(bool v);
        //void ajouterCours(Cours *c);
        void ajouterCoursListe(Cours *c);


    public slots:
        void slotDisplayFen(int fenIndex);
        void slotPersonCo(std::string s);
        void slotAddCours(std::string s, std::string ss);
        void connecter();
        void deconnecter();
        void accueilRedirect();


    signals:
        void askDisplayFen(int fenInd);
        void askPersonCo(std::string s);
        void askCours(std::string s, std::string ss);




    private:
        //QT
        QStackedWidget *stack;
        QPushButton *connexion, *logout, *acc;
        QToolBar *qtool;

        Accueil *accueil;
        ListeCours *listeCours;
        Connexion *co;
        ProposerCours *pc;
        ListeCourEnAttente *listeAttente;
        bool estCo =false;
};


#endif
