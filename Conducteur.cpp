#include "Conducteur.h"
#include <iostream>
#include <chrono>
#include <ctime>

// Constructeur
Conducteur::Conducteur(const std::string& nom, const std::string& prenom, int anneeNaissance)
    : nom(nom), prenom(prenom), anneeNaissance(anneeNaissance) {
}

// Getters
std::string Conducteur::getNom() const { return nom; }
std::string Conducteur::getPrenom() const { return prenom; }
int Conducteur::getAnneeNaissance() const { return anneeNaissance; }

// Calcule l’âge à partir de l’année actuelle
int Conducteur::getAge() const {
    using namespace std::chrono;
    auto now = system_clock::now();
    std::time_t tt = system_clock::to_time_t(now);

    std::tm local_tm;
#if defined(_WIN32) || defined(_WIN64)
    localtime_s(&local_tm, &tt);   // version Windows
#else
    localtime_r(&tt, &local_tm);   // version Linux/Mac
#endif

    int currentYear = local_tm.tm_year + 1900;
    return currentYear - anneeNaissance;
}

// Setters
void Conducteur::setNom(const std::string& n) { nom = n; }
void Conducteur::setPrenom(const std::string& p) { prenom = p; }
void Conducteur::setAnneeNaissance(int annee) { anneeNaissance = annee; }

// Affichage
void Conducteur::afficherInfos() const {
    std::cout << "Conducteur : " << prenom << " " << nom << std::endl;
    std::cout << "Année de naissance : " << anneeNaissance
        << " (Âge : " << getAge() << " ans)" << std::endl;
}
