#include "listecourenattente.h"
#include <QMessageBox>

ListeCourEnAttente::ListeCourEnAttente(QWidget *parent) : QWidget(parent)
{



    gridLayout = new QGridLayout();
    gridLayout->setVerticalSpacing(0);

    label = new QLabel(this);
    label->setText("LISTE COURS EN ATTENTE");
    label->setAlignment(Qt::AlignHCenter);
    gridLayout->addWidget(label,0,0,0,4);

       Cours *cour = new Cours("Systeme" , "Colleen");
       this->ajouterCours( *cour );

        Cours *courr = new Cours("BDD" , "Whisky");
        this->ajouterCours( *courr);

       Cours *court = new Cours("Sport" , "Lee ou Ly");
        this->ajouterCours( *court );

        setLayout(gridLayout);
        creModel();

}

void ListeCourEnAttente:: proposerCours(string titre, string nom){
    Cours *c = new Cours(titre, nom);
    ajouterCours(*c);
}

void ListeCourEnAttente:: ajouterCours(Cours c){
    listCoursAttente.push_back(c);
    creModel();
}

ListeCourEnAttente:: ~ListeCourEnAttente(){

}


void ListeCourEnAttente::validation(QString s){

   bool trouve =false;
    int i = 0;
    std::string nome;
    std::vector<Cours>::iterator it = listCoursAttente.begin();
    while(it != listCoursAttente.end() && !trouve) {
        if ( (*it).getNomCours() == s.toStdString() ) {
             nome =     (*it).getNomEnseignant();
             trouve = true;
             std::cout<< "Validation"+s.toStdString()  << endl;

             QMessageBox::information(this, tr("Validation"),
                                               "Le cours a été validé : "+QString( s ) ,
                                             QMessageBox::Ok);
             buttons.at(i)->setEnabled(false);

             emit askCours(s.toStdString(), nome);
        } else {
            i++;
            it++;
        }
    }

    listCoursAttente.erase(listCoursAttente.begin()+i);
    buttons.removeAt(i);
    model->removeRow(i);
    vueliste->repaint();

}


void:: ListeCourEnAttente::creModel(){
    int i =0;

    int column = listCoursAttente.size();


    cout<<listCoursAttente.size()<<endl;

    model = new QStandardItemModel(3, column,this);
    model->setHorizontalHeaderItem(0 , new QStandardItem("Nom cours"));
    model->setHorizontalHeaderItem(1 , new QStandardItem("Enseignant"));
    model->setHorizontalHeaderItem(2 , new QStandardItem("Valider"));

    vueliste = new QTableView(this);

    for(std::vector<Cours>::iterator it = listCoursAttente.begin(); it != listCoursAttente.end(); it++, i++)    {

        model->setItem(i , 0 , new QStandardItem( QString( QString::fromStdString( (*it).getNomCours() ) ) ) );
        model->setItem(i , 1 , new QStandardItem( QString( QString::fromStdString( (*it).getNomEnseignant()  ) ) ) );
         std::cout<< "yolo"+(*it).getNomCours()  << endl;

    }

 vueliste->setModel(model);
 i = 0;

 mapper = new QSignalMapper(this);

 connect(mapper, SIGNAL(mapped(QString)) , this , SLOT(validation(QString)));

    buttons.clear();
    //resources_boutons

  for(std::vector<Cours>::iterator it = listCoursAttente.begin(); it != listCoursAttente.end(); it++)    {


    buttons.append( new QPushButton("Valider"));

    vueliste->setIndexWidget(model->index(i,2), buttons.at(i));
    mapper->setMapping(buttons.at(i) , QString( QString::fromStdString( (*it).getNomCours() ) ) );

    connect(buttons.at(i) , SIGNAL(clicked() ) , mapper , SLOT(map() ));
    i++;

}



     gridLayout->addWidget(vueliste,200,150);

}
