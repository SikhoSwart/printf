#include "main.h"

/**
 * _strlen - print an unsigned integer to hexadecimal
 * @str: string
 * Return: string length
 */
int _strlen(const char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

/**
 * print_base_digits - print an unsigned integer to base
 * @n: unsigned int
 * @base: string base
 * @base_length: base string length
 * Return: digits count
 */
int print_base_digits(unsigned long n, const char *base,
					  unsigned int base_length)
{
	char digit;
	int length;

	length = 0;

	if (n >= base_length)
		length += print_base_digits(n / base_length, base, base_length);

	digit = base[n % base_length];
	return (length + _putchar(digit));
}

/**
 * print_base - print an unsigned integer to base
 * @n: unsigned long
 * @base: string base
 * Return: digits count
 */
int print_base(unsigned long n, const char *base)
{
	int base_length;

	base_length = _strlen(base);
	return (print_base_digits(n, base, base_length));
}
