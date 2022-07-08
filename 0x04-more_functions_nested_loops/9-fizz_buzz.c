#include "main.h"
#include <stdio.h>

/**
 * main - fizzbuzz
 * void
 * Return - 0
 */

int main(void)
{
	char a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("\n");

	return (0);
}
