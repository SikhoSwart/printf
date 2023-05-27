#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>

int _putchar(char c);
int print_format(char format, va_list args);
int _printf(const char *format, ...);
int print_perc(void);
int print_str(va_list s);
int print_char(va_list c);
#endif
