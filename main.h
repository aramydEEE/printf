#ifndef _MAIN_H
#define _MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct printer - template for format specifier
 * and pionter function pair
 * @c: format specifier
 * @f: pointer to printing function
 *
 * Description: template for format specifier
 */
typedef struct printer
{
	char c;
	int (*f)(va_list ap);
} printer;

int _printf(const char *format, ...);

int (*get_printer(char c))(va_list ap);

int _putchar(char c);
int _puts(char *c);
void _digitprint(int c);
int number_digit(int a);

int print_c(va_list ap);
int print_s(va_list ap);
int print_percent(va_list ap);
int print_d(va_list ap);
int print_u(va_list ap);

#endif /* _MAIN_H */

