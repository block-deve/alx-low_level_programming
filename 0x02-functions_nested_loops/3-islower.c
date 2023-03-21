#include <ctype.h>
#include "main.h"
/**
 *_islower - check a char if lower case.
 *
 * Return: Always 0.
 *@c: The character to print
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
