#include "main.h"

/**
 * _printf - formatted printing
 * @format: the format for printing
 *
 * Description: prints argument according to format
 * Return: number of chars printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int (*f)(va_list ap);
	const char *p;
	int n;

	p = format;

	va_start(ap, format);

	if (!p || (p[0] == '%' && !p[1]))
		return (-1);
	n = 0;

	for (; *p; p++)
	{
		if (*p != '%')
		{
			n += _putchar(*p);
			continue;
		}

		p++;
		f = get_printer(*p);

		n += f ? f(ap) : _printf("%%%c", *p);
	}

	va_end(ap);

	return (n - 1);
}

