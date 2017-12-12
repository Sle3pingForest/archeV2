#ifndef ACCUEIL_H
#define ACCUEIL_H

#include <QtGui>
#include <QtNetwork>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QNetworkAccessManager>

#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QProgressBar>
#include <QPushButton>
#include <QGridLayout>
#include <index/connexion.h>
#include "gestionCours/listecourenattente.h"


class Accueil : public QWidget
{

        Q_OBJECT
public:
    Accueil(QWidget *parent = 0);
    void setEstCo(bool f);
    bool getEstCo();
    void setPersonne(Personne *p);
    Personne* getPersonne();
    void rafraichirBouton();

    ~Accueil();


private slots:
    void on_listeCours_clicked();
    void on_proposer_clicked();
    void on_Atttente_clicked();

signals:
    void askDisplayFen(int fenInd);



private:

    //QT class
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label, *label2, *labelimgAccueil;
    QLineEdit *urlEdit;
    QPushButton *listeCours , *proposer, *attente;
    QProgressBar *progression;


    //DEV class
    ListeCourEnAttente *listeCoursEnAttente;
    bool erreurTrouvee = false; //Variable qui nous permet de savoir s'il y a eu une erreur ou non.
    bool estCo = false;
    Personne *perso;
};

#endif // ACCUEIL_H

