#include <iostream>
#include "Electrique.h"
#include "Thermique.h"

int main() {
    // Création d'un moteur électrique avec une tension maximale
    Electrique moteurElectrique("220"); // Exemple de tension max

    // Création d'un moteur thermique avec une cylindrée
    Thermique moteurThermique("600"); // Exemple de cylindrée

    // Affichage des propriétés
    std::cout << "Moteur Electrique - Tension max: " << moteurElectrique.getTensionMax() << " V" << std::endl;
    std::cout << "Moteur Thermique - Cylindree: " << moteurThermique.getCylindree() << " cm3" << std::endl;

    return 0;
}