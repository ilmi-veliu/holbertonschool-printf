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

int print_decimal (va_list args)
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

int print_entier(va_list args)
{
	return (print_decimal);
}
