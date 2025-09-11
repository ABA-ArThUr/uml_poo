/*****************************************************************//**
 * \file   Moteur.cpp
 * \brief  Definition de la classe Moteur
 *
 * \author arthur
 * \version 0.1
 * \date   september 2025
 *
 * Programme Cpp permettant de creer des objets pour décrire les moteurs Moteurs
 *********************************************************************/

#include "Moteur.h"
#include "Thermique.h"
#include "Electrique.h"



using namespace std;

/**
 * \brief Constructeur par default
 * \li Puissancee = inconnu
 */
Moteur::Moteur() {

	this->Puissance = "inconnu";
}

/**
 * \brief Constructeur avec parametres rentres en argument
 *
 * \param de la Puissance pour le moteur Moteur
 */
Moteur::Moteur(std::string Puissance) {
	this->Puissance = Puissance;
	}


	/**
	 * \brief Destructeur
	 *
	 */
	Moteur::~Moteur() {

	cout << "Destrcution du moteur Moteur" << this->Puissance << endl;
}

/**
 * \brief Constructeur de copie
 *
 * \param entre Objet de type Moteur
 */
Moteur::Moteur(const Moteur& miss)
{
	cout << "Copie du moteur Moteur" << endl;
	this->Puissance = miss.Puissance;
}

/**
 * \brief Operateur d'affectation
 *
 * \param entre Objet de type Moteur
 * \return Nouvelle objet de type Moteur
 */
Moteur& Moteur::operator=(const Moteur& miss)
{
	cout << "Affectation du moteur Moteur" << std::endl;
	if (this != &miss)  // Pour éviter que l'on ne se recopie pas...
	{
		this->Puissance = miss.Puissance;
	}
	return *this;
}

/**
 * \brief Accesseur de l'attribut Puissancee
 *
 * \return du moteur Moteur
 */
std::string Moteur::getPuissance()
{
	return this->Puissance;
}

/**
 * \brief Mutateur de l'attribut Puissancee
 *
 * \param NouveauMoteur NouveauMoteurMoteur
 */
void  Moteur::setPuissance(std::string NouveauMoteur) {
	this->Puissance = NouveauMoteur;
}