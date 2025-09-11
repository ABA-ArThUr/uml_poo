#/*****************************************************************//**
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
#include "Moteur.h"

/*! \class Moteur
   * \brief classe representant une Moteur. 3 attributs prives
   */
class Moto
{
private:
    /**
     * Membre prive Moteur : contient le moteur pour la Moteur
     */
    std::string Moteur;
    /**
     * Membre prive Poids : contient le Poids de la Moteur
     */
    std::string Poids;

protected:

public:
    /*Classe sous forme canonique*/
    Moto();
	~Moto();
	Moto(const Moto& miss);
	Moto& operator = (const Moto& miss);
	Moto(std::string Poids, std::string Moteur);
	std::string getPoids();
	void setPoids(std::string nouveauPoids);
	std::string getMoteur();
	void setMoteur(std::string nouveauMoteur);
};  


#endif