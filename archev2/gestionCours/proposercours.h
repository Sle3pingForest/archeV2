
#ifndef PROPOSERCOURS_H
#define PROPOSERCOURS_H

#include <QtGui>
#include <QLineEdit>
#include <QTextEdit>
#include <QGridLayout>
#include <QPushButton>
#include <QMessageBox>
#include "cours.h"

class ProposerCours : public QWidget
{
    Q_OBJECT
    public:
        ProposerCours(QWidget *parent = 0);
        ~ProposerCours();

    signals:
        void askDisplayFen(int fenInd);


    private slots:
        void validerCours();

    private:

        //QT class
        QLineEdit *nomCours, *nomEns;
        QTextEdit *detailDuCours;
        QGridLayout *gridLayout;
        QPushButton *valider;

        //DEV class
        Cours *cours;
};

#endif // PROPOSERCOURS_H
