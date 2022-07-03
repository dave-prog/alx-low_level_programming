#include <stdio.h>
/**
 * main - Print number combinations
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_t;
	int first_u;
	int second_t;
	int second_u;

	for (first_t = 0; first_t <= 9; first_t++)
	{
		for (first_u = 0; first_u <= 9; first_u++)
		{
			for (second_t = 0; second_t <= 9; second_t++)
			{
				for (second_u = first_u + 1; second_u <= 9; second_u++)
				{
					putchar(first_t + '0');
					putchar(first_u + '0');
					putchar(' ');
					putchar(second_t + '0');
					putchar(second_u + '0');

					if ((first_t <= 9 && first_u < 9) && (second_t <= 9 && second_u <= 9))
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
