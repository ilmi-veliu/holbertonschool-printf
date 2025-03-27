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
    unsigned int i = 0, count = 0;
    int (*f)(va_list);

    if (format == NULL)
	return (-1);

    va_start(args, format);

    while (format[i])
    {
	if (format[i] == '%')
	{
	    f = get_op_func(&format[i + 1]);
	    if (f != NULL)
	    {
		count += f(args);
		i++;
	    }
	    else
	    {
		count += _putchar(format[i]);
	    }
	}
	else
	{
	    count += _putchar(format[i]);
	}
	i++;
    }

    va_end(args);
    return (count);
}
