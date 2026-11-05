
#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP

#include <iostream>
#include <string>

class Etudiant {

private:

    // Attributs prives : informations de l'etudiant
    std::string nom;
    std::string cin;

    // Notes des trois matieres (sur 20)
    double note1;
    double note2;
    double note3;

public:

    // Constructeur par defaut
    Etudiant();

    // Constructeur parametre
    Etudiant(std::string n, std::string c,
             double n1, double n2, double n3);

    // Getters : recuperer les informations
    std::string getNom() const;
    std::string getCin() const;

    double getNote1() const;
    double getNote2() const;
    double getNote3() const;

    // Setters : modifier les informations
    void setNom(std::string n);
    void setCin(std::string c);

    void setNote1(double n);
    void setNote2(double n);
    void setNote3(double n);

    // Methode pour calculer la moyenne des trois notes
    double calculerMoyenne() const;
};

#endif // ETUDIANT_HPP
