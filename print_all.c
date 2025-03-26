#include "main.h"

int print_string(va_list, args)
{
	char *str = va_args(args, char*);

	int i = 0, count = 0;

	if (!str)
	str = NULL

	while str[i]
	{
		_putchar(str[i])
		count++;
		i++;
	}
	return count;
