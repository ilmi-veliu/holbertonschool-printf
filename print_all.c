#include "main.h"

int i = 0;

int print_char (va_list args, char *format)

{
	if (!format)
	return;

	while (format[i])
	{
		_putchar(i);
		i++;
	}	
}
int print_string(va_list args, char *format)
{
	if (!format)
	return;

	while (format[i])
	{
		_putchar(i);
		i++;
	}	
}

int print_mod(va_list args, char *format)
{
	if (!format)
	return;

	while (format[i])
	{
		_putchar(i);
		i++;
	}	
}

int print_entier(va_list args, char *format)
{
	if (!format)
	return;

	while (format[i])
	{
		_putchar(i);
		i++;
	}	
}
