#include "main.h"
/**
 * print_to_98 - printing numbers from n until 97
 * @n: start number
 * Return: Always 0.
 */
void print_to_98(int n)
{
	while (n <= 98 && n > 0)
	{
		_putchar(n + '0');
		_putchar(",");
		_putchar(" ");
	}
	n++
}
