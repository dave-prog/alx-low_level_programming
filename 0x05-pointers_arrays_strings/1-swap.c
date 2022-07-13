#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: integer to be swapped
 * @b: integer to be swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
