#include "listecours.h"

ListeCours::ListeCours(QWidget *parent) : QWidget(parent)
{

    gridLayout = new QGridLayout();
    gridLayout->setVerticalSpacing(0);

    label = new QLabel(this);
    label->setText("LISTE COURS");
    label->setAlignment(Qt::AlignHCenter);
    gridLayout->addWidget(label,0,0,0,4);

    connexion = new QPushButton("Connexion",this);
    connexion->setMaximumWidth(80);
    connexion->setMaximumHeight(30);
    gridLayout->addWidget(connexion,0,5);

    connect(connexion, SIGNAL (clicked()), this, SLOT (handleButton()));

    setLayout(gridLayout);
}


ListeCours::~ListeCours() {

}

void ListeCours::handleButton() {
    emit askDisplayFen(0);
}
