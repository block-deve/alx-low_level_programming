#include "main.h"
/**
*_strchr - function that locates a character in a string.
*
*@s: pointer
*@c: a char
*
*Return: a pointer
*
*/

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return ('\0');
}
