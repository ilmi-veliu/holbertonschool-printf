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
	int count = 0, i = 0;

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

			count += _print_deux(format, &i, args);
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

/**
 * handle_specifier - Gère un spécificateur de format.
 * @format: La chaîne de format.
 * @i: Pointeur vers l'index actuel dans la chaîne de format.
 * @args: Liste des arguments variadiques.
 *
 * Return: Le nombre de caractères imprimés.
 */
int _print_deux(const char *format, int *i, va_list args)
{
	int j, count = 0;
	int (*f)(va_list);

	f = NULL;
	for (j = 0; verif_carac[j].spe != '\0'; j++)
	{
		if (verif_carac[j].spe == format[*i])
		{
		f = verif_carac[j].f;
		break;
		}
	}

	if (f != NULL)
	count += f(args);
	else
	{
	count += _putchar('%');
	if (format[*i] != '%')
	count += _putchar(format[*i]);
	}

	return (count);
}
