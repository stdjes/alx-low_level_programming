#include "main.h"

/**
 * print_numbers - prints digits from 0 - 9, with a new line
 */
void print_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		_putchar(n + '0');
		n++;

	}
	_putchar('\n');
}
