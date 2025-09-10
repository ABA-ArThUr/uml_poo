#ifndef CONDUCTEUR_H
#define CONDUCTEUR_H

#include <string>
#include <vector>
//#include "Moto.h"

/**
 * @brief Classe représentant un conducteur.
 */
class Conducteur {
private:
    std::string nom;
    std::string prenom;
    int anneeNaissance;
   // std::vector<Moto*> motos; etoile car plusieur moto 

public:
    Conducteur(const std::string& nom, const std::string& prenom, int anneeNaissance);

    std::string getNom() const;
    std::string getPrenom() const;
    int getAnneeNaissance() const;   
    int getAge() const;

    void Conducteur::setNom(const std::string& n) { nom = n; }
    void Conducteur::setPrenom(const std::string& p) { prenom = p; }
    void setAnneeNaissance(int annee);

