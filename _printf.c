#include "main.h"
/**
 * _printf - Fonction qui imite le comportement de printf.
 * @format: La chaîne de format contenant les spécificateurs.
 *
 * Return: Le nombre total de caractères imprimés (hors '\0').
 */
int	_printf(const char *format, ...)
{
	va_list args;
	int count = 0, i = 0;
	int (*f)(va_list);
	int j;

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

			f = NULL;
			for (j = 0; verif_carac[j].spe != '\0'; j++)
			{
				if (verif_carac[j].spe == format[i])
				{
					f = verif_carac[j].f;
					break;
				}
			
			}
			if (f != NULL)
			{
				count += f(args);
			}
			else
			{
				count += _putchar('%');
				if (format[i] != '%')
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
