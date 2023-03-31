#include "main.h"
/**
*_strcmp - a function that compares two strings
*
*@s1: char pointer nbr 1 string array
*@s2: char pointer nbr 2 string array
*
*Return: int number of differences in the string
*/

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2 && *s1 - *s2 == 0)
	{
		return (0);
	}
	else
		return (*s1 - *s2);
}
