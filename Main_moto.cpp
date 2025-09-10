#include <iostream>
#include "Electrique.h"
#include "Thermique.h"
#include "Moteur.h"

int main() {
    // Création d'un moteur électrique avec une tension maximale
    Electrique moteurElectrique("220"); // Exemple de tension max

    // Création d'un moteur thermique avec une cylindrée
    Thermique moteurThermique("600"); // Exemple de cylindree

	// Création d'un moteur générique avec une puissance
	Moteur moteurGenerique("150"); // Exemple de puissance

	// Création d'un moteur générique avec une puissance
	Moteur moteurGenerique("150"); // Exemple de puissance

    // Affichage des propriétés
    std::cout << "Moteur Electrique - Tension max: " << moteurElectrique.getTensionMax() << " V" << std::endl;
    std::cout << "Moteur Thermique - Cylindree: " << moteurThermique.getCylindree() << " cm3" << std::endl;
	std::cout << "Moteur Generique - Puissance: " << moteurGenerique.getPuissance() << " CV" << std::endl;

    return 0;
}