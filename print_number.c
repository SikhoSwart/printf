#include "main.h"

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
	length += print_unumber(num);
	return (length);
}
