#include "listecours.h"
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
    personCo = 0;

    //DEV


    int i =0;

    this->ajouterCoursListe( new Cours("Toucan" , "teemo") );
    this->ajouterCoursListe( new Cours("CPOA" , "yasuo"));
    this->ajouterCoursListe( new Cours("ALGO" , "Master yi"));

    personlist.append(new Personne("sleeping", "forest",1));
    personlist.append(new Personne("a", "z",1));

    int column = coursList.size();

    QStandardItemModel *model = new QStandardItemModel(3, column,this);
    model->setHorizontalHeaderItem(0 , new QStandardItem("Nom cours"));
    model->setHorizontalHeaderItem(1 , new QStandardItem("Enseignant"));
    model->setHorizontalHeaderItem(2 , new QStandardItem("Inscription"));
    model->setHorizontalHeaderItem(3 , new QStandardItem("Desinscription"));

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


     QSignalMapper *mapper2 = new QSignalMapper(this);
     connect(mapper, SIGNAL(mapped(QString)) , this , SLOT(inscription(QString)));


     connect(mapper2, SIGNAL(mapped(QString)) , this , SLOT(desinscription(QString)));

        buttons.clear();
        desinscription_boutons.clear();

      for(QList<Cours*>::iterator it = coursList.begin(); it != coursList.end(); it++)    {


        buttons.append( new QPushButton("Inscription"));
        desinscription_boutons.append(new QPushButton("Desinscription"));

        vueliste->setIndexWidget(model->index(i,2), buttons.at(i));
        mapper->setMapping(buttons.at(i) , QString( QString::fromStdString( (*it)->getNomCours() ) ) );


        vueliste->setIndexWidget(model->index(i,3), desinscription_boutons.at(i));
        mapper2->setMapping(desinscription_boutons.at(i) , QString( QString::fromStdString( (*it)->getNomCours() ) ) );

        connect(buttons.at(i) , SIGNAL(clicked() ) , mapper , SLOT(map() ));
        connect(desinscription_boutons.at(i) , SIGNAL(clicked() ) , mapper2 , SLOT(map() ));

        i++;

    }

      gridLayout->addWidget(vueliste,100,20);



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


void ListeCours::supprimerCoursListe(Cours *c){
    int i = coursList.lastIndexOf(c);
    coursList.takeAt(i);
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
    i++;
    return "ENS" ;
}


Cours* ListeCours::getCours(int i){
    return listeCours[i];
}


void ListeCours::inscription(QString s){
    bool trouve =false;

    QList<Cours*>::iterator it = coursList.begin();
    while(it != coursList.end() && !trouve) {
        if ( (*it)->getNomCours() == s.toStdString() && !personlist.at(personCo)->getListeCours().contains(*it)) {
             personlist.at(personCo)->ajouterCours( (*it) );
             trouve = true;
             std::cout<< "AJOUT DU COURS "+s.toStdString()  << endl;

             QMessageBox::information(this, tr("Inscription"),
                                               "Vous vous etes inscrits au cours : "+QString( s ) ,
                                             QMessageBox::Ok);
        } else if ((*it)->getNomCours() == s.toStdString() && personlist.at(personCo)->getListeCours().contains(*it)) {
            QMessageBox::warning(this, tr("inscription"),
                                              "Vous etes deja inscrits au cours : "+QString( s ) ,
                                            QMessageBox::Ok);
        }
        it++;
    }
}


/*
void ListeCours::desinscription(QString s){
    bool trouve =false;
     std::cout<< "azerty "<< endl;

    QList<Cours*>::iterator it = coursList.begin();/*
    while(it != coursList.end() && !trouve) {
        if ( (*it)->getNomCours() == s.toStdString() && !personlist.at(personCo)->getListeCours().contains(*it)) {
             QMessageBox::warning(this, tr("Desinscription"),
                                               "Vous vous n'etes pas inscrits au cours : "+QString( s ) ,
                                             QMessageBox::Ok);
        } else if ((*it)->getNomCours() == s.toStdString() && personlist.at(personCo)->getListeCours().contains(*it)) {
            trouve = true;
            personlist.at(personCo)->supprimerCours( (*it) );
             std::cout<< "SUPRESSION DU COURS "+s.toStdString()  << endl;
            QMessageBox::information(this, tr("desinscription"),
                                              "Vous etes desinscrits au cours : "+QString( s ) ,
                                            QMessageBox::Ok);
        }
        it--;
    }*/
}

*/
void ListeCours::setPersonCo(std::string i) {
    int a = 0;
    bool trouve =false;
    QList<Personne*>::iterator it = personlist.begin();
    while(it != personlist.end() && !trouve)    {
        if ( (*it)->getNom() == i) {
            personCo = a;
            trouve = true;
        }
        it++,
        a++;
    }
}

QList<Personne*> ListeCours::getPersonList() {
    return personlist;
}
