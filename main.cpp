#include <iostream>
#include "Conducteur.h"
#include "Moto.h"

using namespace std;

int main() {
    // Creation d’un conducteur
    Conducteur c("Dupont", "Jean", 1990);

    // Creation de motos
    Moto m1("200kg");
    Moto m2("150kg");

    // Ajout des motos au conducteur
    c.ajouterMoto(m1);
    c.ajouterMoto(m2);

    // Affichage des infos
    c.afficherInfos();

    return 0;
}
