#include "main.h"

/**
 * print_non_printable_str  - handles non printble string conversion
 * @str: string
 * Return: number of characters printed
 */
int print_non_printable_str(const char *str)
{
	char c;
	int i;
	int length;
	unsigned int value;

	length = 0;
	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 32 && c < 127)
			length += (_putchar(c));
		else
		{
			value = (unsigned int)c;
			length += print_str("\\x");
			if (c <= 15)
				length += _putchar('0');

			length += print_base(value, "0123456789ABCDEF");
		}
		i++;
	}
	return (length);
}
