#include "main.h"
#include <string.h> /* Pour strcmp */

/**
 * get_op_func - Recherche la fonction correspondant à un spécificateur.
 * @s: Spécificateur à rechercher.
 *
 * Return: Pointeur vers la fonction correspondante, ou NULL si non trouvé.
 */
int (*get_op_func(const char *s))(va_list)
{
    op_t verif_carac[] = {
        {"c", print_char},
        {"s", print_string},
        {"d", print_entier},
        {"i", print_entier},
        {"%", print_percent},
        {NULL, NULL}
    };
    int i;

    /* Vérification de chaque spécificateur */
    for (i = 0; verif_carac[i].specifier != NULL; i++)
    {
        if (strcmp(verif_carac[i].specifier, s) == 0)
        {
            return (verif_carac[i].f);
        }
    }
    /* Retourne NULL si aucun spécificateur correspondant n'est trouvé */
    return (NULL);
}

