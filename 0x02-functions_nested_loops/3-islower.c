#include "main.h"

/**
 * _islower - checks for lowercase characters
 *
 * @c: accepts arguement used to check if alphabet is in lowercase
 *
 * Return: 1 if c is lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
