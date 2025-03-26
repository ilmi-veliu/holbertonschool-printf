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

{
	for (i = 0; verif_carac[i].symbol != NULL; i++)
	{
		if (verif_carac[i].symbol == *s)
		{
			return (verif_carac[i].func);
		}
	}
	return NULL;
}

