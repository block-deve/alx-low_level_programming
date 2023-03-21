#include "main.h"
/**
 *_islower - check a char if lower case.
 *
 * Return: Always 0 or 1
 *@c: ASCCI value to check
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');
}
