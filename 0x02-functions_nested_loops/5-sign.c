#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: function parameter
 * Return: 1 if n > 0, 0 if n = 0, n < -1.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
