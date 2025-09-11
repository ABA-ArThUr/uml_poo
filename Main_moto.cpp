#include <iostream>
#include "Electrique.h"
#include "Thermique.h"
#include "Moteur.h"
#include "Moto.h"

int main() {
    Electrique moteurElectrique("220");

    Thermique moteurThermique("600");

	Moteur moteurGenerique("150"); 

	Moto maMoto("180 kg");



    std::cout << "Moteur Electrique - Tension max: " << moteurElectrique.getTensionMax() << " V" << std::endl;
    std::cout << "Moteur Thermique - Cylindree: " << moteurThermique.getCylindree() << " cm3" << std::endl;
	std::cout << "Moteur Generique - Puissance: " << moteurGenerique.getPuissance() << " CV" << std::endl;
	std::cout << "Moto - Poids: " << maMoto.getPoids() << std::endl;

    return 0;
}