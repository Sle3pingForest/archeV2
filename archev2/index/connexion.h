#include <QApplication>

#ifndef CONNEXION_H
#define CONNEXION_H

class connexion : public QWidget
{

    Q_OBJECT
    public:
        connexion();
        int getmaxVisible() const;
        int getminVisible() const;

    private:
        QLineEdit *identification;
        QLineEdit *mdp;
        QPushButton *login;



};

#endif // CONNEXION_H
