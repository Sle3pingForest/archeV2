#include "connexion.h"

connexion::connexion()
{
    resize(228, 112);
    setWindowTitle("zDownloader");


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

    verticalLayout = new QVBoxlayout(this);

    verticalLayout.addLayout(layoutId);
    verticalLayout.addLayout(labelMdp);

    loginB = new QPushButton("Connexion");
}
