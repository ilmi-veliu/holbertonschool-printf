#include "main.h"

op_t verif_carac[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_decimal},
		{'i', print_decimal},
		{'\0', NULL}
	};



int verif_spe(const char *format, unsigned int *i, va_list args)
{
	int j, count = 0;

	for (j = 0; verif_carac[j].spe != '\0'; j++)
	{
		if (verif_carac[j].spe == format[*i])
		{
			count += verif_carac[j].f(args);
			return (count);
		}
	}

	count += _putchar('%');
	count += _putchar(format[*i]);

	return (count);
}
