#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 *
 * @c: function parameter
 *
 * Return: 1 if c is a letter and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
