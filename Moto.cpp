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

	cout << "Destrcution du Moto Moto" << this->Poids << " " << this->Moteur << endl;
}

/**
 * \brief Constructeur de copie
 *
 * \param entre Objet de type Moto
 */
Moto::Moto(const Moto& miss)
{
	cout << "Copie de la Moto" << endl;
	this->Poids = miss.Poids;
	this->Moteur = miss.Moteur;
}

/**
 * \brief Operateur d'affectation
 *
 * \param entre Objet de type Moto
 * \return Nouvelle objet de type Moto
 */
Moto& Moto::operator=(const Moto& miss)
{
	cout << "Affectation de la Moto" << std::endl;
	if (this != &miss)
	{
		this->Poids = miss.Poids;
		this->Moteur = miss.Moteur;
	}
	return *this;
}


/**
* \brief Accesseur de l'attribut Moteur
*
* \return de la Moto
*/
std::string Moto::getMoteur()
{
	return this->Moteur;
}

/**
 * \brief Accesseur de l'attribut Poids
 *
 * \return du Moto Moto
 */
std::string Moto::getPoids()
{
	return this->Poids;
}

/**
 * \brief Mutateur de l'attribut Moteur
 *
 * \param NouveauMoto NouveauMoteur
 */
void  Moto::setMoteur(std::string NouveauMoteur) {
	this->Moteur = NouveauMoteur;
}

/**
 * \brief Mutateur de l'attribut Poids
 *
 * \param NouveauMoto NouveauPoids
 */
void  Moto::setPoids(std::string NouveauPoids) {
	this->Poids = NouveauPoids;
}