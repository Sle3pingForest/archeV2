QT += widgets
QT += network
CONFIG += c++11

SOURCES += \
    main.cpp \
    accueil.cpp \
    index/connexion.cpp \
    index/checkauthentifiacation.cpp \
    gestionCours/cours.cpp \
    gestionCours/listecours.cpp \
    gestionWindow/fenetreprincipale.cpp \
    personne/etudiant.cpp \
    personne/enseignant.cpp \
    gestionCours/listecourenattente.cpp

HEADERS += \
    accueil.h \
    index/connexion.h \
    index/checkauthentifiacation.h \
    gestionCours/cours.h \
    gestionCours/listecours.h \
    gestionWindow/fenetreprincipale.h \
    personne/etudiant.h \
    personne/enseignant.h \
    gestionCours/listecourenattente.h
