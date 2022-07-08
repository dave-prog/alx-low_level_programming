#include "main.h"

/**
 * print_numbers - prints the number 0 to 9
 * void
 * Return: void
 */

void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
