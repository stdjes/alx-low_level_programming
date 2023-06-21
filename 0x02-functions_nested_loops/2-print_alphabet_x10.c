#include "main.h"

/**
 * print_alphabet_x10 - function to print the alpahbet 10 times
 */
void print_alphabet_x10(void)
{
	int c = 0;

	while (c < 10)
	{
		int alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		c++;
	}
}
