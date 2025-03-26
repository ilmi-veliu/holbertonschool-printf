#include "main.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: number of characters printed
 */
	va_list args;

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

int print_char (va_list args)
{
	char c = va_arg (args ,int);
	return ( _putchar (c));
}

 int print_percent (va_list args)
 {
	(void)args;
	return(_putchar('%'));
}
