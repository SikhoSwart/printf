#include "main.h"

/**
 * print_unumber - print an unsigned integer
 * @n: unsigned int
 * Return: digits count
 */
int print_unumber(unsigned int n)
{
	int length;

	length = 0;
	if (n >= 10)
		length += print_unumber(n / 10);
	return (length + _putchar((n % 10) + '0'));
}
