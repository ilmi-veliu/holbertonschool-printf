#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int _printf(const char format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_decimal(va_list args);
int _putchar(char c);
int verif_spe(const charformat, unsigned int i, va_list args);
int print_entier(va_list args);
int _print_deux(const charformat, int *i, va_list args);

/**
 
struct panda - Structure associant un spécificateur |  une fonction.
@specifier: Chaîne représentant le spécificateur (ex: "c", "s", "d").
@f: Pointeur vers la fonction correspondante prenant va_list en paramètre*
Description: Cette structure est utilisée pour associer un spécificateur
de format à une fonction qui effectue l'affichage approprié.*/
typedef struct op
{
    char spe;
    int (f)(va_list);
} op_t;

/ Déclaration du tableau verif_carac[] /
extern op_t verif_carac[];

#endif / MAIN_H */