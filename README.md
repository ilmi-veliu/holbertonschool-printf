# 📌 Projet `_printf`

## 📖 Introduction  
Ce projet implémente une version personnalisée de la fonction `printf` en C. L'objectif est de mieux comprendre le fonctionnement des arguments variadiques et la gestion des spécifieurs de format.  

## 📂 Structure du Projet  
Le projet est organisé en plusieurs fichiers :  

| **Fichier**        | **Description** |
|--------------------|------------------------------------------------|
| `main.h`          | Contient les prototypes des fonctions utilisées. |
| `_putchar.c`      | Implémente la fonction `_putchar` pour afficher un caractère. |
| `_printf.c`       | Contient l’implémentation principale de `_printf`. |
| `get_function.c`  | Sélectionne la bonne fonction en fonction du spécifieur. |

## ⚙️ Fonctionnalités  
Notre `_printf` prend en charge plusieurs fonctionnalités :  

- ✅ Affichage des nombres entiers (`%d`, `%i`).  
- ✅ Affichage des caractères (`%c`).  
- ✅ Affichage des chaînes de caractères (`%s`).  
- ✅ Affichage des adresses mémoire (`%p`).  
- ✅ Prise en charge des arguments variadiques (`va_list`, `va_arg`).  
- ✅ Gestion des formats binaires, octaux et hexadécimaux.  
- ✅ Manipulation des chaînes (inversion, encodage ROT13).  

## 🚀 Compilation et Restrictions  
Le projet doit être compilé avec les options suivantes :  

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
## ⚠️ Contraintes et Technologies  

🛑 **Contraintes** :  
✅ Maximum **5 fonctions** par fichier.  
✅ **Pas de variables globales**.  
✅ Seules les fonctions autorisées : `write`, `malloc`.  

🛠 **Technologies utilisées** :  
![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)  
![GCC](https://img.shields.io/badge/GCC-4A4A4A?style=for-the-badge&logo=gnu&logoColor=white)  
![Git](https://img.shields.io/badge/GIT-F05032?style=for-the-badge&logo=git&logoColor=white)  
![Vim](https://img.shields.io/badge/VIM-019733?style=for-the-badge&logo=vim&logoColor=white)  
![Linux](https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black)  

---

## 📜 Man Page  

```sh
man _printf

## 🤝 Collaborateurs  

| Nom           | GitHub                 | Rôle |
|--------------|-----------------------|------|
| **Tom Lagarde** | [@TomLagarde](https://github.com/TomLagarde) | Développeur |
| **Ilmi Veliu**  | [@IlmiVeliu](https://github.com/IlmiVeliu)  | Développeur |

💡 **Contributions** :  
✅ Développement de `_printf`  
✅ Gestion des spécifieurs de format  
✅ Respect des normes de codage **Betty**  
✅ Collaboration sur la documentation et le débogage  

---

Merci à tous ceux qui ont contribué au projet ! 🚀🔥
