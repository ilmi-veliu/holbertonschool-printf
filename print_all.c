#include "main.h"
/**
 * print_string - Affiche une chaîne de caractères.
 * @args: Liste des arguments contenant la chaîne à afficher.
 *
 * Description: Récupère une chaîne de caractèpuis la liste d'argument
 * et l'affiche caractère par caractère. Si la chaîne est NULL, affe NULL
 *
 * Return: Nombre de caractères imprimé
 */

int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i;

	if (!str)
	str = "(null)";

	for (i = 0; str[i]; i++)
	_putchar(str[i]);

	return (i);
}
/**
* print_char - Affiche un caractère.
* @args: Liste des arguments contenant le caractère à affiche
*
* Description: Récupère un caractère depuis la liste dguments et
* l'affiche à l'aide de `_putchar`.
*
* Return: 1 (nombre de caractères imprimés).
*/
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar (c));
}
/**
* print_percent - Affiche le caractère '%'.
* @args: Liste des arguments (non utilisé).
*
* Description: Cette fonction affiche simplement le caractère '%'
* et ignore tout argument passé.
*
* Return: 1 (nombre de caractères imprimés).
*/
int print_percent(va_list args)
{
	(void)args;

	return (_putchar('%'));
}
/**
* print_decimal - Affiche un entier en base 10.
* @args: Liste des arguments contenant l'entier à afficher
*
* Description: Récupère un entier depuis la liste d'arguments et l'affich
* Gère les nombres négatifs en affichant un '-' devant si nécessai
*
* Return: Nombre de caractères affichés.
*/
int print_decimal(va_list args)
{
	int n = va_arg(args, int);
	unsigned int num;
	int count = 0;
	int digits[10];
	int i = 0;

	if (n < 0)
	{
		count += _putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num == 0)
	{
		count += _putchar('0');
		return (count);
	}

	while (num > 0)
	{
		digits[i++] = num % 10;
		num /= 10;
	}

	while (i > 0)
	{
		count += _putchar('0' + digits[--i]);
	}

	return (count);
}
/**
* print_entier - Alias de print_decimal.
* @args: Liste des arguments contenant l'entier à afficher.
*
* Description: Cette fonction redirige l'affichage vers print_decimal.
*
* Return: Nombre de caractères affichés.
*/
int print_entier(va_list args)
{
	return (print_decimal(args));
}
