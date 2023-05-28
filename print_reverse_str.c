#include "main.h"

/**
 * print_reverse_str  - handles reverse string conversion
 * @str: string
 * Return: number of characters printed
 */
int print_reverse_str(const char *str)
{
	int length;
	int i;

	if (str == NULL)
		return (print_str("(lin)"));
	i = _strlen(str) - 1;
	while (i >= 0)
	{
		length += _putchar(str[i]);
		i--;
	}
	return (length);
}
