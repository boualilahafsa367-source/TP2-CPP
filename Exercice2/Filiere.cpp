
#include "Filiere.hpp"
#include "Etudiant.hpp"

#include <iostream>
#include <algorithm>
#include <stdexcept>

// Constructeur
Filiere::Filiere(std::string nom)
    : nomFiliere(nom) {
}

// Destructeur
Filiere::~Filiere() {
    // La filiere ne possede pas les etudiants.
    // Elle ne doit donc pas les supprimer.
}

// Inscrire un etudiant
void Filiere::inscrireEtudiant(Etudiant* e) {

    if (e == nullptr) {
        throw std::invalid_argument("Etudiant nul.");
    }

    // Verifier les doublons
    for (const auto* et : etudiants) {
        if (et == e) {
            throw std::runtime_error(
                "Etudiant deja inscrit dans cette filiere."
            );
        }
    }

    // Verifier si l'etudiant est deja dans une autre filiere
    if (e->getFiliere() != nullptr) {
        throw std::runtime_error(
            "Etudiant deja inscrit dans une autre filiere."
        );
    }

    // Ajouter l'etudiant au vector
    etudiants.push_back(e);

    // Mise a jour reciproque
    e->setFiliere(this);
}

// Retirer un etudiant
void Filiere::retirerEtudiant(Etudiant* e) {

    auto it = std::find(etudiants.begin(), etudiants.end(), e);

    if (it != etudiants.end()) {

        // Supprimer le lien reciproque
        if ((*it)->getFiliere() == this) {
            (*it)->setFiliere(nullptr);
        }

        // Retirer le pointeur du vector
        etudiants.erase(it);
    }
}

// Retourner le nombre d'etudiants
int Filiere::getNombreEtudiants() const {
    return static_cast<int>(etudiants.size());
}

// Retourner le nom de la filiere
std::string Filiere::getNomFiliere() const {
    return nomFiliere;
}

// Afficher tous les etudiants
void Filiere::afficherTous() const {

    std::cout << "Etudiants de la filiere "
              << nomFiliere << ":" << std::endl;

    for (const auto* e : etudiants) {
        std::cout << " - " << e->getNom()
                  << " (Moyenne: "
                  << e->calculerMoyenne() << ")"
                  << std::endl;
    }
}
