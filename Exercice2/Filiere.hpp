
#ifndef FILIERE_HPP
#define FILIERE_HPP

#include <string>
#include <vector>

class Etudiant;

class Filiere {
private:
    std::string nomFiliere;
    std::vector<Etudiant*> etudiants;

public:
    Filiere(std::string nom);
    ~Filiere();

    void inscrireEtudiant(Etudiant* e);
    void retirerEtudiant(Etudiant* e);

    int getNombreEtudiants() const;
    std::string getNomFiliere() const;

    void afficherTous() const;
};

#endif
