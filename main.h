#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_decimal(va_list args);
int _putchar(char c);
int verif_spec(const char *format, unsigned int *i, va_list args);
int (*get_op_func(char *s))(int, int);
int print_entier(va_list args);
/**
 * struct panda - Structure associant un spécificateur à une fonction.
 * @specifier: Chaîne représentant le spécificateur (ex: "c", "s", "d").
 * @f: Pointeur vers la fonction correspondante prenant va_list en paramètrs
 *
 * Description: Cette structure est utilisée pour associer un spécificate
 * de format à une fonction qui effectue l'affichage appropri�
 */
typedef struct panda
{
	char *specifier;
	int (*f)(va_list);
} op_t;

#endif
