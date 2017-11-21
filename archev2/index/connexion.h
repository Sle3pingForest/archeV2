#include <QApplication>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

#ifndef CONNEXION_H
#define CONNEXION_H

class Connexion : public QWidget
{

    Q_OBJECT
    public:
        Connexion();

    private:
        QHBoxLayout *layoutId;
        QHBoxLayout *layoutpwd;


        QLabel *labelid;
        QLineEdit *identification;

        QLabel *labelMdp;
        QLineEdit *mdp;

        QPushButton *loginB;

        QVBoxLayout *verticalLayout;
};

#endif // CONNEXION_H
