#include "main.h"
/**
*rev_string - function that reverses a string.
*
*@s: a variable pionter to first adress
*
*Return:nohing void
*/

void rev_string(char *s)
{
	int len = 0, st, end;
	char rev;

	while (s[len] != '\0')
	{
		len++;
	}
	st = len - 1;

	for (end = 0; st >= 0 && end < st; st--, end++)
	{
		rev = s[end];
		s[end] = s[st];
		s[st] = rev;
	}
}
