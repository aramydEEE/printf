#include "main.h"
/**
 * number_digit - count the numbers
 * @a: one argument only
 * Return: A value
 */

int number_digit(int a)
{
	int x;

	x = 0;

	if (a < 0)
	{
		a = -1 * a;
	}

	while (a / 10)
	{
		a = a / 10;
		x++;
	}
	return (x);
}
