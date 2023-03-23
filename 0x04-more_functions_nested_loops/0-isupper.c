#include "main.h"

/**
 *_isupper - check if an alphabet is uper case.
 *
 *@c: value  to check
 * Return: 1 if true otherwise return 0.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
