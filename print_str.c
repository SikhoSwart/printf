#include "main.h"
/**
 * print_str  - handles string conversion
 * @s: string
 * Return: number of characters printed
 */
int print_str(char *s)
{
	int i;

	i = 0;
	if (!s)
	{
		s = "(null)";
		while (s[i])
		{
			_putchar(s[i]);
		}
		return (i);
	}
	i = 0;
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (len);
}
