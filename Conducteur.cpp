#include "Conducteur.h"
#include <iostream>
#include <chrono>
#include <ctime>

Conducteur::Conducteur(const std::string& nom, const std::string& prenom, int anneeNaissance)
    : nom(nom), prenom(prenom), anneeNaissance(anneeNaissance) {
}

std::string Conducteur::getNom() const { return nom; }
std::string Conducteur::getPrenom() const { return prenom; }
int Conducteur::getAnneeNaissance() const { return anneeNaissance; }

void Conducteur::setNom(const std::string& n) { nom = n; }
void Conducteur::setPrenom(const std::string& p) { prenom = p; }
void Conducteur::setAnneeNaissance(int annee) { anneeNaissance = annee; }
// création avec chat gpt d'un calcul d'age a partir de la naissance
int Conducteur::getAge() const {
    using namespace std::chrono;
    auto now = system_clock::now();
    std::time_t tt = system_clock::to_time_t(now);

    std::tm local_tm;
#if defined(_WIN32) || defined(_WIN64)
    localtime_s(&local_tm, &tt);
#else
    localtime_r(&tt, &local_tm);
#endif

    int currentYear = local_tm.tm_year + 1900;
    return currentYear - anneeNaissance;
}
// ajouter moto 
void Conducteur::ajouterMoto(Moto* m) {   //ajouter moto a la collection du conducteur
    motos.push_back(m);
}
//supprimer moto    chercher la moto pour la retiré du garage du conducteur
void Conducteur::retirerMoto(Moto* m) {
    for (auto it = motos.begin(); it != motos.end(); ++it) {
        if (*it == m) {
            motos.erase(it);
            break;
        }
    }
}

void Conducteur::afficherInfos() const {
    std::cout << "Conducteur : " << prenom << " " << nom << std::endl;
    std::cout << "Année de naissance : " << anneeNaissance
        << " (Âge : " << getAge() << " ans)" << std::endl;

    std::cout << "Possède " << motos.size() << " moto(s) :" << std::endl;
    for (const auto& moto : motos) {
        moto->afficherInfos();
    }
}
