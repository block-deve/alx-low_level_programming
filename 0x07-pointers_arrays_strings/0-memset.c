#include "main.h"
/**
*_memset - unction that fills memory with a constant byte.
*
*@s: point to an array of char
*@b: a char
*@n: int
*
*Return: char
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*s[i] = b;
	}
}