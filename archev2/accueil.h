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
<<<<<<< HEAD
    static void checkLoging(bool b);
    void getCo();
=======
    bool getEstCo();
>>>>>>> 555b1e571fec5932f5691b8aeb9ded8e1c21ddf1


private slots:
    void handleButton();
    void on_listeCours_clicked();

signals:
    void askDisplayFen(int fenInd);



private:

    //QT class
    Connexion *co;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label, *label2, *labelimgAccueil;
    QLineEdit *urlEdit;
    QPushButton *connexion, *listeCours, *getC;
    QProgressBar *progression;

    //DEV class
    bool erreurTrouvee = false; //Variable qui nous permet de savoir s'il y a eu une erreur ou non.
    bool estCo = false;
};

#endif // ACCUEIL_H

