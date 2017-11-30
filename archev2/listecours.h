#ifndef LISTECOURS_H
#define LISTECOURS_H

#include <QLabel>
#include <QGridLayout>
#include <QPushButton>

class ListeCours : public QWidget
{
         Q_OBJECT
public:
    ListeCours(QWidget *parent = 0);
    ~ListeCours();


private slots:
     void handleButton();

signals:
    void askDisplayFen(int fenInd);

private:
     QLabel *label, *label2;
     QGridLayout *gridLayout;
     QPushButton *connexion;
     bool co=false;
};

#endif // LISTECOURS_H
