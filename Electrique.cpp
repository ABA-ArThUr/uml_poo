/*****************************************************************//**
 * \file   Electrique.cpp
 * \brief  Definition de la classe Electrique
 *
 * \author arthur
 * \version 0.1
 * \date   september 2025
 *
 * Programme Cpp permettant de creer des objets pour décrire les moteurs Electriques
 *********************************************************************/

#include "Electrique.h"



using namespace std;

/**
 * \brief Constructeur par default
 * \li TensionMax = inconnu
 */
Electrique::Electrique() {

	this->TensionMax = "inconnu";
}

/**
 * \brief Constructeur avec parametres rentres en argument
 *
 * \param de la tension pour le moteur Electrique
 */
Electrique::Electrique(std::string Tension {
	this->TensionMax = Tension;
}


/**
 * \brief Destructeur
 *
 */
Electrique::~Electrique() {

	cout << "Destrcution du moteur Electrique" << this->TensionMax << endl;
}

/**
 * \brief Constructeur de copie
 *
 * \param entre Objet de type Electrique
 */
Electrique::Electrique(const Electrique& miss)
{
	cout << "Copie du moteur" << endl;
	this->TensionMax = miss.TensionMax;
}

/**
 * \brief Operateur d'affectation
 *
 * \param entre Objet de type Electrique
 * \return Nouvelle objet de type Electrique
 */
Electrique& Electrique::operator=(const Electrique& miss)
{
	cout << "Affectation du moteur Electrique" << std::endl;
	if (this != &miss)  // Pour éviter que l'on ne se recopie pas...
	{
		this->TensionMax = miss.TensionMax;
	}
	return *this;
}

/**
 * \brief Accesseur de l'attribut TensionMax
 *
 * \return du moteur Electrique
 */
std::string Electrique::getTensionMax()
{
	return this->TensionMax;
}

/**
 * \brief Mutateur de l'attribut TensionMax
 *
 * \param NouveauMoteur NouveauMoteurElectrique
 */
void  Electrique::setTensionMax(std::string NouveauMoteur) {
	this->TensionMax = NouveauMoteur;
}