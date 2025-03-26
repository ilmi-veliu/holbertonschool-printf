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

int sdcaeqscqs(sdczes)
{
	for (i = 0; format[i] != "\0"; i++)
	{
		if (i
