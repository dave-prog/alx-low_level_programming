#include "main.h"

/**
 * _checker - checks the square root of a given number
 * @a: integer parameter
 * @b: integer parameter
 *
 * Return: -1 if it is not a natural root and _checker
 */

int _checker(int a, int b)
{
	if (b == 0 || b == 1)
	{
		return (b);
	}

	else if ((a * a) < b)
	{
		return (_checker(a + 1, b));
	}

	else if ((a * a) == b)
	{
		return (a);
	}
	return (-1);
}

/**
 *_sqrt_recursion - evaluates a square root
 *@n: interger to be calculated
 *Return: The square root of an integer
 */

int _sqrt_recursion(int n)
{
	int x;

	x = 0;
	if (x < 0)
	{
		return (-1);
	}

	else
	{
		return (_checker(x, n));
	}

}
