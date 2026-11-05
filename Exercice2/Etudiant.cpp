
#include "Etudiant.hpp"
#include "Filiere.hpp"

#include <iostream>
#include <stdexcept>

// Constructeur par defaut
Etudiant::Etudiant()
    : nom("Inconnu"),
      cin("000000000000000"),
      note1(0), note2(0), note3(0),
      filiere(nullptr) {
}

// Constructeur parametre
Etudiant::Etudiant(std::string n, std::string c,
                   double n1, double n2, double n3)
    : nom(n), cin(c),
      note1(0), note2(0), note3(0),
      filiere(nullptr) {

    setNote1(n1);
    setNote2(n2);
    setNote3(n3);
}

// Getters
std::string Etudiant::getNom() const {
    return nom;
}

std::string Etudiant::getCin() const {
    return cin;
}

double Etudiant::getNote1() const {
    return note1;
}

double Etudiant::getNote2() const {
    return note2;
}

double Etudiant::getNote3() const {
    return note3;
}

Filiere* Etudiant::getFiliere() const {
    return filiere;
}

// Setters
void Etudiant::setNom(std::string n) {
    nom = n;
}

void Etudiant::setCin(std::string c) {
    cin = c;
}

void Etudiant::setNote1(double n) {
    if (n >= 0 && n <= 20)
        note1 = n;
    else
        std::cerr << "Note 1 invalide." << std::endl;
}

void Etudiant::setNote2(double n) {
    if (n >= 0 && n <= 20)
        note2 = n;
    else
        std::cerr << "Note 2 invalide." << std::endl;
}

void Etudiant::setNote3(double n) {
    if (n >= 0 && n <= 20)
        note3 = n;
    else
        std::cerr << "Note 3 invalide." << std::endl;
}

void Etudiant::setFiliere(Filiere* f) {
    filiere = f;
}

// Calcul de la moyenne
double Etudiant::calculerMoyenne() const {
    return (note1 + note2 + note3) / 3.0;
}

// Changer de filiere
void Etudiant::changerDeFiliere(Filiere* nouvelleFiliere) {

    if (nouvelleFiliere == nullptr) {
        throw std::invalid_argument("Nouvelle filiere invalide.");
    }

    if (filiere == nouvelleFiliere) {
        return;
    }

    // Retirer l'etudiant de son ancienne filiere
    if (filiere != nullptr) {
        filiere->retirerEtudiant(this);
    }

    // Inscrire l'etudiant dans la nouvelle filiere
    nouvelleFiliere->inscrireEtudiant(this);

    std::cout << nom << " a change de filiere." << std::endl;
}
