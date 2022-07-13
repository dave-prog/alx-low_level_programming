#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int MAX = 0;
	int i;

	while (*s != '\0')
	{
		MAX++;
		s++;
	}

	for (i = MAX; i > 0; i--)
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
