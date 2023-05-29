#include "main.h"

/**
 * print_hex - print an unsigned integer to hexadecimal
 * @n: unsigned int
 * @is_upper: use upper or lower chars
 * Return: digits count
 */
int print_hex(unsigned int n, int is_upper)
{
	char *base;

	if (is_upper)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";

	return (print_base(n, base));
}
