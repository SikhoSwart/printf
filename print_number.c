#include "main.h"

/**
 * putunbr - print an unsigned integer
 * @n: unsigned int
 * Return: digits count
 */
int putunbr(unsigned int n)
{
	int length;

	length = 0;
	if (n >= 10)
		length += putunbr(n / 10);
	return (length + _putchar((n % 10) + '0'));
}

/**
 * print_number - print an integer
 * @n: int
 * Return: number length
 */
int print_number(int n)
{
	unsigned int num;
	int length;

	length = 0;
	if (n < 0)
		num = -n;
	else
		num = n;
	if (n < 0)
		length += _putchar('-');
	length += putunbr(num);
	return (length);
}
