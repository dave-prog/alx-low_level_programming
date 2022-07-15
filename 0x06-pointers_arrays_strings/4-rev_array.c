#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: array name
 * @n: determines the content of the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int arr;

	while (i < n--)
	{
		arr = a[i];
		a[i] = a[n];
		a[n] = arr;

		i++;
	}
}
