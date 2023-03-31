#include "main.h"
/**
*reverse_array - function that reverse order of an array of int
*
*@a: pointer to the array
*@n: size of the array
*
*Return: viod nothing
*/

void reverse_array(int *a, int n)
{
	int i, s, t;

	t = (n - 1) / 2;
	for (i = 0; i < t; i++)
	{
	s = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = s;
	}

}
