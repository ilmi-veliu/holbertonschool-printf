#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_mod(va_list args);
int print_entier(va_list args);
int _putchar(char c);
int verif_spec(const char *format, unsigned int *i, va_list args);
int (*get_op_func(char *s))(int, int)
typedef struct panda
{
	char *specifier;
	int (*f)(va_list);	
} op_t;

#endif
