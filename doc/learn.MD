# Notions Clés pour le Module 00 en C++

## 1. Gestion de la Mémoire en C++
- **Utilisation du mot-clé `new` :** Comprendre son usage pour l'allocation dynamique de mémoire.
- **Gestion des fuites de mémoire :** Apprendre à éviter et gérer les fuites de mémoire.

## 2. Forme Canonique de Coplien
- **Importance des constructeurs et destructeurs :** Maîtriser les composants clés comme les constructeurs (par défaut et de copie), l'opérateur d'affectation et le destructeur.
- **Gestion des ressources :** Comprendre leur rôle dans la gestion efficace des ressources.

## 3. Implémentation des Fonctions dans les Classes
- **Séparation des déclarations et implémentations :** Pratiquer la séparation dans les fichiers d'en-tête et les fichiers source.
- **Utilisation des templates :** Savoir quand et comment utiliser les templates de fonction.

## 4. Gestion des Fichiers d'En-Tête
- **Efficacité des fichiers d'en-tête :** Maîtriser leur utilisation pour une meilleure organisation du code.
- **Include guards :** Utiliser des directives de préprocesseur pour éviter les inclusions multiples.

## 5. Règles de Syntaxe et de Style en C++
- **Conventions de nommage :**
  - **Classes (UpperCamelCase) :** `MyClass`, `CarEngine`, `UserAccount`.
  - **Fonctions et variables (lowerCamelCase) :** `calculateInterest`, `readFile`, `printUserDetails`.
- **Respect des conventions de codage :** Suivre un guide de style comme le Google C++ Style Guide.

## 6. Utilisation des Bibliothèques Standard et Restrictions
- **Connaissance de la STL :** Se familiariser avec les composants clés.
- **Restrictions :** Comprendre les limites d'utilisation de certaines bibliothèques et fonctions.

## 7. Bonnes Pratiques de Programmation en C++
- **Principes fondamentaux :** Assurer la qualité, l'optimisation et la sécurité du code.
- **Rédaction de code clair :** Écrire un code lisible, bien documenté et organisé.


 # include <iostream>
	std::cout << "hello world !" << std::endl;
	
    # include <string>
    std::string	tmp;
    std::cin >> tmp;