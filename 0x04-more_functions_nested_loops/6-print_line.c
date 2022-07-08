#include "main.h"

/** 
 * print_line - print line
 * @n: function parameter
 * Return: void
 */

void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
