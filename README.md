# Exercice 1 : Encapsulation de la classe Etudiant
<img width="1712" height="963" alt="Screenshot (1205)" src="https://github.com/user-attachments/assets/361526dc-ca4f-4055-8479-1711c1b901c6" />

Dans cet exercice, nous avons créé une classe Etudiant en respectant le principe d'encapsulation en C++. 
Les attributs (nom, CIN et notes) sont déclarés privés et accessibles à travers des getters et des setters.
Nous avons ajouté une validation pour garantir que les notes restent comprises entre 0 et 20.
Enfin, nous avons implémenté une méthode pour calculer la moyenne et testé les constructeurs ainsi que les cas de notes invalides.

# Exercice 2 : Association entre Etudiant et Filiere
<img width="1696" height="963" alt="Screenshot (1207)" src="https://github.com/user-attachments/assets/12485767-8e4d-4dcf-b9ae-10d4593150b7" />

Dans cet exercice, nous avons établi une association entre les classes Etudiant et Filiere.
Nous avons utilisé des pointeurs et un std::vector pour permettre à une filière de gérer plusieurs étudiants (association 1-N).
Nous avons implémenté l'inscription, le retrait et l'affichage des étudiants, ainsi que le calcul de leur nombre.
Nous avons également testé le changement de filière, la mise à jour réciproque des associations et la gestion des erreurs pour éviter les inscriptions en double.

# Tests réalisés

- Vérification des constructeurs et des getters/setters.
- Validation des notes comprises entre 0 et 20.
- Calcul des moyennes des étudiants.
- Inscription et retrait de plusieurs étudiants dans une filière.
- Vérification des associations réciproques et du changement de filière.
- Gestion des erreurs : pointeurs nuls et inscriptions en double.
