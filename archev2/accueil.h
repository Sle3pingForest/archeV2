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
    Accueil(QWidget *parent = 0);
    ~Accueil();
    bool getEstCo();


private slots:
    void handleButton();
    void on_listeCours_clicked();

signals:
    void askDisplayFen(int fenInd);

private:

    bool estCo = false;
    Connexion *co;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label, *label2, *labelimgAccueil;
    QLineEdit *urlEdit;
    QPushButton *connexion, *listeCours;
    QProgressBar *progression;
    bool erreurTrouvee = false; //Variable qui nous permet de savoir s'il y a eu une erreur ou non.
};

#endif // ACCUEIL_H

