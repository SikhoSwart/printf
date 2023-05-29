#include "main.h"

/**
 * print_octal - print an unsigned integer to octal
 * @n: unsigned int
 * Return: digits count
 */
int print_octal(unsigned int n)
{
	return (print_base(n, "01234567"));
}
