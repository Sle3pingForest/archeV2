#include <QApplication>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QDialog>
#include "checkauthentifiacation.h"

#ifndef CONNEXION_H
#define CONNEXION_H

class Connexion : public QDialog
{

    Q_OBJECT
    public:
        Connexion();
        bool getLogingOk();


    private slots:
        void handleButton();

    private:
        CheckAuthentifiacation *ca;

        QHBoxLayout *layoutId;
        QHBoxLayout *layoutpwd;
        QHBoxLayout *layoutBouton;


        QLabel *labelid;
        QLineEdit *identification;

        QLabel *labelMdp;
        QLineEdit *mdp;

        QPushButton *loginB;

        QVBoxLayout *verticalLayout;
        bool logingOk = false;

        QString ids;
        QString mdps;
};

#endif // CONNEXION_H
