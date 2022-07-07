#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: last digit number
 * Return: 0.
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (l < 0)
	{
		_putchar(-l + '0');
		return (-l);
	}
	else
	{
		_putchar(l + '0');
		return (l);
	}
}
