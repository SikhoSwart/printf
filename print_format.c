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
		count += print_char((char)va_arg(args, int));
	else if (format == 's')
		count += print_str(va_arg(args, const char *));
	else if (format == 'S')
		count += print_non_printable_str(va_arg(args, const char *));
	else if (format == 'd' || format == 'i')
		count += print_number(va_arg(args, int));
	else if (format == 'u')
		count += print_unumber(va_arg(args, int));
	else if (format == 'x' || format == 'X')
		count += print_hex(va_arg(args, unsigned int), format == 'X');
	else if (format == 'o')
		count += print_octal(va_arg(args, unsigned int));
	else if (format == 'p')
		count += print_address(va_arg(args, const void *));
	else if (format == '%')
		count += print_perc();
	else
	{
		count += print_char('%');
		count += print_char(format);
	}
	return (count);
}
