#ifndef __main
#define __main
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet - writes lower case alphabet to stdo
 *
 *
 * Return: void
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
	char ch[28] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (ch[i] != '\0')
	{
		_putchar(ch[i]);
		i++;
	}

}

/**
 * print_alphabet_x10 - writes lower case alphabet 10X to stdo
 *
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}

#endif
