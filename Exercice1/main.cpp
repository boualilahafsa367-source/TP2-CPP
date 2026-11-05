
#include <iostream>
#include "Etudiant.hpp"

using namespace std;

int main() {

    // =====================================
    // TEST 1 : Constructeur par defaut
    // =====================================

    cout << "===== ETUDIANT 1 =====" << endl;

    // Creation d'un etudiant avec le constructeur par defaut
    Etudiant e1;

    // Modification des informations avec les setters
    e1.setNom("Alice Dupont");
    e1.setCin("123456789012345");

    e1.setNote1(15.5);
    e1.setNote2(12.0);
    e1.setNote3(18.5);

    // Affichage des informations
    cout << "Nom : " << e1.getNom() << endl;
    cout << "CIN : " << e1.getCin() << endl;

    cout << "Note 1 : " << e1.getNote1() << endl;
    cout << "Note 2 : " << e1.getNote2() << endl;
    cout << "Note 3 : " << e1.getNote3() << endl;

    // Calcul et affichage de la moyenne
    cout << "Moyenne : " << e1.calculerMoyenne() << endl;


    // =====================================
    // TEST 2 : Validation des notes
    // =====================================

    cout << "\n===== TEST DE VALIDATION =====" << endl;

    // Essayer d'affecter une note superieure a 20
    e1.setNote1(25.0);

    // La note precedente doit etre conservee
    cout << "Note 1 apres tentative d'erreur : "
         << e1.getNote1() << endl;

    // Tester une note negative
    e1.setNote2(-5.0);

    cout << "Note 2 apres tentative d'erreur : "
         << e1.getNote2() << endl;


    // =====================================
    // TEST 3 : Notes aux limites autorisees
    // =====================================

    cout << "\n===== TEST DES LIMITES =====" << endl;

    // La note 0 est autorisee
    e1.setNote1(0);

    // La note 20 est autorisee
    e1.setNote2(20);

    cout << "Note minimale : " << e1.getNote1() << endl;
    cout << "Note maximale : " << e1.getNote2() << endl;


    // =====================================
    // TEST 4 : Constructeur parametre
    // =====================================

    cout << "\n===== ETUDIANT 2 =====" << endl;

    // Creation d'un etudiant avec le constructeur parametre
    Etudiant e2("Bob Martin", "987654321098765",
                10.0, 14.0, 16.0);

    cout << "Nom : " << e2.getNom() << endl;
    cout << "CIN : " << e2.getCin() << endl;

    cout << "Moyenne : " << e2.calculerMoyenne() << endl;


    // =====================================
    // TEST 5 : Validation dans le constructeur
    // =====================================

    cout << "\n===== TEST CONSTRUCTEUR INVALIDE =====" << endl;

    // La note 25 doit etre refusee par le setter
    Etudiant e3("Sara Ali", "111222333444555",
                15.0, 25.0, 18.0);

    cout << "Nom : " << e3.getNom() << endl;
    cout << "Note 1 : " << e3.getNote1() << endl;
    cout << "Note 2 : " << e3.getNote2() << endl;
    cout << "Note 3 : " << e3.getNote3() << endl;
    cout << "Moyenne : " << e3.calculerMoyenne() << endl;

    return 0;
}
