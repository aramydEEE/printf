#include "main.h"
/**
 * number_digit - count the numbers
 * @a: one argument only
 * Return: A value
 */

int number_digit(int a)
{
	unsigned int x;

	unsigned int n;

	n = a;

	if (a < 0)
	{
		n = -1 * a;
	}

	x = 1;

	while (n / 10)
	{
		n = n / 10;
		x++;
	}
	return (x);
}
