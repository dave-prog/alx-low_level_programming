#include "main.h"

/**
 * factorial - return a factorial
 * @n: number parameter
 *
 * Return: -1 if factorial is < 0, 1 if factorial = 0 and n*factorial(n-1)
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}
