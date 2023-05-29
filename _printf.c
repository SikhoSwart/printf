#include "main.h"

/**
 * _printf - formatted output conversion
 *@format: how subsequent arguments are converted for output
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i;
	int count;

	if (format == NULL)
		return (-1);

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == '\0')
			i++;
		else if (format[i] == '%')
		{
			count += print_format(format[i + 1], args);
			i += 2;
		}
		else
		{
			count += _putchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return (count);
}
