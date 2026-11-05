
#include <iostream>
#include <exception>

#include "Etudiant.hpp"
#include "Filiere.hpp"

int main() {

    try {

        // Creation des filieres
        Filiere f1("Informatique");
        Filiere f2("Mathematiques");

        // Creation des etudiants
        Etudiant e1("Alice", "123", 15, 16, 17);
        Etudiant e2("Bob", "456", 10, 12, 14);
        Etudiant e3("Charlie", "789", 18, 19, 20);

        // Inscription des etudiants
        f1.inscrireEtudiant(&e1);
        f1.inscrireEtudiant(&e2);
        f1.inscrireEtudiant(&e3);

        // Affichage de la filiere
        std::cout << "===== ASSOCIATION 1-N =====" << std::endl;

        f1.afficherTous();

        std::cout << "Nombre d'etudiants : "
                  << f1.getNombreEtudiants() << std::endl;

        // Verification depuis l'etudiant
        if (e1.getFiliere() != nullptr) {
            std::cout << e1.getNom()
                      << " appartient a la filiere : "
                      << e1.getFiliere()->getNomFiliere()
                      << std::endl;
        }

        // Test des doublons
        std::cout << "\n===== TEST DES DOUBLONS =====" << std::endl;

        try {
            f1.inscrireEtudiant(&e1);
        }
        catch (const std::exception& erreur) {
            std::cerr << "Erreur : " << erreur.what() << std::endl;
        }

        // Retrait de Bob
        std::cout << "\n===== RETRAIT D'UN ETUDIANT =====" << std::endl;

        f1.retirerEtudiant(&e2);

        f1.afficherTous();

        std::cout << "Nombre d'etudiants : "
                  << f1.getNombreEtudiants() << std::endl;

        // Changement de filiere d'Alice
        std::cout << "\n===== CHANGEMENT DE FILIERE =====" << std::endl;

        e1.changerDeFiliere(&f2);

        std::cout << "\nApres le changement :" << std::endl;

        f1.afficherTous();
        f2.afficherTous();

        // Verification de l'association reciproque
        if (e1.getFiliere() != nullptr) {
            std::cout << "\nAlice appartient maintenant a : "
                      << e1.getFiliere()->getNomFiliere()
                      << std::endl;
        }

    }
    catch (const std::exception& erreur) {
        std::cerr << "Erreur : " << erreur.what() << std::endl;
    }

    return 0;
}
