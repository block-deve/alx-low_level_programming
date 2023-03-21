#include "main.h"
/**
 * main - print _putchar to STDO
 *
 * Return: Always 0.
 */
int main(void)
{
	char  ch[10] = "_putchar\n";
	int i = 0;

	while (ch[i] != '\0')
	{
		_putchar(ch[i]);
		i++;
	}
	return (0);

}
