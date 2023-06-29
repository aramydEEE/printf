#include "main.h"

/**
 * print_u - A function to print signed decimal number
 * @ap : The only argument to the function
 * Return: A value
 */

int print_u(va_list ap)
{
	unsigned int x, r;

	x = va_arg(ap, int);
	r = number_digit(x);
	_digitprint(x);
	return (r);
}
