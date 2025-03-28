#include "main.h"
/**
<<<<<<< HEAD
 * verif_carac - Tableau des spécifieurs de format et d fonctions associées
 *
 * Ce tableau associe chaque spécifieur (`%c`, `%s`, `%d`, etc.) la fonction
 * qui permet de l'afficher correctement.
 */
=======
 * verif_spe - Vérifie et applique un spécifieur de format
 * @format: Chaîne de format
 * @i: Index actuel dans la chaîne
 * @args: Liste des arguments variadiques
 *
 * Return: Le nombre de caractères affichés.
 */
int verif_spe(const char *format, unsigned int *i, va_list args)
{
>>>>>>> 8c1a632ddf43bae48d065724256740512f2b93ab
op_t verif_carac[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_decimal},
		{'i', print_decimal},
		{'\0', NULL}
	};

<<<<<<< HEAD

/**
 * verif_spe - Vérifie et applique un spécifieur de format
 * @format: Chaîne de format
 * @i: Index actuel dans la chaîne
 * @args: Liste des arguments variadiques
 *
 * Return:  le nombre de caractères affichés.
 */
int verif_spe(const char *format, unsigned int *i, va_list args)
{
=======
>>>>>>> 8c1a632ddf43bae48d065724256740512f2b93ab
	int j, count = 0;

	for (j = 0; verif_carac[j].spe != '\0'; j++)
	{
		if (verif_carac[j].spe == format[*i])
		{
			count += verif_carac[j].f(args);
			return (count);
		}
	}

	count += _putchar('%');
	count += _putchar(format[*i]);

	return (count);
}
