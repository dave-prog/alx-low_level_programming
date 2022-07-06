#include "main.h"

/**
 *  print_alphabet_x10 - prints the alphabet in lower case 10 times
 *
 *  Return: void.
 */

void print_alphabet_x10(void)
{
	char alpha;
	int times;

	times = 0;

	while (times <= 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		times++;
	}
}
