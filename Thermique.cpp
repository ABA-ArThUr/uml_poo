/*****************************************************************//**
 * \file   Thermique.cpp
 * \brief  Definition de la classe Thermique
 *
 * \author arthur
 * \version 0.1
 * \date   september 2025
 *
 * Programme Cpp permettant de creer des objets pour décrire les moteurs Thermiques
 *********************************************************************/

#include "Thermique.h"



using namespace std;

/**
 * \brief Constructeur par default
 * \li Cylindree = inconnu
 */
Thermique::Thermique() {

	this->Cylindree = "inconnu";
}

/**
 * \brief Constructeur avec parametres rentres en argument
 *
 * \param de la Cylindre pour le moteur Thermique
 */
Thermique::Thermique(std::string Cylindre) {
	this->Cylindree = Cylindre;
	}


	/**
	 * \brief Destructeur
	 *
	 */
	Thermique::~Thermique() {

	cout << "Destrcution du moteur Thermique" << this->Cylindree << endl;
}

/**
 * \brief Constructeur de copie
 *
 * \param entre Objet de type Thermique
 */
Thermique::Thermique(const Thermique& miss)
{
	cout << "Copie du moteur Thermique" << endl;
	this->Cylindree = miss.Cylindree;
}

/**
 * \brief Operateur d'affectation
 *
 * \param entre Objet de type Thermique
 * \return Nouvelle objet de type Thermique
 */
Thermique& Thermique::operator=(const Thermique& miss)
{
	cout << "Affectation du moteur Thermique" << std::endl;
	if (this != &miss)  // Pour éviter que l'on ne se recopie pas...
	{
		this->Cylindree = miss.Cylindree;
	}
	return *this;
}

/**
 * \brief Accesseur de l'attribut Cylindree
 *
 * \return du moteur Thermique
 */
std::string Thermique::getCylindree()
{
	return this->Cylindree;
}

/**
 * \brief Mutateur de l'attribut Cylindree
 *
 * \param NouveauMoteur NouveauMoteurThermique
 */
void  Thermique::setCylindree(std::string NouveauMoteur) {
	this->Cylindree = NouveauMoteur;
}