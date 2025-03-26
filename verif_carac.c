#include "main.h"
int (*get_op_func(char *s))(int, int)
{
	op_t verif_carac[] = {
    	{"c", print_char},
    	{"s", print_string},
    	{"d", print_entier},
    	{"i", print_entier},
    	{"%", print_mod},
    	{NULL, NULL}
};
int i;
{
	for (i = 0; verif_carac[i].specifier != NULL; i++)
	{
		if (verif_carac[i].specifier == *s)
		{
			return (verif_carac[i].f);
		}
	}
	return NULL;
}
