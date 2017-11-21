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

class Accueil : public QWidget
{

        Q_OBJECT
public:
    Accueil();

private slots:
    void handleButton();

private:
Connexion *co;
QVBoxLayout *verticalLayout;
QHBoxLayout *horizontalLayout;
QGridLayout *gridLayout;
QLabel *label, *label2;
QLineEdit *urlEdit;
QPushButton *connexion;
QProgressBar *progression;
bool erreurTrouvee = false; //Variable qui nous permet de savoir s'il y a eu une erreur ou non.
};

#endif // ACCUEIL_H

