#include <iostream>
#include "Conducteur.h"
#include "Moto.h"


int main() {

	//conducteur
	Conducteur conducteur("Viland", "Pierre", 1980); //initialisation du conducteur avec nom prenom et année de naissance



	Moto* m1 = new Moto("Panigale", "V4"300); //ajout de la )première moto
	Moto* m2 = new Moto("Ducati", "j'y connais rien", 600)//ajout de la deuxieme moto


	conducteur.ajouterMoto(m1);
	Conducteur.ajouterMoto(m2);
}