#include "main.h"
/**
*_strncpy - a function that copies a string
*
*@dest: pointer to an array
*@src: pionter to an array
*@n: int
*
*Return: a char pointer to the dest string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
