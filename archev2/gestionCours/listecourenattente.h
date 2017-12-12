#ifndef LISTECOURENATTENTE_H
#define LISTECOURENATTENTE_H

#include <QtGui>
#include "string"
#include "cours.h"
#include "vector"
#include <iostream>
#include <QWidget>
#include <QTableView>
#include <QTableWidget>
#include <QPushButton>
#include <QLabel>
#include <QGridLayout>
#include <QStandardItemModel>


class ListeCourEnAttente: public QWidget
{
    Q_OBJECT
    public:
        ListeCourEnAttente(QWidget *parent = 0);
        void proposerCours(std::string titre, std::string nom);
        void ajouterCours(Cours c);
        ~ListeCourEnAttente();


public slots:
     void validation(QString s);



    signals:
        void askDisplayFen(int fenInd);
        void askCours(std::string s, std::string ss);



    private:
        QGridLayout *gridLayout;
        QStandardItemModel *model;
        QLabel *label;
        std::vector<Cours> listCoursAttente;
        QTableView *vueliste;
        QTableWidget *listevue;
        QList<QPushButton*> buttons;
};

#endif // LISTECOURENATTENTE_H
