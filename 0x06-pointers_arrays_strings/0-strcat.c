#include "main.h"

/**
 * *_strcat - concatenates strings
 *
 * @dest: string to be appended to
 * @src: string to append
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (src[j] != '\0')
	{
		j++;
	}

	while (dest[i] != '\0')
	{
		i++;
		j++;
	}
	dest = '\0';

	return (dest);
}
