#include "main.h"
/**
*print_line - printing underscors in count of given int
*@n: given value to print _
*Return: 0
*
*/

void print_line(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
