#include "main.h"
/**
 * puts_half - prints half string
 *
 * @str: char to check
 *
 * Return: 0 is success
 */

void puts_half(char *str)
{
	int i = 0, n;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 != '0')
	{
		n = (i - 1) / 2;
	}
	else
	{
		n = i / 2;
	}
	n++;
	for (i = n; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');


}
