#include "main.h"

/**
 * get_printer - gets appropriate printing function
 * given a format specifier
 * @c: the format specifier to be used for printing
 *
 * Description: given a format specifier, returns a pointer
 * to the appropriate function for printing argument of that type
 * Return: pointer to function for printing
 */
int (*get_printer(char c))(va_list ap)
{
	int n, i;

	printer printers[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_percent},
		{'d', print_d},
		{'i', print_d}
	};

	n = 5;

	for (i = 0; i < n; i++)
	{
		if (printers[i].c == c)
			return (printers[i].f);
	}

	return (NULL);
}

