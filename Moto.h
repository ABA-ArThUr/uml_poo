#/*****************************************************************//**
* \file   Moteur.h
* \brief  Declaration de la classe Moteur
*
* \author Arthur
* \date   september 2025
* ********************************************************************/

#ifndef Moto_H
#define Moto_H

#include <iostream>
#include <string>
#include "Moteur.h"

/*! \class Moteur
   * \brief classe representant une Moteur. 3 attributs prives
   */
class Moto
{
private:
	
	Moteur moteur;
    std::string Poids;

protected:

public:
    /*Classe sous forme canonique*/
    Moto();
	~Moto();
	Moto(const Moto& miss);
	Moto& operator = (const Moto& miss);
	std::string getPoids();
	void setPoids(std::string nouveauPoids);
	Moto(std::string Poids);

};  


#endif