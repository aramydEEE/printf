#include "main.h"

/**
 * print_d - A function to print signed decimal number
 * @ap : The only argument to the function
 * Return: A value
 */

int print_d(va_list ap)
{
	int x, r;

	x = va_arg(ap, int);
	r = number_digit(x);
	_digitprint(x);
	return (r);
}
