#include "main.h"

/**
 * print_format - handle each format
 *@format: how subsequent arguments are converted for output
 *@args: arguments to print
 * Return: the number of characters printed
 */
int print_format(char format, va_list args)
{
	int count;

	count = 0;
	if (format == 'c')
		count += _print_char((char)va_arg(args, int));
	else if (format == 's')
		count += print_str(va_arg(args, const char *));
	else if (format == 'd' || format == 'i')
		count += print_number(va_arg(args, int));
	else if (format == '%')
		count += print_perc();
	return (count);
}
