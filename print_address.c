#include "main.h"

/**
 * print_address  - handles address conversion
 * @p: address
 * Return: number of characters printed
 */
int print_address(const void *p)
{
	int length;

	if (p == NULL)
		return (print_str("(nil)"));
	length = print_str("0x");
	return (length + print_base((unsigned long)p, "0123456789abcdef"));
}
