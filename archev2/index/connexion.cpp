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

    layoutpwd->addWidget(labelMdp);
    layoutpwd->addWidget(mdp);



    verticalLayout->addLayout(layoutId);
    verticalLayout->addLayout(layoutpwd);

    loginB = new QPushButton("Connexion");
}
