#ifndef CONDUCTEUR_H
#define CONDUCTEUR_H
//#include "Moto.h"
#include <string>

class Conducteur {  //création de la class conducteur
private:
    std::string nom;    //creation de l'objet nom
    std::string prenom;  //création de l'objet prenom
    int anneeNaissance;  //utilisation de int car l'année de naissance sera un chiffre / création de cette objet
   // std::vector<Moto*> motos;
public:
    
    Conducteur(const std::string& nom, const std::string& prenom, int anneeNaissance);   //tout ce qui fait partie du conducteur

   //initialisation de variables 
    std::string getNom() const;// creation getNome
    std::string getPrenom() const;//creation getprenom
    int getAnneeNaissance() const;//creation getNaissance
    int getAge() const;// utilssation de l'age pour la naissance      Const sert a declarer quelque chose qui ne pourra pas voir jamais changer dans le temps

    
    void setNom(const std::string& n); //utilisation             Void na pas de valeur de retour pour executer ce qui est seulement, demander
    void setPrenom(const std::string& p);
    void setAnneeNaissance(int annee);


   // void ajouterMoto(Moto* m);
  //  void retirerMoto(Moto* m);
   
    void afficherInfos() const;
};

#endif 
