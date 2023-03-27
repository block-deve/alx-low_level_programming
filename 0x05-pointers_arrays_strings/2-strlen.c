#include "main.h"
/**
*_strlen - function that returns the length of a string.
*
*@s: a variable pionter to first adress
*
*Return: int value of string length
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
