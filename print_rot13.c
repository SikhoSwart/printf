#include "main.h"
/**
 * print_rot13 - prints the rot13'ed string
 * @R: string to rot13
 * Return: number of characters printed
 */
int print_rot13(const char *R)
{
	int i, j, num;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	num = 0;
	if (!R)
	{
		R = "(ahyy)";
	}
	for (i = 0; R[i] != '\0'; i++)
	{
		for (j = 0; in[j] != '\0'; j++)
		{
			if (R[i] == in[j])
			{
				_putchar(out[j]);
				num++;
				break;
			}
		}
		if (!in[j])
		{
			_putchar(R[i]);
		}
	}
	return (num);
}
