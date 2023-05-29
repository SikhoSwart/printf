#include "main.h"
/**
 * print_binary - convert unsigned int to binary
 * @b: unsigned int
 * Return: number of characters printed
 */
int print_binary(unsigned int b)
{
	return (print_base(b, "01"));
}
