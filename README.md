# README

## Introduction
Ce projet implémente une version simplifiée de la fonction `printf` en C. L'objectif est de comprendre le fonctionnement de cette fonction et de gérer différents spécifieurs de format.

## Description
Ce projet contient plusieurs fichiers sources :

- **`print_all.c`** : Gère l'affichage des différents types de données.
- **`_putchar.c`** : Implémente une fonction `_putchar` pour afficher un caractère.
- **`main.h`** : Contient les prototypes des fonctions utilisées.
- **`verif_carac.c`** : Vérifie les caractères et leur validité.
- **`_printf.c`** : Implémente la fonction principale `_printf`.

## Compilation
Utilisez la commande suivante pour compiler le projet :

```sh
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

## Contraintes
- Aucun fichier temporaire (exécutables, fichiers de configuration, etc.) ne doit être présent dans le dépôt.
- Les commits seront analysés pour assurer une bonne gestion du versionnement.
- Le code doit respecter les normes de style Betty.
- Les noms des variables et des fonctions doivent être explicites.

## Spécifieurs gérés
Le `_printf` implémente les spécifieurs suivants :
- `%c` : Affiche un caractère.
- `%s` : Affiche une chaîne de caractères.
- `%d` et `%i` : Affichent des entiers en base 10.
- `%%` : Affiche le caractère `%`.

- ## Explication du code par un FlowChart
- ![Diagramme de flux](https://github.com/user-attachments/assets/5266e9a6-d130-44c3-817b-08843873c8cf)


## Collaborateurs
- **Tom Lagarde**
- **Ilmi Veliu**

## Man Page
Utilisation de `_printf` :
```sh
man _printf
```

