#include <iostream>
#include "Conducteur.h"
#include "Moto.h"

using namespace std;

int main() {
    // Création d’un conducteur
    Conducteur c("Dupont", "Jean", 1990);

    // Création de motos
    Moto m1("200kg");  // Moto de type thermique
    Moto m2("150kg");  // Moto de type électrique

    // Ajout au conducteur
    c.ajouterMoto(m1);
    c.ajouterMoto(m2);

    // Affichage du conducteur
    c.afficherInfos();

    // Ici on affiche le type moteur directement depuis le main
    cout << "\nDétails des motos :" << endl;
    cout << "- Moto 1 : poids = " << m1.getPoids() << " | moteur = Thermique" << endl;
    cout << "- Moto 2 : poids = " << m2.getPoids() << " | moteur = Electrique" << endl;

    return 0;
}
