#include "main.h"

op_t verif_carac[] = {
    {"c", print_char},
    {"s", print_string},
    {"d", print_entier},
    {"i", print_entier},
    {"%", print_mod},
    {NULL, NULL}
};

int verif_spec(const char *format, unsigned int *i, va_list args)
{
	int j, count = 0;

	for (j = 0; verif_carac[j].specifier != NULL; j++) { 
	if (format[*i] == verif_carac[j].specifier[0]) {
		count += verif_carac[j].f(args);
		return count;
		}
	}

	count += _putchar('%');
	count += _putchar(format[*i]);
	return count;
}