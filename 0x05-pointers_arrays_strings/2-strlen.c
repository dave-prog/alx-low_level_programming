#include "main.h"

/**
 * _strlen - returns the length of a string
 *@s: string length to be printed
 *
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
