#include "main.h"

int i = 0;

void print_char (va_list args, char *format)

{
	if (!format)
	return;

	while (format[i])
	{
		_putchar(i);
		i++;
	}	
}
void print_string(va_list args, char *format)
{
	if (!format)
	return;

	while (format[i])
	{
		_putchar(i);
		i++;
	}	
}

void print_mod(va_list args, char *format)
{
	if (!format)
	return;

	while (format[i])
	{
		_putchar(i);
		i++;
	}	
}
