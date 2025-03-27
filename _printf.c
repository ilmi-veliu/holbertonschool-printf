#include "main.h"

/**
 * _printf - Fonction qui imite le comportement de printf.
 * @format: La chaîne de format contenant les spécificateurs.
 *
 * Return: Le nombre total de caractères imprimés (hors '\0').
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count_char = 0;
	int i = 0;
	int (*func)(va_list);

	if (format == NULL)
	return (-1);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
		if (format[i] == '\0')
		return (-1);

		func = get_op_func((char *)&format[i]);
		if (func)
		count_char += func(args);
		else
		{
		count_char += _putchar('%');
		count_char += _putchar(format[i]);
		}
		}
		else
		{
		count_char += _putchar(format[i]);
		}
		i++;
	}

	va_end(args);
	return (count_char);
}
