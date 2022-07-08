#include "main.h"

/**
 * _isdigit - checks for digits from 0 to 9
 * @c: function parameter
 * Return: 1 if c is a digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
