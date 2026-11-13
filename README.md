# Exercice 1 : Encapsulation de la classe Etudiant
<img width="1712" height="963" alt="Screenshot (1205)" src="https://github.com/user-attachments/assets/361526dc-ca4f-4055-8479-1711c1b901c6" />

Dans cet exercice, nous avons conçu une classe Etudiant en appliquant le principe fondamental de l'encapsulation en programmation orientée objet. La classe contient cinq attributs privés : le nom, le CIN et trois notes, ce qui empêche leur modification directe depuis le programme principal. Nous avons défini un constructeur par défaut pour initialiser les attributs avec des valeurs prédéfinies, ainsi qu'un constructeur paramétré permettant de créer un étudiant avec ses propres informations. Des getters et des setters ont été implémentés pour assurer un accès contrôlé aux données. Une validation a été ajoutée aux setters des notes afin de garantir que chaque valeur reste comprise entre 0 et 20 ; en cas de valeur incorrecte, un message d'erreur est affiché et l'ancienne valeur est conservée. Enfin, la méthode calculerMoyenne() permet de calculer automatiquement la moyenne des trois notes. Plusieurs tests ont été réalisés pour vérifier le fonctionnement des constructeurs, la modification des attributs, le calcul de la moyenne et le rejet des notes invalides.

Tests réalisés
- Création d'un étudiant avec le constructeur par défaut et le constructeur paramétré.
- Modification et consultation des informations avec les setters et les getters.
- Vérification du calcul de la moyenne.
- Test de notes invalides, négatives et supérieures à 20.
- Vérification que les anciennes valeurs sont conservées lorsqu'une note invalide est refusée.

# Exercice 2 : Association entre Etudiant et Filiere
<img width="1696" height="963" alt="Screenshot (1207)" src="https://github.com/user-attachments/assets/12485767-8e4d-4dcf-b9ae-10d4593150b7" />

Dans cet exercice, nous avons approfondi les relations entre les objets en établissant une association entre les classes Etudiant et Filiere. Dans un premier temps, nous avons étudié l'association 1-1, dans laquelle une filière est liée à un seul étudiant, en utilisant des pointeurs pour établir une relation réciproque entre les deux classes. Nous sommes ensuite passés à l'association 1-N en remplaçant le pointeur vers un seul étudiant par un conteneur dynamique std::vector<Etudiant*>, permettant à une filière de gérer plusieurs étudiants. Nous avons implémenté les méthodes d'inscription, de retrait, de comptage et d'affichage des étudiants, ainsi que la recherche d'un étudiant avec std::find(). Une attention particulière a été accordée à la cohérence des associations grâce à la mise à jour réciproque des pointeurs et à la méthode changerDeFiliere(), qui permet de transférer un étudiant d'une filière à une autre sans conserver l'ancien lien. Nous avons également étudié la gestion de la mémoire à travers les pointeurs bruts et les destructeurs, en distinguant une association possessive d'une association non possessive. Enfin, des mécanismes de gestion des erreurs ont été intégrés pour vérifier les pointeurs nuls, empêcher les inscriptions en double et utiliser les exceptions avec try, catch et throw. Les tests réalisés permettent de vérifier le bon fonctionnement des associations, des opérations sur les étudiants et la cohérence des données.

Tests réalisés
- Création de deux filières et de plusieurs étudiants.
- Inscription de trois étudiants dans une même filière.
- Affichage de la liste et vérification du nombre d'étudiants.
- Retrait d'un étudiant et vérification de la mise à jour de l'association.
- Changement de filière et vérification de la cohérence des deux associations.
- Tentative d'inscription en double pour vérifier la gestion des exceptions.
