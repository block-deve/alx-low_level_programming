#include "main.h"
/**
 * print_sign - print int sign
 *@n: int to check sign for
 *
 * Return: Always 1 if positiv 0 if null -1 if negatif.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar('0');
		return (0);
	}
}
