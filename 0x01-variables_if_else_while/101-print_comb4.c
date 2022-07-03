#include <stdio.h>

/**
 * main - Print possible digit combination in hundreds
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int hundred;
	int tens;
	int unit;

	for (hundred = 0; hundred < 8; hundred++)
	{
		for (tens = hundred + 1; tens < 9; tens++)
		{
			for (unit = tens + 1; unit <= 9; unit++)
			{
				putchar(hundred + '0');
				putchar(tens + '0');
				putchar(unit + '0');

				if (hundred < 7 || tens < 8 || unit < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
