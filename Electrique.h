/*****************************************************************//**
* \file   Electrique.h
* \brief  Declaration de la classe Electrique
*
* \author Arthur
* \date   september 2025
* ********************************************************************/

#ifndef Electrique_H
#define Electrique_H

#include <iostream>
#include <string>

/*! \class Electrique
   * \brief classe representant une Electrique. 3 attributs prives
   */
class Electrique
{
private:
    /**
     * Membre prive TensionMax : contient le nombre de personnes pour la Electrique
     */
    std::string TensionMax;

protected:

public:
    /*Classe sous forme canonique*/
    Electrique();
    ~Electrique();
    Electrique(const Electrique& miss);
    Electrique& operator = (const Electrique& miss);
    Electrique(std::string personne);
    std::string getTensionMax();
    void setTensionMax(std::string nouveauTensionMax);
    std::string getTensionMax(float puissance);
    void setTensionMax(float puissance, std::string nouveauTensionMax);
};
#endif