#include "main.h"
/**
 * number_digit - count the numbers
 * @a: one argument only
 * Return: A value
 */

int number_digit(int a)
{
	int x;

	if (a < 0)
	{
		a = -1 * a;
	}
	x = 1;

	while (a / 10 != 0)
	{
		a = a / 10;
		x++;
	}
	return (x);
}
