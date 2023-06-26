#include "main.h"

/**
 * print_c - prints a char
 * @ap: argument pointer
 *
 * Description: prints a char
 * Return: 1
 */
int print_c(va_list ap)
{
	char c;

	c = va_arg(ap, int);

	_putchar(c);

	return (1);
}

