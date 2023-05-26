#include "main.h"
/**
 * print_str  - handles string conversion
 * @s: string
 * Return: number of characters printed
 */
int print_str(char *s)
{
	int i;
	char *str;

	str = va_arg(s, char *);
	if (!str)
	{
		str = "(null)";
	}
	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
