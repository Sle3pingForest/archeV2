#include <QApplication>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QDialog>
#include <QMessageBox>
#include "checkauthentifiacation.h"

#ifndef CONNEXION_H
#define CONNEXION_H

class Connexion : public QDialog
{

    Q_OBJECT
    public:
        Connexion();
        bool getLogingOk();
        ~Connexion();


    private slots:
        void handleButton();

    private:

        //QT class
        QHBoxLayout *layoutId;
        QHBoxLayout *layoutpwd;
        QHBoxLayout *layoutBouton;
        QLabel *labelid;
        QLineEdit *identification;
        QLabel *labelMdp;
        QLineEdit *mdp;
        QPushButton *loginB;
        QVBoxLayout *verticalLayout;

        //DEV class

        CheckAuthentifiacation *ca;
        bool logingOk = false;
        string ids;
        string mdps;

};

#endif // CONNEXION_H
