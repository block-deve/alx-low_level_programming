#include "main.h"

/**
*print_most_numbers - printing digits from 0 to 9 without 2,4
*
*Return: 0
*
*/

void print_most_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
