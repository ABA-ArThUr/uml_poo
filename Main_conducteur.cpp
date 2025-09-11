#include <iostream>
#include "Conducteur.h"

int main() {
    // Création d’un conducteur
    Conducteur conducteur("Viland", "Pierre", 1984);

    // Test des getters
    std::cout << "Nom : " << conducteur.getNom() << std::endl;
    std::cout << "Prenom : " << conducteur.getPrenom() << std::endl;
    std::cout << "Annee de naissance : " << conducteur.getAnneeNaissance() << std::endl;
    std::cout << "Age : " << conducteur.getAge() << " ans" << std::endl;

    

    // Test de la fonction afficherInfos
    std::cout << "\nUtilisation de afficherInfos() :" << std::endl;
  

    return 0;
}
