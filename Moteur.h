/*****************************************************************//**
* \file   Moteur.h
* \brief  Declaration de la classe Moteur
*
* \author Arthur
* \date   september 2025
* ********************************************************************/

#ifndef Moteur_H
#define Moteur_H

#include <iostream>
#include <string>
#include "Thermique.h"
#include "Electrique.h"

/*! \class Moteur
   * \brief classe representant une Moteur. 3 attributs prives
   */
class Moteur
{
private:
    /**
     * Membre prive Puissance : contient le nombre de personnes pour la Moteur
     */
    std::string Puissance;

protected:

public:
    /*Classe sous forme canonique*/
    Moteur();
    ~Moteur();
    Moteur(const Moteur& miss);
    Moteur& operator = (const Moteur& miss);
    Moteur(std::string Puissance);
	std::string getPuissance();
    void setPuissance(std::string nouveauPuissance);
};

#endif
