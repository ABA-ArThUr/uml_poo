/*****************************************************************//**
* \file   Thermique.h
* \brief  Declaration de la classe Thermique
*
* \author Arthur
* \date   september 2025
* ********************************************************************/

#ifndef Thermique_H
#define Thermique_H

#include <iostream>
#include <string>

/*! \class Thermique
   * \brief classe representant une Thermique. 3 attributs prives
   */
class Thermique
{
private:
    /**
     * Membre prive Cylindree : contient le nombre de personnes pour la Thermique
     */
    std::string Cylindree;
    /**

protected:

public:
    /*Classe sous forme canonique*/
    Thermique();
    ~Thermique();
    Thermique(const Thermique& miss);
    Thermique& operator = (const Thermique& miss);
    Thermique(std::string personne);
    std::string getCylindree();
    void setCylindree(std::string nouveauCylindree);

#endif