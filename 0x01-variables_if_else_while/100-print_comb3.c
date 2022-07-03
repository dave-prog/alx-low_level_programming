#include <stdio.h>

/**
 * main - Print all possible different combination of two digits
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{

	int tens;
	int unit;

	for (tens = 0; tens < 9; tens++)
	{
		for (unit = tens + 1; unit <= 9; unit++)
		{
			putchar(tens + '0');
			putchar(unit + '0');

			if (tens != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
