#include "main.h"

/**
*_isdigit - checking if a given value is a digit from 0 to 9
*
*@c: value to be checked
*
*Return: if true return 1 if not return 0
*
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
