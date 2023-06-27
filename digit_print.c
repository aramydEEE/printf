#include "main.h"

/**
 * _digitprint - Function that prints numbers
 * @c: Argument to the function
 */


void _digitprint(int c)
{
	if (c < 0)
	{
		_putchar('-');
		c = -1 * c;
	}
	if (c / 10)
	{
		_digitprint(c / 10);
	}
	_putchar((c % 10) + '0');
}
