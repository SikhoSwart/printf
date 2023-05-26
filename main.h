#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>

int _putchar(char c);

int _printf(const char *format, ...);

int print_format(char format, va_list args);

void print_number(int n);

#endif
