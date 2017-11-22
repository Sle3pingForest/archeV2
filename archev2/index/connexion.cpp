#include "connexion.h"

Connexion::Connexion()
{
    resize(228, 112);
    setWindowTitle("CONNEXION");

    verticalLayout = new QVBoxLayout(this);

    layoutId = new QHBoxLayout();
    labelid = new QLabel(this);
    labelid->setText("Users :");
    identification = new QLineEdit("Enter you login",this);

    layoutId->addWidget(labelid);
    layoutId->addWidget(identification);


    layoutpwd =  new QHBoxLayout();
    labelMdp = new QLabel(this);
    labelMdp->setText("Pwd : ");
    mdp = new QLineEdit("Enter your password",this);
    mdp->setEchoMode(QLineEdit::Password);

    layoutpwd->addWidget(labelMdp);
    layoutpwd->addWidget(mdp);



    loginB = new QPushButton("Log in");

    layoutBouton = new QHBoxLayout();
    layoutBouton->addWidget(loginB);


    verticalLayout->addLayout(layoutId);
    verticalLayout->addLayout(layoutpwd);
    verticalLayout->addLayout(layoutBouton);

    connect(loginB, SIGNAL (released()), this, SLOT (handleButton()));

}


void Connexion::handleButton()
 {
    ca = new CheckAuthentifiacation();
    ids = identification->text();
    mdps = mdp->text();
    if(ca->checkUser(ids.toStdString(),mdps.toStdString())){
        logingOk = true;

    }
    else{
        logingOk = false;
    }
    this->close();
}


bool Connexion::getLogingOk(){
    return logingOk;
}




