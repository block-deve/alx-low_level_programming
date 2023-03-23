#include "main.h"

/**
* more_numbers - print numbers from 0 to 14
*
*Return: nothing
*/

void more_numbers(void)
{
	int i = 0;
	char j, x;

	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			x = j;
			if (j > 9)
			{
				_putchar('1');
				x = j % 10;
			}
			_putchar('0' + x);
		}

	_putchar('\n');
	i++;
}	}
