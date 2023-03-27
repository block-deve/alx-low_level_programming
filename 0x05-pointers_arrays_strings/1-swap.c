#include "main.h"
/**
*swap_int - function that swaps the values of two integers
*
*@a: int 0
*
*@b: int 1
*Return: void
*/

void swap_int(int *a, int *b)
{
	int i;
	int j;

	i = *a;
	j = *b;
	*a = j;
	*b = i;
}
