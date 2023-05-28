#include "main.h"
/**
 * print_binary - convert unsigned int to binary
 * @b: unsigned int to be converted
 * Return: number of characters printed
 */
int print_binary(unsigned int b)
{
	int num = 0;
	unsigned int i, j, len, pow;

	if (b != 0)
	{
		len = 0;
		j = b;
		while (j != 0)
		{
			j = j / 2;
			len++;
		}
		pow = 1;
		for (i = 1; i <= len; i++)
		{
			pow = pow * 2;
		}
		for (i = 1; i <= len; i++)
		{
			l = b / pow;
			_putchar(l + '0');
			pow = pow / 2;
			num++;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (num);
}
