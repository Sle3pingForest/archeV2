#ifndef LISTECOURENATTENTE_H
#define LISTECOURENATTENTE_H

#include <QtGui>
#include "string"
#include "cours.h"
#include "vector"
#include <iostream>
#include <QWidget>


class ListeCourEnAttente: public QWidget
{
    Q_OBJECT
    public:
        ListeCourEnAttente(QWidget *parent = 0);
        void proposerCours(std::string titre, std::string nom);
        void ajouterCours(Cours c);
        ~ListeCourEnAttente();

    signals:
        void askDisplayFen(int fenInd);

    private:
        std::vector<Cours> listCoursAttente;
};

#endif // LISTECOURENATTENTE_H
