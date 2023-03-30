#include "main.h"
/**
* _strcat - function appends the src string to the dest string.
*
*@src: array pointer
*@dest: array pionter
*
*Return: pointer to a string type char
*/

char *_strcat(char *dest, char *src)
{
	char *r = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (r);
}
