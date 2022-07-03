#include <stdio.h>
/**
 * main - Print number combinations
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_tens;
	int first_unit;
	int second_t;
	int second_u;

	for (first_tens = 0; first_tens < 9; first_tens++)
	{
		for (first_unit = first_tens = 1; first_unit <= 9; first_unit++)
		{
			for (second_t = 0; second_t < 9; second_t++)
			{
				for (second_u = first_unit + 1; second_u <= 9; second_u++)
				{
					putchar(first_tens + '0');
					putchar(first_unit + '0');
					putchar(' ');
					putchar(second_t + '0');
					putchar(second_u + '0');

					if (first_tens <= 9 || first_unit < 9 && second_t <= 9 || second_u <= 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
