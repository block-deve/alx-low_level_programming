#include "main.h"
/**
 * _isalpha - check if an assci value is an alphabaet
 * @c: The value to check
 *
 * Return: On success 1. or 0
 *
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
