#include "main.h"

/**
 * _isupper - Checks for uppercas characters
 *
 * @c: function parameter
 * Return: 1 if c is upper and 0 if c is otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
