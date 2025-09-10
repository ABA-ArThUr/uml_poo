#ifndef CONDUCTEUR_H
#define CONDUCTEUR_H

#include <string>

class Conducteur {
private:
    std::string nom;
    std::string prenom;
    int anneeNaissance;

public:
    
    Conducteur(const std::string& nom, const std::string& prenom, int anneeNaissance);

    // Getters
    std::string getNom() const;
    std::string getPrenom() const;
    int getAnneeNaissance() const;
    int getAge() const;

    
    void setNom(const std::string& n);
    void setPrenom(const std::string& p);
    void setAnneeNaissance(int annee);

   
    void afficherInfos() const;
};

#endif 
