#include "listecours.h"
#include <iostream>
#include <QStringList>
#include <QStandardItemModel>
#include <QGraphicsScene>
#include <QSignalMapper>
#include <QTableWidgetItem>

ListeCours::ListeCours(QWidget *parent) : QWidget(parent)
{
    // QT
    gridLayout = new QGridLayout();
    gridLayout->setVerticalSpacing(0);

    label = new QLabel(this);
    label->setText("LISTE COURS");
    label->setAlignment(Qt::AlignHCenter);
    gridLayout->addWidget(label,0,0,0,4);


    setLayout(gridLayout);


    //DEV


    int i =0,j=0;

    this->ajouterCoursListe( new Cours("Toucan" , "teemo") );
    this->ajouterCoursListe( new Cours("CPOA" , "yasuo"));
    this->ajouterCoursListe( new Cours("ALGO" , "Master yi"));
    int column = coursList.size();

    QStandardItemModel *model = new QStandardItemModel(3, column,this);
    model->setHorizontalHeaderItem(0 , new QStandardItem("Nom cours"));
    model->setHorizontalHeaderItem(1 , new QStandardItem("Enseignant"));
    model->setHorizontalHeaderItem(2 , new QStandardItem("Inscription"));

    vueliste = new QTableView(this);

    for(QList<Cours*>::iterator it = coursList.begin(); it != coursList.end(); it++, i++)    {

        model->setItem(i , 0 , new QStandardItem( QString( QString::fromStdString( (*it)->getNomCours() ) ) ) );
        model->setItem(i , 1 , new QStandardItem( QString( QString::fromStdString( (*it)->getNomEnseignant()  ) ) ) );

    }




    // -------------------------

   /* listevue = new QTableWidget(this);

    listevue->setHorizontalHeaderItem(0, new QTableWidgetItem("Nom cours"));
    listevue->setHorizontalHeaderItem(1, new QTableWidgetItem(QString("Enseignant")));
    listevue->setHorizontalHeaderItem(2, new QTableWidgetItem(QString("Inscription")));


    QSignalMapper *mapper = new QSignalMapper();

      for(QList<Cours*>::iterator it = coursList.begin(); it != coursList.end(); it++, i++)    {

           QPushButton *qb = new QPushButton("inscription") ;

           connect(qb, SIGNAL(clicked() ), mapper , SLOT(map() ));
           mapper->setMapping(qb, QString( QString::fromStdString( (*it)->getNomCours() ) ) );

           listevue->setItem(i,0,new QTableWidgetItem( QString( QString::fromStdString( (*it)->getNomCours() ) ) ) );
           listevue->setItem(i,1,new QTableWidgetItem( QString( QString::fromStdString( (*it)->getNomEnseignant()  ) ) ) );
           listevue->setCellWidget(i,2, qb);
      }

      connect(mapper, SIGNAL(mapped(QString)), this, SLOT(inscription(QString)));*/



     vueliste = new QTableView(this);
     vueliste->setModel(model);
     i = 0;

     QSignalMapper *mapper = new QSignalMapper(this);
     connect(mapper, SIGNAL(mapped(QString)) , this , SLOT(inscription(QString)));

      for(QList<Cours*>::iterator it = coursList.begin(); it != coursList.end(); it++, i++)    {

        QPushButton *qb = new QPushButton("inscription") ;
        vueliste->setIndexWidget(model->index(i,2), qb);
        mapper->setMapping(qb , QString( QString::fromStdString( (*it)->getNomCours() ) ) );

        connect(qb , SIGNAL(clicked() ) , mapper , SLOT(map() ));
    }

      gridLayout->addWidget(vueliste,100,20);

      std::cout<< "test" << endl;


}


ListeCours::~ListeCours() {

}

void ListeCours::handleButton() {
    emit askDisplayFen(0);
}

void ListeCours::ajouterCours(Cours *c) {
    listeCours.push_back(c);
}

void ListeCours::ajouterCoursListe(Cours *c) {
    coursList.append(c);
}


string ListeCours::getNomDeCours(int i){

    return listeCours[i]->getNomCours();
}


string ListeCours::getNomDeEns(int i){

    /*for(list<int>::iterator it = listNomDeCours.begin(); it!=listNomDeCours.end(); ++it)
    {
        std::advance(it, i);
    }
*/
    return "ENS" ;
}


Cours* ListeCours::getCours(int i){
    return listeCours[i];
}


void ListeCours::inscription(QString s){
    std::cout<< s.toStdString() << endl;
}
