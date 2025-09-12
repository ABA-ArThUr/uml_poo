/*****************************************************************//**
 * \file   Moto.cpp
 * \brief  Définition de la classe Moto
 *
 * \author arthur
 * \version 0.1
 * \date   september 2025
 *
 * Programme C++ permettant de créer des objets pour décrire des Motos
 *********************************************************************/

#include "Moto.h"    // Inclusion du fichier d’en-tête où la classe est déclarée

using namespace std; // Évite d’écrire std:: devant string, cout, endl, etc.

/**
 * \brief Constructeur par défaut
 * Initialise le poids à "inconnu".
 */
Moto::Moto() {
	this->Poids = "inconnu";
}

/**
 * \brief Constructeur avec paramètre
 * \param Poids : poids de la moto fourni à la création
 */
Moto::Moto(std::string Poids) {
	this->Poids = Poids;
}

/**
 * \brief Destructeur
 * Affiche un message lors de la destruction d’un objet Moto.
 */
Moto::~Moto() {
	cout << "Destruction de la Moto : " << this->Poids << endl;
}

/**
 * \brief Constructeur de copie
 * \param miss : Moto à copier
 * Copie la valeur de Poids à partir d’un autre objet.
 */
Moto::Moto(const Moto& miss) {
	cout << "Copie d’une Moto" << endl;
	this->Poids = miss.Poids;
}

/**
 * \brief Opérateur d’affectation =
 * \param miss : Moto à affecter
 * \return référence sur l’objet courant (*this)
 *
 * Permet d’affecter un objet Moto existant à un autre.
 * Vérifie l’auto-affectation avant de copier.
 */
Moto& Moto::operator=(const Moto& miss) {
	cout << "Affectation d’une Moto" << std::endl;
	if (this != &miss)  // Vérifie qu’on n’affecte pas un objet à lui-même
	{
		this->Poids = miss.Poids;
	}
	return *this;
}

/**
 * \brief Accesseur (getter) du poids
 * \return le poids de la Moto
 */
std::string Moto::getPoids() {
	return this->Poids;
}

/**
 * \brief Mutateur (setter) du poids
 * \param NouveauMoto : nouvelle valeur du poids
 */
void Moto::setPoids(std::string NouveauMoto) {
	this->Poids = NouveauMoto;
}
