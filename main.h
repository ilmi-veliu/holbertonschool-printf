#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
void print_char (va_list args, char *format);
void print_string(va_list args, char *format);
void print_mod(va_list args, char *format);
int _putchar(char c);

typedef struct panda
{
	int (*fptr)(int, int);		
} op_t;



#endif
