#include "main.h"

/**
 * _puts - prints a string
 * @s: the string to print
 *
 * Description: prints string
 * Return: number of characters printed
 */
int _puts(char *s)
{
	int i;

	i = 0;

	while (*s)
	{
		_putchar(*s);
		s++;
		i++;
	}

	return (i);
}

