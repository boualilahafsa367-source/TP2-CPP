
#include "Etudiant.hpp"

// Constructeur par defaut
// Initialise les informations avec des valeurs par defaut
Etudiant::Etudiant()
    : nom("Inconnu"),
      cin("000000000000000"),
      note1(0),
      note2(0),
      note3(0) {
}

// Constructeur parametre
// Initialise les informations de l'etudiant
// Les setters permettent de verifier la validite des notes
Etudiant::Etudiant(std::string n, std::string c,
                   double n1, double n2, double n3)
    : nom(n),
      cin(c),
      note1(0),
      note2(0),
      note3(0) {

    setNote1(n1);
    setNote2(n2);
    setNote3(n3);
}

// Getter : retourner le nom
std::string Etudiant::getNom() const {
    return nom;
}

// Getter : retourner le CIN
std::string Etudiant::getCin() const {
    return cin;
}

// Getter : retourner la premiere note
double Etudiant::getNote1() const {
    return note1;
}

// Getter : retourner la deuxieme note
double Etudiant::getNote2() const {
    return note2;
}

// Getter : retourner la troisieme note
double Etudiant::getNote3() const {
    return note3;
}

// Setter : modifier le nom
void Etudiant::setNom(std::string n) {
    nom = n;
}

// Setter : modifier le CIN
void Etudiant::setCin(std::string c) {
    cin = c;
}

// Setter : modifier la premiere note
void Etudiant::setNote1(double n) {

    // Verifier que la note est comprise entre 0 et 20
    if (n >= 0 && n <= 20) {
        note1 = n;
    } else {
        std::cerr << "Note invalide : " << n << std::endl;
    }
}

// Setter : modifier la deuxieme note
void Etudiant::setNote2(double n) {

    // Verifier que la note est comprise entre 0 et 20
    if (n >= 0 && n <= 20) {
        note2 = n;
    } else {
        std::cerr << "Note invalide : " << n << std::endl;
    }
}

// Setter : modifier la troisieme note
void Etudiant::setNote3(double n) {

    // Verifier que la note est comprise entre 0 et 20
    if (n >= 0 && n <= 20) {
        note3 = n;
    } else {
        std::cerr << "Note invalide : " << n << std::endl;
    }
}

// Methode pour calculer la moyenne des trois notes
double Etudiant::calculerMoyenne() const {

    return (note1 + note2 + note3) / 3.0;
}
