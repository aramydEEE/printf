#include "main.h"

/**
 * print_s - prints a string
 * @ap: the argument pointer
 *
 * Description: the argument pointer to print
 * Return: number of strings printed
 */
int print_s(va_list ap)
{
	char *s;
	int n;

	s = va_arg(ap, char *);

	if (!s)
		s = "(nil)";

	n = _puts(s);

	return (n);
}

