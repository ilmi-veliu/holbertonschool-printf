📌 Projet _printf
📖 Introduction
Ce projet implémente une version personnalisée de la fonction printf en C. L'objectif est de mieux comprendre le fonctionnement des arguments variadiques et la gestion des spécifieurs de format.

📂 Structure du Projet
Le projet est organisé en plusieurs fichiers :

Fichier	Description
main.h	Contient les prototypes des fonctions utilisées.
_putchar.c	Implémente la fonction _putchar pour afficher un caractère.
_printf.c	Contient l’implémentation principale de _printf.
get_function.c	Sélectionne la bonne fonction en fonction du spécifieur.
⚙️ Fonctionnalités
Notre _printf prend en charge plusieurs fonctionnalités :
✅ Affichage des nombres entiers (%d, %i).
✅ Affichage des caractères (%c).
✅ Affichage des chaînes de caractères (%s).
✅ Affichage des adresses mémoire (%p).
✅ Prise en charge des arguments variadiques (va_list, va_arg).
✅ Gestion des formats binaires, octaux et hexadécimaux.
✅ Manipulation des chaînes (inversion, encodage ROT13).

🚀 Compilation et Restrictions
Le projet doit être compilé avec les options suivantes :

sh
Copier
Modifier
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
Contraintes :
🔹 Maximum 5 fonctions par fichier.
🔹 Pas de variables globales.
🔹 Seules les fonctions write et malloc sont autorisées.

🛠 Technologies Utilisées
C	GCC	Git	Vim	Linux
📜 Man Page
Pour afficher la documentation de _printf, utilisez :

sh
Copier
Modifier
man _printf
🤝 Collaborateurs
Tom Lagarde

Ilmi Veliu

