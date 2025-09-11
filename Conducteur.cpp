/*****************************************************************//**
 * \file   Conducteur.cpp
 * \brief  Definition de la classe Conducteur
 *
 * \author [Ton Nom]
 * \date   September 2025
 ********************************************************************/

#include "Conducteur.h"

using namespace std;

// Constructeur par defaut
Conducteur::Conducteur() {
    this->nom = "inconnu";
    this->prenom = "inconnu";
    this->anneeNaissance = 0;
}

// Constructeur avec parametres
Conducteur::Conducteur(string nom, string prenom, int anneeNaissance) {
    this->nom = nom;
    this->prenom = prenom;
    this->anneeNaissance = anneeNaissance;
}

// Destructeur
Conducteur::~Conducteur() {
    cout << "Destruction du conducteur " << this->prenom << " " << this->nom << endl;
}

// Getters
string Conducteur::getNom() { return this->nom; }
string Conducteur::getPrenom() { return this->prenom; }
int Conducteur::getAnneeNaissance() { return this->anneeNaissance; }

// Setters
void Conducteur::setNom(string nouveauNom) { this->nom = nouveauNom; }
void Conducteur::setPrenom(string nouveauPrenom) { this->prenom = nouveauPrenom; }
void Conducteur::setAnneeNaissance(int annee) { this->anneeNaissance = annee; }

// Ajouter une moto
void Conducteur::ajouterMoto(const Moto& m) {
    motos.push_back(m);
}

// Afficher toutes les infos
void Conducteur::afficherInfos() {
    cout << "Conducteur : " << this->prenom << " " << this->nom << endl;
    cout << "Annee de naissance : " << this->anneeNaissance << endl;
    cout << "Possede " << motos.size() << " moto(s) :" << endl;

    for (auto& m : motos) {
        cout << "- Moto poids : " << m.getPoids() << endl;
    }
}
