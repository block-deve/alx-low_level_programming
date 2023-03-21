#include "main.h"
/**
 * print_last_digit - Computes the last digit of given number
 * @i: The integer to be computed.
 *
 * Return: The last digit of the integer.
 */
int print_last_digit(int i)
{
	int last_digit = i % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
		_putchar(last_digit + '0');
	}
	return (last_digit);
}
