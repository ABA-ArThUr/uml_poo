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
#include "Moteur.h"



using namespace std;

/**
 * \brief Constructeur par default
 * \li poids = inconnu
 * \li moteur = inconnu
 */
Moto::Moto() {

	this->Poids = "inconnu";
	this->Moteur = "inconnu";
}

/**
 * \brief Constructeur avec parametres rentres en argument
 *
 * \param du poids pour la moto
 * \param du moteur pour la moto
 */
Moto::Moto(std::string Poids, std::string Moteur) {
	this->Poids = Poids;
	this->Moteur = Moteur;
}


/**
 * \brief Destructeur
 *
 */
Moto::~Moto() {

	cout << "Destrcution du Moto Moto" << this->Poids << endl;
}

/**
 * \brief Constructeur de copie
 *
 * \param entre Objet de type Moto
 */
Moto::Moto(const Moto& miss)
{f
	cout << "Copie du Moto Moto" << endl;
	this->Puissance = miss.Puissance;
}

/**
 * \brief Operateur d'affectation
 *
 * \param entre Objet de type Moto
 * \return Nouvelle objet de type Moto
 */
Moto& Moto::operator=(const Moto& miss)
{
	cout << "Affectation du Moto Moto" << std::endl;
	if (this != &miss)  // Pour éviter que l'on ne se recopie pas...
	{
		this->Puissance = miss.Puissance;
	}
	return *this;
}

/**
 * \brief Accesseur de l'attribut Puissancee
 *
 * \return du Moto Moto
 */
std::string Moto::getPuissance()
{
	return this->Puissance;
}

/**
 * \brief Mutateur de l'attribut Puissancee
 *
 * \param NouveauMoto NouveauMotoMoto
 */
void  Moto::setPuissance(std::string NouveauMoto) {
	this->Puissance = NouveauMoto;
}