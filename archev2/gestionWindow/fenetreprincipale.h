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
        void slotPersonCo(std::string s);
        void connecter();
        void deconnecter();
    signals:
        void askDisplayFen(int fenInd);
        void askPersonCo(std::string s);




    private:
        //QT
        QStackedWidget *stack;
        QPushButton *connexion, *logout;
        QToolBar *qtool;

        Accueil *accueil;
        ListeCours *listeCours;
        Connexion *co;
        bool estCo =false;
};


#endif
