#include "main.h"
#include <stdarg.h>
/**
 * print_char - handles character conversion
 * @c: character
 * Return: 1
 */
int print_char(va_list c)
{
	char ch;

	ch = va_arg(c, int);
	_putchar(ch);
	return (1);
}
