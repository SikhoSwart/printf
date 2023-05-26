#include "main.h"
/**
 * print_char - handles character conversion
 * @c: character
 * Return: 1
 */
int print_char(int c)
{i
	char ch;

	ch = va_arg(c, int);
	_putchar(ch);
	return (1);
}
