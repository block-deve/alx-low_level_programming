#include "main.h"
/**
*string_toupper - all changes lowercase letters of a string to uppercase.
*
*@s: pointer to array
*Return: char low to up string
*/

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
