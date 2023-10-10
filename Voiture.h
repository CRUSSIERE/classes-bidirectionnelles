/**
 * @file Voiture.h
 * @author Philippe Lopistéguy
 * @brief Spécifie une classe Voiture en relation réciproque avec son conducteur
 * @version 0.1
 * @date 2023-08-12
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef VOITURE_H
#define VOITURE_H

using namespace std;

#include "Individu.h"
#include <iostream>

class Individu; /* Annonce une définition ultérieure de Individu
                   permet de faire référence aux membres de Individu dans la classe Voiture */

// Spécification de la classe Voiture
class Voiture
{
    // ATTRIBUTS
  public:
    string imat; // L'imatriculation de la voiture
    string marque; // La marque de la voiture
    Individu *monPilote; // Implémente un bon lien

    // METHODES
  public:
    // Constructeur
    Voiture(string = "", string = "");
    // Destructeur
    ~Voiture();

    // Méthodes usuelles : toString
    string toString();        // Affiche les caractéristiques de la voiture
    string toStringAndLink(); // Affiche les caractéristiques de la voiture et de son pilote s'il est défini

    // Methodes spécifiques : majMonPilote, supprimerLien, setMonPilote
    void majMonPilote(Individu* pilote);
    void setMonPilote(Individu* pilote);
    void supprimerLien();
};

#endif // VOITURE_H