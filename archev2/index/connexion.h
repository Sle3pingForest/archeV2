#include <QApplication>

#ifndef CONNEXION_H
#define CONNEXION_H

class connexion : public QWidget
{

    Q_OBJECT
    public:
        connexion();

    private:
        QHBoxLayout *layoutId;
        QHBoxLayout *layoutpwd;


        QLabel *labelid;
        QLineEdit *identification;

        QLabel *labelMdp;
        QLineEdit *mdp;

        QPushButton *login;

        QVBoxLayout *verticalLayout;



};

#endif // CONNEXION_H
