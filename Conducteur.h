/*****************************************************************//**
 * \file   Conducteur.h
 * \brief  Declaration de la classe Conducteur
 *
 * \author [Ton Nom]
 * \date   September 2025
 ********************************************************************/

#ifndef CONDUCTEUR_H
#define CONDUCTEUR_H

#include <iostream>
#include <string>
#include <vector>
#include "Moto.h"

 /*! \class Conducteur
    * \brief classe representant un conducteur avec un nom, prenom et annee de naissance
    */
class Conducteur
{
private:
    std::string nom;
    std::string prenom;
    int anneeNaissance;
    std::vector<Moto> motos; // liste des motos possedées

public:
    // Constructeurs
    Conducteur();
    Conducteur(std::string nom, std::string prenom, int anneeNaissance);
    ~Conducteur();

    // Getters / Setters
    std::string getNom();
    std::string getPrenom();
    int getAnneeNaissance();

    void setNom(std::string nouveauNom);
    void setPrenom(std::string nouveauPrenom);
    void setAnneeNaissance(int annee);

    // Gestion des motos
    void ajouterMoto(const Moto& m);
    void afficherInfos();
};

#endif
