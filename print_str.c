#include "main.h"
/**
 * print_str  - handles string conversion
 * @s: string
 * Return: number of characters printed
 */
int print_str(char *s)
{
	int i, len;

	len = _strlen(s);
	if (!s)
	{
		s = "(null)";
		for (i = 0; i < len; i++)
		{
			_putchar(s[i]);
		}
		return (len);
	}
	i = 0;
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (len);
}
