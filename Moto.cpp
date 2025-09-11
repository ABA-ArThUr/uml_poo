/*****************************************************************//**
 * \file   Moto.cpp
 * \brief  Definition de la classe Moto
 *
 * \author arthur
 * \version 0.1
 * \date   september 2025
 *
 * Programme Cpp permettant de creer des objets pour décrire les Motos
 *********************************************************************/

#include "Moto.h"

using namespace std;

/**
 * \brief Constructeur par default
 * \li poids = inconnu
 * \li Moto = inconnu
 */
Moto::Moto() {

	this->Poids = "inconnu";
}

Moto::Moto(std::string Poids) {
	this->Poids = Poids;
}

Moto::~Moto() {

	cout << "Destrcution du Moto Moto" << this->Poids << endl;
}

Moto::Moto(const Moto& miss)
{
	cout << "Copie du Moto Moto" << endl;
	this->Poids = miss.Poids;
}

Moto& Moto::operator=(const Moto& miss)
{
	cout << "Affectation du Moto Moto" << std::endl;
	if (this != &miss)  
	{
		this->Poids = miss.Poids;
	}
	return *this;
}

std::string Moto::getPoids()
{
	return this->Poids;
}

void  Moto::setPoids(std::string NouveauMoto) {
	this->Poids = NouveauMoto;
}