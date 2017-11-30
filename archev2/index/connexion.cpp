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

Connexion::~Connexion() {
    delete ca;
}

void Connexion::handleButton()
 {
    ca = new CheckAuthentifiacation();
    ids = identification->text().toStdString();
    mdps = mdp->text().toStdString();
    if(ca->checkUser(ids,mdps)){
        logingOk = true;

    }
    else{
        logingOk = false;
        QMessageBox::warning(this, tr("wrong login"),
                                        tr("L'indentifiant ou le mot de passe \n"
                                           "est éronné "),
                                        QMessageBox::Ok);
    }
    this->close();
}


bool Connexion::getLogingOk(){
    return logingOk;
}




