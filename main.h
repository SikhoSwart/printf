#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>

int _putchar(char c);

int _printf(const char *format, ...);

int print_format(char format, va_list args);

int print_unumber(unsigned int n);

int print_number(int n);

int print_base(unsigned long n, const char *base);

int print_hex(unsigned int n, int is_upper);

int print_octal(unsigned int n);

int print_non_printable_str(const char *str);

int print_address(const void *p);

int print_perc(void);
int print_str(const char *s);
int print_char(char c);

#endif
