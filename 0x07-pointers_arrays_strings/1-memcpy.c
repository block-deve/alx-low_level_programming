#include "main.h"
/**
*_memcpy - function that copies memory area.
*
*@dest: pointer
*@src: pointer
*@n: int
*
*Return: a pointer
*
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
